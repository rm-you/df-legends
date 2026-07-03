// FUN_140003800 @ 140003800
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


undefined8 * FUN_140003800(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = abstract_buildingst::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  puVar1 = operator_new(1);
  param_1[5] = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}

