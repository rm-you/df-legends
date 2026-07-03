// FUN_140c7ac10 @ 140c7ac10
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140c7ac10(longlong param_1)

{
  void *_Src;
  int *piVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 * 8;
    lVar5 = lVar4;
    do {
      piVar1 = *(int **)(lVar4 + *(longlong *)(param_1 + 0x1a8));
      if (*piVar1 == 0xd) {
        lVar2 = *(longlong *)(piVar1 + 2);
        if (*(char *)(lVar2 + 0x18) == '\0') {
          *(undefined1 *)(lVar2 + 0x18) = 2;
        }
        free(*(void **)(lVar4 + *(longlong *)(param_1 + 0x1a8)));
        _Dst = (void *)(*(longlong *)(param_1 + 0x1a8) + lVar5);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x1b0) - (longlong)_Src);
        *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_1 + 0x1b0) + -8;
      }
      lVar5 = lVar5 + -8;
      lVar4 = lVar4 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

