// FUN_1402837a0 @ 1402837a0
// callees:
//   -> 140283980 FUN_140283980
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_1402837a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_140283980();
  plVar1 = param_1 + 0x16;
  FUN_140051e20(plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x18] - lVar2 >> 3,8);
    *plVar1 = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  lVar2 = param_1[0x13];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0x15] - lVar2 >> 2,4);
    param_1[0x13] = 0;
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
  FUN_140051e20(param_1 + 0xd);
  lVar2 = param_1[0xd];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xf] - lVar2 >> 3,8);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xc] - lVar2 >> 2,4);
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

