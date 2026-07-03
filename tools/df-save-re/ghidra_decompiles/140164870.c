// FUN_140164870 @ 140164870
// callees:
//   -> 140002020 FUN_140002020


void FUN_140164870(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x18];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x1a] - lVar1,1);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x17] - lVar1,1);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x14] - lVar1,1);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x11] - lVar1,1);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xe] - lVar1,1);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xb] - lVar1,1);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[8] - lVar1,1);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1,1);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1,1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

