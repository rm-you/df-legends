// FUN_1409fc0c0 @ 1409fc0c0
// callees:


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1409fc0c0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar4 = _DAT_140f92f60;
  auVar3 = _DAT_140f92f40;
  auVar2 = _DAT_140f92f10;
  auVar1 = _DAT_140f92cf0;
  lVar7 = (longlong)DAT_141582920;
  lVar5 = lVar7 * 0x9c0;
  puVar6 = &DAT_141678230 + lVar7 * 0x270;
  iVar12 = *(int *)(&DAT_14155b2a0 + lVar7 * 4);
  if (iVar12 == 0x9c0) {
    iVar12 = 0;
    iVar13 = iVar12;
    if (1 < DAT_1410b5018) {
      lVar9 = 0x1c;
      iVar13 = 0xe0;
      pauVar8 = (undefined1 (*) [16])(&DAT_141678864 + lVar5);
      do {
        auVar15 = pauVar8[-99] & auVar2 | *(undefined1 (*) [16])(pauVar8[-100] + 0xc) & auVar3;
        auVar14 = pmulld(auVar15 & auVar1,auVar4);
        auVar16._0_4_ = auVar15._0_4_ >> 1;
        auVar16._4_4_ = auVar15._4_4_ >> 1;
        auVar16._8_4_ = auVar15._8_4_ >> 1;
        auVar16._12_4_ = auVar15._12_4_ >> 1;
        *(undefined1 (*) [16])(pauVar8[-100] + 0xc) = auVar14 ^ *pauVar8 ^ auVar16;
        auVar15 = pauVar8[-0x62] & auVar2 | *(undefined1 (*) [16])(pauVar8[-99] + 0xc) & auVar3;
        auVar14 = pmulld(auVar15 & auVar1,auVar4);
        auVar17._0_4_ = auVar15._0_4_ >> 1;
        auVar17._4_4_ = auVar15._4_4_ >> 1;
        auVar17._8_4_ = auVar15._8_4_ >> 1;
        auVar17._12_4_ = auVar15._12_4_ >> 1;
        *(undefined1 (*) [16])(pauVar8[-99] + 0xc) = auVar14 ^ pauVar8[1] ^ auVar17;
        lVar9 = lVar9 + -1;
        pauVar8 = pauVar8 + 2;
      } while (lVar9 != 0);
    }
    uVar11 = (ulonglong)iVar13;
    if (uVar11 < 0xe3) {
      iVar13 = 0xe3;
      do {
        uVar10 = ((&DAT_141678234)[lVar7 * 0x270 + uVar11] ^ puVar6[uVar11]) & 0x7fffffff ^
                 puVar6[uVar11];
        puVar6[uVar11] =
             (uVar10 & 1) * -0x66f74f21 ^ uVar10 >> 1 ^
             *(uint *)(&DAT_141678864 + uVar11 * 4 + lVar5);
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < 0xe3);
    }
    uVar11 = (ulonglong)iVar13;
    if (uVar11 < 0x26f) {
      do {
        uVar10 = ((&DAT_141678234)[lVar7 * 0x270 + uVar11] ^ puVar6[uVar11]) & 0x7fffffff ^
                 puVar6[uVar11];
        puVar6[uVar11] =
             (uVar10 & 1) * -0x66f74f21 ^ uVar10 >> 1 ^
             *(uint *)(&DAT_141677ea4 + uVar11 * 4 + lVar5);
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < 0x26f);
    }
    uVar10 = (*(uint *)(&DAT_141678bec + lVar5) ^ *puVar6) & 0x7fffffff ^
             *(uint *)(&DAT_141678bec + lVar5);
    *(uint *)(&DAT_141678bec + lVar5) =
         (uVar10 & 1) * -0x66f74f21 ^ *(uint *)(&DAT_141678860 + lVar5) ^ uVar10 >> 1;
  }
  *(int *)(&DAT_14155b2a0 + lVar7 * 4) = iVar12 + 4;
  return *(undefined4 *)((longlong)iVar12 + (longlong)puVar6);
}

