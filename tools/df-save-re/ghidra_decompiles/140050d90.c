// FUN_140050d90 @ 140050d90
// callees:
//   -> 140050070 FUN_140050070
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050640 FUN_140050640


ulonglong FUN_140050d90(int *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int **ppiVar11;
  int *piVar12;
  int *local_res8;
  undefined1 local_res10 [8];
  
  ppiVar4 = (int **)param_2[1];
  ppiVar11 = (int **)*param_2;
  uVar9 = (longlong)ppiVar4 - (longlong)ppiVar11 >> 3;
  iVar8 = (int)uVar9;
  local_res8 = param_1;
  if (iVar8 == 0) {
    FUN_140050070(param_2,&local_res8);
    return 1;
  }
  iVar2 = *param_1;
  uVar7 = iVar8 - 1;
  if (*ppiVar11[(int)uVar7] < iVar2) {
    if ((&local_res8 < ppiVar4) && (ppiVar11 <= &local_res8)) {
      if (ppiVar4 == (int **)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)ppiVar11)) >> 3) * 8);
        param_2[1] = param_2[1] + 8;
        return uVar9 & 0xffffffff;
      }
    }
    else {
      if (ppiVar4 == (int **)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] = param_1;
      }
    }
    param_2[1] = param_2[1] + 8;
    return uVar9 & 0xffffffff;
  }
  uVar10 = 0;
  if (-1 < (int)uVar7) {
    do {
      iVar6 = (int)(uVar7 + uVar10) >> 1;
      piVar12 = ppiVar11[iVar6];
      iVar3 = *piVar12;
      if (iVar3 == iVar2) {
        return 0xffffffff;
      }
      if (uVar10 == uVar7) {
        if (iVar3 < iVar2) goto LAB_140050f39;
        if (iVar3 <= iVar2) {
          return 0xffffffff;
        }
        ppiVar11 = ppiVar11 + (int)uVar10;
        goto LAB_140050f4e;
      }
      if (iVar2 < iVar3) {
        uVar7 = iVar6 - 1;
      }
      else {
        uVar10 = iVar6 + 1;
      }
    } while ((int)uVar10 <= (int)uVar7);
    if (-1 < (int)uVar7) {
      if (iVar8 <= (int)uVar7) {
        return 0xffffffff;
      }
      lVar1 = (longlong)(int)uVar7 * 8;
      if (*ppiVar11[(int)uVar7] < iVar2) {
        uVar7 = uVar7 + 1;
        if (iVar8 <= (int)uVar7) {
          return 0xffffffff;
        }
        lVar5 = (longlong)(int)uVar7 * 8;
      }
      else {
        lVar5 = lVar1;
        if (*ppiVar11[(int)uVar7] <= iVar2) {
          return 0xffffffff;
        }
      }
      FUN_140050640(param_2,local_res10,(longlong)ppiVar11 + lVar5,lVar1,&local_res8);
      return (ulonglong)uVar7;
    }
  }
  piVar12 = (int *)((longlong)(int)uVar10 * 8);
  if (**(int **)((longlong)piVar12 + (longlong)ppiVar11) < iVar2) {
LAB_140050f39:
    uVar10 = uVar10 + 1;
    if ((int)uVar10 < iVar8) {
      ppiVar11 = ppiVar11 + (int)uVar10;
LAB_140050f4e:
      FUN_140050640(param_2,local_res10,ppiVar11,piVar12,&local_res8);
      return (ulonglong)uVar10;
    }
  }
  else if (iVar2 < **(int **)((longlong)piVar12 + (longlong)ppiVar11)) {
    ppiVar11 = ppiVar11 + (int)uVar10;
    goto LAB_140050f4e;
  }
  return 0xffffffff;
}

