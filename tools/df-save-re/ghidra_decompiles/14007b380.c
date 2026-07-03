// FUN_14007b380 @ 14007b380
// callees:
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050640 FUN_140050640


ulonglong FUN_14007b380(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)param_2[1];
  plVar4 = (longlong *)*param_2;
  uVar8 = (longlong)plVar3 - (longlong)plVar4 >> 3;
  iVar7 = (int)uVar8;
  local_res8 = param_1;
  if (iVar7 == 0) {
    if ((&local_res8 < plVar3) && (plVar4 <= &local_res8)) {
      if (plVar3 == (longlong *)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)plVar4)) >> 3) * 8);
        param_2[1] = param_2[1] + 8;
        return 1;
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
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  uVar10 = iVar7 - 1;
  if (*(int *)(plVar4[(int)uVar10] + 0x50) < iVar1) {
    if ((&local_res8 < plVar3) && (plVar4 <= &local_res8)) {
      if (plVar3 == (longlong *)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)plVar4)) >> 3) * 8);
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
  if (-1 < (int)uVar10) {
    do {
      iVar6 = (int)(uVar10 + uVar9) >> 1;
      lVar11 = plVar4[iVar6];
      iVar2 = *(int *)(lVar11 + 0x50);
      if (iVar2 == iVar1) {
        return 0xffffffff;
      }
      if (uVar9 == uVar10) {
        if (iVar2 < iVar1) goto LAB_14007b585;
        if (iVar2 <= iVar1) {
          return 0xffffffff;
        }
        goto LAB_14007b58b;
      }
      if (iVar1 < iVar2) {
        uVar10 = iVar6 - 1;
      }
      else {
        uVar9 = iVar6 + 1;
      }
    } while ((int)uVar9 <= (int)uVar10);
    if (-1 < (int)uVar10) {
      if (iVar7 <= (int)uVar10) {
        return 0xffffffff;
      }
      lVar11 = (longlong)(int)uVar10 * 8;
      if (*(int *)(plVar4[(int)uVar10] + 0x50) < iVar1) {
        uVar10 = uVar10 + 1;
        if (iVar7 <= (int)uVar10) {
          return 0xffffffff;
        }
        lVar5 = (longlong)(int)uVar10 * 8;
      }
      else {
        lVar5 = lVar11;
        if (*(int *)(plVar4[(int)uVar10] + 0x50) <= iVar1) {
          return 0xffffffff;
        }
      }
      FUN_140050640(param_2,local_res10,(longlong)plVar4 + lVar5,lVar11,&local_res8);
      return (ulonglong)uVar10;
    }
  }
  lVar11 = (longlong)(int)uVar9 * 8;
  if (*(int *)(plVar4[(int)uVar9] + 0x50) < iVar1) {
LAB_14007b585:
    uVar9 = uVar9 + 1;
    if ((int)uVar9 < iVar7) {
LAB_14007b58b:
      lVar5 = (longlong)(int)uVar9 * 8;
      goto LAB_14007b592;
    }
  }
  else {
    lVar5 = lVar11;
    if (iVar1 < *(int *)(plVar4[(int)uVar9] + 0x50)) {
LAB_14007b592:
      FUN_140050640(param_2,local_res10,(longlong)plVar4 + lVar5,lVar11,&local_res8);
      return (ulonglong)uVar9;
    }
  }
  return 0xffffffff;
}

