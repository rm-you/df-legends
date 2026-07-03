// FUN_1404c5d20 @ 1404c5d20
// callees:
//   -> 1400be580 FUN_1400be580
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 1402d9bb0 FUN_1402d9bb0
//   -> EXTERNAL:00000115 atoi
//   -> 140051e20 FUN_140051e20
//   -> 1402e7b90 FUN_1402e7b90
//   -> 140071310 FUN_140071310
//   -> 14000c460 FUN_14000c460
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140050390 FUN_140050390
//   -> 140050380 FUN_140050380
//   -> 14000c260 FUN_14000c260
//   -> 1402cd610 FUN_1402cd610
//   -> 14000be20 FUN_14000be20
//   -> 1400b29f0 FUN_1400b29f0
//   -> 140565fd0 FUN_140565fd0
//   -> 1400025a0 FUN_1400025a0
//   -> 140281b30 FUN_140281b30
//   -> 14000bc60 FUN_14000bc60
//   -> 1408a4d70 FUN_1408a4d70
//   -> 1400025c0 FUN_1400025c0
//   -> 14007bda0 FUN_14007bda0
//   -> 140286cf0 FUN_140286cf0
//   -> 14000d730 FUN_14000d730
//   -> 140050b50 FUN_140050b50
//   -> 140071570 FUN_140071570
//   -> 14000c1f0 FUN_14000c1f0
//   -> 14000bd10 FUN_14000bd10
//   -> 14000c1b0 FUN_14000c1b0
//   -> 14000c230 FUN_14000c230
//   -> 14048e2a0 FUN_14048e2a0
//   -> 140286f40 FUN_140286f40
//   -> 14014caa0 FUN_14014caa0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404c5d20(longlong param_1,undefined4 param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int *piVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  short sVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  int *piVar23;
  undefined2 *puVar24;
  char *pcVar25;
  uint uVar26;
  longlong lVar27;
  byte bVar28;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 *local_e0;
  short local_d8 [2];
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  puVar13 = (undefined1 *)FUN_1400be580(local_58,"*** Error(s) finalizing the entity ",param_1);
  lVar20 = 0;
  if (puVar13 != &DAT_141c3d418) {
    if (0xf < DAT_141c3d430) {
      FUN_140002020(CONCAT71(uRam0000000141c3d419,DAT_141c3d418),DAT_141c3d430 + 1,1);
    }
    DAT_141c3d430 = 0xf;
    DAT_141c3d428 = 0;
    DAT_141c3d418 = 0;
    FUN_14007b2f0(&DAT_141c3d418,puVar13);
  }
  if (0xf < local_40) {
    FUN_140002020(local_58[0],local_40 + 1,1);
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  iVar19 = (int)(*(longlong *)(param_1 + 0x3b78) - *(longlong *)(param_1 + 0x3b70) >> 3);
  if (0 < iVar19) {
    do {
      iVar11 = FUN_1402d9bb0(0,*(undefined8 *)(*(longlong *)(param_1 + 0x3b70) + lVar20 * 8));
      if ((-1 < iVar11) &&
         ((ulonglong)(longlong)iVar11 <
          (ulonglong)(*(longlong *)(param_1 + 0x390) - *(longlong *)(param_1 + 0x388) >> 2))) {
        pcVar25 = *(char **)(*(longlong *)(param_1 + 0x3b88) + lVar20 * 8);
        if (0xf < *(ulonglong *)(pcVar25 + 0x18)) {
          pcVar25 = *(char **)pcVar25;
        }
        iVar12 = atoi(pcVar25);
        *(int *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar11 * 4) = iVar12;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar19);
  }
  FUN_140051e20(param_1 + 0x3b70);
  FUN_140051e20(param_1 + 0x3b88);
  uVar14 = 0;
  pcVar25 = (char *)(param_1 + 0x3898);
  uVar15 = uVar14;
  do {
    iVar19 = (int)uVar15;
    if (*pcVar25 != '\0') {
      FUN_1402e7b90(uVar15 & 0xffff,param_1 + 0x391f);
    }
    uVar15 = (ulonglong)(iVar19 + 1U);
    pcVar25 = pcVar25 + 1;
  } while ((int)(iVar19 + 1U) < 0x87);
  *(undefined4 *)(param_1 + 0x3930) = 0x1010101;
  *(undefined2 *)(param_1 + 0x3934) = 0x101;
  *(undefined1 *)(param_1 + 0x3936) = 1;
  *(undefined4 *)(param_1 + 0x3920) = 0x1010101;
  *(undefined4 *)(param_1 + 0x3924) = 0x1010101;
  *(undefined2 *)(param_1 + 0x3968) = 0x101;
  *(undefined1 *)(param_1 + 0x3928) = 1;
  *(undefined2 *)(param_1 + 0x396b) = 0x101;
  *(undefined1 *)(param_1 + 0x396a) = 1;
  *(undefined2 *)(param_1 + 0x396e) = 0x101;
  bVar28 = *(char *)(param_1 + 0x389a) != '\0';
  if (*(char *)(param_1 + 0x389b) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x389c) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (1 < bVar28) {
    *(undefined1 *)(param_1 + 0x3899) = 1;
  }
  bVar28 = *(char *)(param_1 + 0x389e) != '\0';
  if (*(char *)(param_1 + 0x389f) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (1 < bVar28) {
    *(undefined1 *)(param_1 + 0x389d) = 1;
  }
  bVar28 = *(char *)(param_1 + 0x38a1) != '\0';
  if (*(char *)(param_1 + 0x38a2) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38a3) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38a4) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38a5) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (1 < bVar28) {
    *(undefined1 *)(param_1 + 0x38a0) = 1;
  }
  bVar28 = *(char *)(param_1 + 0x38a7) != '\0';
  if (*(char *)(param_1 + 0x38a8) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38a9) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38aa) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38ab) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (1 < bVar28) {
    *(undefined1 *)(param_1 + 0x38a6) = 1;
  }
  bVar28 = *(char *)(param_1 + 0x38ad) != '\0';
  if (*(char *)(param_1 + 0x38ae) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (1 < bVar28) {
    *(undefined1 *)(param_1 + 0x38ac) = 1;
  }
  uVar10 = (ushort)(*(char *)(param_1 + 0x38b0) != '\0');
  if (*(char *)(param_1 + 0x38b1) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38b2) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38b3) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38b4) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38b5) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38b6) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38ba) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38b7) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38b8) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38b9) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x3916) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x3917) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (1 < uVar10) {
    *(undefined1 *)(param_1 + 0x38af) = 1;
  }
  bVar28 = *(char *)(param_1 + 0x38bc) != '\0';
  if (*(char *)(param_1 + 0x38bd) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38be) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (1 < bVar28) {
    *(undefined1 *)(param_1 + 0x38bb) = 1;
  }
  uVar10 = (ushort)(*(char *)(param_1 + 0x38c0) != '\0');
  if (*(char *)(param_1 + 0x38c1) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x3907) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38cf) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38d0) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38c2) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38c3) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38c4) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38c5) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38c6) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38c7) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38d1) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38d2) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38c8) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38c9) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38ca) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38cb) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38cc) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38cd) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (*(char *)(param_1 + 0x38ce) != '\0') {
    uVar10 = uVar10 + 1;
  }
  if (1 < (short)uVar10) {
    *(undefined1 *)(param_1 + 0x38bf) = 1;
  }
  bVar28 = *(char *)(param_1 + 0x38d4) != '\0';
  if (*(char *)(param_1 + 0x38d5) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38d6) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38d7) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (1 < bVar28) {
    *(undefined1 *)(param_1 + 0x38d3) = 1;
  }
  bVar28 = *(char *)(param_1 + 0x38de) != '\0';
  if (*(char *)(param_1 + 0x38df) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38e0) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (*(char *)(param_1 + 0x38e1) != '\0') {
    bVar28 = bVar28 + 1;
  }
  if (1 < bVar28) {
    *(undefined1 *)(param_1 + 0x38dd) = 1;
  }
  uVar15 = uVar14;
  if (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3 != 0) {
    do {
      lVar20 = DAT_141d6dd50;
      uVar4 = *(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x58));
      iVar19 = (int)(DAT_141d6dd58 - DAT_141d6dd50 >> 3);
      do {
        iVar19 = iVar19 + -1;
        if (iVar19 < 0) {
          iVar19 = 0xffff;
          break;
        }
        iVar11 = FUN_140071310(*(undefined8 *)(lVar20 + (longlong)iVar19 * 8),uVar4);
      } while (iVar11 != 0);
      sVar18 = (short)iVar19;
      local_d8[0] = sVar18;
      if (sVar18 == -1) {
        local_60 = 0xf;
        local_68 = 0;
        local_78 = 0;
        FUN_14000c780(&local_78,"Unrecognized entity creature token: ",0x24);
        FUN_14000cb40(&local_78,*(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x58)),0,
                      0xffffffffffffffff);
        FUN_14014a240(&local_78);
        if (0xf < local_60) {
          FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
        }
      }
      else {
        if ((local_d8 < *(short **)(param_1 + 0x48)) &&
           (psVar5 = *(short **)(param_1 + 0x40), psVar5 <= local_d8)) {
          if (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_1 + 0x50)) {
            FUN_14000c460(param_1 + 0x40,1);
          }
          if (*(undefined2 **)(param_1 + 0x48) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x48) =
                 *(undefined2 *)
                  (*(longlong *)(param_1 + 0x40) + ((longlong)local_d8 - (longlong)psVar5 >> 1) * 2)
            ;
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_1 + 0x50)) {
            FUN_14000c460(param_1 + 0x40,1);
          }
          if (*(short **)(param_1 + 0x48) != (short *)0x0) {
            **(short **)(param_1 + 0x48) = sVar18;
          }
        }
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
        if ((((-1 < sVar18) &&
             ((ulonglong)(longlong)sVar18 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
            (lVar20 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar18 * 8), lVar20 != 0)) &&
           (9 < *(int *)(lVar20 + 0x1b0))) {
          pbVar1 = (byte *)(*(longlong *)(lVar20 + 0x1a8) + 9);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      uVar26 = (int)uVar15 + 1;
      uVar14 = (ulonglong)(int)uVar26;
      uVar15 = (ulonglong)uVar26;
    } while (uVar14 < (ulonglong)
                      (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3));
  }
  uVar14 = 0;
  uVar15 = uVar14;
  if (*(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238) >> 3 != 0) {
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x238));
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              if ((puVar24 < *(undefined2 **)(param_1 + 0x78)) &&
                 (puVar6 = *(undefined2 **)(param_1 + 0x70), puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_1 + 0x80)) {
                  FUN_14000c460(param_1 + 0x70,1);
                }
                if (*(undefined2 **)(param_1 + 0x78) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x78) =
                       *(undefined2 *)
                        (*(longlong *)(param_1 + 0x70) +
                        ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_1 + 0x80)) {
                  FUN_14000c460(param_1 + 0x70,1);
                }
                if (*(undefined2 **)(param_1 + 0x78) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x78) = *puVar24;
                }
                *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 2;
              }
              goto LAB_1404c661e;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_14000c780(&local_78,"Unrecognized entity digger token: ",0x22);
      FUN_14000cb40(&local_78,*(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x238)),0,
                    0xffffffffffffffff);
      FUN_14014a240(&local_78);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
      }
