// FUN_1400503d0 @ 1400503d0
// callees:
//   -> 14000c8b0 FUN_14000c8b0


undefined1 * FUN_1400503d0(undefined1 *param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_14000c8b0(param_1,param_2,0,0xffffffffffffffff);
  return param_1;
}

