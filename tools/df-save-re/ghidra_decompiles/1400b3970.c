// FUN_1400b3970 @ 1400b3970
// callees:
//   -> 140050410 FUN_140050410
//   -> 140050640 FUN_140050640


ulonglong FUN_1400b3970(int *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  int **ppiVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int *local_res8;
  undefined1 local_res10 [8];
  
  ppiVar4 = (int **)param_2[1];
  ppiVar5 = (int **)*param_2;
  uVar10 = (longlong)ppiVar4 - (longlong)ppiVar5 >> 3;
  iVar9 = (int)uVar10;
  local_res8 = param_1;
  if (iVar9 == 0) {
    if ((&local_res8 < ppiVar4) && (ppiVar5 <= &local_res8)) {
      if (ppiVar4 == (int **)param_2[2]) {
        FUN_140050410(param_2);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)ppiVar5)) >> 3) * 8);
        param_2[1] = param_2[1] + 8;
        return 1;
      }
    }
    else {
      if (ppiVar4 == (int **)param_2[2]) {
        FUN_140050410(param_2);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] = param_1;
      }
    }
    param_2[1] = param_2[1] + 8;
    return 1;
  }
  iVar2 = *param_1;
  uVar12 = iVar9 - 1;
  if (*ppiVar5[(int)uVar12] < iVar2) {
    if ((&local_res8 < ppiVar4) && (ppiVar5 <= &local_res8)) {
      if (ppiVar4 == (int **)param_2[2]) {
        FUN_140050410(param_2);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)ppiVar5)) >> 3) * 8);
        param_2[1] = param_2[1] + 8;
        return uVar10 & 0xffffffff;
      }
    }
    else {
      if (ppiVar4 == (int **)param_2[2]) {
        FUN_140050410(param_2);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] = param_1;
      }
    }
    param_2[1] = param_2[1] + 8;
    return uVar10 & 0xffffffff;
  }
  uVar11 = 0;
  if (-1 < (int)uVar12) {
    do {
      iVar8 = (int)(uVar12 + uVar11) >> 1;
      piVar13 = ppiVar5[iVar8];
      iVar3 = *piVar13;
      if (iVar3 == iVar2) {
        return 0xffffffff;
      }
      if (uVar11 == uVar12) {
        if (iVar3 < iVar2) goto LAB_1400b3b63;
        if (iVar3 <= iVar2) {
          return 0xffffffff;
        }
        goto LAB_1400b3b69;
      }
      if (iVar2 < iVar3) {
        uVar12 = iVar8 - 1;
      }
      else {
        uVar11 = iVar8 + 1;
      }
    } while ((int)uVar11 <= (int)uVar12);
    if (-1 < (int)uVar12) {
      if (iVar9 <= (int)uVar12) {
        return 0xffffffff;
      }
      lVar1 = (longlong)(int)uVar12 * 8;
      if (*ppiVar5[(int)uVar12] < iVar2) {
        uVar12 = uVar12 + 1;
        if (iVar9 <= (int)uVar12) {
          return 0xffffffff;
        }
        lVar6 = (longlong)(int)uVar12 * 8;
      }
      else {
        lVar6 = lVar1;
        if (*ppiVar5[(int)uVar12] <= iVar2) {
          return 0xffffffff;
        }
      }
      FUN_140050640(param_2,local_res10,(longlong)ppiVar5 + lVar6,lVar1,&local_res8);
      return (ulonglong)uVar12;
    }
  }
  piVar13 = (int *)((longlong)(int)uVar11 * 8);
  if (**(int **)((longlong)piVar13 + (longlong)ppiVar5) < iVar2) {
LAB_1400b3b63:
    uVar11 = uVar11 + 1;
    if ((int)uVar11 < iVar9) {
LAB_1400b3b69:
      piVar7 = (int *)((longlong)(int)uVar11 * 8);
      goto LAB_1400b3b70;
    }
  }
  else {
    piVar7 = piVar13;
    if (iVar2 < **(int **)((longlong)piVar13 + (longlong)ppiVar5)) {
LAB_1400b3b70:
      FUN_140050640(param_2,local_res10,(longlong)ppiVar5 + (longlong)piVar7,piVar13,&local_res8);
      return (ulonglong)uVar11;
    }
  }
  return 0xffffffff;
}

