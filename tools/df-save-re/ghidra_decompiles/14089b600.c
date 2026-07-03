// FUN_14089b600 @ 14089b600
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_14089b600(undefined8 *param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(DAT_141d6e1c8 - DAT_141d6e1c0 >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1;
    do {
      if (*(undefined8 **)(DAT_141d6e1c0 + lVar2 * 8) == param_1) {
        _Dst = (void *)(DAT_141d6e1c0 + (longlong)iVar1 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d6e1c8 - (longlong)_Src);
        DAT_141d6e1c8 = DAT_141d6e1c8 + -8;
        break;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  FUN_140051e20(param_1 + 0xb);
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[0xd] - lVar2 >> 3,8);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[9] - lVar2 >> 2,4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
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
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  return;
}

