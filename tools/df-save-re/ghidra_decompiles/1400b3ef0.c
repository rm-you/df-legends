// FUN_1400b3ef0 @ 1400b3ef0
// callees:
//   -> 14000bae0 FUN_14000bae0
//   -> 140050640 FUN_140050640


ulonglong FUN_1400b3ef0(int *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int *local_res8;
  undefined1 local_res10 [8];
  
  lVar9 = *param_2;
  uVar7 = param_2[1] - lVar9 >> 3;
  iVar6 = (int)uVar7;
  local_res8 = param_1;
  if (iVar6 == 0) {
    FUN_14000bae0(param_2,&local_res8);
    return 1;
  }
  iVar2 = *param_1;
  uVar5 = iVar6 - 1;
  if (**(int **)(lVar9 + (longlong)(int)uVar5 * 8) < iVar2) {
    FUN_14000bae0(param_2,&local_res8);
    return uVar7 & 0xffffffff;
  }
  uVar8 = 0;
  if (-1 < (int)uVar5) {
    do {
      iVar4 = (int)(uVar5 + uVar8) >> 1;
      iVar3 = **(int **)(lVar9 + (longlong)iVar4 * 8);
      if (iVar3 == iVar2) {
        return 0xffffffff;
      }
      if (uVar8 == uVar5) {
        if (iVar3 < iVar2) goto LAB_1400b402b;
        if (iVar3 <= iVar2) {
          return 0xffffffff;
        }
        lVar9 = lVar9 + (longlong)(int)uVar8 * 8;
        goto LAB_1400b4040;
      }
      if (iVar2 < iVar3) {
        uVar5 = iVar4 - 1;
      }
      else {
        uVar8 = iVar4 + 1;
      }
    } while ((int)uVar8 <= (int)uVar5);
    if (-1 < (int)uVar5) {
      if (iVar6 <= (int)uVar5) {
        return 0xffffffff;
      }
      lVar1 = (longlong)(int)uVar5 * 8;
      if (**(int **)(lVar1 + lVar9) < iVar2) {
        uVar5 = uVar5 + 1;
        if (iVar6 <= (int)uVar5) {
          return 0xffffffff;
        }
        lVar1 = (longlong)(int)uVar5 * 8;
      }
      else if (**(int **)(lVar1 + lVar9) <= iVar2) {
        return 0xffffffff;
      }
      FUN_140050640(param_2,local_res10,lVar9 + lVar1,param_2,&local_res8);
      return (ulonglong)uVar5;
    }
  }
  iVar3 = **(int **)((longlong)(int)uVar8 * 8 + lVar9);
  if (iVar3 < iVar2) {
LAB_1400b402b:
    uVar8 = uVar8 + 1;
    if ((int)uVar8 < iVar6) {
      lVar9 = lVar9 + (longlong)(int)uVar8 * 8;
LAB_1400b4040:
      FUN_140050640(param_2,local_res10,lVar9,param_2,&local_res8);
      return (ulonglong)uVar8;
    }
  }
  else if (iVar2 < iVar3) {
    lVar9 = (longlong)(int)uVar8 * 8 + lVar9;
    goto LAB_1400b4040;
  }
  return 0xffffffff;
}

