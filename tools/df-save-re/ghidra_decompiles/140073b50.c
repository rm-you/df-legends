// FUN_140073b50 @ 140073b50
// callees:
//   -> 140002020 FUN_140002020


void FUN_140073b50(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x1b];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x1d] - lVar1 >> 2,4);
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  lVar1 = param_1[0x18];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x1a] - lVar1 >> 2,4);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x17] - lVar1 >> 2,4);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x14] - lVar1 >> 2,4);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x11] - lVar1 >> 2,4);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xe] - lVar1 >> 1,2);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xb] - lVar1 >> 1,2);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[8] - lVar1 >> 1,2);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
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

