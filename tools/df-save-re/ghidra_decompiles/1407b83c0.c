// FUN_1407b83c0 @ 1407b83c0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140010740 FUN_140010740
//   -> 1400b3140 FUN_1400b3140
//   -> 1400511c0 FUN_1400511c0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000bc60 FUN_14000bc60
//   -> 1400508e0 FUN_1400508e0


undefined4 FUN_1407b83c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  if (param_2 == -1) {
    return 5;
  }
  iVar13 = 0;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    local_res18 = operator_new(0x68);
    *local_res18 = 0;
    local_res18[1] = 0;
    local_res18[2] = 0;
    local_res18[3] = 0;
    local_res18[4] = 0;
    local_res18[5] = 0;
    local_res18[6] = 0;
    local_res18[7] = 0;
    local_res18[8] = 0;
    local_res18[9] = 0;
    local_res18[10] = 0;
    local_res18[0xb] = 0;
    local_res18[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = local_res18;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x40) == 0) {
    local_res18 = operator_new(0x170);
    uVar8 = FUN_140010740(local_res18);
    *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x40) = uVar8;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x40);
  iVar6 = FUN_1400b3140(param_2,lVar3 + 0xb0,local_res10);
  if (iVar6 == -1) {
    return 5;
  }
  if ((char)local_res10[0] != '\0') {
    return *(undefined4 *)(*(longlong *)(lVar3 + 200) + (longlong)iVar6 * 4);
  }
  iVar2 = *(int *)(param_1 + 0xbc);
  local_res10[0] = 5;
  if ((iVar2 != -1) && (iVar12 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1, -1 < iVar12)) {
    do {
      iVar11 = iVar12 + iVar13 >> 1;
      piVar4 = *(int **)(DAT_141d692e0 + (longlong)iVar11 * 8);
      if (*piVar4 == iVar2) {
        if ((piVar4 != (int *)0x0) && (lVar9 = FUN_1400511c0(param_2,piVar4 + 4), lVar9 != 0)) {
          uVar7 = FUN_1409fc0c0();
          piVar4 = *(int **)(lVar9 + 0x28);
          piVar5 = *(int **)(lVar9 + 0x30);
          uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                  0x346dd;
          iVar13 = -1;
          if (piVar5 <= piVar4) goto LAB_1407b85ab;
          piVar10 = piVar4;
          goto LAB_1407b8590;
        }
        break;
      }
      if (iVar2 < *piVar4) {
        iVar12 = iVar11 + -1;
      }
      else {
        iVar13 = iVar11 + 1;
      }
    } while (iVar13 <= iVar12);
  }
  goto switchD_1407b85d6_default;
  while (piVar10 = piVar10 + 1, iVar13 = -1, piVar10 < piVar5) {
LAB_1407b8590:
    uVar7 = uVar7 - *(int *)((*(longlong *)(lVar9 + 0x40) - (longlong)piVar4) + (longlong)piVar10);
    if ((int)uVar7 < 1) {
      iVar13 = *piVar10;
      if (iVar13 != -1) goto LAB_1407b85bd;
      break;
    }
  }
LAB_1407b85ab:
  if ((longlong)piVar5 - (longlong)piVar4 >> 2 != 0) {
    iVar13 = *piVar4;
  }
LAB_1407b85bd:
  switch(iVar13) {
  case 0:
  case 4:
    local_res10[0] = 7;
    break;
  case 1:
  case 5:
    local_res10[0] = 8;
    break;
  case 2:
  case 6:
    local_res10[0] = 9;
    break;
  case 3:
    local_res10[0] = 6;
  }
switchD_1407b85d6_default:
  plVar1 = (longlong *)(lVar3 + 200);
  if (iVar6 < (int)(*(longlong *)(lVar3 + 0xd0) - *plVar1 >> 2)) {
    FUN_1400508e0(plVar1,&local_res18,*plVar1 + (longlong)iVar6 * 4);
  }
  else {
    FUN_14000bc60(plVar1,local_res10);
  }
  return local_res10[0];
}

