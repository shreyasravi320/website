/* tslint:disable */
/* eslint-disable */
/**
*/
export class State {
  free(): void;
/**
* @returns {State}
*/
  static default(): State;
/**
* @param {number} rows
* @param {number} cols
* @param {Uint8Array} data
* @returns {State}
*/
  static new(rows: number, cols: number, data: Uint8Array): State;
/**
* @returns {Uint32Array}
*/
  get_pixels(): Uint32Array;
/**
* @param {number} row
* @param {number} col
* @returns {number}
*/
  get_color(row: number, col: number): number;
/**
*/
  update(): void;
}

export type InitInput = RequestInfo | URL | Response | BufferSource | WebAssembly.Module;

export interface InitOutput {
  readonly memory: WebAssembly.Memory;
  readonly __wbg_state_free: (a: number) => void;
  readonly state_default: () => number;
  readonly state_new: (a: number, b: number, c: number, d: number) => number;
  readonly state_get_pixels: (a: number, b: number) => void;
  readonly state_get_color: (a: number, b: number, c: number) => number;
  readonly state_update: (a: number) => void;
  readonly __wbindgen_malloc: (a: number, b: number) => number;
  readonly __wbindgen_add_to_stack_pointer: (a: number) => number;
  readonly __wbindgen_free: (a: number, b: number, c: number) => void;
  readonly __wbindgen_exn_store: (a: number) => void;
}

export type SyncInitInput = BufferSource | WebAssembly.Module;
/**
* Instantiates the given `module`, which can either be bytes or
* a precompiled `WebAssembly.Module`.
*
* @param {SyncInitInput} module
*
* @returns {InitOutput}
*/
export function initSync(module: SyncInitInput): InitOutput;

/**
* If `module_or_path` is {RequestInfo} or {URL}, makes a request and
* for everything else, calls `WebAssembly.instantiate` directly.
*
* @param {InitInput | Promise<InitInput>} module_or_path
*
* @returns {Promise<InitOutput>}
*/
export default function __wbg_init (module_or_path?: InitInput | Promise<InitInput>): Promise<InitOutput>;
