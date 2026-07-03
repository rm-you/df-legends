// FUN_1405c8f70 @ 1405c8f70
// callees:
//   -> 140281bb0 FUN_140281bb0
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20
//   -> 140dfb5b4 free


void FUN_1405c8f70(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_140281bb0(param_1 + 0x35);
  lVar2 = param_1[0x31];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x33] - lVar2,1);
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  lVar2 = param_1[0x2e];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x30] - lVar2 >> 1,2);
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
  }
  lVar2 = param_1[0x2b];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x2d] - lVar2 >> 1,2);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
  }
  lVar2 = param_1[0x28];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x2a] - lVar2,1);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  lVar2 = param_1[0x25];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x27] - lVar2 >> 1,2);
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  lVar2 = param_1[0x22];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x24] - lVar2 >> 1,2);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  plVar1 = param_1 + 0x1f;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x21] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  lVar2 = param_1[0x1c];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x1e] - lVar2 >> 2,4);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  lVar2 = param_1[0x19];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x1b] - lVar2 >> 1,2);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x18] - lVar2 >> 1,2);
    param_1[0x16] = 0;
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
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x12] - lVar2 >> 1,2);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  lVar2 = param_1[0xd];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xf] - lVar2 >> 1,2);
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
  if ((void *)param_1[7] != (void *)0x0) {
    free((void *)param_1[7]);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_140051e20(param_1 + 4);
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[6] - lVar2 >> 3,8);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  return;
}

