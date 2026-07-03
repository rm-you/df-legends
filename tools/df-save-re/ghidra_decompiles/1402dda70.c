// FUN_1402dda70 @ 1402dda70
// callees:
//   -> 140d89d60 FUN_140d89d60
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020


void FUN_1402dda70(int *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_res10 [2];
  undefined8 uVar13;
  int *local_50;
  int *piStack_48;
  int *local_40;
  
  uVar13 = 0xfffffffffffffffe;
  local_50 = (int *)0x0;
  piStack_48 = (int *)0x0;
  piVar6 = (int *)0x0;
  local_40 = (int *)0x0;
  iVar11 = (int)(param_2[1] - *param_2 >> 1);
  piVar8 = (int *)0x0;
  piVar10 = (int *)0x0;
  iVar1 = -1;
  while (iVar11 = iVar11 + -1, local_res10[0] = iVar11, -1 < iVar11) {
    lVar5 = FUN_140d89d60(&DAT_141c53470,*(undefined2 *)(*param_2 + (longlong)iVar11 * 2),
                          *(undefined4 *)(*param_3 + (longlong)iVar11 * 4),param_4,uVar13);
    if (lVar5 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = *(int *)(lVar5 + 0x288);
    }
    piVar7 = piVar10;
    iVar12 = iVar3;
    piVar2 = piVar10;
    if (((iVar3 < iVar1) || (iVar1 == -1)) ||
       (piVar7 = piVar8, iVar12 = iVar1, piVar2 = piStack_48, iVar3 == iVar1)) {
      piStack_48 = piVar2;
      if ((local_res10 < piVar7) && (piVar10 <= local_res10)) {
        lVar5 = (longlong)local_res10 - (longlong)piVar10;
        if (piVar7 == piVar6) {
          FUN_14000c390(&local_50,1);
          piVar7 = piStack_48;
          piVar6 = local_40;
          piVar10 = local_50;
        }
        if (piVar7 != (int *)0x0) {
          *piVar7 = piVar10[lVar5 >> 2];
        }
      }
      else {
        if (piVar7 == piVar6) {
          FUN_14000c390(&local_50,1);
          piVar7 = piStack_48;
          piVar6 = local_40;
          piVar10 = local_50;
        }
        if (piVar7 != (int *)0x0) {
          *piVar7 = iVar11;
        }
      }
      piVar8 = piVar7 + 1;
      iVar1 = iVar12;
      piStack_48 = piVar8;
    }
  }
  uVar4 = 0;
  uVar9 = (longlong)piVar8 - (longlong)piVar10 >> 2;
  if (1 < (uint)uVar9) {
    uVar4 = FUN_1409fc0c0();
    uVar4 = (uVar4 + (int)((longlong)((ulonglong)uVar4 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
  }
  *param_1 = piVar10[(int)uVar4];
  if (piVar10 != (int *)0x0) {
    FUN_140002020(piVar10,(longlong)piVar6 - (longlong)piVar10 >> 2,4);
  }
  return;
}

