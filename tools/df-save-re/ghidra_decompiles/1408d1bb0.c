// FUN_1408d1bb0 @ 1408d1bb0
// callees:


undefined4 * FUN_1408d1bb0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x600;
  *(undefined8 *)(param_1 + 3) = 0xffffffffffffffff;
  return param_1;
}

