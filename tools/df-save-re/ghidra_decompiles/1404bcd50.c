// FUN_1404bcd50 @ 1404bcd50
// callees:
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5b4 free


void FUN_1404bcd50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1[0x75];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x77] - lVar2 >> 2,4,param_4,0xfffffffffffffffe);
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
  }
  plVar1 = param_1 + 0x72;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x74] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
  }
  lVar2 = param_1[0x6f];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x71] - lVar2 >> 2,4);
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
  }
  plVar1 = param_1 + 0x6c;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x6e] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
  }
  puVar3 = param_1 + 0x67;
  if (0xf < (ulonglong)param_1[0x6a]) {
    FUN_140002020(*puVar3,param_1[0x6a] + 1,1);
  }
  param_1[0x6a] = 0xf;
  param_1[0x69] = 0;
  if (0xf < (ulonglong)param_1[0x6a]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  lVar2 = param_1[0x62];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[100] - lVar2 >> 1,2);
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
  plVar1 = param_1 + 0x5c;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x5e] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
  }
  _eh_vector_destructor_iterator_(param_1 + 0x1f,0x20,0xf,FUN_14000c260);
  plVar1 = param_1 + 0x1c;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x1e] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  lVar2 = param_1[0x19];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x1b] - lVar2 >> 2,4);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  plVar1 = param_1 + 0x16;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x18] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  plVar1 = param_1 + 0x13;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x15] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
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
  FUN_140051e20(param_1 + 7);
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[9] - lVar2 >> 3,8);
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

