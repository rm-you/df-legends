// FUN_140973d30 @ 140973d30
// callees:
//   -> 1409379f0 FUN_1409379f0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140973d30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(int *)(param_2 + 0xc10) != -1) &&
     (iVar3 = (int)(*(longlong *)(param_1 + 0x2320) - *(longlong *)(param_1 + 0x2318) >> 3) + -1,
     -1 < iVar3)) {
    lVar4 = (longlong)iVar3 * 8;
    lVar5 = lVar4;
    do {
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x2318));
      if (*(int *)(lVar1 + 8) == *(int *)(param_2 + 0xc10)) {
        *(undefined4 *)(lVar1 + 8) = 0xffffffff;
      }
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x2318));
      if (*(int *)(lVar1 + 0xc) == *(int *)(param_2 + 0xc10)) {
        *(undefined4 *)(lVar1 + 0xc) = 0xffffffff;
      }
      pvVar2 = *(void **)(lVar4 + *(longlong *)(param_1 + 0x2318));
      if ((*(int *)((longlong)pvVar2 + 8) == -1) && (*(int *)((longlong)pvVar2 + 0xc) == -1)) {
        if (pvVar2 != (void *)0x0) {
          FUN_1409379f0(pvVar2);
          free(pvVar2);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 0x2318) + lVar5);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,*(longlong *)(param_1 + 0x2320) - (longlong)pvVar2);
        *(longlong *)(param_1 + 0x2320) = *(longlong *)(param_1 + 0x2320) + -8;
      }
      lVar5 = lVar5 + -8;
      lVar4 = lVar4 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

