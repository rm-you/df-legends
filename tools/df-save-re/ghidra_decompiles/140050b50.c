// FUN_140050b50 @ 140050b50
// callees:
//   -> 14000bc60 FUN_14000bc60
//   -> 14000c390 FUN_14000c390
//   -> 1400508e0 FUN_1400508e0


ulonglong FUN_140050b50(int param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  piVar2 = (int *)param_2[1];
  piVar7 = (int *)*param_2;
  uVar9 = (longlong)piVar2 - (longlong)piVar7 >> 2;
  iVar8 = (int)uVar9;
  local_res8[0] = param_1;
  if (iVar8 == 0) {
    FUN_14000bc60(param_2,local_res8);
    return 0;
  }
  uVar5 = iVar8 - 1;
  if (piVar7[(int)uVar5] < param_1) {
    if ((local_res8 < piVar2) && (piVar7 <= local_res8)) {
      if (piVar2 == (int *)param_2[2]) {
        FUN_14000c390(param_2,1);
      }
      if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
        *(undefined4 *)param_2[1] =
             *(undefined4 *)(*param_2 + ((longlong)local_res8 - (longlong)piVar7 >> 2) * 4);
        param_2[1] = param_2[1] + 4;
        return uVar9 & 0xffffffff;
      }
    }
    else {
      if (piVar2 == (int *)param_2[2]) {
        FUN_14000c390(param_2,1);
      }
      if ((int *)param_2[1] != (int *)0x0) {
        *(int *)param_2[1] = param_1;
      }
    }
    param_2[1] = param_2[1] + 4;
    return uVar9 & 0xffffffff;
  }
  uVar6 = 0;
  if (-1 < (int)uVar5) {
    do {
      iVar4 = (int)(uVar5 + uVar6) >> 1;
      iVar1 = piVar7[iVar4];
      if (iVar1 == param_1) {
        return 0xffffffff;
      }
      if (uVar6 == uVar5) {
        if (iVar1 < param_1) goto LAB_140050ce1;
        if (iVar1 <= param_1) {
          return 0xffffffff;
        }
        piVar7 = piVar7 + (int)uVar6;
        goto LAB_140050cf7;
      }
      if (param_1 < iVar1) {
        uVar5 = iVar4 - 1;
      }
      else {
        uVar6 = iVar4 + 1;
      }
    } while ((int)uVar6 <= (int)uVar5);
    if (-1 < (int)uVar5) {
      if (iVar8 <= (int)uVar5) {
        return 0xffffffff;
      }
      lVar3 = (longlong)(int)uVar5;
      if (piVar7[lVar3] < param_1) {
        uVar5 = uVar5 + 1;
        if (iVar8 <= (int)uVar5) {
          return 0xffffffff;
        }
        lVar3 = (longlong)(int)uVar5;
      }
      else if (piVar7[lVar3] <= param_1) {
        return 0xffffffff;
      }
      FUN_1400508e0(param_2,local_res10,piVar7 + lVar3,param_4,local_res8);
      return (ulonglong)uVar5;
    }
  }
  if (piVar7[(int)uVar6] < param_1) {
LAB_140050ce1:
    uVar6 = uVar6 + 1;
    if ((int)uVar6 < iVar8) {
      piVar7 = piVar7 + (int)uVar6;
LAB_140050cf7:
      FUN_1400508e0(param_2,local_res10,piVar7,param_4,local_res8);
      return (ulonglong)uVar6;
    }
  }
  else if (param_1 < piVar7[(int)uVar6]) {
    piVar7 = piVar7 + (int)uVar6;
    goto LAB_140050cf7;
  }
  return 0xffffffff;
}

