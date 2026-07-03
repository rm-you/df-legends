// FUN_14089b3e0 @ 14089b3e0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_14089b3e0(undefined8 *param_1)

{
  void *_Src;
  longlong *plVar1;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3) + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2;
    do {
      if (*(undefined8 **)(DAT_141d6e1a8 + lVar3 * 8) == param_1) {
        _Dst = (void *)(DAT_141d6e1a8 + (longlong)iVar2 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d6e1b0 - (longlong)_Src);
        DAT_141d6e1b0 = DAT_141d6e1b0 + -8;
        break;
      }
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  plVar1 = param_1 + 0x2a;
  FUN_140051e20(plVar1);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    FUN_140002020(lVar3,param_1[0x2c] - lVar3 >> 3,8);
    *plVar1 = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  _eh_vector_destructor_iterator_(param_1 + 4,0x20,9,FUN_14000c260);
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}

