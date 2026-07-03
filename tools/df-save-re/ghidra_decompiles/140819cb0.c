// FUN_140819cb0 @ 140819cb0
// callees:
//   -> 1407f0860 FUN_1407f0860
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140002740 FUN_140002740


void FUN_140819cb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    if ((*(uint *)(plVar1 + 2) & 0x100000) == 0) {
      FUN_1407f0860(plVar1,0,param_3,param_4,0xfffffffffffffffe);
      (**(code **)(*plVar1 + 800))(plVar1);
    }
    (**(code **)(*plVar1 + 0x770))(plVar1,1);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  iVar2 = (int)(DAT_141c68018 - DAT_141c68010 >> 3) + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2;
    do {
      if (*(longlong *)(DAT_141c68010 + lVar3 * 8) == param_1) {
        _Dst = (void *)(DAT_141c68010 + (longlong)iVar2 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141c68018 - (longlong)_Src);
        DAT_141c68018 = DAT_141c68018 + -8;
        break;
      }
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x100) - lVar3 >> 2,4);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0xd8);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0xe8) - lVar3 >> 2,4);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0xd0) - lVar3 >> 2,4);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    free(*(void **)(param_1 + 0x80));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_140002740(param_1 + 8);
  return;
}

