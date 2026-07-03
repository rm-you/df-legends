// FUN_1409079f0 @ 1409079f0
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 140050d90 FUN_140050d90


int * FUN_1409079f0(int *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  if (*(void **)(param_1 + 0x16) != (void *)0x0) {
    free(*(void **)(param_1 + 0x16));
  }
  puVar1 = operator_new(4);
  *(undefined4 **)(param_1 + 0x16) = puVar1;
  *puVar1 = 0;
  param_1[0x18] = 4;
  param_1[8] = -1;
  param_1[0x11] = -1;
  param_1[0x12] = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[0x13] = -1;
  param_1[0x14] = -1;
  if (param_2 == '\0') {
    *param_1 = DAT_141697474;
    DAT_141697474 = DAT_141697474 + 1;
    FUN_140050d90(param_1,&DAT_141c67090,param_3,param_4,uVar2);
  }
  return param_1;
}

