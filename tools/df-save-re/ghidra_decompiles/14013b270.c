// FUN_14013b270 @ 14013b270
// callees:
//   -> 140050070 FUN_140050070
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050640 FUN_140050640


ulonglong FUN_14013b270(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)param_2[1];
  plVar10 = (longlong *)*param_2;
  uVar8 = (longlong)plVar3 - (longlong)plVar10 >> 3;
  iVar7 = (int)uVar8;
  local_res8 = param_1;
  if (iVar7 == 0) {
    FUN_140050070(param_2,&local_res8);
    return 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar6 = iVar7 - 1;
  if (*(int *)(plVar10[(int)uVar6] + 4) < iVar1) {
    if ((&local_res8 < plVar3) && (plVar10 <= &local_res8)) {
      if (plVar3 == (longlong *)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)plVar10)) >> 3) * 8);
        param_2[1] = param_2[1] + 8;
        return uVar8 & 0xffffffff;
      }
    }
    else {
      if (plVar3 == (longlong *)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((longlong *)param_2[1] != (longlong *)0x0) {
        *(longlong *)param_2[1] = param_1;
      }
    }
    param_2[1] = param_2[1] + 8;
    return uVar8 & 0xffffffff;
  }
  uVar9 = 0;
  if (-1 < (int)uVar6) {
    do {
      iVar5 = (int)(uVar6 + uVar9) >> 1;
      lVar11 = plVar10[iVar5];
      iVar2 = *(int *)(lVar11 + 4);
      if (iVar2 == iVar1) {
        return 0xffffffff;
      }
      if (uVar9 == uVar6) {
        if (iVar2 < iVar1) goto LAB_14013b42b;
        if (iVar2 <= iVar1) {
          return 0xffffffff;
        }
        plVar10 = plVar10 + (int)uVar9;
        goto LAB_14013b440;
      }
      if (iVar1 < iVar2) {
        uVar6 = iVar5 - 1;
      }
      else {
        uVar9 = iVar5 + 1;
      }
    } while ((int)uVar9 <= (int)uVar6);
    if (-1 < (int)uVar6) {
      if (iVar7 <= (int)uVar6) {
        return 0xffffffff;
      }
      lVar11 = (longlong)(int)uVar6 * 8;
      if (*(int *)(plVar10[(int)uVar6] + 4) < iVar1) {
        uVar6 = uVar6 + 1;
        if (iVar7 <= (int)uVar6) {
          return 0xffffffff;
        }
        lVar4 = (longlong)(int)uVar6 * 8;
      }
      else {
        lVar4 = lVar11;
        if (*(int *)(plVar10[(int)uVar6] + 4) <= iVar1) {
          return 0xffffffff;
        }
      }
      FUN_140050640(param_2,local_res10,(longlong)plVar10 + lVar4,lVar11,&local_res8);
      return (ulonglong)uVar6;
    }
  }
  lVar4 = (longlong)(int)uVar9;
  lVar11 = lVar4 * 8;
  if (*(int *)(plVar10[lVar4] + 4) < iVar1) {
LAB_14013b42b:
    uVar9 = uVar9 + 1;
    if ((int)uVar9 < iVar7) {
      plVar10 = plVar10 + (int)uVar9;
LAB_14013b440:
      FUN_140050640(param_2,local_res10,plVar10,lVar11,&local_res8);
      return (ulonglong)uVar9;
    }
  }
  else if (iVar1 < *(int *)(plVar10[lVar4] + 4)) {
    plVar10 = plVar10 + lVar4;
    goto LAB_14013b440;
  }
  return 0xffffffff;
}

