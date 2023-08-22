use wasm_bindgen::prelude::*;

use std::vec::Vec;
use std::collections::HashSet;
use std::collections::VecDeque;
use rand::Rng;

mod cell;
use cell::Cell;
use cell::Direction;
use cell::as_dir;
use cell::DELTA_R;
use cell::DELTA_C;
use cell::OPP_DIR;

const BLACK: u32 = 0x000000;
const RED: u32 = 0xff0000;
const GREEN: u32 = 0x00ff00;
const BLUE: u32 = 0x0000ff;
const WHITE: u32 = 0xffffff;

const STEPS_PER_GEN: u64 = 5;
const NEW_GEN_SIZE: u64 = 20000;
const MAX_OFFSPRING: u64 = 4;
const MAX_AGE: u64 = 31;
const SIGMOID_FACTOR: f64 = 7.0;
const FITNESS_THRESH: f64 = 0.97;
const SEARCH_RADIUS: u64 = 1;
const MATING_RADIUS: u64 = 16;
const WEIGHT: u64 = 8;
const MUTATION_ODDS: u64 = 10000;

#[wasm_bindgen]
extern "C" {
    #[wasm_bindgen(js_namespace = console)]
    fn log(s: &str);
}

#[wasm_bindgen]
pub struct State {
    step: u64,
    generation: u64,
    background: u32,
    cells: Vec<Vec<Option<Cell>>>,
    visited: Vec<Vec<bool>>,
    survivors: HashSet<(usize, usize)>,
    img_data: Vec<Vec<u32>>
}

#[wasm_bindgen]
impl State {
    pub fn default() -> State {
        State {
            step: 0,
            generation: 0,
            background: 0,
            cells: Vec::new(),
            visited: Vec::new(),
            survivors: HashSet::new(),
            img_data: Vec::new()
        }
    }

    pub fn new(rows: usize, cols: usize, data: Vec<u8>, bg: u32) -> State {
        let mut img: Vec<Vec<u32>> = vec![vec![0; cols]; rows];

        for i in 0..rows {
            for j in 0..cols {
                let idx: usize = 3 * (i * cols + j);
                img[i][j] = ((data[idx] as u32) << 16) | ((data[idx + 1] as u32) << 8) | (data[idx + 2] as u32);
            }
        }

        State {
            step: 0,
            generation: 0,
            background: bg,
            cells: vec![vec![None; cols]; rows],
            visited: vec![vec![false; cols]; rows],
            survivors: HashSet::new(),
            img_data: img
        }
    }

    pub fn get_pixels(&self) -> Vec<u32> {
        let mut pixels: Vec<u32> = vec![0; self.cells.len() * self.cells[0].len()];

        for i in 0..self.cells.len() {
            for j in 0..self.cells[0].len() {
                if self.cells[i][j].is_some() {
                    pixels[i * self.cells[0].len() + j] = self.cells[i][j].unwrap().get_color();
                } else {
                    pixels[i * self.cells[0].len() + j] = self.background;
                }
            }
        }
        pixels
    }

    pub fn get_color(&self, row: usize, col: usize) -> u32 {
        if self.cells[row][col].is_some() {
            self.cells[row][col].unwrap().get_color()
        } else {
            self.background
        }
    }

    pub fn update(&mut self) {
        if self.generation == 2500 { return }
        self.generation += 1;
        self.new_gen();

        for step in 0..STEPS_PER_GEN {
            for i in 0..self.cells.len() {
                for j in 0..self.cells[0].len() {
                    if self.cells[i][j].is_some() && !self.visited[i][j] {
                        self.move_cell(i, j);
                    }
                }
            }
            self.clear_vis();
        }
        self.kill_weak();
        self.clear_vis();
        self.create_offspring();
        self.clear_vis();
    }

    fn new_gen(&mut self) {
        let mut rng = rand::thread_rng();
        let mut row: usize = 0;
        let mut col: usize = 0;
        let mut color: u32 = 0;
        let mut dir: Direction = Direction::NoDir;
        let mut trav_time: u64 = 0;
        let mut will_rev: bool = false;
        let mut rev_time: u64 = 0;

        for i in 0..NEW_GEN_SIZE {
            row = rng.gen_range(0..self.cells.len());
            col = rng.gen_range(0..self.cells[0].len());

            if self.cells[row][col].is_none() {
                if (i as f64) < 2000.0 / (1.0 + (-0.008 * ((self.generation as f64) - 1500.0)).exp()) {
                    color = self.img_data[row][col];
                } else {
                    color = rng.gen_range(0..=WHITE);
                }
                dir = as_dir(rng.gen_range(0..9));
                trav_time = rng.gen_range(0..STEPS_PER_GEN);
                will_rev = rng.gen_range(0..2) == 1;
                if will_rev {
                    rev_time = rng.gen_range(0..STEPS_PER_GEN);
                }

                self.cells[row][col] = Some(Cell::new(color, dir, trav_time, will_rev, rev_time));
            }
        }
    }

