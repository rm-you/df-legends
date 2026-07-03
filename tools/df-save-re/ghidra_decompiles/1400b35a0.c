// FUN_1400b35a0 @ 1400b35a0
// callees:
//   -> 140050070 FUN_140050070
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050640 FUN_140050640


void FUN_1400b35a0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar10;
  longlong local_res8;
  undefined1 local_res10 [8];
  ulonglong uVar9;
  
  plVar3 = (longlong *)param_2[1];
  plVar7 = (longlong *)*param_2;
  iVar10 = (int)((longlong)plVar3 - (longlong)plVar7 >> 3);
  local_res8 = param_1;
  if (iVar10 == 0) {
    FUN_140050070(param_2,&local_res8);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  iVar6 = iVar10 + -1;
  if (*(int *)(plVar7[iVar6] + 0x88) < iVar1) {
    if ((&local_res8 < plVar3) && (plVar7 <= &local_res8)) {
      if (plVar3 == (longlong *)param_2[2]) {
        FUN_14000c2d0(param_2,1);
      }
      if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[1] =
             *(undefined8 *)
              (*param_2 + ((longlong)(local_res10 + (-8 - (longlong)plVar7)) >> 3) * 8);
      }
      param_2[1] = param_2[1] + 8;
      return;
    }
    if (plVar3 == (longlong *)param_2[2]) {
      FUN_14000c2d0(param_2,1);
    }
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = param_1;
    }
    param_2[1] = param_2[1] + 8;
    return;
  }
  iVar5 = 0;
  if (iVar6 < 0) {
LAB_1400b3721:
    uVar9 = (longlong)iVar5 * 8;
    iVar2 = *(int *)(plVar7[iVar5] + 0x88);
    iVar4 = iVar2 - iVar1;
    if (iVar2 < iVar1) {
LAB_1400b3706:
      if (iVar10 <= iVar5 + 1) {
        return;
      }
      plVar7 = plVar7 + (iVar5 + 1);
      goto LAB_1400b3742;
    }
  }
  else {
    do {
      uVar8 = iVar6 + iVar5 >> 1;
      uVar9 = (ulonglong)uVar8;
      iVar2 = *(int *)(plVar7[(int)uVar8] + 0x88);
      if (iVar2 == iVar1) {
        return;
      }
      if (iVar5 == iVar6) {
        if (iVar2 < iVar1) goto LAB_1400b3706;
        if (iVar2 <= iVar1) {
          return;
        }
        plVar7 = plVar7 + iVar5;
        goto LAB_1400b3742;
      }
      if (iVar1 < iVar2) {
        iVar6 = uVar8 - 1;
      }
      else {
        iVar5 = uVar8 + 1;
      }
    } while (iVar5 <= iVar6);
    if (iVar6 < 0) goto LAB_1400b3721;
    if (iVar10 <= iVar6) {
      return;
    }
    uVar9 = (longlong)iVar6 * 8;
    iVar2 = *(int *)(plVar7[iVar6] + 0x88);
    iVar4 = iVar2 - iVar1;
    if (iVar2 < iVar1) {
      if (iVar10 <= iVar6 + 1) {
        return;
      }
      plVar7 = plVar7 + (iVar6 + 1);
      goto LAB_1400b3742;
    }
  }
  if (iVar2 == iVar1 || SBORROW4(iVar2,iVar1) != iVar4 < 0) {
    return;
  }
  plVar7 = (longlong *)((longlong)plVar7 + uVar9);
LAB_1400b3742:
  FUN_140050640(param_2,local_res10,plVar7,uVar9,&local_res8);
  return;
}

