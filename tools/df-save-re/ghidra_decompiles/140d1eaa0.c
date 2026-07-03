// FUN_140d1eaa0 @ 140d1eaa0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1405c8f70 FUN_1405c8f70
//   -> 140dfb5b4 free


void FUN_140d1eaa0(longlong *param_1)

{
  void *pvVar1;
  void *_Dst;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = (int)(param_1[1] - *param_1 >> 3) + -1;
  if (-1 < iVar8) {
    lVar5 = (longlong)iVar8 * 8;
    lVar6 = lVar5;
    do {
      lVar2 = *(longlong *)(lVar5 + *param_1);
      if ((0 < *(int *)(lVar2 + 0x40)) && ((**(byte **)(lVar2 + 0x38) & 2) != 0)) {
        iVar3 = (int)(param_1[4] - param_1[3] >> 3) + -1;
        if (-1 < iVar3) {
          lVar4 = (longlong)iVar3 * 8;
          lVar7 = lVar4;
          do {
            if (*(longlong *)(lVar4 + param_1[3]) == lVar2) {
              _Dst = (void *)(lVar7 + param_1[3]);
              pvVar1 = (void *)((longlong)_Dst + 8);
              memmove(_Dst,pvVar1,param_1[4] - (longlong)pvVar1);
              param_1[4] = param_1[4] + -8;
            }
            lVar7 = lVar7 + -8;
            lVar4 = lVar4 + -8;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        pvVar1 = *(void **)(lVar5 + *param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_1405c8f70(pvVar1);
          free(pvVar1);
        }
        pvVar1 = (void *)(*param_1 + lVar6 + 8);
        memmove((void *)(*param_1 + lVar6),pvVar1,param_1[1] - (longlong)pvVar1);
        param_1[1] = param_1[1] + -8;
      }
      lVar6 = lVar6 + -8;
      lVar5 = lVar5 + -8;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}

