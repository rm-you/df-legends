// FUN_1402bc6f0 @ 1402bc6f0
// callees:
//   -> 14000d840 FUN_14000d840


ulonglong FUN_1402bc6f0(longlong *param_1,undefined8 *param_2)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
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
  bool bVar17;
  char cVar18;
  uint in_EAX;
  uint *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  short sVar25;
  uint local_60;
  
  local_60 = in_EAX & 0xffffff00;
  bVar6 = false;
  bVar15 = false;
  bVar12 = false;
  bVar7 = false;
  bVar10 = false;
  bVar17 = false;
  bVar9 = false;
  puVar3 = (uint *)*param_2;
  bVar5 = false;
  puVar19 = (uint *)(param_2[1] - (longlong)puVar3 >> 2);
  iVar24 = 0;
  bVar8 = false;
  sVar25 = (short)puVar19 + -1;
  bVar11 = false;
  bVar13 = false;
  if (-1 < sVar25) {
    uVar23 = (ulonglong)sVar25;
    puVar20 = puVar3 + uVar23;
    bVar14 = bVar15;
    bVar16 = bVar17;
    do {
      uVar2 = *puVar20;
      uVar22 = uVar2 >> 1;
      if (((uVar22 & 1) == 0) &&
         ((sVar1 = *(short *)(*(longlong *)(*param_1 + uVar23 * 8) + 0x40), sVar1 == -1 ||
          ((puVar3[sVar1] & 2) != 0)))) {
        iVar24 = iVar24 + 1;
      }
      if (-1 < sVar25) {
        lVar4 = *param_1;
        uVar21 = param_1[1] - lVar4 >> 3;
        bVar14 = bVar15;
        if (((uVar23 < uVar21) &&
            (cVar18 = FUN_14000d840(*(longlong *)(lVar4 + uVar23 * 8) + 0x48,0), cVar18 != '\0')) &&
           (bVar6 = true, (uVar22 & 1) == 0)) {
          if ((uVar2 >> 0x15 & 1) == 0) {
            bVar14 = true;
          }
          bVar9 = true;
        }
        if (((uVar23 < uVar21) &&
            (cVar18 = FUN_14000d840(*(longlong *)(lVar4 + uVar23 * 8) + 0x48,1), cVar18 != '\0')) &&
           ((uVar22 & 1) == 0)) {
          local_60 = local_60 & 0xff;
          if ((uVar2 >> 0x15 & 1) == 0) {
            local_60 = 1;
          }
          bVar12 = true;
        }
        bVar16 = bVar17;
        if (((uVar23 < uVar21) &&
            (cVar18 = FUN_14000d840(*(longlong *)(lVar4 + uVar23 * 8) + 0x48,2), cVar18 != '\0')) &&
           (((uVar22 & 1) == 0 && (bVar13 = true, (uVar2 >> 0x15 & 1) == 0)))) {
          bVar16 = true;
        }
        bVar7 = bVar8;
        bVar10 = bVar11;
        bVar15 = bVar14;
        bVar17 = bVar16;
        if ((uVar23 < uVar21) &&
           (cVar18 = FUN_14000d840(*(longlong *)(lVar4 + uVar23 * 8) + 0x48,9), cVar18 != '\0')) {
          bVar8 = true;
          bVar7 = bVar8;
          if ((uVar22 & 1) == 0) {
            bVar11 = true;
            bVar7 = true;
            bVar10 = true;
            if ((uVar2 >> 0x15 & 1) == 0) {
              bVar5 = true;
            }
          }
        }
      }
      puVar20 = puVar20 + -1;
      uVar23 = uVar23 - 1;
      sVar25 = sVar25 + -1;
    } while (-1 < sVar25);
    if (1 < iVar24) goto LAB_1402bc997;
    if ((bVar6) || (bVar7)) {
      if (!bVar9) {
        bVar14 = bVar10;
      }
      puVar20 = (uint *)0x0;
      if (((!bVar14) ||
          ((puVar19 = (uint *)0x0, bVar12 &&
           (puVar19 = (uint *)(ulonglong)local_60, puVar20 = puVar19, (char)local_60 == '\0')))) ||
         ((bVar13 && (puVar20 = puVar19, !bVar16)))) goto LAB_1402bc997;
      if (((bVar10) && (!bVar5)) && (!bVar9)) {
        return (ulonglong)puVar19 & 0xffffffffffffff00;
      }
      goto LAB_1402bc9fc;
    }
  }
  if ((puVar19 == (uint *)0x0) || (puVar20 = puVar19, (*puVar3 & 0x200002) == 0)) {
LAB_1402bc9fc:
    return CONCAT71((int7)((ulonglong)puVar19 >> 8),1);
  }
LAB_1402bc997:
  return (ulonglong)puVar20 & 0xffffffffffffff00;
}

