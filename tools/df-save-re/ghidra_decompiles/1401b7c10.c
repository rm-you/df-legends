// FUN_1401b7c10 @ 1401b7c10
// callees:


undefined8 * FUN_1401b7c10(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar2 = param_1 + 0x10;
  for (lVar1 = 0x32; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined2 *)puVar2 = 0x32;
    puVar2 = (undefined8 *)((longlong)puVar2 + 2);
  }
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0xffffffffffffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}

