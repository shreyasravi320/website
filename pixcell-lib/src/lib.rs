use wasm_bindgen::prelude::*;

use std::vec::Vec;
use std::collections::HashSet;
use rand::Rng;

mod cell;
use cell::Cell;
use cell::Direction;
use cell::as_dir;
use cell::DELTA_R;
use cell::DELTA_C;
use cell::OPP_DIR;

const WHITE: u64 = 0xffffff;

const STEPS_PER_GEN: u64 = 5;
const NEW_GEN_SIZE: u64 = 2000;
const MAX_OFFSPRING: u64 = 4;
const MAX_AGE: u64 = 31;
const SIGMOID_FACTOR: f64 = 7.0;
const FITNESS_THRESH: f64 = 0.92;
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
    survivors: HashSet<(u64, u64)>,
    img_data: Vec<Vec<u64>>
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
        let mut img: Vec<Vec<u64>> = vec![vec![0; cols]; rows];

        for i in 0..rows {
            for j in 0..cols {
                let idx: usize = i * cols + 3 * j;
                img[i][j] = ((data[idx] as u64) << 16) | ((data[idx + 1] as u64) << 8) | (data[idx + 2] as u64);
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
        }

        self.clear_vis();
    }

    fn new_gen(&mut self) {
        let mut rng = rand::thread_rng();
        let mut row: usize = 0;
        let mut col: usize = 0;
        let mut color: u64 = 0;
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

            log("Inside loop 1\n");
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
            log("Inside loop 2\n");
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
}