LAB_1404c661e:
      uVar26 = (int)uVar15 + 1;
      uVar14 = (ulonglong)(int)uVar26;
      uVar15 = (ulonglong)uVar26;
    } while (uVar14 < (ulonglong)
                      (*(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238) >> 3));
  }
  uVar14 = 0;
  uVar15 = uVar14;
  if (*(longlong *)(param_1 + 600) - *(longlong *)(param_1 + 0x250) >> 3 != 0) {
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x250));
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              plVar22 = (longlong *)(param_1 + 0x88);
              if ((puVar24 < *(undefined2 **)(param_1 + 0x90)) &&
                 (puVar6 = (undefined2 *)*plVar22, puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0x90) == *(longlong *)(param_1 + 0x98)) {
                  FUN_14000c460(plVar22,1);
                }
                if (*(undefined2 **)(param_1 + 0x90) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x90) =
                       *(undefined2 *)(*plVar22 + ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0x90) == *(longlong *)(param_1 + 0x98)) {
                  FUN_14000c460(plVar22,1);
                }
                if (*(undefined2 **)(param_1 + 0x90) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x90) = *puVar24;
                }
                *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + 2;
              }
              goto LAB_1404c67bb;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_14000c780(&local_78,"Unrecognized entity weapon token: ",0x22);
      FUN_14000cb40(&local_78,*(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x250)),0,
                    0xffffffffffffffff);
      FUN_14014a240(&local_78);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
      }
