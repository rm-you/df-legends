// FUN_1403629e0 @ 1403629e0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_1403629e0(undefined8 *param_1)

{
  void *_Src;
  longlong *plVar1;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar2 = (int)(DAT_141d778d0 - DAT_141d778c8 >> 3) + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2;
    do {
      if (*(undefined8 **)(DAT_141d778c8 + lVar3 * 8) == param_1) {
        _Dst = (void *)(DAT_141d778c8 + (longlong)iVar2 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d778d0 - (longlong)_Src);
        DAT_141d778d0 = DAT_141d778d0 + -8;
        break;
      }
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  plVar1 = param_1 + 0x16;
  FUN_140051e20(plVar1);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x18] - lVar3 >> 3,8);
    *plVar1 = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  plVar1 = param_1 + 0x12;
  FUN_140051e20(plVar1);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x14] - lVar3 >> 3,8);
    *plVar1 = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  puVar4 = param_1 + 0xe;
  if (0xf < (ulonglong)param_1[0x11]) {
    FUN_140002020(*puVar4,param_1[0x11] + 1,1);
  }
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  if (0xf < (ulonglong)param_1[0x11]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = param_1 + 10;
  if (0xf < (ulonglong)param_1[0xd]) {
    FUN_140002020(*puVar4,param_1[0xd] + 1,1);
  }
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar4 = 0;
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[9] - lVar3 >> 2,4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  FUN_140051e20(param_1 + 4);
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[6] - lVar3 >> 3,8);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  return;
}

