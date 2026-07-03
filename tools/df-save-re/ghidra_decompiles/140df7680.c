// FUN_140df7680 @ 140df7680
// callees:


void FUN_140df7680(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  byte *pbVar28;
  int local_68;
  
  puVar6 = (undefined4 *)param_1[5];
  pbVar15 = (byte *)(*param_1 + -1);
  lVar9 = param_1[3];
  puVar18 = (undefined1 *)(param_1[2] + -1);
  lVar17 = *(longlong *)(puVar6 + 0x16);
  lVar7 = *(longlong *)(puVar6 + 0x18);
  pbVar28 = pbVar15 + ((int)param_1[1] - 5);
  uVar2 = puVar6[0xd];
  uVar14 = puVar6[0x10];
  uVar3 = puVar6[0x1a];
  uVar25 = puVar6[0x11];
  local_68 = (int)puVar18 - (param_2 - (int)lVar9);
  iVar27 = puVar6[0xb];
  uVar4 = puVar6[0xc];
  lVar8 = *(longlong *)(puVar6 + 0xe);
  uVar5 = puVar6[0x1b];
  puVar20 = puVar18;
LAB_140df7740:
  if (uVar25 < 0xf) {
    pbVar16 = pbVar15 + 1;
    pbVar15 = pbVar15 + 2;
    uVar14 = uVar14 + ((uint)*pbVar16 << ((byte)uVar25 & 0x1f)) +
             ((uint)*pbVar15 << ((byte)uVar25 + 8 & 0x1f));
    uVar25 = uVar25 + 0x10;
  }
  uVar13 = *(uint *)(lVar17 + (ulonglong)(uVar14 & (1 << ((byte)uVar3 & 0x1f)) - 1U) * 4);
  uVar14 = uVar14 >> ((byte)(uVar13 >> 8) & 0x1f);
  uVar25 = uVar25 - (uVar13 >> 8 & 0xff);
  cVar23 = (char)uVar13;
  while (cVar23 != '\0') {
    puVar19 = puVar20;
    if ((uVar13 & 0x10) != 0) {
      uVar24 = uVar13 >> 0x10;
      uVar13 = uVar13 & 0xf;
      pbVar16 = pbVar15;
      if (uVar13 != 0) {
        if (uVar25 < uVar13) {
          pbVar16 = pbVar15 + 1;
          pbVar15 = pbVar15 + 1;
          uVar14 = uVar14 + ((uint)*pbVar16 << ((byte)uVar25 & 0x1f));
          uVar25 = uVar25 + 8;
        }
        uVar10 = (1 << (sbyte)uVar13) - 1U & uVar14;
        uVar14 = uVar14 >> (sbyte)uVar13;
        uVar24 = uVar24 + uVar10;
        uVar25 = uVar25 - uVar13;
        pbVar16 = pbVar15;
      }
      if (uVar25 < 0xf) {
        pbVar15 = pbVar16 + 1;
        pbVar16 = pbVar16 + 2;
        uVar14 = uVar14 + ((uint)*pbVar15 << ((byte)uVar25 & 0x1f)) +
                 ((uint)*pbVar16 << ((byte)uVar25 + 8 & 0x1f));
        uVar25 = uVar25 + 0x10;
      }
      uVar13 = *(uint *)(lVar7 + (ulonglong)((1 << ((byte)uVar5 & 0x1f)) - 1U & uVar14) * 4);
      uVar14 = uVar14 >> ((byte)(uVar13 >> 8) & 0x1f);
      uVar25 = uVar25 - (uVar13 >> 8 & 0xff);
      uVar10 = uVar13 & 0xff;
      if ((uVar13 & 0x10) == 0) goto LAB_140df7850;
      goto LAB_140df7885;
    }
    if ((uVar13 & 0x40) != 0) {
      if ((uVar13 & 0x20) == 0) {
        param_1[4] = (longlong)"invalid literal/length code";
        *puVar6 = 0x1d;
      }
      else {
        *puVar6 = 0xb;
      }
      goto LAB_140df7af3;
    }
    uVar13 = *(uint *)(lVar17 + (ulonglong)
                                (((1 << ((byte)uVar13 & 0x1f)) - 1U & uVar14) + (uVar13 >> 0x10)) *
                                4);
    uVar14 = uVar14 >> ((byte)(uVar13 >> 8) & 0x1f);
    uVar25 = uVar25 - (uVar13 >> 8 & 0xff);
    cVar23 = (char)uVar13;
  }
  puVar20[1] = (char)(uVar13 >> 0x10);
  puVar19 = puVar20 + 1;
  goto LAB_140df7a85;
  while( true ) {
    uVar13 = *(uint *)(lVar7 + (ulonglong)
                               (((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar14) + (uVar13 >> 0x10)) * 4
                      );
    uVar14 = uVar14 >> ((byte)(uVar13 >> 8) & 0x1f);
    uVar25 = uVar25 - (uVar13 >> 8 & 0xff);
    uVar10 = uVar13 & 0xff;
    if ((uVar13 & 0x10) != 0) break;
LAB_140df7850:
    if ((uVar10 & 0x40) != 0) {
      pcVar11 = "invalid distance code";
      goto LAB_140df7acc;
    }
  }
LAB_140df7885:
  uVar10 = uVar10 & 0xf;
  pbVar15 = pbVar16;
  uVar26 = uVar25;
  if (uVar25 < uVar10) {
    pbVar15 = pbVar16 + 1;
    uVar26 = uVar25 + 8;
    uVar14 = uVar14 + ((uint)pbVar16[1] << ((byte)uVar25 & 0x1f));
    if (uVar26 < uVar10) {
      pbVar15 = pbVar16 + 2;
      uVar14 = uVar14 + ((uint)pbVar16[2] << ((byte)uVar26 & 0x1f));
      uVar26 = uVar25 + 0x10;
    }
  }
  uVar25 = uVar26 - uVar10;
  uVar26 = (1 << (sbyte)uVar10) - 1U & uVar14;
  uVar14 = uVar14 >> (sbyte)uVar10;
  uVar26 = (uVar13 >> 0x10) + uVar26;
  uVar13 = (int)puVar20 - local_68;
  if (uVar26 <= uVar13) {
    puVar19 = puVar20 + -(ulonglong)uVar26;
    do {
      puVar21 = puVar20;
      puVar22 = puVar19;
      puVar21[1] = puVar22[1];
      uVar24 = uVar24 - 3;
      puVar21[2] = puVar22[2];
      puVar20 = puVar21 + 3;
      *puVar20 = puVar22[3];
      puVar19 = puVar22 + 3;
    } while (2 < uVar24);
    puVar19 = puVar20;
    if (uVar24 != 0) {
      puVar21[4] = puVar22[4];
      puVar19 = puVar21 + 4;
      if (1 < uVar24) {
        puVar21[5] = puVar22[5];
        puVar19 = puVar21 + 5;
      }
    }
    goto LAB_140df7a85;
  }
  uVar13 = uVar26 - uVar13;
  if ((uVar4 < uVar13) && (puVar6[0x6f6] != 0)) {
    pcVar11 = "invalid distance too far back";
    pbVar16 = pbVar15;
LAB_140df7acc:
    param_1[4] = (longlong)pcVar11;
    *puVar6 = 0x1d;
    pbVar15 = pbVar16;
LAB_140df7af3:
    lVar17 = (longlong)pbVar15 - (ulonglong)(uVar25 >> 3);
    iVar27 = uVar25 + (uVar25 >> 3) * -8;
    *param_1 = lVar17 + 1;
    param_1[2] = (longlong)(puVar19 + 1);
    *(int *)(param_1 + 1) = ((int)pbVar28 - (int)lVar17) + 5;
    *(int *)(param_1 + 3) = ((int)(puVar18 + ((int)lVar9 - 0x101)) - (int)puVar19) + 0x101;
    puVar6[0x10] = uVar14 & (1 << ((byte)iVar27 & 0x1f)) - 1U;
    puVar6[0x11] = iVar27;
    return;
  }
  lVar1 = lVar8 + -1;
  if (uVar2 == 0) {
    puVar22 = (undefined1 *)(lVar1 + (ulonglong)(iVar27 - uVar13));
    if (uVar13 < uVar24) {
      uVar24 = uVar24 - uVar13;
      do {
        puVar20 = puVar22 + 1;
        puVar22 = puVar22 + 1;
        puVar19 = puVar19 + 1;
        *puVar19 = *puVar20;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
LAB_140df79b5:
      puVar22 = puVar19 + -(ulonglong)uVar26;
      puVar20 = puVar19;
    }
  }
  else if (uVar2 < uVar13) {
    uVar10 = uVar13 - uVar2;
    puVar22 = (undefined1 *)(lVar1 + (ulonglong)((uVar2 - uVar13) + iVar27));
    if (uVar10 < uVar24) {
      uVar24 = uVar24 - uVar10;
      do {
        puVar21 = puVar19 + (longlong)(puVar22 + (1 - (longlong)puVar20));
        puVar19 = puVar19 + 1;
        *puVar19 = *puVar21;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar22 = (undefined1 *)(lVar8 + -1);
      puVar20 = puVar19;
      if (uVar2 < uVar24) {
        uVar24 = uVar24 - uVar2;
        uVar13 = uVar2;
        do {
          puVar20 = puVar22 + 1;
          puVar22 = puVar22 + 1;
          puVar19 = puVar19 + 1;
          *puVar19 = *puVar20;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        goto LAB_140df79b5;
      }
    }
  }
  else {
    puVar22 = (undefined1 *)(lVar1 + (ulonglong)(uVar2 - uVar13));
    if (uVar13 < uVar24) {
      uVar24 = uVar24 - uVar13;
      do {
        puVar20 = puVar22 + 1;
        puVar22 = puVar22 + 1;
        puVar19 = puVar19 + 1;
        *puVar19 = *puVar20;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      goto LAB_140df79b5;
    }
  }
  if (2 < uVar24) {
    uVar12 = (ulonglong)((uVar24 - 3) / 3 + 1);
    do {
      uVar24 = uVar24 - 3;
      puVar20[1] = puVar22[1];
      puVar19 = puVar22 + 2;
      puVar22 = puVar22 + 3;
      puVar20[2] = *puVar19;
      puVar20 = puVar20 + 3;
      *puVar20 = *puVar22;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  puVar19 = puVar20;
  if (uVar24 != 0) {
    puVar20[1] = puVar22[1];
    puVar19 = puVar20 + 1;
    if (1 < uVar24) {
      puVar20[2] = puVar22[2];
      puVar19 = puVar20 + 2;
    }
  }
LAB_140df7a85:
  if ((pbVar28 <= pbVar15) || (puVar20 = puVar19, puVar18 + ((int)lVar9 - 0x101) <= puVar19))
  goto LAB_140df7af3;
  goto LAB_140df7740;
}

