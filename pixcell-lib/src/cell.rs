const COLOR_WIDTH: u64 = 24;
const COLOR_LSB: u64 = 40;
const COLOR_MASK: u64 = (((1 as u64) << COLOR_WIDTH) - 1) << COLOR_LSB;

const HAS_DIR_WIDTH: u64 = 1;
const HAS_DIR_LSB: u64 = 39;
const HAS_DIR_MASK: u64 = (((1 as u64) << HAS_DIR_WIDTH) - 1) << HAS_DIR_LSB;

const DIR_WIDTH: u64 = 3;
const DIR_LSB: u64 = 36;
const DIR_MASK: u64 = (((1 as u64) << DIR_WIDTH) - 1) << DIR_LSB;

const TRAV_TIME_WIDTH: u64 = 15;
const TRAV_TIME_LSB: u64 = 21;
const TRAV_TIME_MASK: u64 = (((1 as u64) << TRAV_TIME_WIDTH) - 1) << TRAV_TIME_LSB;

const WILL_REV_WIDTH: u64 = 1;
const WILL_REV_LSB: u64 = 20;
const WILL_REV_MASK: u64 = (((1 as u64) << WILL_REV_WIDTH) - 1) << WILL_REV_LSB;

const REV_TIME_WIDTH: u64 = 15;
const REV_TIME_LSB: u64 = 5;
const REV_TIME_MASK: u64 = (((1 as u64) << REV_TIME_WIDTH) - 1) << REV_TIME_LSB;

const AGE_WIDTH: u64 = 5;
const AGE_LSB: u64 = 0;
const AGE_MASK: u64 = (((1 as u64) << AGE_WIDTH) - 1) << AGE_LSB;

#[derive(PartialEq)]
#[derive(Clone)]
#[derive(Copy)]
pub enum Direction {
    NoDir,
    Up,
    UpRight,
    Right,
    DownRight,
    Down,
    DownLeft,
    Left,
    UpLeft,
    NumDirs
}

impl Direction {
    pub fn as_u64(&self) -> u64 {
        match *self {
            Direction::NoDir => 0,
            Direction::Up => 1,
            Direction::UpRight => 2,
            Direction::Right => 3,
            Direction::DownRight => 4,
            Direction::Down => 5,
            Direction::DownLeft => 6,
            Direction::Left => 7,
            Direction::UpLeft => 8,
            _ => unreachable!("Invalid direction!")
        }
    }

    pub fn as_usize(&self) -> usize {
        self.as_u64() as usize
    }
}

pub fn as_dir(val: u64) -> Direction {
    match val {
        0 => Direction::NoDir,
        1 => Direction::Up,
        2 => Direction::UpRight,
        3 => Direction::Right,
        4 => Direction::DownRight,
        5 => Direction::Down,
        6 => Direction::DownLeft,
        7 => Direction::Left,
        8 => Direction::UpLeft,
        _ => unreachable!("Invalid direction value!")
    }
}

pub const DELTA_R: [i64; 9] = [ 0, 0, 1, 1, 1, 0, -1, -1, -1 ];
pub const DELTA_C: [i64; 9] = [ 0, -1, -1, 0, 1, 1, 1, 0, -1 ];
pub const OPP_DIR: [Direction; 9] = [
    Direction::NoDir,
    Direction::Down,
    Direction::DownLeft,
    Direction::Left,
    Direction::UpLeft,
    Direction::Up,
    Direction::UpRight,
    Direction::Right,
    Direction::DownRight
];

#[derive(Clone)]
#[derive(Copy)]
pub struct Cell {
    // Genome
    // 24 bit color             1 bit direction set  3 bit direction  15 bit travel time  1 bit will reverse  15 bit reverse time  5 bit age
    // 000000000000000000000000 0                    000              00000000000000000   0                   00000000000000000    0

    genome: u64,
    fitness: f64
}

impl Cell {
    pub fn default() -> Cell {
        Self::new(0, Direction::NoDir, 0, false, 0)
    }

    pub fn new(color: u32, dir: Direction, trav_time: u64, will_rev: bool, rev_time: u64) -> Cell {
        Cell {
            genome: ((color as u64) << COLOR_LSB)
                | (if dir != Direction::NoDir { 1 as u64 } else { 0 as u64 }) << HAS_DIR_LSB
                | ((dir as u64) << DIR_LSB)
                | (trav_time << TRAV_TIME_LSB)
                | (if will_rev { 1 as u64 } else { 0 as u64 }) << WILL_REV_LSB
                | rev_time << REV_TIME_LSB,
            fitness: 0.0 as f64
        }
    }

    pub fn get_color(&self) -> u32 { ((self.genome & COLOR_MASK) >> COLOR_LSB) as u32 }

    pub fn get_dir(&self) -> Direction {
        if self.genome & HAS_DIR_MASK != 0 {
            as_dir((self.genome & HAS_DIR_MASK) >> HAS_DIR_LSB)
        } else {
            Direction::NoDir
        }
    }

    pub fn get_trav_time(&self) -> u64 { (self.genome & TRAV_TIME_MASK) >> TRAV_TIME_LSB }
    pub fn will_rev(&self) -> bool { (self.genome & WILL_REV_MASK) != 0 }
    pub fn get_rev_time(&self) -> u64 { (self.genome & REV_TIME_MASK) >> REV_TIME_LSB }
    pub fn get_age(&self) -> u64 { (self.genome & AGE_MASK) >> AGE_LSB }
    pub fn get_fitness(&self) -> f64 { self.fitness }

    pub fn set_color(&mut self, color: u64) {
        self.genome = (self.genome & !COLOR_MASK) | (color << COLOR_LSB);
    }

    pub fn set_dir(&mut self, dir: Direction) {
        if dir == Direction::NoDir {
            self.genome &= !HAS_DIR_MASK;
        } else {
            self.genome = (self.genome & !DIR_MASK) | (dir.as_u64() << DIR_LSB);
        }
    }

    pub fn set_trav_time(&mut self, trav_time: u64) {
        self.genome = (self.genome & !TRAV_TIME_MASK) | (trav_time << TRAV_TIME_LSB);
    }

    pub fn toggle_will_rev(&mut self) {
        self.genome ^= WILL_REV_MASK;
    }

    pub fn set_rev_time(&mut self, rev_time: u64) {
        self.genome = (self.genome & !REV_TIME_MASK) | (rev_time << REV_TIME_LSB);
    }

    pub fn inc_age(&mut self) {
        self.genome += 1;
    }

    pub fn set_fitness(&mut self, fit: f64) {
        self.fitness = fit;
    }
}
