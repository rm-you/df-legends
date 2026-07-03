// FUN_14000e080 @ 14000e080
// callees:
//   -> 140dfc99c memset


undefined4 * FUN_14000e080(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  memset(param_1 + 6,0,0x84);
  lVar3 = 2;
  puVar2 = (undefined8 *)(param_1 + 0x27);
  do {
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    puVar2[2] = 0xffffffffffffffff;
    puVar1 = puVar2 + 8;
    puVar2[3] = 0xffffffffffffffff;
    puVar2[4] = 0xffffffffffffffff;
    puVar2[5] = 0xffffffffffffffff;
    puVar2[6] = 0xffffffffffffffff;
    puVar2[7] = 0xffffffffffffffff;
    lVar3 = lVar3 + -1;
    puVar2 = puVar1;
  } while (lVar3 != 0);
  *(undefined4 *)puVar1 = 0xffffffff;
  return param_1;
}

