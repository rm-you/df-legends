// FUN_140051300 @ 140051300
// callees:
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050640 FUN_140050640


void FUN_140051300(int *param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int **ppiVar8;
  uint uVar9;
  int iVar11;
  int *local_res8;
  undefined1 local_res10 [8];
  ulonglong uVar10;
  
  ppiVar3 = (int **)param_2[1];
  ppiVar8 = (int **)*param_2;
  iVar11 = (int)((longlong)ppiVar3 - (longlong)ppiVar8 >> 3);
  local_res8 = param_1;
  if (iVar11 == 0) {
    if ((ppiVar3 <= &local_res8) || (&local_res8 < ppiVar8)) {
      ppiVar8 = (int **)param_2[2];
LAB_140051389:
      if (ppiVar3 == ppiVar8) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] = param_1;
      }
      goto LAB_1400513a4;
    }
    puVar6 = local_res10 + (-8 - (longlong)ppiVar8);
    ppiVar8 = (int **)param_2[2];
  }
  else {
    iVar1 = *param_1;
    iVar7 = iVar11 + -1;
    if (iVar1 <= *ppiVar8[iVar7]) {
      iVar5 = 0;
      if (iVar7 < 0) {
LAB_140051493:
        uVar10 = (longlong)iVar5 * 8;
        iVar2 = *ppiVar8[iVar5];
        iVar4 = iVar2 - iVar1;
        if (iVar2 < iVar1) {
LAB_140051478:
          if (iVar11 <= iVar5 + 1) {
            return;
          }
          ppiVar8 = ppiVar8 + (iVar5 + 1);
          goto LAB_1400514b0;
        }
      }
      else {
        do {
          uVar9 = iVar7 + iVar5 >> 1;
          uVar10 = (ulonglong)uVar9;
          iVar2 = *ppiVar8[(int)uVar9];
          if (iVar2 == iVar1) {
            return;
          }
          if (iVar5 == iVar7) {
            if (iVar2 < iVar1) goto LAB_140051478;
            if (iVar2 <= iVar1) {
              return;
            }
            ppiVar8 = ppiVar8 + iVar5;
            goto LAB_1400514b0;
          }
          if (iVar1 < iVar2) {
            iVar7 = uVar9 - 1;
          }
          else {
            iVar5 = uVar9 + 1;
          }
        } while (iVar5 <= iVar7);
        if (iVar7 < 0) goto LAB_140051493;
        if (iVar11 <= iVar7) {
          return;
        }
        uVar10 = (longlong)iVar7 * 8;
        iVar2 = *ppiVar8[iVar7];
        iVar4 = iVar2 - iVar1;
        if (iVar2 < iVar1) {
          if (iVar11 <= iVar7 + 1) {
            return;
          }
          ppiVar8 = ppiVar8 + (iVar7 + 1);
          goto LAB_1400514b0;
        }
      }
      if (iVar2 == iVar1 || SBORROW4(iVar2,iVar1) != iVar4 < 0) {
        return;
      }
      ppiVar8 = (int **)((longlong)ppiVar8 + uVar10);
LAB_1400514b0:
      FUN_140050640(param_2,local_res10,ppiVar8,uVar10,&local_res8);
      return;
    }
    if ((ppiVar3 <= &local_res8) || (&local_res8 < ppiVar8)) {
      ppiVar8 = (int **)param_2[2];
      goto LAB_140051389;
    }
    puVar6 = local_res10 + (-8 - (longlong)ppiVar8);
    ppiVar8 = (int **)param_2[2];
  }
  if (ppiVar3 == ppiVar8) {
    FUN_14000c2d0(param_2,1);
  }
  if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[1] = *(undefined8 *)(*param_2 + ((longlong)puVar6 >> 3) * 8);
    param_2[1] = param_2[1] + 8;
    return;
  }
LAB_1400513a4:
  param_2[1] = param_2[1] + 8;
  return;
}

