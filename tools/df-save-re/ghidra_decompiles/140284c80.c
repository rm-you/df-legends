// FUN_140284c80 @ 140284c80
// callees:
//   -> 140287cf0 FUN_140287cf0
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140284c80(longlong *param_1)

{
  longlong lVar1;
  
  FUN_140287cf0();
  lVar1 = param_1[0x2f];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x31] - lVar1 >> 2,4);
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  lVar1 = param_1[0x2c];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x2e] - lVar1 >> 1,2);
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
  }
  _eh_vector_destructor_iterator_(param_1 + 0x1d,0x18,5,FUN_1400030c0);
  lVar1 = param_1[0x19];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x1b] - lVar1 >> 2,4);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  lVar1 = param_1[0x16];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x18] - lVar1 >> 2,4);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  lVar1 = param_1[0x13];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x15] - lVar1 >> 2,4);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x12] - lVar1 >> 1,2);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xf] - lVar1 >> 1,2);
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

