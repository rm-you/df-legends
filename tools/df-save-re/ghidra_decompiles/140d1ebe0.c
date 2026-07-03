// FUN_140d1ebe0 @ 140d1ebe0
// callees:
//   -> 1405c96f0 FUN_1405c96f0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140d1ebe0(longlong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)(param_1[1] - *param_1 >> 3) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 8;
    lVar4 = lVar2;
    do {
      pvVar1 = *(void **)(lVar2 + *param_1);
      if ((1 < *(int *)((longlong)pvVar1 + 0x48)) &&
         ((*(byte *)(*(longlong *)((longlong)pvVar1 + 0x40) + 1) & 8) != 0)) {
        if (pvVar1 != (void *)0x0) {
          FUN_1405c96f0(pvVar1);
          free(pvVar1);
        }
        pvVar1 = (void *)(*param_1 + lVar4 + 8);
        memmove((void *)(*param_1 + lVar4),pvVar1,param_1[1] - (longlong)pvVar1);
        param_1[1] = param_1[1] + -8;
      }
      lVar4 = lVar4 + -8;
      lVar2 = lVar2 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

