// FUN_1402cb870 @ 1402cb870
// callees:


int FUN_1402cb870(int param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = *param_2;
  iVar7 = (int)(param_2[1] - lVar2 >> 2);
  if (iVar7 == 0) {
    return -1;
  }
  iVar8 = iVar7 + -1;
  if (*(int *)(lVar2 + (longlong)iVar8 * 4) < param_1) {
    return iVar8;
  }
  iVar5 = 0;
  if (-1 < iVar8) {
    do {
      iVar4 = iVar8 + iVar5 >> 1;
      iVar1 = *(int *)(lVar2 + (longlong)iVar4 * 4);
      if (iVar1 == param_1) {
        if (iVar4 < 1) {
          return iVar4;
        }
        lVar3 = (longlong)iVar4;
        piVar6 = (int *)(lVar2 + -4 + lVar3 * 4);
        do {
          if (*piVar6 < param_1) {
            return iVar4;
          }
          iVar4 = iVar4 + -1;
          lVar3 = lVar3 + -1;
          piVar6 = piVar6 + -1;
        } while (0 < lVar3);
        return iVar4;
      }
      if (iVar5 == iVar8) {
        if (iVar1 < param_1) {
          return iVar5;
        }
        goto LAB_1402cb916;
      }
      if (param_1 < iVar1) {
        iVar8 = iVar4 + -1;
      }
      else {
        iVar5 = iVar4 + 1;
      }
    } while (iVar5 <= iVar8);
    if (-1 < iVar8) {
      if (iVar7 <= iVar8) {
        return iVar5;
      }
      iVar7 = *(int *)(lVar2 + (longlong)iVar8 * 4);
      if (iVar7 < param_1) {
        return iVar8;
      }
      if (iVar7 <= param_1) {
        return iVar5;
      }
      if (iVar8 < 1) {
        return 0;
      }
      return iVar8 + -1;
    }
  }
  iVar7 = *(int *)(lVar2 + (longlong)iVar5 * 4);
  if ((iVar7 < param_1) || (iVar7 <= param_1)) {
    return iVar5;
  }
LAB_1402cb916:
  if (iVar5 < 1) {
    return 0;
  }
  return iVar5 + -1;
}

