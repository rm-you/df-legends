// FUN_140d1eda0 @ 140d1eda0
// callees:
//   -> 14000d840 FUN_14000d840
//   -> EXTERNAL:000000e1 memmove
//   -> 140288ff0 FUN_140288ff0
//   -> 140dfb5b4 free


void FUN_140d1eda0(longlong param_1)

{
  void *_Dst;
  void *pvVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  short sVar8;
  int iVar9;
  
  iVar9 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  if (-1 < iVar9) {
    lVar6 = (longlong)iVar9 << 3;
    do {
      sVar8 = (short)iVar9;
      if ((-1 < sVar8) &&
         ((ulonglong)(longlong)sVar8 <
          (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) {
        lVar5 = *(longlong *)(param_1 + 0x20);
        cVar2 = FUN_14000d840(*(longlong *)(lVar5 + (longlong)sVar8 * 8) + 0x1a8,0x5b);
        if (cVar2 != '\0') {
          pvVar1 = *(void **)(lVar6 + lVar5);
          iVar4 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
          if (-1 < iVar4) {
            lVar5 = (longlong)iVar4 * 8;
            lVar7 = lVar5;
            do {
              if (*(void **)(lVar5 + *(longlong *)(param_1 + 8)) == pvVar1) {
                _Dst = (void *)(lVar7 + *(longlong *)(param_1 + 8));
                pvVar3 = (void *)((longlong)_Dst + 8);
                memmove(_Dst,pvVar3,*(longlong *)(param_1 + 0x10) - (longlong)pvVar3);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
              }
              lVar7 = lVar7 + -8;
              lVar5 = lVar5 + -8;
              iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
          }
          if (pvVar1 != (void *)0x0) {
            FUN_140288ff0(pvVar1);
            free(pvVar1);
          }
          pvVar3 = (void *)(*(longlong *)(param_1 + 0x20) + lVar6);
          pvVar1 = (void *)((longlong)pvVar3 + 8);
          memmove(pvVar3,pvVar1,*(longlong *)(param_1 + 0x28) - (longlong)pvVar1);
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
        }
      }
      lVar6 = lVar6 + -8;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}

