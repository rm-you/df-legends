// FUN_140c808b0 @ 140c808b0
// callees:
//   -> 140073a50 FUN_140073a50
//   -> 140c7e4b0 FUN_140c7e4b0
//   -> 1402bc6f0 FUN_1402bc6f0
//   -> 14000d840 FUN_14000d840
//   -> 14000f020 FUN_14000f020


undefined8 FUN_140c808b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  uint *puVar21;
  short sVar22;
  int iVar23;
  
  if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x6a8) < 1) && (cVar17 = FUN_140073a50(), cVar17 != '\0')) {
    return 1;
  }
  FUN_140c7e4b0();
  lVar18 = *(longlong *)(param_1 + 0xd60);
  if (lVar18 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x5d8);
    cVar17 = FUN_1402bc6f0();
    if (cVar17 == '\0') {
      return 1;
    }
    iVar20 = 0;
    sVar22 = (short)((longlong)
                     (ulonglong)(uint)(*(int *)(param_1 + 0x4d8) - *(int *)(param_1 + 0x4d0)) >> 2)
             + -1;
    iVar23 = iVar20;
    if (-1 < sVar22) {
      uVar19 = (ulonglong)sVar22;
      puVar21 = (uint *)(*(longlong *)(param_1 + 0x4d0) + uVar19 * 4);
      do {
        if (((*puVar21 & 0x200002) == 0) && (-1 < sVar22)) {
          if ((uVar19 < (ulonglong)(plVar1[1] - *plVar1 >> 3)) &&
             (cVar17 = FUN_14000d840(), cVar17 != '\0')) {
            iVar20 = iVar20 + 1;
          }
          if (((-1 < sVar22) && (uVar19 < (ulonglong)(plVar1[1] - *plVar1 >> 3))) &&
             (cVar17 = FUN_14000d840(), cVar17 != '\0')) {
            iVar23 = iVar23 + 1;
          }
        }
        uVar19 = uVar19 - 1;
        puVar21 = puVar21 + -1;
        sVar22 = sVar22 + -1;
      } while (-1 < sVar22);
      if (0 < iVar20) {
        return 0;
      }
    }
    if (0 < *(int *)(lVar18 + 0x40)) {
      return 1;
    }
    if (iVar23 < *(int *)(lVar18 + 0x44)) {
      return 1;
    }
  }
  bVar15 = false;
  bVar12 = false;
  bVar4 = false;
  bVar3 = false;
  bVar9 = false;
  bVar6 = false;
  bVar5 = false;
  bVar11 = false;
  bVar7 = false;
  bVar14 = false;
  bVar8 = false;
  bVar16 = false;
  sVar22 = (short)((longlong)
                   (ulonglong)(uint)(*(int *)(param_1 + 0x4d8) - *(int *)(param_1 + 0x4d0)) >> 2) +
           -1;
  bVar10 = false;
  bVar13 = false;
  if (-1 < sVar22) {
    plVar1 = *(longlong **)(param_1 + 0x5d8);
    uVar19 = (ulonglong)sVar22;
    lVar18 = *plVar1;
    do {
      bVar2 = false;
      if ((*(short *)(*(longlong *)(lVar18 + uVar19 * 8) + 0x40) == -1) &&
         (bVar2 = true, (*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar19 * 4) & 0x200006) == 0)) {
        bVar7 = true;
      }
      if (-1 < sVar22) {
        bVar12 = bVar13;
        if ((uVar19 < (ulonglong)(plVar1[1] - *plVar1 >> 3)) &&
           (cVar17 = FUN_14000d840(*(longlong *)(*plVar1 + uVar19 * 8) + 0x48,1), cVar17 != '\0')) {
          if (!bVar2) {
            bVar8 = true;
          }
          bVar11 = true;
          if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar19 * 4) & 0x200002) == 0) {
            bVar12 = true;
          }
        }
        if ((uVar19 < (ulonglong)(plVar1[1] - *plVar1 >> 3)) &&
           (cVar17 = FUN_14000d840(*(longlong *)(*plVar1 + uVar19 * 8) + 0x48,0), cVar17 != '\0')) {
          if (!bVar2) {
            bVar8 = true;
          }
          bVar9 = true;
          if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar19 * 4) & 0x200002) == 0) {
            bVar10 = true;
          }
        }
        if ((uVar19 < (ulonglong)(plVar1[1] - *plVar1 >> 3)) &&
           (cVar17 = FUN_14000d840(*(longlong *)(*plVar1 + uVar19 * 8) + 0x48,2), cVar17 != '\0')) {
          if (!bVar2) {
            bVar8 = true;
          }
          bVar14 = true;
          bVar3 = bVar4;
          if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar19 * 4) & 0x200002) == 0) {
            bVar3 = true;
            bVar4 = bVar3;
          }
        }
        bVar13 = bVar12;
        bVar15 = bVar16;
        if (((uVar19 < (ulonglong)(plVar1[1] - *plVar1 >> 3)) &&
            (cVar17 = FUN_14000d840(*(longlong *)(*plVar1 + uVar19 * 8) + 0x48,0x10), cVar17 != '\0'
            )) && (cVar17 = FUN_14000f020(param_1), cVar17 != '\0')) {
          if (!bVar2) {
            bVar8 = true;
          }
          bVar16 = true;
          bVar5 = bVar6;
          bVar15 = true;
          if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar19 * 4) & 0x200006) == 0) {
            bVar5 = true;
            bVar6 = bVar5;
          }
        }
      }
      lVar18 = *plVar1;
      uVar19 = uVar19 - 1;
      sVar22 = sVar22 + -1;
    } while (-1 < sVar22);
    if ((((((!bVar9) || (bVar10)) && ((!bVar11 || (bVar12)))) && ((!bVar14 || (bVar3)))) &&
        ((!bVar15 || (bVar5)))) && ((bVar7 || (bVar8)))) {
      return 0;
    }
  }
  return 1;
}