    fn is_in_bounds(&mut self, row: usize, col: usize) -> bool {
        return row < self.cells.len() && col < self.cells[0].len();
    }

    fn get_avail_dir(&mut self, row: usize, col: usize) -> Direction {
        let mut dirs: Vec<Direction> = Vec::new();
        let mut new_r: usize = 0;
        let mut new_c: usize = 0;

        for i in 1..9 {
            new_r = row + (DELTA_R[i] as usize);
            new_c = col + (DELTA_C[i] as usize);
            if self.is_in_bounds(new_r, new_c) && self.cells[new_r][new_c].is_none() {
                dirs.push(as_dir(i as u64));
            }
        }

        if dirs.len() == 0 { Direction::NoDir } else { dirs[0] }
    }

    fn move_cell(&mut self, mut row: usize, mut col: usize) {
        let mut dir: Direction;
        let mut path: Vec<Cell> = Vec::new();

        while self.is_in_bounds(row, col) 
            && self.cells[row][col].is_some()
            && self.cells[row][col].unwrap().get_dir() != Direction::NoDir
            && self.cells[row][col].unwrap().get_trav_time() > self.step 
            && !self.visited[row][col] {

            if self.cells[row][col].unwrap().will_rev() {
                if self.cells[row][col].unwrap().get_rev_time() == self.step {
                    self.cells[row][col].unwrap().set_dir(OPP_DIR[self.cells[row][col].unwrap().get_dir().as_usize()]);
                }
            }

            dir = self.cells[row][col].unwrap().get_dir();
            path.push(self.cells[row][col].unwrap());

            row += DELTA_R[dir.as_usize()] as usize;
            col += DELTA_C[dir.as_usize()] as usize;

            if self.is_in_bounds(row, col) {
                self.visited[row][col] = true;
            }
        }

        while let Some(cell) = path.pop() {
            if self.is_in_bounds(row, col) && self.cells[row][col].is_none() {
                self.cells[row][col] = Some(cell);
                row -= DELTA_R[cell.get_dir().as_usize()] as usize;
                col -= DELTA_C[cell.get_dir().as_usize()] as usize;
                self.cells[row][col] = None;
            } else if self.is_in_bounds(row, col) {
                row -= DELTA_R[cell.get_dir().as_usize()] as usize;
                col -= DELTA_C[cell.get_dir().as_usize()] as usize;
                let next: Direction = self.get_avail_dir(row, col);

                if next == Direction::NoDir {
                    return;
                } else {
                    self.cells[row][col] = None;
                    self.cells[row + DELTA_R[next.as_usize()] as usize][col + DELTA_C[next.as_usize()] as usize] = Some(cell);
                }
            }
        }
    }

    fn clear_vis(&mut self) {
        self.visited = vec![vec![false; self.visited[0].len()]; self.visited.len()];
    }

    fn kill_weak(&mut self) {
        for i in 0..self.cells.len() {
            for j in 0..self.cells[0].len() {
                if self.cells[i][j].is_some() {
                    if self.cells[i][j].unwrap().get_age() >= MAX_AGE {
                        self.cells[i][j] = None;
                    } else {
                        let score: f64 = self.score_cell(i, j);
                        if score < FITNESS_THRESH {
                            self.cells[i][j] = None;
                        } else {
                            self.cells[i][j].unwrap().inc_age();
                            self.cells[i][j].unwrap().set_fitness(score);
                            self.survivors.insert((i, j));
                        }
                    }
                }
            }
        }
    }

    fn score_cell(&mut self, i: usize, j: usize) -> f64 {
        sigmoid(compute_color_dist(self.cells[i][j].unwrap().get_color(), self.img_data[i][j]))
    }

