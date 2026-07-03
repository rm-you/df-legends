// FUN_140ce0da0 @ 140ce0da0
// callees:
//   -> 1400199b0 FUN_1400199b0


void FUN_140ce0da0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((*(byte *)((longlong)param_2 + 0x1b4) & 1) == 0) {
    uVar7 = 0;
    uVar3 = uVar7;
    if (*(longlong *)(param_1 + 0xa78) != 0) {
      uVar3 = *(longlong *)(param_1 + 0xa78) + 0x248;
    }
    *param_2 = uVar3;
    param_2[(longlong)(int)param_2[0x33] + 1] = param_1 + 0xdb0;
    *(int *)(param_2 + 0x33) = (int)param_2[0x33] + 1;
    param_2[(longlong)(int)param_2[0x36] + 0x34] = param_1 + 0xd98;
    *(int *)(param_2 + 0x36) = (int)param_2[0x36] + 1;
    iVar1 = *(int *)(param_1 + 0x14c);
    if ((iVar1 != -1) &&
       (iVar6 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1, uVar3 = uVar7, -1 < iVar6)) {
      do {
        iVar5 = iVar6 + (int)uVar3 >> 1;
        piVar2 = *(int **)(DAT_141d692e0 + (longlong)iVar5 * 8);
        if (*piVar2 == iVar1) {
          if (piVar2 != (int *)0x0) {
            param_2[(longlong)(int)param_2[0x33] + 1] = (ulonglong)(piVar2 + 0x56);
            *(int *)(param_2 + 0x33) = (int)param_2[0x33] + 1;
          }
          break;
        }
        if (iVar1 < *piVar2) {
          iVar6 = iVar5 + -1;
        }
        else {
          uVar3 = (ulonglong)(iVar5 + 1);
        }
      } while ((int)uVar3 <= iVar6);
    }
    iVar1 = *(int *)(param_1 + 0x1d8);
    if (((iVar1 != -1) && (lVar4 = DAT_141d64d40 - DAT_141d64d38 >> 3, lVar4 != 0)) &&
       (iVar6 = (int)lVar4 + -1, -1 < iVar6)) {
      while( true ) {
        iVar5 = (int)uVar7 + iVar6 >> 1;
        piVar2 = *(int **)(DAT_141d64d38 + (longlong)iVar5 * 8);
        if (*piVar2 == iVar1) break;
        if (iVar1 < *piVar2) {
          iVar6 = iVar5 + -1;
        }
        else {
          uVar7 = (ulonglong)(iVar5 + 1);
        }
        if (iVar6 < (int)uVar7) {
          *(uint *)((longlong)param_2 + 0x1b4) = *(uint *)((longlong)param_2 + 0x1b4) | 1;
          return;
        }
      }
      if (((piVar2 != (int *)0x0) &&
          (lVar4 = FUN_1400199b0(&DAT_141c53718,piVar2[0x6f]), lVar4 != 0)) &&
         ((int)param_2[0x33] < 0x32)) {
        param_2[(longlong)(int)param_2[0x33] + 1] = lVar4 + 0x1240;
        *(int *)(param_2 + 0x33) = (int)param_2[0x33] + 1;
      }
    }
    *(uint *)((longlong)param_2 + 0x1b4) = *(uint *)((longlong)param_2 + 0x1b4) | 1;
  }
  return;
}

