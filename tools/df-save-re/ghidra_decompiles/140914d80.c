// FUN_140914d80 @ 140914d80
// callees:


int FUN_140914d80(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  for (puVar3 = (undefined8 *)*param_1; puVar3 < (undefined8 *)param_1[1]; puVar3 = puVar3 + 1) {
    if (*(int *)*puVar3 == param_2) {
      return ((int *)*puVar3)[1];
    }
  }
  iVar1 = *(int *)(param_1 + 0x1d);
  iVar8 = 0;
  if (iVar1 != -1) {
    iVar6 = 0;
    iVar7 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
    if (-1 < iVar7) {
      do {
        iVar5 = iVar6 + iVar7 >> 1;
        piVar2 = *(int **)(DAT_141d692e0 + (longlong)iVar5 * 8);
        if (*piVar2 == iVar1) {
          if (piVar2 != (int *)0x0) {
            return piVar2[(longlong)param_2 + 0x15];
          }
          break;
        }
        if (iVar1 < *piVar2) {
          iVar7 = iVar5 + -1;
        }
        else {
          iVar6 = iVar5 + 1;
        }
      } while (iVar6 <= iVar7);
    }
  }
  iVar1 = *(int *)((longlong)param_1 + 0xe4);
  if (((iVar1 != -1) && (lVar4 = DAT_141c53720 - DAT_141c53718 >> 3, lVar4 != 0)) &&
     (iVar7 = (int)lVar4 + -1, -1 < iVar7)) {
    do {
      iVar6 = iVar7 + iVar8 >> 1;
      lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar6 * 8);
      if (*(int *)(lVar4 + 4) == iVar1) {
        if (lVar4 == 0) {
          return 0;
        }
        return *(int *)(lVar4 + 0xd10 + (longlong)param_2 * 4);
      }
      if (iVar1 < *(int *)(lVar4 + 4)) {
        iVar7 = iVar6 + -1;
      }
      else {
        iVar8 = iVar6 + 1;
      }
    } while (iVar8 <= iVar7);
  }
  return 0;
}