    fn create_offspring(&mut self) {
        let mut rng = rand::thread_rng();
        while !self.survivors.is_empty() {
            let Some(curr) = self.survivors.iter().next().cloned() else { return };
            self.survivors.remove(&curr);

            if !self.survivors.is_empty() {
                if let Some(mate) = self.find_partner(curr) {
                    let num_off: u64 = rng.gen_range(1..=MAX_OFFSPRING);
                    for i in 0..num_off {
                        self.breed(curr, mate, rng.gen_range(0..MUTATION_ODDS) == 0);
                    }
                    self.survivors.remove(&mate);
                }
            }
        }
    }

    fn find_partner(&mut self, spouse: (usize, usize)) -> Option<(usize, usize)> {
        let mut q: VecDeque<(usize, usize)> = VecDeque::new();
        q.push_back(spouse);

        let mut r: usize = 0;
        let mut c: usize = 0;
        let mut count: u64 = 0;

        while let Some(spouse) = q.pop_front() {
            count += 1;
            self.visited[spouse.0][spouse.1] = true;

            if self.survivors.get(&spouse).is_some() {
                return Some(spouse);
            }

            if count == MATING_RADIUS {
                return None;
            }

            for d in 1..9 {
                r = spouse.0 + DELTA_R[d] as usize;
                c = spouse.1 + DELTA_C[d] as usize;

                if self.is_in_bounds(r, c) && !self.visited[r][c] {
                    q.push_back((r, c));
                }
            }
        }

        None
    }

    fn bind(&mut self, row: &mut usize, col: &mut usize) {
        *row = (*row).min(self.cells.len() - 1);
        *col = (*col).min(self.cells[0].len() - 1);
    }

    fn breed(&mut self, mother: (usize, usize), father: (usize, usize), mutate: bool) {
        let mut rng = rand::thread_rng();
        let m_cell: Cell = self.cells[mother.0][mother.1].unwrap();
        let f_cell: Cell = self.cells[father.0][father.1].unwrap();

        let m_weight: u64 = rng.gen_range(1..WEIGHT);
        let f_weight: u64 = WEIGHT - m_weight;

        let mut row: usize = ((m_weight * mother.0 as u64 + f_weight * father.0 as u64) / WEIGHT) as usize;
        let mut col: usize = ((m_weight * mother.1 as u64 + f_weight * father.1 as u64) / WEIGHT) as usize;
        let dir: Direction;

        if self.is_in_bounds(row, col) && self.cells[row][col].is_some() {
            dir = self.get_avail_dir(row, col);
            row += DELTA_R[dir.as_usize()] as usize;
            col += DELTA_C[dir.as_usize()] as usize;
            self.bind(&mut row, &mut col);
        }

        self.cells[row][col] = Some(Cell::new(
            if mutate {
                rng.gen_range(BLACK..=WHITE)
            } else {
                weighted_avg_color(m_cell.get_color(), m_weight as u32, f_cell.get_color(), f_weight as u32)
            },
            if mutate {
                self.get_avail_dir(row, col)
            } else {
                if rng.gen_range(0..WEIGHT) < m_weight { m_cell.get_dir() } else { f_cell.get_dir() }
            },
            if mutate {
                rng.gen_range(0..STEPS_PER_GEN)
            } else {
                if rng.gen_range(0..WEIGHT) < m_weight { m_cell.get_trav_time() } else { f_cell.get_trav_time() }
            },
            if mutate {
                rng.gen_range(0..2) == 1
            } else {
                if rng.gen_range(0..WEIGHT) < m_weight { m_cell.will_rev() } else { f_cell.will_rev() }
            },
            if mutate {
                rng.gen_range(0..STEPS_PER_GEN)
            } else {
                if rng.gen_range(0..WEIGHT) < m_weight { m_cell.get_rev_time() } else { f_cell.get_rev_time() }
            }
        ));

        self.visited[row][col] = true;
    }
}

fn weighted_avg_color(c1: u32, w1: u32, c2: u32, w2: u32) -> u32 {
    (w1 * c1 + w2 * c2) / (w1 + w2)
}

fn compute_color_dist(c1: u32, c2: u32) -> f64 {
    (((((c1 & RED) >> 16) - ((c2 & RED) >> 16)) as f64).powf(2.0) +
    ((((c1 & GREEN) >> 8) - ((c2 & GREEN) >> 8)) as f64).powf(2.0) +
    (((c1 & BLUE) - (c2 & BLUE)) as f64).powf(2.0)).sqrt()
}

fn sigmoid(x: f64) -> f64 {
    1.0 / (1.0 + (SIGMOID_FACTOR * (x - 0.5)).exp())
}
