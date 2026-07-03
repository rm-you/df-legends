// FUN_140566990 @ 140566990
// callees:
//   -> 14000bae0 FUN_14000bae0
//   -> 140050640 FUN_140050640


void FUN_140566990(int *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar9;
  int *local_res8;
  undefined1 local_res10 [8];
  ulonglong uVar8;
  
  lVar6 = *param_2;
  iVar9 = (int)(param_2[1] - lVar6 >> 3);
  local_res8 = param_1;
  if (iVar9 == 0) {
LAB_1405669b0:
    FUN_14000bae0(param_2,&local_res8);
    return;
  }
  iVar1 = *param_1;
  iVar5 = iVar9 + -1;
  if (**(int **)(lVar6 + (longlong)iVar5 * 8) < iVar1) goto LAB_1405669b0;
  iVar4 = 0;
  if (iVar5 < 0) {
LAB_140566a73:
    uVar8 = (longlong)iVar4 * 8;
    iVar2 = **(int **)(uVar8 + lVar6);
    iVar3 = iVar2 - iVar1;
    if (iVar2 < iVar1) {
LAB_140566a58:
      if (iVar9 <= iVar4 + 1) {
        return;
      }
      lVar6 = lVar6 + (longlong)(iVar4 + 1) * 8;
      goto LAB_140566a90;
    }
  }
  else {
    do {
      uVar7 = iVar5 + iVar4 >> 1;
      uVar8 = (ulonglong)uVar7;
      iVar2 = **(int **)(lVar6 + (longlong)(int)uVar7 * 8);
      if (iVar2 == iVar1) {
        return;
      }
      if (iVar4 == iVar5) {
        if (iVar2 < iVar1) goto LAB_140566a58;
        if (iVar2 <= iVar1) {
          return;
        }
        lVar6 = lVar6 + (longlong)iVar4 * 8;
        goto LAB_140566a90;
      }
      if (iVar1 < iVar2) {
        iVar5 = uVar7 - 1;
      }
      else {
        iVar4 = uVar7 + 1;
      }
    } while (iVar4 <= iVar5);
    if (iVar5 < 0) goto LAB_140566a73;
    if (iVar9 <= iVar5) {
      return;
    }
    uVar8 = (longlong)iVar5 * 8;
    iVar2 = **(int **)(uVar8 + lVar6);
    iVar3 = iVar2 - iVar1;
    if (iVar2 < iVar1) {
      if (iVar9 <= iVar5 + 1) {
        return;
      }
      lVar6 = lVar6 + (longlong)(iVar5 + 1) * 8;
      goto LAB_140566a90;
    }
  }
  if (iVar2 == iVar1 || SBORROW4(iVar2,iVar1) != iVar3 < 0) {
    return;
  }
  lVar6 = uVar8 + lVar6;
LAB_140566a90:
  FUN_140050640(param_2,local_res10,lVar6,uVar8,&local_res8);
  return;
}

