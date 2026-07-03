// FUN_14029aae0 @ 14029aae0
// callees:
//   -> 14029aa40 FUN_14029aa40
//   -> 1402cb870 FUN_1402cb870
//   -> 140d89d60 FUN_140d89d60


int FUN_14029aae0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  for (plVar9 = *(longlong **)(param_1 + 0x6d8); plVar9 < *(longlong **)(param_1 + 0x6e0);
      plVar9 = plVar9 + 1) {
    for (piVar5 = *(int **)(*plVar9 + 0x68); piVar5 < *(int **)(*plVar9 + 0x70); piVar5 = piVar5 + 1
        ) {
      if (*piVar5 == 0) goto LAB_14029ab37;
    }
  }
LAB_14029ab37:
  iVar2 = FUN_14029aa40(param_1 + 0x6c0,param_2,param_4,param_5,param_6);
  if ((int)param_2 == -1) {
    iVar4 = (int)((ulonglong)
                  ((longlong)
                   *(int *)(*(longlong *)(param_1 + 0x15a0) + -4 +
                           (*(longlong *)(param_1 + 0x15a8) - *(longlong *)(param_1 + 0x15a0) >> 2)
                           * 4) * 0x51eb851f) >> 0x20);
  }
  else {
    iVar3 = FUN_1402cb870(param_2 & 0xffffffff,param_1 + 0x15b8);
    iVar4 = 0;
    iVar7 = (int)(*(longlong *)(param_1 + 0x15a8) - *(longlong *)(param_1 + 0x15a0) >> 2);
    if ((iVar7 == 1) || (iVar7 + -1 <= iVar3)) {
      if (iVar7 <= iVar3) {
        iVar3 = iVar7 + -1;
      }
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x15a0) + (longlong)iVar3 * 4);
    }
    if ((-1 < iVar3) && (iVar3 < iVar7 + -1)) {
      if (iVar7 <= iVar3) {
        iVar3 = iVar7 + -1;
      }
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x15b8) + (longlong)iVar3 * 4);
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x15a0) + (longlong)iVar3 * 4);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x15b8) + (longlong)(iVar3 + 1) * 4);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x15a0) + (longlong)(iVar3 + 1) * 4);
      if ((iVar7 != iVar1) && (iVar4 != iVar3)) {
        lVar8 = (longlong)(iVar1 - iVar7);
        lVar6 = (longlong)((int)param_2 - iVar7);
        iVar4 = (int)(((lVar8 - lVar6) * (longlong)iVar4 + iVar3 * lVar6) / lVar8);
      }
    }
    iVar4 = (int)((ulonglong)((longlong)iVar4 * 0x51eb851f) >> 0x20);
  }
  iVar2 = iVar2 + ((iVar4 >> 4) - (iVar4 >> 0x1f));
  if ((*(int *)(param_1 + 0x4dc) != -1) &&
     (lVar6 = FUN_140d89d60(&DAT_141c53470,*(undefined2 *)(param_1 + 0x4dc),
                            *(undefined4 *)(param_1 + 0x4e0)), lVar6 != 0)) {
    iVar2 = iVar2 + *(int *)(lVar6 + 0x260) / 10000;
  }
  if ((2 < *(int *)(param_1 + 0x6b0)) && ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 2) & 8) != 0))
  {
    iVar2 = iVar2 + 5;
  }
  if ((3 < *(int *)(param_1 + 0x6b0)) && ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 3) & 1) != 0))
  {
    iVar2 = iVar2 + 10;
  }
  if ((7 < *(int *)(param_1 + 0x6b0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 7) & 0x80) != 0)) {
    iVar2 = iVar2 + 2;
  }
  if (8 < *(int *)(param_1 + 0x6b0)) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 8) & 1) != 0) {
      iVar2 = iVar2 + 2;
    }
    if (8 < *(int *)(param_1 + 0x6b0)) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 8) & 2) != 0) {
        iVar2 = iVar2 + 1;
      }
      if (8 < *(int *)(param_1 + 0x6b0)) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 8) & 4) != 0) {
          iVar2 = iVar2 + 1;
        }
        if (8 < *(int *)(param_1 + 0x6b0)) {
          if ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 8) & 8) != 0) {
            iVar2 = iVar2 + 1;
          }
          if ((8 < *(int *)(param_1 + 0x6b0)) &&
             ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 8) & 0x10) != 0)) {
            iVar2 = iVar2 + 1;
          }
        }
      }
    }
  }
  if ((4 < *(int *)(param_1 + 0x6b0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 4) & 0x80) != 0)) {
    iVar2 = iVar2 + 1;
  }
  if ((*(int *)(param_1 + 0x6b0) < 9) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 8) & 0x20) == 0)) {
    iVar2 = iVar2 + 2;
  }
  if ((8 < *(int *)(param_1 + 0x6b0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 8) & 0x40) != 0)) {
    iVar2 = iVar2 + 1;
  }
  if ((9 < *(int *)(param_1 + 0x6b0)) && ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 9) & 2) != 0))
  {
    iVar2 = iVar2 + 1;
  }
  if ((10 < *(int *)(param_1 + 0x6b0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 10) & 1) != 0)) {
    iVar2 = iVar2 + 1;
  }
  if ((0xd < *(int *)(param_1 + 0x6b0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 0xd) & 8) != 0)) {
    iVar2 = iVar2 + 1;
  }
  if ((0xb < *(int *)(param_1 + 0x6b0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 0xb) & 2) != 0)) {
    iVar2 = iVar2 + 1;
  }
  if ((5 < *(int *)(param_1 + 0x6b0)) && ((*(byte *)(*(longlong *)(param_1 + 0x6a8) + 5) & 4) != 0))
  {
    iVar2 = iVar2 + 2;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  return iVar2;
}

