// FUN_140288970 @ 140288970
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_140288970(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = param_1 + 0x17;
  FUN_140051e20(plVar2);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x19] - lVar1 >> 3,8);
    *plVar2 = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  plVar2 = param_1 + 0x14;
  FUN_140051e20(plVar2);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0x16] - lVar1 >> 3,8);
    *plVar2 = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  plVar2 = param_1 + 0xe;
  if (0xf < (ulonglong)param_1[0x11]) {
    FUN_140002020(*plVar2,param_1[0x11] + 1,1);
  }
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  if (0xf < (ulonglong)param_1[0x11]) {
    plVar2 = (longlong *)*plVar2;
  }
  *(undefined1 *)plVar2 = 0;
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

