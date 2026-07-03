// FUN_1401b7d10 @ 1401b7d10
// callees:
//   -> 1401b7eb0 FUN_1401b7eb0
//   -> 140002020 FUN_140002020


void FUN_1401b7d10(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1401b7eb0();
  lVar1 = param_1[0x27];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x29] - lVar1 >> 3,8);
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  lVar1 = param_1[0x21];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x23] - lVar1 >> 1,2);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  lVar1 = param_1[0x1e];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x20] - lVar1 >> 3,8);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xf] - lVar1 >> 3,8);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xb] - lVar1 >> 3,8);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[8] - lVar1 >> 3,8);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1 >> 3,8);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

