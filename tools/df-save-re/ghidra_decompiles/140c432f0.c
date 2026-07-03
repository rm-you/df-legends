// FUN_140c432f0 @ 140c432f0
// callees:
//   -> 140002020 FUN_140002020


void FUN_140c432f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xf] - lVar1 >> 2,4);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xc] - lVar1 >> 2,4);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[8] - lVar1 >> 2,4);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1 >> 2,4);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 2,4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

