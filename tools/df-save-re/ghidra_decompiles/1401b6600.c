// FUN_1401b6600 @ 1401b6600
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1401b6600(longlong *param_1,longlong *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
    if (plVar4 != (longlong *)0x0) {
      iVar6 = (int)(plVar4[1] - *plVar4 >> 2) + -1;
      if (-1 < iVar6) {
        lVar8 = (longlong)iVar6 * 4;
        lVar7 = (longlong)iVar6 * 2;
        lVar10 = lVar8;
        do {
          if (*(int *)(*plVar4 + lVar8) == param_3) {
            pvVar2 = (void *)(lVar10 + *plVar4);
            pvVar1 = (void *)((longlong)pvVar2 + 4);
            memmove(pvVar2,pvVar1,plVar4[1] - (longlong)pvVar1);
            plVar4[1] = plVar4[1] + -4;
            pvVar1 = (void *)(plVar4[3] + lVar7 + 2);
            memmove((void *)(plVar4[3] + lVar7),pvVar1,plVar4[4] - (longlong)pvVar1);
            plVar4[4] = plVar4[4] + -2;
          }
          lVar10 = lVar10 + -4;
          lVar7 = lVar7 + -2;
          lVar8 = lVar8 + -4;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      if (plVar4[1] - *plVar4 >> 2 != 0) {
        return;
      }
    }
    iVar9 = 0;
    lVar8 = *param_1;
    iVar6 = (int)(param_1[1] - lVar8 >> 2) + -1;
    if (-1 < iVar6) {
      do {
        iVar5 = iVar6 + iVar9 >> 1;
        iVar3 = *(int *)(lVar8 + (longlong)iVar5 * 4);
        if (iVar3 == (int)param_2[10]) {
          pvVar2 = (void *)(lVar8 + (longlong)iVar5 * 4);
          pvVar1 = (void *)((longlong)pvVar2 + 4);
          memmove(pvVar2,pvVar1,param_1[1] - (longlong)pvVar1);
          param_1[1] = param_1[1] + -4;
          return;
        }
        if ((int)param_2[10] < iVar3) {
          iVar6 = iVar5 + -1;
        }
        else {
          iVar9 = iVar5 + 1;
        }
      } while (iVar9 <= iVar6);
    }
  }
  return;
}