LAB_1404c67bb:
      uVar26 = (int)uVar15 + 1;
      uVar14 = (ulonglong)(int)uVar26;
      uVar15 = (ulonglong)uVar26;
    } while (uVar14 < (ulonglong)
                      (*(longlong *)(param_1 + 600) - *(longlong *)(param_1 + 0x250) >> 3));
  }
  uVar15 = 0;
  local_d4 = 0;
  if (*(longlong *)(param_1 + 0x270) - *(longlong *)(param_1 + 0x268) >> 3 != 0) {
    puVar2 = (ulonglong *)(param_1 + 0xa0);
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x268) + uVar15 * 8);
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              if ((puVar24 < *(undefined2 **)(param_1 + 0xa8)) &&
                 (puVar6 = (undefined2 *)*puVar2, puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0xa8) == *(longlong *)(param_1 + 0xb0)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0xa8) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0xa8) =
                       *(undefined2 *)(*puVar2 + ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0xa8) == *(longlong *)(param_1 + 0xb0)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0xa8) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0xa8) = *puVar24;
                }
                *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 2;
              }
              goto LAB_1404c69e3;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      local_d8[0] = -1;
      if ((local_d8 < *(short **)(param_1 + 0xa8)) &&
         (psVar5 = (short *)*puVar2, psVar5 <= local_d8)) {
        if (*(longlong *)(param_1 + 0xa8) == *(longlong *)(param_1 + 0xb0)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0xa8) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0xa8) =
               *(undefined2 *)(*puVar2 + ((longlong)local_d8 - (longlong)psVar5 >> 1) * 2);
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xa8) == *(longlong *)(param_1 + 0xb0)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0xa8) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0xa8) = 0xffff;
        }
      }
      *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 2;
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_14000c780(&local_78,"Unrecognized entity armor token: ",0x21);
      FUN_14000cb40(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x268) + uVar15 * 8),0,
                    0xffffffffffffffff);
      FUN_14014a240(&local_78);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
      }
LAB_1404c69e3:
      local_d4 = local_d4 + 1;
      uVar15 = (ulonglong)local_d4;
    } while (uVar15 < (ulonglong)
                      (*(longlong *)(param_1 + 0x270) - *(longlong *)(param_1 + 0x268) >> 3));
  }
  uVar14 = 0;
  uVar15 = uVar14;
  if (*(longlong *)(param_1 + 0x288) - *(longlong *)(param_1 + 0x280) >> 3 != 0) {
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x280));
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              plVar22 = (longlong *)(param_1 + 0xb8);
              if ((puVar24 < *(undefined2 **)(param_1 + 0xc0)) &&
                 (puVar6 = (undefined2 *)*plVar22, puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0xc0) == *(longlong *)(param_1 + 200)) {
                  FUN_14000c460(plVar22,1);
                }
                if (*(undefined2 **)(param_1 + 0xc0) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0xc0) =
                       *(undefined2 *)(*plVar22 + ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0xc0) == *(longlong *)(param_1 + 200)) {
                  FUN_14000c460(plVar22,1);
                }
                if (*(undefined2 **)(param_1 + 0xc0) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0xc0) = *puVar24;
                }
                *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 2;
              }
              goto LAB_1404c6b8b;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_14000c780(&local_78,"Unrecognized entity ammo token: ",0x20);
      FUN_14000cb40(&local_78,*(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x280)),0,
                    0xffffffffffffffff);
      FUN_14014a240(&local_78);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
      }
LAB_1404c6b8b:
      uVar26 = (int)uVar15 + 1;
      uVar14 = (ulonglong)(int)uVar26;
      uVar15 = (ulonglong)uVar26;
    } while (uVar14 < (ulonglong)
                      (*(longlong *)(param_1 + 0x288) - *(longlong *)(param_1 + 0x280) >> 3));
  }
  uVar15 = 0;
  local_d4 = 0;
  if (*(longlong *)(param_1 + 0x2a0) - *(longlong *)(param_1 + 0x298) >> 3 != 0) {
    puVar2 = (ulonglong *)(param_1 + 0xd0);
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x298) + uVar15 * 8);
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              if ((puVar24 < *(undefined2 **)(param_1 + 0xd8)) &&
                 (puVar6 = (undefined2 *)*puVar2, puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0xd8) == *(longlong *)(param_1 + 0xe0)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0xd8) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0xd8) =
                       *(undefined2 *)(*puVar2 + ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0xd8) == *(longlong *)(param_1 + 0xe0)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0xd8) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0xd8) = *puVar24;
                }
                *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 2;
              }
              goto LAB_1404c6db3;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      local_d8[0] = -1;
      if ((local_d8 < *(short **)(param_1 + 0xd8)) &&
         (psVar5 = (short *)*puVar2, psVar5 <= local_d8)) {
        if (*(longlong *)(param_1 + 0xd8) == *(longlong *)(param_1 + 0xe0)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0xd8) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0xd8) =
               *(undefined2 *)(*puVar2 + ((longlong)local_d8 - (longlong)psVar5 >> 1) * 2);
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xd8) == *(longlong *)(param_1 + 0xe0)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0xd8) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0xd8) = 0xffff;
        }
      }
      *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 2;
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_14000c780(&local_78,"Unrecognized entity helm token: ",0x20);
      FUN_14000cb40(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x298) + uVar15 * 8),0,
                    0xffffffffffffffff);
      FUN_14014a240(&local_78);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
      }
LAB_1404c6db3:
      local_d4 = local_d4 + 1;
      uVar15 = (ulonglong)local_d4;
    } while (uVar15 < (ulonglong)
                      (*(longlong *)(param_1 + 0x2a0) - *(longlong *)(param_1 + 0x298) >> 3));
  }
  uVar15 = 0;
  local_d4 = 0;
  if (*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 3 != 0) {
    puVar2 = (ulonglong *)(param_1 + 0xe8);
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + uVar15 * 8);
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              if ((puVar24 < *(undefined2 **)(param_1 + 0xf0)) &&
                 (puVar6 = (undefined2 *)*puVar2, puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0xf0) == *(longlong *)(param_1 + 0xf8)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0xf0) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0xf0) =
                       *(undefined2 *)(*puVar2 + ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0xf0) == *(longlong *)(param_1 + 0xf8)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0xf0) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0xf0) = *puVar24;
                }
                *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 2;
              }
              goto LAB_1404c6fd3;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      local_d8[0] = -1;
      if ((local_d8 < *(short **)(param_1 + 0xf0)) &&
         (psVar5 = (short *)*puVar2, psVar5 <= local_d8)) {
        if (*(longlong *)(param_1 + 0xf0) == *(longlong *)(param_1 + 0xf8)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0xf0) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0xf0) =
               *(undefined2 *)(*puVar2 + ((longlong)local_d8 - (longlong)psVar5 >> 1) * 2);
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xf0) == *(longlong *)(param_1 + 0xf8)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0xf0) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0xf0) = 0xffff;
        }
      }
      *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 2;
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_14000c780(&local_78,"Unrecognized entity gloves token: ",0x22);
      FUN_14000cb40(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + uVar15 * 8),0,
                    0xffffffffffffffff);
      FUN_14014a240(&local_78);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
      }
