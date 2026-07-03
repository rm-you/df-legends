// FUN_140498ae0 @ 140498ae0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140051e20 FUN_140051e20
//   -> 140dfb5b4 free


void FUN_140498ae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x62];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[100] - lVar2 >> 2,4,param_4,0xfffffffffffffffe);
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[100] = 0;
  }
  lVar2 = param_1[0x5f];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x61] - lVar2 >> 2,4);
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
  }
  lVar2 = param_1[0x5c];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x5e] - lVar2 >> 2,4);
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
  }
  lVar2 = param_1[0x56];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x58] - lVar2 >> 1,2);
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
  }
  lVar2 = param_1[0x53];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x55] - lVar2 >> 2,4);
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
  }
  lVar2 = param_1[0x50];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x52] - lVar2 >> 2,4);
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
  }
  _eh_vector_destructor_iterator_(param_1 + 0x13,0x20,0xf,FUN_14000c260);
  plVar1 = param_1 + 0x10;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x12] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  lVar2 = param_1[0xd];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xf] - lVar2 >> 2,4);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_140051e20(param_1 + 10);
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xc] - lVar2 >> 3,8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[9] - lVar2 >> 2,4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}

