// FUN_140c7dec0 @ 140c7dec0
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140c5af70 FUN_140c5af70
//   -> 1409fc0c0 FUN_1409fc0c0


short FUN_140c7dec0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  sVar6 = (short)((longlong)
                  (ulonglong)(uint)((*(int **)(param_1 + 0x5d8))[2] - **(int **)(param_1 + 0x5d8))
                 >> 3) + -1;
  if (-1 < sVar6) {
    uVar8 = (ulonglong)sVar6;
    do {
      if (((((sVar6 < 0) ||
            (lVar1 = **(longlong **)(param_1 + 0x5d8),
            (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar1 >> 3) <= uVar8)) ||
           (cVar2 = FUN_14000d840(*(longlong *)(lVar1 + uVar8 * 8) + 0x48,5), cVar2 == '\0')) ||
          ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar8 * 4) & 0x800) != 0)) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar8 * 4) & 0x80002) == 0)) {
        iVar3 = FUN_140c5af70(param_1,sVar6);
        uVar7 = uVar7 + iVar3;
      }
      uVar8 = uVar8 - 1;
      sVar6 = sVar6 + -1;
    } while (-1 < sVar6);
    if (uVar7 != 0) {
      if (uVar7 < 2) {
        uVar7 = 0;
      }
      else {
        uVar4 = FUN_1409fc0c0();
        uVar7 = (uVar4 + (int)((longlong)((ulonglong)uVar4 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (ulonglong)uVar7) + 1U);
      }
      iVar3 = 0;
      sVar6 = (short)((longlong)
                      (ulonglong)
                      (uint)((*(int **)(param_1 + 0x5d8))[2] - **(int **)(param_1 + 0x5d8)) >> 3);
joined_r0x000140c7dfd1:
      do {
        sVar6 = sVar6 + -1;
        if (sVar6 < 0) goto LAB_140c7e048;
        if (-1 < sVar6) {
          lVar1 = **(longlong **)(param_1 + 0x5d8);
          uVar8 = (ulonglong)sVar6;
          if (((uVar8 < (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar1 >> 3)) &&
              (cVar2 = FUN_14000d840(*(longlong *)(lVar1 + uVar8 * 8) + 0x48,5), cVar2 != '\0')) &&
             ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar8 * 4) & 0x800) == 0))
          goto joined_r0x000140c7dfd1;
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar6 * 4) & 0x80002) == 0) {
          iVar5 = FUN_140c5af70(param_1,sVar6);
          iVar3 = iVar3 + iVar5;
          if ((int)uVar7 < iVar3) {
LAB_140c7e048:
            if (sVar6 != -1) {
              return sVar6;
            }
            return 0;
          }
        }
      } while( true );
    }
  }
  return 0;
}

