// FUN_140de4a60 @ 140de4a60
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140de4a60(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar6 = (int)(*(longlong *)(param_1 + 0xdb8) - *(longlong *)(param_1 + 0xdb0) >> 3) + -1;
  if (-1 < iVar6) {
    lVar8 = (longlong)iVar6 * 8;
    lVar9 = lVar8;
    do {
      pvVar3 = *(void **)(lVar8 + *(longlong *)(param_1 + 0xdb0));
      if (*(int *)((longlong)pvVar3 + 0x24) == 2) {
        iVar1 = *(int *)((longlong)pvVar3 + 4);
        iVar5 = (int)(param_2[1] - *param_2 >> 2);
        if ((iVar5 != 0) && (iVar1 != -1)) {
          iVar7 = 0;
          iVar5 = iVar5 + -1;
          if (-1 < iVar5) {
            do {
              iVar4 = iVar5 + iVar7 >> 1;
              iVar2 = *(int *)(*param_2 + (longlong)iVar4 * 4);
              if (iVar2 == iVar1) {
                if (iVar4 != -1) goto LAB_140de4b20;
                break;
              }
              if (iVar1 < iVar2) {
                iVar5 = iVar4 + -1;
              }
              else {
                iVar7 = iVar4 + 1;
              }
            } while (iVar7 <= iVar5);
          }
        }
      }
      if ((*(byte *)((longlong)pvVar3 + 0x20) & 1) != 0) {
LAB_140de4b20:
        free(pvVar3);
        _Dst = (void *)(*(longlong *)(param_1 + 0xdb0) + lVar9);
        pvVar3 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar3,*(longlong *)(param_1 + 0xdb8) - (longlong)pvVar3);
        *(longlong *)(param_1 + 0xdb8) = *(longlong *)(param_1 + 0xdb8) + -8;
      }
      lVar9 = lVar9 + -8;
      lVar8 = lVar8 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}

