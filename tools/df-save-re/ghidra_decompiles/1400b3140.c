// FUN_1400b3140 @ 1400b3140
// callees:
//   -> 14000bc60 FUN_14000bc60
//   -> 14000c390 FUN_14000c390
//   -> 1400508e0 FUN_1400508e0


ulonglong FUN_1400b3140(int param_1,ulonglong *param_2,undefined1 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  *param_3 = 0;
  piVar2 = (int *)param_2[1];
  piVar3 = (int *)*param_2;
  uVar9 = (longlong)piVar2 - (longlong)piVar3 >> 2;
  iVar8 = (int)uVar9;
  local_res8[0] = param_1;
  if (iVar8 == 0) {
    FUN_14000bc60(param_2,local_res8);
    return 0;
  }
  uVar6 = iVar8 - 1;
  if (piVar3[(int)uVar6] < param_1) {
    if ((local_res8 < piVar2) && (piVar3 <= local_res8)) {
      if (piVar2 == (int *)param_2[2]) {
        FUN_14000c390(param_2,1);
      }
      if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
        *(undefined4 *)param_2[1] =
             *(undefined4 *)(*param_2 + ((longlong)local_res8 - (longlong)piVar3 >> 2) * 4);
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
  uVar7 = 0;
  if (-1 < (int)uVar6) {
    do {
      uVar5 = (int)(uVar6 + uVar7) >> 1;
      iVar1 = piVar3[(int)uVar5];
      if (iVar1 == param_1) {
        *param_3 = 1;
        return (ulonglong)uVar5;
      }
      if (uVar7 == uVar6) {
        if (param_1 <= iVar1) {
          if (iVar1 <= param_1) {
            return 0xffffffff;
          }
          FUN_1400508e0(param_2,local_res10,piVar3 + (int)uVar7,param_3,local_res8);
          return (ulonglong)uVar7;
        }
        goto LAB_1400b331b;
      }
      if (param_1 < iVar1) {
        uVar6 = uVar5 - 1;
      }
      else {
        uVar7 = uVar5 + 1;
      }
    } while ((int)uVar7 <= (int)uVar6);
    if (-1 < (int)uVar6) {
      if (iVar8 <= (int)uVar6) {
        return 0xffffffff;
      }
      lVar4 = (longlong)(int)uVar6;
      iVar1 = piVar3[lVar4];
      if (iVar1 < param_1) {
        uVar6 = uVar6 + 1;
        if (iVar8 <= (int)uVar6) {
          return 0xffffffff;
        }
        lVar4 = (longlong)(int)uVar6;
      }
      else if (iVar1 <= param_1) {
        if (iVar1 != param_1) {
          return 0xffffffff;
        }
        *param_3 = 1;
        return (ulonglong)uVar6;
      }
      FUN_1400508e0(param_2,local_res10,piVar3 + lVar4,param_3,local_res8);
      return (ulonglong)uVar6;
    }
  }
  lVar4 = (longlong)(int)uVar7;
  iVar1 = piVar3[lVar4];
  if (iVar1 < param_1) {
LAB_1400b331b:
    uVar7 = uVar7 + 1;
    if ((int)uVar7 < iVar8) {
      lVar4 = (longlong)(int)uVar7;
LAB_1400b3331:
      FUN_1400508e0(param_2,local_res10,piVar3 + lVar4,param_3,local_res8);
      return (ulonglong)uVar7;
    }
  }
  else {
    if (param_1 < iVar1) goto LAB_1400b3331;
    if (iVar1 == param_1) {
      *param_3 = 1;
      return (ulonglong)uVar7;
    }
  }
  return 0xffffffff;
}