LAB_1404c6fd3:
      local_d4 = local_d4 + 1;
      uVar15 = (ulonglong)local_d4;
    } while (uVar15 < (ulonglong)
                      (*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 3));
  }
  uVar15 = 0;
  local_d4 = 0;
  if (*(longlong *)(param_1 + 0x2d0) - *(longlong *)(param_1 + 0x2c8) >> 3 != 0) {
    puVar2 = (ulonglong *)(param_1 + 0x100);
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + uVar15 * 8);
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              if ((puVar24 < *(undefined2 **)(param_1 + 0x108)) &&
                 (puVar6 = (undefined2 *)*puVar2, puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0x108) == *(longlong *)(param_1 + 0x110)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0x108) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x108) =
                       *(undefined2 *)(*puVar2 + ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0x108) == *(longlong *)(param_1 + 0x110)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0x108) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x108) = *puVar24;
                }
                *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 2;
              }
              goto LAB_1404c71f3;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      local_d8[0] = -1;
      if ((local_d8 < *(short **)(param_1 + 0x108)) &&
         (psVar5 = (short *)*puVar2, psVar5 <= local_d8)) {
        if (*(longlong *)(param_1 + 0x108) == *(longlong *)(param_1 + 0x110)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0x108) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x108) =
               *(undefined2 *)(*puVar2 + ((longlong)local_d8 - (longlong)psVar5 >> 1) * 2);
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x108) == *(longlong *)(param_1 + 0x110)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0x108) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x108) = 0xffff;
        }
      }
      *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 2;
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_14000c780(&local_78,"Unrecognized entity shoes token: ",0x21);
      FUN_14000cb40(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + uVar15 * 8),0,
                    0xffffffffffffffff);
      FUN_14014a240(&local_78);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
      }
LAB_1404c71f3:
      local_d4 = local_d4 + 1;
      uVar15 = (ulonglong)local_d4;
    } while (uVar15 < (ulonglong)
                      (*(longlong *)(param_1 + 0x2d0) - *(longlong *)(param_1 + 0x2c8) >> 3));
  }
  uVar15 = 0;
  local_d4 = 0;
  if (*(longlong *)(param_1 + 0x2e8) - *(longlong *)(param_1 + 0x2e0) >> 3 != 0) {
    puVar2 = (ulonglong *)(param_1 + 0x118);
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x2e0) + uVar15 * 8);
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              if ((puVar24 < *(undefined2 **)(param_1 + 0x120)) &&
                 (puVar6 = (undefined2 *)*puVar2, puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0x120) == *(longlong *)(param_1 + 0x128)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0x120) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x120) =
                       *(undefined2 *)(*puVar2 + ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0x120) == *(longlong *)(param_1 + 0x128)) {
                  FUN_14000c460(puVar2,1);
                }
                if (*(undefined2 **)(param_1 + 0x120) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x120) = *puVar24;
                }
                *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 2;
              }
              goto LAB_1404c7413;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      local_d8[0] = -1;
      if ((local_d8 < *(short **)(param_1 + 0x120)) &&
         (psVar5 = (short *)*puVar2, psVar5 <= local_d8)) {
        if (*(longlong *)(param_1 + 0x120) == *(longlong *)(param_1 + 0x128)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0x120) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x120) =
               *(undefined2 *)(*puVar2 + ((longlong)local_d8 - (longlong)psVar5 >> 1) * 2);
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x120) == *(longlong *)(param_1 + 0x128)) {
          FUN_14000c460(puVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0x120) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x120) = 0xffff;
        }
      }
      *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 2;
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_14000c780(&local_78,"Unrecognized entity pants token: ",0x21);
      FUN_14000cb40(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x2e0) + uVar15 * 8),0,
                    0xffffffffffffffff);
      FUN_14014a240(&local_78);
      if (0xf < local_60) {
        FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
      }
LAB_1404c7413:
      local_d4 = local_d4 + 1;
      uVar15 = (ulonglong)local_d4;
    } while (uVar15 < (ulonglong)
                      (*(longlong *)(param_1 + 0x2e8) - *(longlong *)(param_1 + 0x2e0) >> 3));
  }
  uVar14 = 0;
  uVar15 = uVar14;
  if (*(longlong *)(param_1 + 0x300) - *(longlong *)(param_1 + 0x2f8) >> 3 != 0) {
    do {
      lVar20 = DAT_141d6ddb8;
      uVar4 = *(undefined8 *)(uVar14 * 8 + *(longlong *)(param_1 + 0x2f8));
      iVar19 = (int)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3) + -1;
      if (-1 < iVar19) {
        lVar21 = (longlong)iVar19;
        do {
          iVar11 = FUN_140071310(*(longlong *)(lVar20 + lVar21 * 8) + 8,uVar4);
          if (iVar11 == 0) {
            lVar20 = *(longlong *)(lVar20 + (longlong)iVar19 * 8);
            if (lVar20 != 0) {
              puVar24 = (undefined2 *)(lVar20 + 0x28);
              plVar22 = (longlong *)(param_1 + 0x130);
              if ((puVar24 < *(undefined2 **)(param_1 + 0x138)) &&
                 (puVar6 = (undefined2 *)*plVar22, puVar6 <= puVar24)) {
                if (*(longlong *)(param_1 + 0x138) == *(longlong *)(param_1 + 0x140)) {
                  FUN_14000c460(plVar22,1);
                }
                if (*(undefined2 **)(param_1 + 0x138) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x138) =
                       *(undefined2 *)(*plVar22 + ((longlong)puVar24 - (longlong)puVar6 >> 1) * 2);
                }
                *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 2;
              }
              else {
                if (*(longlong *)(param_1 + 0x138) == *(longlong *)(param_1 + 0x140)) {
                  FUN_14000c460(plVar22,1);
                }
                if (*(undefined2 **)(param_1 + 0x138) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 0x138) = *puVar24;
                }
                *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 2;
              }
              goto LAB_1404c7582;
            }
            break;
          }
          iVar19 = iVar19 + -1;
          lVar21 = lVar21 + -1;
        } while (-1 < lVar21);
      }
      FUN_140050390(&local_78,"Unrecognized entity shield token: ");
      FUN_140050380(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x2f8) + uVar14 * 8));
      FUN_14014a240(&local_78);
      FUN_14000c260(&local_78);
