// FUN_140df9c50 @ 140df9c50
// callees:


void FUN_140df9c50(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  short *psVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined2 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  int *piVar25;
  longlong lVar26;
  
  plVar7 = (longlong *)param_2[2];
  lVar8 = *param_2;
  lVar9 = param_2[1];
  lVar26 = *plVar7;
  iVar23 = 0;
  lVar24 = plVar7[1];
  lVar10 = plVar7[2];
  iVar6 = (int)plVar7[3];
  uVar22 = (ulonglong)iVar6;
  puVar20 = (undefined2 *)(param_1 + 0xb88);
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  *(undefined2 *)
   (lVar8 + 2 + (longlong)*(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) * 4)
       = 0;
  iVar12 = *(int *)(param_1 + 0x14a0) + 1;
  lVar15 = (longlong)iVar12;
  if (lVar15 < 0x23d) {
    lVar18 = 0x23d - lVar15;
    iVar17 = (int)lVar18;
    piVar25 = (int *)(param_1 + 0xba8 + lVar15 * 4);
    do {
      iVar5 = *piVar25;
      lVar15 = (longlong)iVar5 * 4;
      iVar13 = *(ushort *)(lVar8 + 2 + (ulonglong)*(ushort *)(lVar15 + 2 + lVar8) * 4) + 1;
      if (iVar6 < iVar13) {
        iVar23 = iVar23 + 1;
        iVar13 = iVar6;
      }
      *(short *)(lVar15 + 2 + lVar8) = (short)iVar13;
      if (iVar5 <= (int)lVar9) {
        iVar19 = 0;
        psVar2 = (short *)(param_1 + 0xb88 + (longlong)iVar13 * 2);
        *psVar2 = *psVar2 + 1;
        if ((int)lVar10 <= iVar5) {
          iVar19 = *(int *)(lVar24 + (longlong)(iVar5 - (int)lVar10) * 4);
        }
        uVar3 = *(ushort *)(lVar15 + lVar8);
        *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + (iVar19 + iVar13) * (uint)uVar3;
        if (lVar26 != 0) {
          *(int *)(param_1 + 0x1704) =
               *(int *)(param_1 + 0x1704) +
               ((uint)*(ushort *)(lVar15 + 2 + lVar26) + iVar19) * (uint)uVar3;
        }
      }
      piVar25 = piVar25 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (iVar23 != 0) {
      do {
        uVar16 = (ulonglong)(int)(iVar6 - 1U);
        sVar4 = *(short *)(param_1 + 0xb88 + uVar16 * 2);
        uVar14 = iVar6 - 1U;
        while (sVar4 == 0) {
          uVar14 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar14;
          sVar4 = *(short *)(param_1 + 0xb88 + (longlong)(int)uVar14 * 2);
        }
        iVar23 = iVar23 + -2;
        psVar2 = (short *)(param_1 + 0xb88 + (longlong)(int)uVar14 * 2);
        *psVar2 = *psVar2 + -1;
        psVar2 = (short *)(param_1 + 0xb88 + (longlong)(int)(uVar14 + 1) * 2);
        *psVar2 = *psVar2 + 2;
        psVar2 = (short *)(param_1 + uVar22 * 2 + 0xb88);
        *psVar2 = *psVar2 + -1;
      } while (0 < iVar23);
      if (iVar6 != 0) {
        lVar26 = (longlong)(iVar12 + iVar17);
        do {
          uVar21 = (uint)uVar22;
          uVar3 = *(ushort *)(param_1 + 0xb88 + (longlong)(int)uVar21 * 2);
          uVar14 = (uint)uVar3;
          if (uVar3 != 0) {
            lVar24 = param_1 + 0xba8 + lVar26 * 4;
            do {
              iVar6 = *(int *)(lVar24 + -4);
              lVar24 = lVar24 + -4;
              lVar26 = lVar26 + -1;
              if (iVar6 <= (int)lVar9) {
                puVar1 = (ushort *)(lVar8 + (longlong)iVar6 * 4);
                uVar11 = (uint)*(ushort *)(lVar8 + 2 + (longlong)iVar6 * 4);
                if (uVar11 != uVar21) {
                  *(int *)(param_1 + 0x1700) =
                       *(int *)(param_1 + 0x1700) + (uVar21 - uVar11) * (uint)*puVar1;
                  puVar1[1] = (ushort)uVar22;
                }
                uVar14 = uVar14 - 1;
              }
            } while (uVar14 != 0);
          }
          uVar22 = (ulonglong)(uVar21 - 1);
        } while (uVar21 - 1 != 0);
      }
    }
  }
  return;
}

