// FUN_1407b6ae0 @ 1407b6ae0
// callees:
//   -> 140050d30 FUN_140050d30


undefined8 FUN_1407b6ae0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (param_1[7] != 0) {
    if (*param_1 != 0) {
      iVar5 = *(int *)(*param_1 + 0xe0);
      if (*param_2 == iVar5) {
        return 1;
      }
      if (param_2[1] == iVar5) {
        return 1;
      }
    }
    if ((*(byte *)(param_1 + 8) & 4) != 0) {
      return 0;
    }
  }
  iVar5 = param_2[2];
  if ((iVar5 != -1) &&
     (((((param_1[1] != 0 && (*(int *)(param_1[1] + 0xe0) == iVar5)) ||
        ((piVar6 = (int *)param_1[3], piVar6 != (int *)0x0 &&
         ((*piVar6 == iVar5 && ((*(byte *)(piVar6 + 1) & 1) != 0)))))) ||
       ((*param_1 != 0 &&
        ((*(int *)(*param_1 + 0xe0) == iVar5 && ((*(byte *)(param_1 + 8) & 8) != 0)))))) ||
      (((int *)param_1[4] != (int *)0x0 && (*(int *)param_1[4] == iVar5)))))) {
    return 1;
  }
  plVar1 = (longlong *)(param_2 + 4);
  if (*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4) >> 2 != 0) {
    iVar5 = (int)param_1[2];
    if (iVar5 != -1) {
      iVar8 = (int)(*(longlong *)(param_2 + 6) - *plVar1 >> 2);
      if (iVar8 != 0) {
        iVar10 = 0;
        iVar8 = iVar8 + -1;
        if (-1 < iVar8) {
          do {
            iVar7 = iVar8 + iVar10 >> 1;
            iVar2 = *(int *)(*plVar1 + (longlong)iVar7 * 4);
            if (iVar2 == iVar5) {
              if (iVar7 != -1) {
                return 1;
              }
              break;
            }
            if (iVar5 < iVar2) {
              iVar8 = iVar7 + -1;
            }
            else {
              iVar10 = iVar7 + 1;
            }
          } while (iVar10 <= iVar8);
        }
      }
    }
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = *(undefined4 **)(lVar3 + 0x10);
      for (puVar9 = *(undefined4 **)(lVar3 + 8); puVar9 < puVar4; puVar9 = puVar9 + 1) {
        iVar5 = FUN_140050d30(*puVar9,plVar1);
        if (iVar5 != -1) {
          return 1;
        }
      }
    }
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      piVar6 = *(int **)(lVar3 + 8);
      if (piVar6 < *(int **)(lVar3 + 0x10)) {
        do {
          iVar8 = *piVar6;
          iVar5 = (int)(*(longlong *)(param_2 + 6) - *plVar1 >> 2);
          if ((iVar5 != 0) && (iVar8 != -1)) {
            iVar10 = 0;
            iVar5 = iVar5 + -1;
            if (-1 < iVar5) {
              do {
                iVar7 = iVar10 + iVar5 >> 1;
                iVar2 = *(int *)(*plVar1 + (longlong)iVar7 * 4);
                if (iVar2 == iVar8) {
                  if (iVar7 != -1) {
                    return 1;
                  }
                  break;
                }
                if (iVar8 < iVar2) {
                  iVar5 = iVar7 + -1;
                }
                else {
                  iVar10 = iVar7 + 1;
                }
              } while (iVar10 <= iVar5);
            }
          }
          piVar6 = piVar6 + 1;
        } while (piVar6 < *(int **)(lVar3 + 0x10));
      }
    }
  }
  return 0;
}

