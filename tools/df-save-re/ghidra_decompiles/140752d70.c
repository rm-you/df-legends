// FUN_140752d70 @ 140752d70
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020


undefined4 * FUN_140752d70(longlong param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  short sVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 *local_40;
  undefined4 *puStack_38;
  undefined4 *local_30;
  
  puVar16 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  puStack_38 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  sVar17 = 0;
  iVar5 = (int)(*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 3) + -1;
  lVar18 = (longlong)iVar5;
  puVar10 = (undefined4 *)0x0;
  puVar13 = (undefined4 *)0x0;
  puVar12 = puVar16;
  if (-1 < iVar5) {
    do {
      uVar4 = (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0xe8) + lVar18 * 8))();
      if ((uVar4 & 0xfff9) == 0) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar18 * 8);
        sVar1 = *(short *)(lVar15 + 0xc);
        bVar19 = sVar1 == sVar17;
        bVar3 = sVar17 <= sVar1;
        if (sVar17 < sVar1) {
          puVar10 = puVar13;
          sVar17 = sVar1;
          puStack_38 = puVar13;
        }
        if (!bVar19 && bVar3 || bVar19) {
          puVar14 = (undefined4 *)(lVar15 + 8);
          if ((puVar14 < puVar10) && (puVar13 <= puVar14)) {
            lVar15 = (longlong)puVar14 - (longlong)puVar13;
            if (puVar10 == puVar12) {
              FUN_14000c390(&local_40,1);
              puVar10 = puStack_38;
              puVar12 = local_30;
              puVar13 = local_40;
            }
            if (puVar10 != (undefined4 *)0x0) {
              uVar6 = puVar13[lVar15 >> 2];
LAB_140752e91:
              *puVar10 = uVar6;
            }
          }
          else {
            if (puVar10 == puVar12) {
              FUN_14000c390(&local_40,1);
              puVar10 = puStack_38;
              puVar12 = local_30;
              puVar13 = local_40;
            }
            if (puVar10 != (undefined4 *)0x0) {
              uVar6 = *puVar14;
              goto LAB_140752e91;
            }
          }
          puVar10 = puVar10 + 1;
          puStack_38 = puVar10;
        }
      }
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  uVar11 = (longlong)puVar10 - (longlong)puVar13 >> 2;
  puVar10 = puVar16;
  if (uVar11 != 0) {
    if ((uint)uVar11 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_1409fc0c0();
      uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              ((int)(0x7fffffff / (uVar11 & 0xffffffff)) + 1U);
    }
    iVar5 = puVar13[(int)uVar7];
    lVar18 = DAT_141c53720 - DAT_141c53718 >> 3;
    if (((lVar18 != 0) && (iVar5 != -1)) &&
       (iVar9 = (int)lVar18 + -1, puVar10 = (undefined4 *)0x0, -1 < iVar9)) {
      do {
        iVar8 = iVar9 + (int)puVar16 >> 1;
        puVar10 = *(undefined4 **)(DAT_141c53718 + (longlong)iVar8 * 8);
        iVar2 = puVar10[1];
        if (iVar2 == iVar5) break;
        if (iVar5 < iVar2) {
          iVar9 = iVar8 + -1;
        }
        else {
          puVar16 = (undefined4 *)(ulonglong)(iVar8 + 1);
        }
        puVar10 = (undefined4 *)0x0;
      } while ((int)puVar16 <= iVar9);
    }
  }
  if (puVar13 != (undefined4 *)0x0) {
    FUN_140002020(puVar13,(longlong)puVar12 - (longlong)puVar13 >> 2,4);
  }
  return puVar10;
}

