// FUN_140ce0ff0 @ 140ce0ff0
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 140dfb5c4 operator_new
//   -> 140010740 FUN_140010740
//   -> 1400b3140 FUN_1400b3140
//   -> 1400511c0 FUN_1400511c0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000bc60 FUN_14000bc60
//   -> 1400508e0 FUN_1400508e0


undefined4 FUN_140ce0ff0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  if (param_2 == -1) {
    return 5;
  }
  iVar12 = 0;
  puVar13 = *(undefined8 **)(param_1 + 0x1240);
  if (puVar13 == (undefined8 *)0x0) {
    lVar7 = FUN_140ca8390();
    if (lVar7 == 0) {
      puVar13 = operator_new(0x30);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      *(undefined8 **)(param_1 + 0x1240) = puVar13;
    }
    else {
      if (*(longlong *)(lVar7 + 0x130) == 0) {
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
        *(undefined8 **)(lVar7 + 0x130) = local_res18;
      }
      if (*(longlong *)(*(longlong *)(lVar7 + 0x130) + 0x40) == 0) {
        local_res18 = operator_new(0x170);
        uVar8 = FUN_140010740(local_res18);
        *(undefined8 *)(*(longlong *)(lVar7 + 0x130) + 0x40) = uVar8;
      }
      puVar13 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x130) + 0x40) + 0xb0);
    }
  }
  iVar5 = FUN_1400b3140(param_2,puVar13,local_res10);
  if (iVar5 == -1) {
    return 5;
  }
  if ((char)local_res10[0] != '\0') {
    return *(undefined4 *)(puVar13[3] + (longlong)iVar5 * 4);
  }
  iVar2 = *(int *)(param_1 + 0x14c);
  local_res10[0] = 5;
  if ((iVar2 != -1) && (iVar11 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1, -1 < iVar11)) {
    do {
      iVar10 = iVar11 + iVar12 >> 1;
      piVar3 = *(int **)(DAT_141d692e0 + (longlong)iVar10 * 8);
      if (*piVar3 == iVar2) {
        if ((piVar3 != (int *)0x0) && (lVar7 = FUN_1400511c0(param_2,piVar3 + 4), lVar7 != 0)) {
          uVar6 = FUN_1409fc0c0();
          piVar3 = *(int **)(lVar7 + 0x28);
          piVar4 = *(int **)(lVar7 + 0x30);
          uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                  0x346dd;
          iVar12 = -1;
          if (piVar4 <= piVar3) goto LAB_140ce122b;
          piVar9 = piVar3;
          goto LAB_140ce1210;
        }
        break;
      }
      if (iVar2 < *piVar3) {
        iVar11 = iVar10 + -1;
      }
      else {
        iVar12 = iVar10 + 1;
      }
    } while (iVar12 <= iVar11);
  }
  goto switchD_140ce1256_default;
  while (piVar9 = piVar9 + 1, iVar12 = -1, piVar9 < piVar4) {
LAB_140ce1210:
    uVar6 = uVar6 - *(int *)((*(longlong *)(lVar7 + 0x40) - (longlong)piVar3) + (longlong)piVar9);
    if ((int)uVar6 < 1) {
      iVar12 = *piVar9;
      if (iVar12 != -1) goto LAB_140ce123d;
      break;
    }
  }
LAB_140ce122b:
  if ((longlong)piVar4 - (longlong)piVar3 >> 2 != 0) {
    iVar12 = *piVar3;
  }
LAB_140ce123d:
  switch(iVar12) {
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
switchD_140ce1256_default:
  plVar1 = puVar13 + 3;
  if (iVar5 < (int)(puVar13[4] - *plVar1 >> 2)) {
    FUN_1400508e0(plVar1,&local_res18,*plVar1 + (longlong)iVar5 * 4);
  }
  else {
    FUN_14000bc60(plVar1,local_res10);
  }
  return local_res10[0];
}