LAB_1404c7582:
      uVar26 = (int)uVar15 + 1;
      uVar14 = (ulonglong)(int)uVar26;
      uVar15 = (ulonglong)uVar26;
    } while (uVar14 < (ulonglong)
                      (*(longlong *)(param_1 + 0x300) - *(longlong *)(param_1 + 0x2f8) >> 3));
  }
  uVar16 = 0;
  uVar15 = uVar16;
  uVar14 = uVar16;
  if (*(longlong *)(param_1 + 0x318) - *(longlong *)(param_1 + 0x310) >> 3 != 0) {
    do {
      lVar20 = FUN_1402cd610(&DAT_141d6ddb8,
                             *(undefined8 *)(uVar15 * 8 + *(longlong *)(param_1 + 0x310)));
      if (lVar20 == 0) {
        FUN_140050390(&local_78,"Unrecognized entity trapcomp token: ");
        FUN_140050380(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x310) + uVar15 * 8));
        FUN_14014a240(&local_78);
        FUN_14000c260(&local_78);
      }
      else {
        FUN_14000be20(param_1 + 0x148,lVar20 + 0x28);
      }
      uVar26 = (int)uVar14 + 1;
      uVar15 = (longlong)(int)uVar26;
      uVar14 = (ulonglong)uVar26;
    } while ((ulonglong)(longlong)(int)uVar26 <
             (ulonglong)(*(longlong *)(param_1 + 0x318) - *(longlong *)(param_1 + 0x310) >> 3));
  }
  uVar15 = uVar16;
  uVar14 = uVar16;
  if (*(longlong *)(param_1 + 0x330) - *(longlong *)(param_1 + 0x328) >> 3 != 0) {
    do {
      lVar20 = FUN_1402cd610(&DAT_141d6ddb8,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x328) + uVar15 * 8));
      if (lVar20 == 0) {
        FUN_140050390(&local_78,"Unrecognized entity toy token: ");
        FUN_140050380(&local_78,*(undefined8 *)(uVar15 * 8 + *(longlong *)(param_1 + 0x328)));
        FUN_14014a240(&local_78);
        FUN_14000c260(&local_78);
      }
      else {
        FUN_14000be20(param_1 + 0x160,lVar20 + 0x28);
      }
      uVar26 = (int)uVar14 + 1;
      uVar15 = (longlong)(int)uVar26;
      uVar14 = (ulonglong)uVar26;
    } while ((ulonglong)(longlong)(int)uVar26 <
             (ulonglong)(*(longlong *)(param_1 + 0x330) - *(longlong *)(param_1 + 0x328) >> 3));
  }
  uVar15 = uVar16;
  uVar14 = uVar16;
  if (*(longlong *)(param_1 + 0x348) - *(longlong *)(param_1 + 0x340) >> 3 != 0) {
    do {
      lVar20 = FUN_1402cd610(&DAT_141d6ddb8,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x340) + uVar15 * 8));
      if (lVar20 == 0) {
        FUN_140050390(&local_78,"Unrecognized entity instrument token: ");
        FUN_140050380(&local_78,*(undefined8 *)(uVar15 * 8 + *(longlong *)(param_1 + 0x340)));
        FUN_14014a240(&local_78);
        FUN_14000c260(&local_78);
      }
      else {
        FUN_14000be20(param_1 + 0x178,lVar20 + 0x28);
      }
      uVar26 = (int)uVar14 + 1;
      uVar15 = (longlong)(int)uVar26;
      uVar14 = (ulonglong)uVar26;
    } while ((ulonglong)(longlong)(int)uVar26 <
             (ulonglong)(*(longlong *)(param_1 + 0x348) - *(longlong *)(param_1 + 0x340) >> 3));
  }
  uVar15 = uVar16;
  uVar14 = uVar16;
  if (*(longlong *)(param_1 + 0x378) - *(longlong *)(param_1 + 0x370) >> 3 != 0) {
    do {
      lVar20 = FUN_1402cd610(&DAT_141d6ddb8,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x370) + uVar15 * 8));
      if (lVar20 == 0) {
        FUN_140050390(&local_78,"Unrecognized entity tool token: ");
        FUN_140050380(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x370) + uVar15 * 8));
        FUN_14014a240(&local_78);
        FUN_14000c260(&local_78);
      }
      else {
        FUN_14000be20(param_1 + 400,lVar20 + 0x28);
      }
      uVar26 = (int)uVar14 + 1;
      uVar15 = (longlong)(int)uVar26;
      uVar14 = (ulonglong)uVar26;
    } while ((ulonglong)(longlong)(int)uVar26 <
             (ulonglong)(*(longlong *)(param_1 + 0x378) - *(longlong *)(param_1 + 0x370) >> 3));
  }
  uVar15 = uVar16;
  if (*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 3 != 0) {
    do {
      lVar20 = FUN_1402cd610(&DAT_141d6ddb8,
                             *(undefined8 *)(uVar16 * 8 + *(longlong *)(param_1 + 0x358)));
      if (lVar20 == 0) {
        FUN_140050390(&local_78,"Unrecognized entity siege ammo token: ");
        FUN_140050380(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x358) + uVar16 * 8));
        FUN_14014a240(&local_78);
        FUN_14000c260(&local_78);
      }
      else {
        FUN_14000be20(param_1 + 0x1a8,lVar20 + 0x28);
      }
      uVar26 = (int)uVar15 + 1;
      uVar16 = (ulonglong)(int)uVar26;
      uVar15 = (ulonglong)uVar26;
    } while (uVar16 < (ulonglong)
                      (*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 3));
  }
  iVar19 = (int)(*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 1) + -1;
  if (-1 < iVar19) {
    lVar20 = (longlong)iVar19;
    do {
      if (*(short *)(*(longlong *)(param_1 + 0xa0) + lVar20 * 2) == -1) {
        FUN_1400b29f0(param_1 + 0xa0,lVar20);
        FUN_140565fd0(param_1 + 0x1c0,lVar20);
      }
      lVar20 = lVar20 + -1;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
  }
  iVar19 = (int)(*(longlong *)(param_1 + 0x120) - *(longlong *)(param_1 + 0x118) >> 1) + -1;
  if (-1 < iVar19) {
    lVar20 = (longlong)iVar19;
    do {
      if (*(short *)(*(longlong *)(param_1 + 0x118) + lVar20 * 2) == -1) {
        FUN_1400b29f0(param_1 + 0x118,lVar20);
        FUN_140565fd0(param_1 + 0x220,lVar20);
      }
      lVar20 = lVar20 + -1;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
  }
  iVar19 = (int)(*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) >> 1) + -1;
  if (-1 < iVar19) {
    lVar20 = (longlong)iVar19;
    do {
      if (*(short *)(*(longlong *)(param_1 + 0xd0) + lVar20 * 2) == -1) {
        FUN_1400b29f0(param_1 + 0xd0,lVar20);
        FUN_140565fd0(param_1 + 0x1d8,lVar20);
      }
      lVar20 = lVar20 + -1;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
  }
  iVar19 = (int)(*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 1) + -1;
  if (-1 < iVar19) {
    lVar20 = (longlong)iVar19;
    do {
      if (*(short *)(*(longlong *)(param_1 + 0xe8) + lVar20 * 2) == -1) {
        FUN_1400b29f0(param_1 + 0xe8,lVar20);
        FUN_140565fd0(param_1 + 0x1f0,lVar20);
      }
      lVar20 = lVar20 + -1;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
  }
  iVar19 = (int)(*(longlong *)(param_1 + 0x108) - *(longlong *)(param_1 + 0x100) >> 1) + -1;
  if (-1 < iVar19) {
    lVar20 = (longlong)iVar19;
    do {
      if (*(short *)(*(longlong *)(param_1 + 0x100) + lVar20 * 2) == -1) {
        FUN_1400b29f0(param_1 + 0x100,lVar20);
        FUN_140565fd0(param_1 + 0x208,lVar20);
      }
      lVar20 = lVar20 + -1;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
  }
  plVar22 = (longlong *)(param_1 + 0x2c50);
  lVar20 = param_1 + 0x2e00;
  lVar21 = 0x12;
  do {
    uVar14 = 0;
    FUN_1400025a0(&local_78);
    FUN_1400025a0(local_98);
    FUN_1400025a0(local_b0);
    lVar27 = *plVar22;
    uVar15 = uVar14;
    if (plVar22[1] - lVar27 >> 3 != 0) {
      do {
        local_d4 = FUN_140281b30(&DAT_141d6e1a8,*(undefined8 *)(lVar27 + uVar15));
        if (local_d4 == -1) {
          FUN_140050390(local_58,"Unrecognized symbol: ");
          FUN_140050380(local_58,*(undefined8 *)(uVar15 + *plVar22));
          FUN_14014a240(local_58);
          FUN_14000c260(local_58);
        }
        else {
          FUN_14000bc60(&local_78,&local_d4);
        }
        uVar26 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar26;
        lVar27 = *plVar22;
        uVar15 = uVar15 + 8;
      } while ((ulonglong)(longlong)(int)uVar26 < (ulonglong)(plVar22[1] - lVar27 >> 3));
    }
    uVar14 = 0;
    FUN_140051e20(lVar20 + -0x1b0);
    lVar27 = plVar22[0x36];
    uVar15 = uVar14;
    if (plVar22[0x37] - lVar27 >> 3 != 0) {
      do {
        local_d4 = FUN_140281b30(&DAT_141d6e1a8,*(undefined8 *)(lVar27 + uVar15));
        if (local_d4 == -1) {
          FUN_140050390(local_58,"Unrecognized symbol: ");
          FUN_140050380(local_58,*(undefined8 *)(uVar15 + *plVar22));
          FUN_14014a240(local_58);
          FUN_14000c260(local_58);
        }
        else {
          FUN_14000bc60(local_98,&local_d4);
        }
        uVar26 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar26;
        lVar27 = plVar22[0x36];
        uVar15 = uVar15 + 8;
      } while ((ulonglong)(longlong)(int)uVar26 < (ulonglong)(plVar22[0x37] - lVar27 >> 3));
    }
    uVar14 = 0;
    FUN_140051e20(lVar20);
    lVar27 = plVar22[0x6c];
    uVar15 = uVar14;
    if (plVar22[0x6d] - lVar27 >> 3 != 0) {
      do {
        local_d4 = FUN_140281b30(&DAT_141d6e1a8,*(undefined8 *)(lVar27 + uVar15));
        if (local_d4 == -1) {
          FUN_140050390(local_58,"Unrecognized symbol: ");
          FUN_140050380(local_58,*(undefined8 *)(uVar15 + *plVar22));
          FUN_14014a240(local_58);
          FUN_14000c260(local_58);
        }
        else {
          FUN_14000bc60(local_b0,&local_d4);
        }
        uVar26 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar26;
        lVar27 = plVar22[0x6c];
        uVar15 = uVar15 + 8;
      } while ((ulonglong)(longlong)(int)uVar26 < (ulonglong)(plVar22[0x6d] - lVar27 >> 3));
    }
    uVar15 = 0;
    FUN_140051e20(lVar20 + 0x1b0);
    local_e0 = local_b0;
    local_e8 = local_98;
    FUN_1408a4d70();
    FUN_1400025c0(local_b0);
    FUN_1400025c0(local_98);
    FUN_1400025c0(&local_78);
    lVar20 = lVar20 + 0x18;
    plVar22 = plVar22 + 3;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  uVar14 = uVar15;
  if (*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3 != 0) {
    do {
      *(int *)(*(longlong *)(uVar14 + *(longlong *)(param_1 + 0x3988)) + 0x20) = (int)uVar15;
      uVar26 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar26;
      uVar14 = uVar14 + 8;
    } while ((ulonglong)(longlong)(int)uVar26 <
             (ulonglong)(*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3));
  }
  local_d4 = 0;
  if (*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3 != 0) {
    local_b8 = 0;
    do {
      lVar20 = *(longlong *)(local_b8 + *(longlong *)(param_1 + 0x3988));
      local_d0 = lVar20;
      if (0 < *(short *)(lVar20 + 0x328)) {
        FUN_14007bda0(param_1 + 0x3a0,0x2e);
      }
      plVar22 = (longlong *)(lVar20 + 0x38);
      iVar19 = (int)(*(longlong *)(lVar20 + 0x40) - *plVar22 >> 3) + -1;
      lVar27 = (longlong)iVar19;
      lVar21 = lVar20;
      if (-1 < iVar19) {
        do {
          uVar15 = 0;
          lVar21 = FUN_140286cf0(&DAT_141d6dd30,*(undefined8 *)(*plVar22 + lVar27 * 8),local_d8);
          if (lVar21 == 0) {
            FUN_140050390(local_58,"Unrecognized entity position allowed creature token: ");
            FUN_140050380(local_58,*(undefined8 *)(*plVar22 + lVar27 * 8));
            FUN_14014a240(local_58);
            FUN_14000c260(local_58);
          }
          else {
            cVar9 = FUN_14000d730(*(undefined8 *)(*(longlong *)(lVar20 + 0x50) + lVar27 * 8),
                                  &DAT_140ea7b80);
            uVar26 = 0;
            if (cVar9 == '\0') {
              if (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3 != 0) {
                uVar4 = *(undefined8 *)(*(longlong *)(lVar20 + 0x50) + lVar27 * 8);
                uVar14 = uVar15;
                do {
                  uVar26 = (uint)uVar15;
                  cVar9 = FUN_140071570(*(undefined8 *)(*(longlong *)(lVar21 + 0x178) + uVar14 * 8),
                                        uVar4);
                  if (cVar9 != '\0') {
                    FUN_140050b50(*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(lVar21 + 0x178) + uVar14 * 8) +
                                   0x6b8),lVar20 + 0x68);
                    break;
                  }
                  uVar26 = uVar26 + 1;
                  uVar15 = (ulonglong)uVar26;
                  uVar14 = uVar14 + 1;
                } while ((ulonglong)(longlong)(int)uVar26 <
                         (ulonglong)
                         (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3));
              }
              if ((longlong)(int)uVar26 ==
                  *(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3) {
                FUN_140050390(&local_78,"Unrecognized entity position allowed caste token: ");
                FUN_140050380(&local_78,*(undefined8 *)(*plVar22 + lVar27 * 8));
                FUN_14000c1f0(&local_78,&DAT_140e5a200);
                FUN_140050380(&local_78,*(undefined8 *)(*(longlong *)(lVar20 + 0x50) + lVar27 * 8));
                FUN_14014a240(&local_78);
                FUN_14000c260(&local_78);
              }
            }
            else {
              uVar14 = uVar15;
              if (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3 != 0) {
                do {
                  FUN_140050b50(*(undefined4 *)
                                 (*(longlong *)(uVar14 + *(longlong *)(lVar21 + 0x178)) + 0x6b8),
                                lVar20 + 0x68);
                  uVar26 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar26;
                  uVar14 = uVar14 + 8;
                } while ((ulonglong)(longlong)(int)uVar26 <
                         (ulonglong)
                         (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3));
              }
            }
          }
          lVar27 = lVar27 + -1;
          param_1 = local_c0;
          lVar21 = local_d0;
        } while (-1 < lVar27);
      }
      FUN_140051e20(plVar22);
      FUN_140051e20(lVar21 + 0x50);
      lVar20 = local_d0;
      plVar22 = (longlong *)(lVar21 + 0x98);
      iVar19 = (int)(*(longlong *)(lVar21 + 0xa0) - *plVar22 >> 3) + -1;
      lVar27 = (longlong)iVar19;
      if (-1 < iVar19) {
        do {
          uVar15 = 0;
          lVar21 = FUN_140286cf0(&DAT_141d6dd30,*(undefined8 *)(*plVar22 + lVar27 * 8),local_d8);
          if (lVar21 == 0) {
            FUN_140050390(local_58,"Unrecognized entity position rejected creature token: ");
            FUN_140050380(local_58,*(undefined8 *)(*plVar22 + lVar27 * 8));
            FUN_14014a240(local_58);
            puVar17 = local_58;
LAB_1404c81f9:
            FUN_14000c260(puVar17);
          }
          else {
            cVar9 = FUN_14000d730(*(undefined8 *)(*(longlong *)(lVar20 + 0xb0) + lVar27 * 8),
                                  &DAT_140ea7b80);
            uVar26 = 0;
            if (cVar9 == '\0') {
              if (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3 != 0) {
                uVar4 = *(undefined8 *)(*(longlong *)(lVar20 + 0xb0) + lVar27 * 8);
                uVar14 = uVar15;
                do {
                  uVar26 = (uint)uVar15;
                  cVar9 = FUN_140071570(*(undefined8 *)(*(longlong *)(lVar21 + 0x178) + uVar14 * 8),
                                        uVar4);
                  if (cVar9 != '\0') {
                    FUN_140050b50(*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(lVar21 + 0x178) + uVar14 * 8) +
                                   0x6b8),lVar20 + 200);
                    break;
                  }
                  uVar26 = uVar26 + 1;
                  uVar15 = (ulonglong)uVar26;
                  uVar14 = uVar14 + 1;
                } while ((ulonglong)(longlong)(int)uVar26 <
                         (ulonglong)
                         (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3));
              }
              if ((longlong)(int)uVar26 ==
                  *(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3) {
                FUN_140050390(&local_78,"Unrecognized entity position rejected caste token: ");
                FUN_140050380(&local_78,*(undefined8 *)(*plVar22 + lVar27 * 8));
                FUN_14000c1f0(&local_78,&DAT_140e5a200);
                FUN_140050380(&local_78,*(undefined8 *)(*(longlong *)(lVar20 + 0xb0) + lVar27 * 8));
                FUN_14014a240(&local_78);
                puVar17 = (undefined8 *)&local_78;
                goto LAB_1404c81f9;
              }
            }
            else {
              uVar14 = uVar15;
              if (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3 != 0) {
                do {
                  FUN_140050b50(*(undefined4 *)
                                 (*(longlong *)(uVar14 + *(longlong *)(lVar21 + 0x178)) + 0x6b8),
                                lVar20 + 200);
                  uVar26 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar26;
                  uVar14 = uVar14 + 8;
                } while ((ulonglong)(longlong)(int)uVar26 <
                         (ulonglong)
                         (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3));
              }
            }
          }
          lVar27 = lVar27 + -1;
          param_1 = local_c0;
          lVar21 = local_d0;
        } while (-1 < lVar27);
      }
      FUN_140051e20(plVar22);
      FUN_140051e20(lVar21 + 0xb0);
      plVar22 = (longlong *)(lVar21 + 0x2e0);
      plVar3 = (longlong *)(lVar21 + 0x2f8);
      local_c8 = plVar22;
      FUN_14000bd10(plVar3,*(longlong *)(lVar21 + 0x2e8) - *plVar22 >> 3);
      iVar19 = (int)(*(longlong *)(lVar21 + 0x300) - *plVar3 >> 2) + -1;
      lVar20 = (longlong)iVar19;
      if (-1 < iVar19) {
        do {
          *(undefined4 *)(*plVar3 + lVar20 * 4) = 0xffffffff;
          iVar19 = (int)(*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3) +
                   -1;
          if (-1 < iVar19) {
            lVar27 = (longlong)iVar19;
            uVar4 = *(undefined8 *)(*plVar22 + lVar20 * 8);
            lVar21 = *(longlong *)(param_1 + 0x3988);
            do {
              cVar9 = FUN_140071570(*(undefined8 *)(lVar21 + lVar27 * 8),uVar4);
              plVar22 = local_c8;
              if (cVar9 != '\0') {
                *(undefined4 *)(*plVar3 + lVar20 * 4) =
                     *(undefined4 *)(*(longlong *)(lVar21 + (longlong)iVar19 * 8) + 0x20);
                break;
              }
              iVar19 = iVar19 + -1;
              lVar27 = lVar27 + -1;
            } while (-1 < lVar27);
          }
          lVar20 = lVar20 + -1;
          lVar21 = local_d0;
        } while (-1 < lVar20);
      }
      FUN_140051e20(plVar22);
      plVar22 = (longlong *)(lVar21 + 0x390);
      plVar3 = (longlong *)(lVar21 + 0x3a8);
      local_c8 = plVar22;
      FUN_14000bd10(plVar3,*(longlong *)(lVar21 + 0x398) - *plVar22 >> 3);
      iVar19 = (int)(*(longlong *)(lVar21 + 0x3b0) - *plVar3 >> 2) + -1;
      lVar20 = (longlong)iVar19;
      if (-1 < iVar19) {
        do {
          *(undefined4 *)(*plVar3 + lVar20 * 4) = 0xffffffff;
          iVar19 = (int)(*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3) +
                   -1;
          if (-1 < iVar19) {
            lVar27 = (longlong)iVar19;
            uVar4 = *(undefined8 *)(*plVar22 + lVar20 * 8);
            lVar21 = *(longlong *)(param_1 + 0x3988);
            do {
              cVar9 = FUN_140071570(*(undefined8 *)(lVar21 + lVar27 * 8),uVar4);
              plVar22 = local_c8;
              if (cVar9 != '\0') {
                *(undefined4 *)(*plVar3 + lVar20 * 4) =
                     *(undefined4 *)(*(longlong *)(lVar21 + (longlong)iVar19 * 8) + 0x20);
                break;
              }
              iVar19 = iVar19 + -1;
              lVar27 = lVar27 + -1;
            } while (-1 < lVar27);
          }
          lVar20 = lVar20 + -1;
          lVar21 = local_d0;
        } while (-1 < lVar20);
      }
      FUN_140051e20(plVar22);
      plVar22 = (longlong *)(lVar21 + 0x360);
      plVar3 = (longlong *)(lVar21 + 0x378);
      local_c8 = plVar22;
      FUN_14000bd10(plVar3,*(longlong *)(lVar21 + 0x368) - *plVar22 >> 3);
      iVar19 = (int)(*(longlong *)(lVar21 + 0x380) - *plVar3 >> 2) + -1;
      lVar20 = (longlong)iVar19;
      if (-1 < iVar19) {
        do {
          *(undefined4 *)(*plVar3 + lVar20 * 4) = 0xffffffff;
          iVar19 = (int)(*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3) +
                   -1;
          if (-1 < iVar19) {
            lVar27 = (longlong)iVar19;
            uVar4 = *(undefined8 *)(*plVar22 + lVar20 * 8);
            lVar21 = *(longlong *)(param_1 + 0x3988);
            do {
              cVar9 = FUN_140071570(*(undefined8 *)(lVar21 + lVar27 * 8),uVar4);
              plVar22 = local_c8;
              if (cVar9 != '\0') {
                *(undefined4 *)(*plVar3 + lVar20 * 4) =
                     *(undefined4 *)(*(longlong *)(lVar21 + (longlong)iVar19 * 8) + 0x20);
                break;
              }
              iVar19 = iVar19 + -1;
              lVar27 = lVar27 + -1;
            } while (-1 < lVar27);
          }
          lVar20 = lVar20 + -1;
          lVar21 = local_d0;
        } while (-1 < lVar20);
      }
      FUN_140051e20(plVar22);
      *(undefined4 *)(lVar21 + 0x358) = 0xffffffff;
      iVar19 = (int)(*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3) + -1;
      lVar27 = (longlong)iVar19;
      lVar20 = lVar21;
      if (-1 < iVar19) {
        lVar7 = *(longlong *)(param_1 + 0x3988);
        do {
          cVar9 = FUN_140071570(*(undefined8 *)(lVar7 + lVar27 * 8),lVar21 + 0x338);
          lVar20 = local_d0;
          if (cVar9 != '\0') {
            *(undefined4 *)(local_d0 + 0x358) =
                 *(undefined4 *)(*(longlong *)(lVar7 + (longlong)iVar19 * 8) + 0x20);
            break;
          }
          iVar19 = iVar19 + -1;
          lVar27 = lVar27 + -1;
        } while (-1 < lVar27);
      }
      FUN_14000c1b0(lVar20 + 0x338,0);
      if (*(longlong *)(lVar20 + 0x108) == 0) {
        if (*(longlong *)(lVar20 + 0x188) == 0) {
          FUN_14000c230(lVar20 + 0xf8,lVar20 + 0x138);
          lVar21 = lVar20 + 0x158;
        }
        else {
          FUN_14000c230();
          lVar21 = lVar20 + 0x198;
        }
        FUN_14000c230(lVar20 + 0x118,lVar21);
      }
      if (*(longlong *)(lVar20 + 0x1c8) == 0) {
        if (*(longlong *)(lVar20 + 0x248) == 0) {
          FUN_14000c230(lVar20 + 0x1b8,lVar20 + 0x1f8);
          lVar21 = lVar20 + 0x218;
        }
        else {
          FUN_14000c230();
          lVar21 = lVar20 + 600;
        }
        FUN_14000c230(lVar20 + 0x1d8,lVar21);
      }
      local_d4 = local_d4 + 1;
      local_b8 = local_b8 + 8;
    } while ((ulonglong)(longlong)local_d4 <
             (ulonglong)(*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3));
  }
  iVar19 = (int)(*(longlong *)(param_1 + 0x3a18) - *(longlong *)(param_1 + 0x3a10) >> 3) + -1;
  lVar20 = (longlong)iVar19;
  if (-1 < iVar19) {
    do {
      iVar19 = FUN_14048e2a0(&DAT_141d77970,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x3a10) + lVar20 * 8));
      if (iVar19 != -1) {
        FUN_140050b50(*(undefined4 *)(*(longlong *)(DAT_141d77970 + (longlong)iVar19 * 8) + 0x28),
                      param_1 + 0x3a28);
      }
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
  }
  FUN_140051e20(param_1 + 0x3a10);
  iVar19 = (int)(*(longlong *)(param_1 + 0x3a48) - *(longlong *)(param_1 + 0x3a40) >> 3) + -1;
  lVar20 = (longlong)iVar19;
  if (-1 < iVar19) {
    do {
      iVar19 = FUN_140286f40(&DAT_141d77940,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x3a40) + lVar20 * 8));
      if (iVar19 != -1) {
        FUN_140050b50(iVar19,param_1 + 0x3a58);
      }
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
  }
  FUN_140051e20(param_1 + 0x3a40);
  FUN_14000bd10(param_1 + 0x3b20,
                *(longlong *)(param_1 + 0x3af8) - *(longlong *)(param_1 + 0x3af0) >> 3);
  puVar17 = *(undefined8 **)(param_1 + 0x3af0);
  piVar8 = *(int **)(param_1 + 0x3b28);
  for (piVar23 = *(int **)(param_1 + 0x3b20); piVar23 < piVar8; piVar23 = piVar23 + 1) {
    iVar19 = FUN_140281b30(&DAT_141d778b0,*puVar17);
    *piVar23 = iVar19;
    if (iVar19 == -1) {
      FUN_140050390(local_58,"Gem shape not found: ");
      FUN_140050380(local_58,*puVar17);
      FUN_14014a240(local_58);
      FUN_14000c260(local_58);
    }
    puVar17 = puVar17 + 1;
  }
  FUN_14000bd10(param_1 + 0x3b38,
                *(longlong *)(param_1 + 0x3b10) - *(longlong *)(param_1 + 0x3b08) >> 3);
  puVar17 = *(undefined8 **)(param_1 + 0x3b08);
  piVar8 = *(int **)(param_1 + 0x3b40);
  for (piVar23 = *(int **)(param_1 + 0x3b38); piVar23 < piVar8; piVar23 = piVar23 + 1) {
    iVar19 = FUN_140281b30(&DAT_141d778b0,*puVar17);
    *piVar23 = iVar19;
    if (iVar19 == -1) {
      FUN_140050390(local_58,"Stone shape not found: ");
      FUN_140050380(local_58,*puVar17);
      FUN_14014a240(local_58);
      FUN_14000c260(local_58);
    }
    puVar17 = puVar17 + 1;
  }
  FUN_140051e20(param_1 + 0x3af0);
  FUN_140051e20(param_1 + 0x3b08);
  FUN_14014caa0(&DAT_141c3d418);
  return;
}

