// FUN_140d9e600 @ 140d9e600
// callees:
//   -> 1400048f0 FUN_1400048f0
//   -> 140004830 FUN_140004830
//   -> 14013b610 FUN_14013b610


undefined1 * FUN_140d9e600(longlong param_1,short param_2,short param_3,short param_4,char param_5)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  if ((((param_2 < 0) || (param_3 < 0)) ||
      (iVar9 = (int)param_2, *(int *)(param_1 + 0x1160e4) <= iVar9)) ||
     (((iVar10 = (int)param_3, *(int *)(param_1 + 0x1160e8) <= iVar10 || (param_4 < 0)) ||
      (iVar11 = (int)param_4, *(int *)(param_1 + 0x1160ec) <= iVar11)))) {
    return &stack0x00000000;
  }
  if ((param_5 != '\0') && (uVar5 = FUN_1400048f0(), (uVar5 & 7) != 0)) {
    uVar8 = 0;
    uVar5 = uVar8;
    uVar12 = uVar8;
    if (*(longlong *)(param_1 + 0x1cab8) - *(longlong *)(param_1 + 0x1cab0) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x1cab0);
        plVar2 = *(longlong **)(lVar1 + uVar12);
        if (((((int)plVar2[1] <= iVar9) && (iVar9 <= *(int *)((longlong)plVar2 + 0x14))) &&
            (*(int *)((longlong)plVar2 + 0xc) <= iVar10)) &&
           (((iVar10 <= (int)plVar2[3] && ((int)plVar2[4] == iVar11)) &&
            (iVar4 = (**(code **)(*plVar2 + 0x128))(),
            *(short *)(*(longlong *)(lVar1 + uVar12) + 0x150) == iVar4)))) {
          return (undefined1 *)0x2;
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar12 = uVar12 + 8;
      } while ((ulonglong)(longlong)(int)uVar7 <
               (ulonglong)(*(longlong *)(param_1 + 0x1cab8) - *(longlong *)(param_1 + 0x1cab0) >> 3)
              );
    }
    uVar5 = uVar8;
    uVar12 = uVar8;
    if (*(longlong *)(param_1 + 0x1cb60) - *(longlong *)(param_1 + 0x1cb58) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x1cb58);
        plVar2 = *(longlong **)(lVar1 + uVar12);
        if ((((int)plVar2[1] <= iVar9) && (iVar9 <= *(int *)((longlong)plVar2 + 0x14))) &&
           ((*(int *)((longlong)plVar2 + 0xc) <= iVar10 &&
            (((iVar10 <= (int)plVar2[3] && ((int)plVar2[4] == iVar11)) &&
             (iVar4 = (**(code **)(*plVar2 + 0x128))(),
             *(short *)(*(longlong *)(lVar1 + uVar12) + 0x150) == iVar4)))))) {
          return (undefined1 *)0x2;
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar12 = uVar12 + 8;
      } while ((ulonglong)(longlong)(int)uVar7 <
               (ulonglong)(*(longlong *)(param_1 + 0x1cb60) - *(longlong *)(param_1 + 0x1cb58) >> 3)
              );
    }
    uVar5 = uVar8;
    if (*(longlong *)(param_1 + 0x1cad0) - *(longlong *)(param_1 + 0x1cac8) >> 3 != 0) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x1cac8);
        plVar2 = *(longlong **)(lVar1 + uVar8);
        if ((((int)plVar2[1] <= iVar9) && (iVar9 <= *(int *)((longlong)plVar2 + 0x14))) &&
           (((*(int *)((longlong)plVar2 + 0xc) <= iVar10 &&
             ((iVar10 <= (int)plVar2[3] && ((int)plVar2[4] == iVar11)))) &&
            (iVar4 = (**(code **)(*plVar2 + 0x128))(),
            *(short *)(*(longlong *)(lVar1 + uVar8) + 0x150) == iVar4)))) {
          return (undefined1 *)0x2;
        }
        uVar7 = (int)uVar5 + 1;
        uVar8 = uVar8 + 8;
        uVar5 = (ulonglong)uVar7;
      } while ((ulonglong)(longlong)(int)uVar7 <
               (ulonglong)(*(longlong *)(param_1 + 0x1cad0) - *(longlong *)(param_1 + 0x1cac8) >> 3)
              );
    }
  }
  uVar3 = FUN_140004830(param_1,param_2);
  uVar7 = (uint)uVar3;
  if (uVar7 < 0x165) {
    if (uVar7 == 0x164) {
      return (undefined1 *)0x1;
    }
    if (uVar7 == 0x41) {
      return (undefined1 *)0x1;
    }
    if (uVar7 - 0x142 < 2) {
      return (undefined1 *)0x1;
    }
  }
  else {
    if (uVar7 == 0x1b0) {
      return (undefined1 *)0x1;
    }
    if (uVar7 == 0x1ea) {
      return (undefined1 *)0x1;
    }
  }
  if ((((uVar3 != 0x53) && (3 < uVar7 - 0x4f)) && (uVar3 != 0x1eb)) &&
     (puVar6 = (undefined1 *)FUN_14013b610(uVar3), (char)puVar6 == '\0')) {
    return puVar6;
  }
  return (undefined1 *)0x1;
}

