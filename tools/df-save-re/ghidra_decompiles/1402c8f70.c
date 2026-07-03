// FUN_1402c8f70 @ 1402c8f70
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 140cbfc60 FUN_140cbfc60
//   -> 1402828c0 FUN_1402828c0
//   -> 14000bd10 FUN_14000bd10
//   -> 1402caf30 FUN_1402caf30
//   -> 14000bfc0 FUN_14000bfc0
//   -> 140050150 FUN_140050150
//   -> 140cae990 FUN_140cae990
//   -> 1402bf9a0 FUN_1402bf9a0
//   -> 1402c7f90 FUN_1402c7f90
//   -> 14000c780 FUN_14000c780
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140c33070 FUN_140c33070
//   -> 1400be580 FUN_1400be580
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1402829e0 FUN_1402829e0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402c8f70(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  longlong lVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  short *psVar22;
  longlong lVar23;
  int iVar24;
  undefined8 *puVar25;
  short sVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_2c8 [48];
  int local_298;
  int local_294;
  int local_290;
  longlong local_288;
  undefined8 *local_280;
  short local_278;
  int local_274;
  int local_270;
  int local_26c;
  short *local_268;
  int local_260;
  longlong local_258;
  int local_250;
  undefined8 *local_248;
  longlong local_240;
  undefined8 *local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_218;
  longlong local_210;
  int local_208;
  int local_204;
  longlong local_200 [3];
  longlong local_1e8 [3];
  undefined8 local_1d0;
  undefined1 local_1c8 [24];
  undefined1 local_1b0 [24];
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  longlong local_108;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  undefined1 local_f4;
  short local_f2;
  int local_f0;
  undefined2 local_ec;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_b8;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_228 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_2c8;
  puVar25 = (undefined8 *)(param_1 + 0x13b0);
  *(undefined8 *)(param_1 + 0x13c0) = 0;
  puVar7 = puVar25;
  if (0xf < *(ulonglong *)(param_1 + 0x13c8)) {
    puVar7 = (undefined8 *)*puVar25;
  }
  *(undefined1 *)puVar7 = 0;
  sVar26 = *(short *)(param_1 + 0xa4);
  local_288 = param_1;
  local_280 = puVar25;
  if (((((sVar26 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar26)) ||
       (lVar18 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar26 * 8), local_230 = lVar18,
       lVar18 == 0)) ||
      ((sVar19 = *(short *)(param_1 + 300), sVar26 < 0 ||
       ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar26)))) ||
     (sVar19 < 0)) {
LAB_1402cac1e:
    FUN_14000c780(puVar25,"average",7);
    return;
  }
  lVar23 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar26 * 8);
  if (((ulonglong)(*(longlong *)(lVar23 + 0x180) - *(longlong *)(lVar23 + 0x178) >> 3) <=
       (ulonglong)(longlong)sVar19) ||
     (lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0x178) + (longlong)sVar19 * 8),
     local_258 = lVar23, lVar23 == 0)) goto LAB_1402cac1e;
  lVar8 = FUN_140ca8390(param_1);
  bVar28 = false;
  if ((lVar8 != 0) &&
     ((lVar8 = FUN_1407ad250(), lVar8 != 0 && (bVar28 = false, *(int *)(lVar8 + 0x90) == 0)))) {
    bVar28 = true;
  }
  local_294 = 0;
  local_298 = 0;
  if (0 < *(int *)(lVar23 + 0x85c)) {
    iVar20 = *(int *)(lVar23 + 0x11fc);
    iVar6 = FUN_140cbfc60(param_1);
    local_294 = (iVar6 - iVar20) / 10;
    if ((bVar28) &&
       (iVar20 = ((*(int *)(param_1 + 0x5e4) - *(int *)(param_1 + 0x5f4)) - iVar20) / 10,
       iVar20 < local_294)) {
      local_294 = iVar20;
    }
  }
  if (0 < *(int *)(lVar23 + 0x858)) {
    iVar20 = *(int *)(lVar23 + 0x126c);
    if (1999 < iVar20) {
      iVar20 = 2000;
    }
    local_298 = (*(int *)(param_1 + 0x980) + (2000 - iVar20) * -500) / 5000;
  }
  local_208 = local_294;
  local_204 = local_298;
  FUN_1402828c0(&local_218);
  local_218 = lVar18;
  local_210 = lVar23;
  FUN_14000bd10(local_200,*(longlong *)(param_1 + 0x6d0) - *(longlong *)(param_1 + 0x6c8) >> 2);
  FUN_14000bd10(local_1e8,*(longlong *)(param_1 + 0x6e8) - *(longlong *)(param_1 + 0x6e0) >> 2);
  iVar20 = 0;
  if (*(longlong *)(param_1 + 0x6d0) - *(longlong *)(param_1 + 0x6c8) >> 2 != 0) {
    uVar9 = 0;
    lVar18 = 0;
    do {
      if (iVar20 < 0) {
        iVar6 = 100;
      }
      else {
        iVar6 = *(int *)(lVar18 + *(longlong *)(param_1 + 0x6c8));
        if (uVar9 < (ulonglong)
                    (*(longlong *)(param_1 + 0x898) - *(longlong *)(param_1 + 0x890) >> 2)) {
          iVar6 = (*(int *)(lVar18 + *(longlong *)(param_1 + 0x890)) * iVar6) / 100;
        }
      }
      *(int *)(lVar18 + local_200[0]) = iVar6;
      iVar20 = iVar20 + 1;
      lVar18 = lVar18 + 4;
      uVar9 = (ulonglong)iVar20;
    } while (uVar9 < (ulonglong)
                     (*(longlong *)(param_1 + 0x6d0) - *(longlong *)(param_1 + 0x6c8) >> 2));
  }
  iVar20 = 0;
  if (*(longlong *)(param_1 + 0x6e8) - *(longlong *)(param_1 + 0x6e0) >> 2 != 0) {
    uVar9 = 0;
    lVar18 = 0;
    do {
      if (iVar20 < 0) {
        iVar6 = 100;
      }
      else {
        iVar6 = *(int *)(lVar18 + *(longlong *)(param_1 + 0x6e0));
        if (uVar9 < (ulonglong)
                    (*(longlong *)(param_1 + 0x8b0) - *(longlong *)(param_1 + 0x8a8) >> 2)) {
          iVar6 = (*(int *)(*(longlong *)(param_1 + 0x8a8) + lVar18) * iVar6) / 100;
        }
      }
      *(int *)(lVar18 + local_1e8[0]) = iVar6;
      iVar20 = iVar20 + 1;
      lVar18 = lVar18 + 4;
      uVar9 = (ulonglong)iVar20;
    } while (uVar9 < (ulonglong)
                     (*(longlong *)(param_1 + 0x6e8) - *(longlong *)(param_1 + 0x6e0) >> 2));
  }
  local_1d0 = *(undefined8 *)(param_1 + 0x5d8);
  FUN_1402caf30(local_1c8,param_1 + 0x4d0);
  FUN_1402caf30(local_1b0,param_1 + 0x518);
  FUN_14000bfc0(local_198,param_1 + 0x700);
  FUN_140050150(local_180,param_1 + 0x718);
  FUN_140050150(local_168,param_1 + 0x730);
  FUN_140050150(local_150,param_1 + 0x748);
  FUN_140050150(local_138,param_1 + 0x760);
  FUN_140050150(local_120,param_1 + 0x798);
  local_108 = param_1 + 0x590;
  local_100 = FUN_140cae990(param_1);
  local_fc = *(int *)(param_1 + 0xa4);
  sVar26 = *(short *)(param_1 + 300);
  local_f8 = (int)sVar26;
  local_f4 = *(undefined1 *)(param_1 + 0x12e);
  sVar19 = (short)local_fc;
  if (((-1 < sVar19) &&
      ((ulonglong)(longlong)sVar19 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (-1 < sVar26)) {
    lVar18 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar19 * 8);
    if (((ulonglong)(longlong)sVar26 <
         (ulonglong)(*(longlong *)(lVar18 + 0x180) - *(longlong *)(lVar18 + 0x178) >> 3)) &&
       (lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x178) + (longlong)sVar26 * 8), lVar18 != 0))
    {
      local_f2 = *(short *)(lVar18 + 0x3c3e);
      local_f0 = *(int *)(lVar18 + 0x3c40);
      local_ec = *(undefined2 *)(lVar18 + 0x3c3c);
      goto LAB_1402c94a2;
    }
  }
  local_f2 = -1;
LAB_1402c94a2:
  if (((local_fc == *(int *)(param_1 + 0xd70)) && (*(int *)(param_1 + 0xc10) != -1)) &&
     (((ushort)(local_f2 - 0x13U) < 200 && (local_f0 == local_fc)))) {
    local_f2 = local_f2 + 200;
    local_f0 = *(int *)(param_1 + 0xc10);
  }
  FUN_1402bf9a0(&local_218);
  iVar20 = 1999;
  local_290 = 1999;
  local_248 = local_d0;
  local_238 = local_c8;
  puVar7 = local_d0;
  puVar16 = local_c8;
  if (local_d0 < local_c8) {
    do {
      puVar5 = local_238;
      puVar4 = local_280;
      local_268 = (short *)*puVar7;
      local_248 = puVar7;
      if (*(longlong *)(local_268 + 0x20) - *(longlong *)(local_268 + 0x1c) >> 2 == 0) {
        local_60 = 0xf;
        local_68 = 0;
        local_78 = 0;
        local_80 = 0xf;
        local_88 = 0;
        local_98 = 0;
        iVar6 = iVar20;
        iVar12 = local_290;
        if ((*(longlong *)(local_268 + 8) - *(longlong *)(local_268 + 4) >> 2 != 0) ||
           (*(longlong *)(local_268 + 0x38) - *(longlong *)(local_268 + 0x34) >> 2 != 0)) {
          sVar26 = *local_268;
          if (sVar26 == 2) {
            if (*(longlong *)(local_268 + 8) - *(longlong *)(local_268 + 4) >> 2 == 0) {
              lVar18 = *(longlong *)
                        (*(longlong *)(lVar23 + 0x1690) + (longlong)**(int **)(local_268 + 0x34) * 8
                        );
              sVar19 = **(short **)(lVar18 + 0x30);
              sVar26 = **(short **)(lVar18 + 0x48);
              if (&local_98 != (undefined1 *)(lVar18 + 0x70)) {
                FUN_14000c8b0(&local_98,(undefined1 *)(lVar18 + 0x70),0);
              }
              sVar2 = *(short *)(lVar18 + 0x90);
            }
            else {
              lVar18 = *(longlong *)
                        (*(longlong *)(lVar23 + 0x15e8) + (longlong)**(int **)(local_268 + 4) * 8);
              sVar19 = **(short **)(lVar18 + 0x80);
              sVar26 = **(short **)(lVar18 + 0x98);
              if (&local_98 != (undefined1 *)(lVar18 + 0x58)) {
                FUN_14000c8b0(&local_98,(undefined1 *)(lVar18 + 0x58),0);
              }
              sVar2 = *(short *)(lVar18 + 0x78);
            }
            lVar18 = (longlong)sVar19;
            iVar6 = local_290;
            iVar12 = local_290;
            if ((*(char *)(lVar18 + local_b8) == '\0') &&
               (((sVar26 == -1 ||
                 ((*(byte *)(*(longlong *)(param_1 + 0x518) +
                            (longlong)
                            *(int *)(*(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)
                                          (**(longlong **)(param_1 + 0x5d8) + lVar18 * 8) + 0x58) +
                                      (longlong)sVar26 * 8) + 0x68) * 4) & 1) == 0)) &&
                ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + lVar18 * 4) & 2) == 0)))) {
              if (sVar2 == -1) {
                FUN_140c33070(param_1);
                if (sVar26 != -1) {
                  uVar14 = FUN_1400be580(local_58,&DAT_140e5e008);
                  FUN_14000cb40(&local_78,uVar14,0,0xffffffffffffffff);
                  if (0xf < local_40) {
                    FUN_140002020(local_58[0]);
                  }
                }
              }
              else {
                FUN_14000c8b0(&local_78,&local_98,0,0xffffffffffffffff);
              }
              lVar18 = local_288;
              iVar20 = 0;
              lVar23 = 0;
              psVar22 = local_268;
              param_1 = local_288;
              iVar6 = local_290;
              iVar12 = local_290;
              if (*(longlong *)(local_268 + 8) - *(longlong *)(local_268 + 4) >> 2 != 0) {
                do {
                  iVar12 = *(int *)(*(longlong *)(psVar22 + 4) + lVar23 * 4);
                  puVar3 = *(undefined2 **)
                            (*(longlong *)(local_258 + 0x15e8) + (longlong)iVar12 * 8);
                  if ((*(int *)(puVar3 + 0x1c) == 0) &&
                     (iVar21 = *(int *)(*(longlong *)(psVar22 + 0x10) + lVar23 * 4), iVar6 < iVar21)
                     ) {
                    iVar13 = 0;
                    iVar24 = 100;
                    lVar8 = 0;
                    if (*(longlong *)(lVar18 + 0x6e8) - *(longlong *)(lVar18 + 0x6e0) >> 2 != 0) {
                      piVar11 = *(int **)(local_258 + 0x1600);
                      do {
                        psVar22 = local_268;
                        if (*piVar11 == iVar12) {
                          iVar24 = *(int *)(*(longlong *)(lVar18 + 0x6e0) + lVar8 * 4);
                          break;
                        }
                        iVar13 = iVar13 + 1;
                        lVar8 = lVar8 + 1;
                        piVar11 = piVar11 + 1;
                      } while ((ulonglong)(longlong)iVar13 <
                               (ulonglong)
                               (*(longlong *)(lVar18 + 0x6e8) - *(longlong *)(lVar18 + 0x6e0) >> 2))
                      ;
                    }
                    if (*(int *)(puVar3 + 0x10) < iVar24) {
                      if (*(int *)(puVar3 + 0x12) < iVar24) {
                        if (*(int *)(puVar3 + 0x14) < iVar24) {
                          if (iVar24 < *(int *)(puVar3 + 0x1a)) {
                            if (iVar24 < *(int *)(puVar3 + 0x18)) {
                              iVar12 = 0;
                              if (*(int *)(puVar3 + 0x16) <= iVar24) {
                                iVar12 = 1;
                              }
                            }
                            else {
                              iVar12 = 2;
                            }
                          }
                          else {
                            iVar12 = 3;
                          }
                        }
                        else {
                          iVar12 = -1;
                        }
                      }
                      else {
                        iVar12 = -2;
                      }
                    }
                    else {
                      iVar12 = -3;
                    }
                    switch(*puVar3) {
                    case 0:
                      if (iVar12 < 1) {
LAB_1402ca77e:
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 5;
                        pcVar15 = "short";
                      }
                      else {
                        uVar17 = 4;
                        pcVar15 = "tall";
                      }
                      break;
                    case 1:
                      if (0 < iVar12) {
                        uVar17 = 5;
                        pcVar15 = "broad";
                        break;
                      }
                      if (iVar12 < 0) {
LAB_1402ca7b2:
                        uVar17 = 6;
                        pcVar15 = "narrow";
                        break;
                      }
                      goto LAB_1402caae7;
                    case 2:
                      if (iVar12 < 1) goto LAB_1402ca77e;
                      uVar17 = 4;
                      pcVar15 = "long";
                      break;
                    case 3:
                      if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 8;
                        pcVar15 = "wide-set";
                      }
                      else {
                        uVar17 = 9;
                        pcVar15 = "close-set";
                      }
                      break;
                    case 4:
                      if (iVar12 < 1) {
                        if (iVar12 == -3) {
                          uVar17 = 7;
                          pcVar15 = "bulging";
                        }
                        else {
                          if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                          uVar17 = 10;
                          pcVar15 = "protruding";
                        }
                      }
                      else {
                        uVar17 = 6;
                        pcVar15 = "sunken";
                      }
                      break;
                    case 5:
                      if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        pcVar15 = "low";
LAB_1402caad9:
                        uVar17 = 3;
                      }
                      else {
                        uVar17 = 4;
                        pcVar15 = "high";
                      }
                      break;
                    default:
                      goto switchD_1402ca766_caseD_6;
                    case 7:
                      if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 6;
                        pcVar15 = "smooth";
                      }
                      else {
                        uVar17 = 8;
                        pcVar15 = "wrinkled";
                      }
                      break;
                    case 8:
                      if (iVar12 == 3) {
                        uVar17 = 5;
                        pcVar15 = "curly";
                      }
                      else if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 8;
                        pcVar15 = "straight";
                      }
                      else {
                        uVar17 = 4;
                        pcVar15 = "wavy";
                      }
                      break;
                    case 9:
                      if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 7;
                        pcVar15 = "concave";
                      }
                      else {
                        uVar17 = 6;
                        pcVar15 = "convex";
                      }
                      break;
                    case 10:
                      if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 6;
                        pcVar15 = "sparse";
                      }
                      else {
                        uVar17 = 5;
                        pcVar15 = "dense";
                      }
                      break;
                    case 0xb:
                      if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 4;
                        pcVar15 = "thin";
                      }
                      else {
                        uVar17 = 5;
                        pcVar15 = "thick";
                      }
                      break;
                    case 0xc:
                      if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 6;
                        pcVar15 = "hooked";
                      }
                      else {
                        uVar17 = 8;
                        pcVar15 = "upturned";
                      }
                      break;
                    case 0xd:
                      if (iVar12 < 1) {
                        if (-1 < iVar12) goto switchD_1402ca766_caseD_6;
                        uVar17 = 9;
                        pcVar15 = "flattened";
                      }
                      else {
                        uVar17 = 7;
                        pcVar15 = "splayed";
                      }
                      break;
                    case 0xe:
                      if (iVar12 == 3) {
                        uVar17 = 0xb;
                        pcVar15 = "great-lobed";
                      }
                      else if (iVar12 < 1) {
                        if (iVar12 < -1) {
                          uVar17 = 10;
                          pcVar15 = "fuse-lobed";
                        }
                        else {
                          if (iVar12 != -1) goto switchD_1402ca766_caseD_6;
                          uVar17 = 0xb;
                          pcVar15 = "small-lobed";
                        }
                      }
                      else {
                        uVar17 = 10;
                        pcVar15 = "free-lobed";
                      }
                      break;
                    case 0xf:
                      if (iVar12 == 3) {
                        uVar17 = 0xd;
                        pcVar15 = "widely-spaced";
                      }
                      else if (iVar12 == 2) {
                        uVar17 = 6;
                        pcVar15 = "gapped";
                      }
                      else if (iVar12 == -3) {
                        uVar17 = 7;
                        pcVar15 = "tangled";
                      }
                      else {
                        if (iVar12 != -2) goto switchD_1402ca766_caseD_6;
                        uVar17 = 7;
                        pcVar15 = "crowded";
                      }
                      break;
                    case 0x14:
                      if (iVar12 < 1) {
                        if (iVar12 != -3) {
                          if (iVar12 < 0) goto LAB_1402ca7b2;
                          goto switchD_1402ca766_caseD_6;
                        }
                        uVar17 = 4;
                        pcVar15 = "slit";
                      }
                      else {
                        uVar17 = 5;
                        pcVar15 = "round";
                      }
                      break;
                    case 0x15:
                      if (iVar12 < 2) {
                        if (iVar12 != -3) {
                          if (iVar12 == -2) {
                            pcVar15 = "dry";
                            goto LAB_1402caad9;
                          }
                          goto switchD_1402ca766_caseD_6;
                        }
                        uVar17 = 7;
                        pcVar15 = "crinkly";
                      }
                      else {
                        uVar17 = 6;
                        pcVar15 = "greasy";
                      }
                    }
                    FUN_14000c780(puVar25,pcVar15,uVar17);
LAB_1402caae7:
                    FUN_14000c9f0(puVar25,&DAT_140e7abd4);
                    FUN_14000cb40(puVar25,&local_78,0,0xffffffffffffffff);
                    psVar22 = local_268;
                    iVar6 = iVar21;
                  }
switchD_1402ca766_caseD_6:
                  iVar20 = iVar20 + 1;
                  lVar23 = lVar23 + 1;
                  puVar7 = local_248;
                  puVar16 = local_238;
                  param_1 = local_288;
                  iVar12 = iVar6;
                } while ((ulonglong)(longlong)iVar20 <
                         (ulonglong)(*(longlong *)(psVar22 + 8) - *(longlong *)(psVar22 + 4) >> 2));
              }
            }
          }
          else if (sVar26 == 3) {
            iVar13 = 0;
            iVar21 = 0;
            local_278 = -1;
            local_260 = -1;
            iVar24 = 0;
            puVar25 = puVar4;
            iVar6 = local_290;
            if (*(longlong *)(local_268 + 8) - *(longlong *)(local_268 + 4) >> 2 != 0) {
              local_240 = *(longlong *)(local_258 + 0x15e8);
              piVar11 = *(int **)(local_268 + 4);
              lVar18 = *(longlong *)(local_268 + 0x10) - (longlong)piVar11;
              local_278 = -1;
              do {
                psVar22 = *(short **)(local_240 + (longlong)*piVar11 * 8);
                if (iVar20 < *(int *)(lVar18 + (longlong)piVar11)) {
                  iVar20 = *(int *)(lVar18 + (longlong)piVar11);
                }
                if (iVar24 == 0) {
                  local_278 = **(short **)(psVar22 + 0x40);
                  local_260 = (int)**(short **)(psVar22 + 0x4c);
                }
                iVar6 = 0;
                lVar23 = 0;
                if (*(longlong *)(local_288 + 0x6e8) - *(longlong *)(local_288 + 0x6e0) >> 2 != 0) {
                  piVar10 = *(int **)(local_258 + 0x1600);
                  do {
                    if (*piVar10 == *piVar11) {
                      if (*psVar22 == 0x16) {
                        iVar6 = *(int *)(*(longlong *)(local_288 + 0x6e0) + lVar23 * 4);
                        if (*(int *)(psVar22 + 0x10) < iVar6) {
                          if (*(int *)(psVar22 + 0x12) < iVar6) {
                            if (*(int *)(psVar22 + 0x14) < iVar6) {
                              if (iVar6 < *(int *)(psVar22 + 0x1a)) {
                                if (iVar6 < *(int *)(psVar22 + 0x18)) {
                                  if (*(int *)(psVar22 + 0x16) <= iVar6) {
                                    iVar21 = 1;
                                  }
                                }
                                else {
                                  iVar21 = 2;
                                }
                              }
                              else {
                                iVar21 = 3;
                              }
                            }
                            else {
                              iVar21 = -1;
                            }
                          }
                          else {
                            iVar21 = -2;
                          }
                        }
                        else {
                          iVar21 = -3;
                        }
                      }
                      else if (*psVar22 == 0x17) {
                        iVar6 = *(int *)(*(longlong *)(local_288 + 0x6e0) + lVar23 * 4);
                        if (*(int *)(psVar22 + 0x10) < iVar6) {
                          if (*(int *)(psVar22 + 0x12) < iVar6) {
                            if (*(int *)(psVar22 + 0x14) < iVar6) {
                              if (iVar6 < *(int *)(psVar22 + 0x1a)) {
                                if (iVar6 < *(int *)(psVar22 + 0x18)) {
                                  if (*(int *)(psVar22 + 0x16) <= iVar6) {
                                    iVar13 = 1;
                                  }
                                }
                                else {
                                  iVar13 = 2;
                                }
                              }
                              else {
                                iVar13 = 3;
                              }
                            }
                            else {
                              iVar13 = -1;
                            }
                          }
                          else {
                            iVar13 = -2;
                          }
                        }
                        else {
                          iVar13 = -3;
                        }
                      }
                      break;
                    }
                    iVar6 = iVar6 + 1;
                    lVar23 = lVar23 + 1;
                    piVar10 = piVar10 + 1;
                  } while ((ulonglong)(longlong)iVar6 <
                           (ulonglong)
                           (*(longlong *)(local_288 + 0x6e8) - *(longlong *)(local_288 + 0x6e0) >> 2
                           ));
                }
                iVar24 = iVar24 + 1;
                piVar11 = piVar11 + 1;
              } while ((ulonglong)(longlong)iVar24 <
                       (ulonglong)(*(longlong *)(local_268 + 8) - *(longlong *)(local_268 + 4) >> 2)
                      );
              if (((local_278 == -1) ||
                  (((lVar18 = (longlong)local_278, puVar16 = puVar5, param_1 = local_288,
                    iVar6 = local_290, *(char *)(lVar18 + local_b8) == '\0' &&
                    ((local_260 == -1 ||
                     ((*(byte *)(*(longlong *)(local_288 + 0x518) +
                                (longlong)
                                *(int *)(*(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (**(longlong **)(local_288 + 0x5d8) + lVar18 * 8) +
                                            0x58) + (longlong)local_260 * 8) + 0x68) * 4) & 1) == 0)
                     ))) && ((*(byte *)(*(longlong *)(local_288 + 0x4d0) + lVar18 * 4) & 2) == 0))))
                 && (puVar16 = puVar5, param_1 = local_288, iVar6 = local_290, local_290 < iVar20))
              {
                if (iVar13 == 0) {
                  if (iVar21 == 0) goto LAB_1402cab78;
LAB_1402ca416:
                  if ((iVar21 == -3) || (iVar21 == -2)) {
                    uVar17 = 0xb;
                    pcVar15 = "high-voiced";
                  }
                  else if (iVar21 == 3) {
LAB_1402ca39e:
                    uVar17 = 0xb;
                    pcVar15 = "deep-voiced";
                  }
                  else {
                    if (iVar21 != 2) goto LAB_1402cab78;
                    uVar17 = 10;
                    pcVar15 = "low-voiced";
                  }
                }
                else if (iVar13 == 3) {
                  if (iVar21 != 3) {
                    if (iVar21 == -3) {
LAB_1402ca370:
                      uVar17 = 0xe;
                      pcVar15 = "grating-voiced";
                    }
                    else {
LAB_1402ca3b3:
                      if (iVar21 < 2) {
                        if (-2 < iVar21) goto LAB_1402ca3de;
                        uVar17 = 0xe;
                        pcVar15 = "squeaky-voiced";
                      }
                      else {
                        uVar17 = 0xc;
                        pcVar15 = "raspy-voiced";
                      }
                    }
                    goto LAB_1402ca359;
                  }
                  pcVar15 = "guttural-voiced";
LAB_1402ca34e:
                  uVar17 = 0xf;
                }
                else {
                  if (iVar13 == -3) {
                    if (iVar21 != -3) {
                      if (iVar21 != 3) goto LAB_1402ca3e4;
                      goto LAB_1402ca39e;
                    }
                  }
                  else {
                    if (1 < iVar13) goto LAB_1402ca3b3;
LAB_1402ca3de:
                    if (iVar13 < -1) {
LAB_1402ca3e4:
                      if ((1 < iVar21) || (iVar21 < -1)) goto LAB_1402ca38a;
                    }
                    if ((iVar13 != -3) && (iVar13 != -2)) {
                      if (iVar13 == 3) goto LAB_1402ca370;
                      if (iVar13 != 2) goto LAB_1402ca416;
                      pcVar15 = "scratchy-voiced";
                      goto LAB_1402ca34e;
                    }
                  }
LAB_1402ca38a:
                  uVar17 = 0xc;
                  pcVar15 = "clear-voiced";
                }
LAB_1402ca359:
                FUN_14000c780(local_280,pcVar15,uVar17);
                param_1 = local_288;
                iVar6 = iVar20;
                iVar12 = iVar20;
              }
            }
          }
          else if (sVar26 == 4) {
            iVar27 = 0;
            iVar24 = 0;
            local_274 = 0;
            iVar21 = 0;
            local_260 = 0;
            iVar13 = 0;
            local_26c = 0;
            iVar20 = 0;
            lVar18 = 0;
            local_270 = 0;
            local_278 = -1;
            local_240 = CONCAT44(local_240._4_4_,0xffffffff);
            local_250 = 0;
            if (*(longlong *)(local_268 + 8) - *(longlong *)(local_268 + 4) >> 2 != 0) {
              do {
                psVar22 = *(short **)
                           (*(longlong *)(local_258 + 0x15e8) +
                           (longlong)*(int *)(lVar18 + *(longlong *)(local_268 + 4)) * 8);
                if (local_250 == 0) {
                  local_278 = **(short **)(psVar22 + 0x40);
                  local_240 = CONCAT44(local_240._4_4_,(int)**(short **)(psVar22 + 0x4c));
                }
                iVar6 = 0;
                lVar23 = 0;
                if (*(longlong *)(local_288 + 0x6e8) - *(longlong *)(local_288 + 0x6e0) >> 2 != 0) {
                  piVar11 = *(int **)(local_258 + 0x1600);
                  do {
                    iVar24 = local_274;
                    if (*piVar11 == *(int *)(lVar18 + *(longlong *)(local_268 + 4))) {
                      sVar26 = *psVar22;
                      if (sVar26 == 0x10) {
                        iVar6 = *(int *)(*(longlong *)(local_288 + 0x6e0) + lVar23 * 4);
                        if (*(int *)(psVar22 + 0x10) < iVar6) {
                          if (*(int *)(psVar22 + 0x12) < iVar6) {
                            if (*(int *)(psVar22 + 0x14) < iVar6) {
                              if (iVar6 < *(int *)(psVar22 + 0x1a)) {
                                if (iVar6 < *(int *)(psVar22 + 0x18)) {
                                  if (*(int *)(psVar22 + 0x16) <= iVar6) {
                                    iVar27 = 1;
                                  }
                                }
                                else {
                                  iVar27 = 2;
                                }
                              }
                              else {
                                iVar27 = 3;
                              }
                            }
                            else {
                              iVar27 = -1;
                            }
                          }
                          else {
                            iVar27 = -2;
                          }
                        }
                        else {
                          iVar27 = -3;
                        }
                        local_274 = *(int *)(lVar18 + *(longlong *)(local_268 + 0x10));
                        iVar24 = local_274;
                      }
                      else if (sVar26 == 0x11) {
                        iVar6 = *(int *)(*(longlong *)(local_288 + 0x6e0) + lVar23 * 4);
                        if (*(int *)(psVar22 + 0x10) < iVar6) {
                          if (*(int *)(psVar22 + 0x12) < iVar6) {
                            if (*(int *)(psVar22 + 0x14) < iVar6) {
                              if (iVar6 < *(int *)(psVar22 + 0x1a)) {
                                if (iVar6 < *(int *)(psVar22 + 0x18)) {
                                  if (*(int *)(psVar22 + 0x16) <= iVar6) {
                                    iVar21 = 1;
                                  }
                                }
                                else {
                                  iVar21 = 2;
                                }
                              }
                              else {
                                iVar21 = 3;
                              }
                            }
                            else {
                              iVar21 = -1;
                            }
                          }
                          else {
                            iVar21 = -2;
                          }
                        }
                        else {
                          iVar21 = -3;
                        }
                        local_260 = *(int *)(lVar18 + *(longlong *)(local_268 + 0x10));
                      }
                      else if (sVar26 == 0x12) {
                        iVar6 = *(int *)(*(longlong *)(local_288 + 0x6e0) + lVar23 * 4);
                        if (*(int *)(psVar22 + 0x10) < iVar6) {
                          if (*(int *)(psVar22 + 0x12) < iVar6) {
                            if (*(int *)(psVar22 + 0x14) < iVar6) {
                              if (iVar6 < *(int *)(psVar22 + 0x1a)) {
                                if (iVar6 < *(int *)(psVar22 + 0x18)) {
                                  if (*(int *)(psVar22 + 0x16) <= iVar6) {
                                    iVar13 = 1;
                                  }
                                }
                                else {
                                  iVar13 = 2;
                                }
                              }
                              else {
                                iVar13 = 3;
                              }
                            }
                            else {
                              iVar13 = -1;
                            }
                          }
                          else {
                            iVar13 = -2;
                          }
                        }
                        else {
                          iVar13 = -3;
                        }
                        local_26c = *(int *)(lVar18 + *(longlong *)(local_268 + 0x10));
                      }
                      else if (sVar26 == 0x13) {
                        iVar6 = *(int *)(*(longlong *)(local_288 + 0x6e0) + lVar23 * 4);
                        if (*(int *)(psVar22 + 0x10) < iVar6) {
                          if (*(int *)(psVar22 + 0x12) < iVar6) {
                            if (*(int *)(psVar22 + 0x14) < iVar6) {
                              if (iVar6 < *(int *)(psVar22 + 0x1a)) {
                                if (iVar6 < *(int *)(psVar22 + 0x18)) {
                                  if (*(int *)(psVar22 + 0x16) <= iVar6) {
                                    iVar20 = 1;
                                  }
                                }
                                else {
                                  iVar20 = 2;
                                }
                              }
                              else {
                                iVar20 = 3;
                              }
                            }
                            else {
                              iVar20 = -1;
                            }
                          }
                          else {
                            iVar20 = -2;
                          }
                        }
                        else {
                          iVar20 = -3;
                        }
                        local_270 = *(int *)(lVar18 + *(longlong *)(local_268 + 0x10));
                      }
                      break;
                    }
                    iVar6 = iVar6 + 1;
                    lVar23 = lVar23 + 1;
                    piVar11 = piVar11 + 1;
                  } while ((ulonglong)(longlong)iVar6 <
                           (ulonglong)
                           (*(longlong *)(local_288 + 0x6e8) - *(longlong *)(local_288 + 0x6e0) >> 2
                           ));
                }
                local_250 = local_250 + 1;
                lVar18 = lVar18 + 4;
              } while ((ulonglong)(longlong)local_250 <
                       (ulonglong)(*(longlong *)(local_268 + 8) - *(longlong *)(local_268 + 4) >> 2)
                      );
              puVar16 = local_238;
              if (local_278 != -1) {
                lVar18 = (longlong)local_278;
                puVar16 = puVar5;
                param_1 = local_288;
                puVar25 = puVar4;
                iVar6 = local_290;
                if (*(char *)(lVar18 + local_b8) == '\0') {
                  if ((((int)local_240 == -1) ||
                      ((*(byte *)(*(longlong *)(local_288 + 0x518) +
                                 (longlong)
                                 *(int *)(*(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               (**(longlong **)(local_288 + 0x5d8) + lVar18 * 8) +
                                             0x58) + (longlong)(int)local_240 * 8) + 0x68) * 4) & 1)
                       == 0)) &&
                     (puVar16 = local_238,
                     (*(byte *)(*(longlong *)(local_288 + 0x4d0) + lVar18 * 4) & 2) == 0))
                  goto LAB_1402c9eb8;
                }
                goto LAB_1402cab78;
              }
            }
LAB_1402c9eb8:
            iVar6 = local_270;
            if ((local_290 < iVar24) && (2 < iVar27 + 1U)) {
              if (iVar27 < 2) {
                uVar14 = 0xe;
                pcVar15 = "low-cheekbones";
              }
              else {
                uVar14 = 0xf;
                pcVar15 = "high-cheekbones";
              }
              local_290 = iVar24;
              FUN_14000c780(local_280,pcVar15,uVar14);
            }
            puVar25 = local_280;
            if ((local_290 < iVar6) && (2 < iVar20 + 1U)) {
              local_290 = iVar6;
              if (iVar27 < 2) {
                FUN_14000c780(local_280,"round-chin",10);
              }
              else {
                FUN_14000c780(local_280,"square-chin",0xb);
              }
            }
            param_1 = local_288;
            iVar6 = local_290;
            iVar12 = local_290;
            if (((local_290 < local_260) || (local_290 < local_26c)) &&
               ((2 < iVar21 + 1U || (2 < iVar13 + 1U)))) {
              if (local_290 < local_260) {
                local_290 = local_260;
              }
              iVar6 = local_290;
              if (local_290 < local_26c) {
                iVar6 = local_26c;
              }
              local_290 = iVar6;
              if (iVar21 == 3) {
                if (iVar13 == 3) {
                  FUN_14000c780(puVar25,"massive-chin",0xc);
                  param_1 = local_288;
                  iVar12 = local_290;
                }
                else {
                  bVar28 = iVar13 == -3;
LAB_1402c9fb3:
                  if (bVar28) {
LAB_1402c9fb9:
                    uVar14 = 0xd;
                    pcVar15 = "recessed-chin";
                  }
                  else {
LAB_1402ca083:
                    uVar14 = 10;
                    pcVar15 = "broad-chin";
                  }
LAB_1402c9fc6:
                  FUN_14000c780(puVar25,pcVar15,uVar14);
                  param_1 = local_288;
                  iVar12 = local_290;
                }
              }
              else if (iVar21 == -3) {
                if (iVar13 == 3) {
                  FUN_14000c780(puVar25,"jutting-chin",0xc);
                  param_1 = local_288;
                  iVar12 = local_290;
                }
                else {
                  if (iVar13 != -3) goto LAB_1402ca09b;
                  FUN_14000c780(puVar25,"recessed-chin",0xd);
                  param_1 = local_288;
                  iVar12 = local_290;
                }
              }
              else {
                if (iVar21 != 2) {
                  if (iVar21 == -2) {
                    if (iVar13 == 2) {
LAB_1402ca061:
                      uVar14 = 0xe;
                      pcVar15 = "prominent-chin";
                    }
                    else {
                      if (iVar13 == -2) goto LAB_1402c9fb9;
LAB_1402ca09b:
                      uVar14 = 0xb;
                      pcVar15 = "narrow-chin";
                    }
                  }
                  else {
                    if (1 < iVar21) goto LAB_1402ca083;
                    if (iVar21 < -1) goto LAB_1402ca09b;
                    if (iVar13 < 3) {
                      if (iVar13 < 2) {
                        iVar12 = iVar6;
                        if (iVar13 < -1) goto LAB_1402c9fb9;
                        goto LAB_1402cab78;
                      }
                      goto LAB_1402ca061;
                    }
                    uVar14 = 0xc;
                    pcVar15 = "jutting-chin";
                  }
                  goto LAB_1402c9fc6;
                }
                if (iVar13 != 2) {
                  bVar28 = iVar13 == -2;
                  goto LAB_1402c9fb3;
                }
                FUN_14000c780(puVar25,"prominent-chin",0xe);
                param_1 = local_288;
                iVar12 = local_290;
              }
            }
          }
        }
LAB_1402cab78:
        local_290 = iVar12;
        if (0xf < local_80) {
          FUN_140002020(CONCAT71(uStack_97,local_98),local_80 + 1,1);
        }
        local_80 = 0xf;
        local_88 = 0;
        local_98 = 0;
        iVar20 = iVar6;
        if (0xf < local_60) {
          FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
        }
      }
      else if (*local_268 == 0) {
        iVar6 = 0;
        local_270 = -30000;
        iVar24 = -30000;
        local_26c = -30000;
        local_274 = -30000;
        iVar12 = -30000;
        iVar21 = -30000;
        iVar20 = 0;
        if (*(longlong *)(local_268 + 0x20) - *(longlong *)(local_268 + 0x1c) >> 2 != 0) {
          piVar11 = *(int **)(local_268 + 0x1c);
          plVar1 = (longlong *)(param_1 + 0x6c8);
          lVar18 = *(longlong *)(local_268 + 0x28) - (longlong)piVar11;
          do {
            if (iVar6 < *(int *)(lVar18 + (longlong)piVar11)) {
              iVar6 = *(int *)(lVar18 + (longlong)piVar11);
            }
            psVar22 = *(short **)(*(longlong *)(local_258 + 0x15d0) + (longlong)*piVar11 * 8);
            iVar13 = *(int *)(*plVar1 + (longlong)*piVar11 * 4);
            iVar27 = *(int *)(psVar22 + 8);
            sVar26 = *psVar22;
            if (sVar26 == 0) {
              iVar24 = iVar13 - iVar27;
              local_274 = iVar13;
            }
            else if (sVar26 == 1) {
              iVar12 = iVar13 - iVar27;
              local_26c = iVar13;
            }
            else if (sVar26 == 2) {
              iVar21 = iVar13 - iVar27;
              local_270 = iVar13;
            }
            iVar20 = iVar20 + 1;
            piVar11 = piVar11 + 1;
            puVar16 = local_238;
            param_1 = local_288;
            puVar25 = local_280;
          } while ((ulonglong)(longlong)iVar20 <
                   (ulonglong)
                   (*(longlong *)(local_268 + 0x20) - *(longlong *)(local_268 + 0x1c) >> 2));
        }
        iVar20 = local_290;
        if (local_290 < iVar6) {
          iVar20 = iVar6;
          local_290 = iVar6;
          if (iVar21 == -30000) {
LAB_1402c9732:
            if ((iVar24 == -30000) || (iVar12 == -30000)) {
LAB_1402c9876:
              if ((iVar21 == -30000) || (iVar12 == -30000)) {
                if (iVar24 == -30000) {
                  if (iVar21 != -30000) {
LAB_1402c9a0f:
                    if (iVar21 < 0x32) {
                      if (iVar21 < 0x19) {
                        if (iVar21 < 10) {
                          if (iVar21 < -0x31) {
                            uVar14 = 0x15;
                          }
                          else if (iVar21 < -0x18) {
                            uVar14 = 0x16;
                          }
                          else {
                            if (-10 < iVar21) goto LAB_1402c972b;
                            uVar14 = 0x17;
                          }
                        }
                        else {
                          uVar14 = 0x11;
                        }
                      }
                      else {
                        uVar14 = 0x10;
                      }
                    }
                    else {
                      uVar14 = 0xf;
                    }
                    goto LAB_1402c96ba;
                  }
                }
                else if (iVar21 != -30000) {
                  lVar18 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) *
                                  SEXT816((longlong)local_274 * (longlong)local_270),8) +
                           (longlong)local_274 * (longlong)local_270;
                  lVar18 = (lVar18 >> 6) - (lVar18 >> 0x3f);
                  if (lVar18 < 0x96) goto LAB_1402c96c4;
                  goto LAB_1402c96ab;
                }
                if (iVar12 == -30000) {
                  if (iVar24 == -30000) goto LAB_1402cabdb;
LAB_1402c9aa3:
                  if (iVar24 < 0x32) {
                    if (iVar24 < 0x19) {
                      if (iVar24 < 10) {
                        if (iVar24 < -0x31) {
                          uVar14 = 0x12;
                        }
                        else if (iVar24 < -0x18) {
                          uVar14 = 0x13;
                        }
                        else {
                          if (-10 < iVar24) goto LAB_1402c972b;
                          uVar14 = 0x14;
                        }
                      }
                      else {
                        uVar14 = 0xe;
                      }
                    }
                    else {
                      uVar14 = 0xd;
                    }
                  }
                  else {
                    uVar14 = 0xc;
                  }
                }
                else if (iVar12 < 0x32) {
                  if (iVar12 < 0x19) {
                    if (iVar12 < 10) {
                      if (iVar12 < -0x31) {
                        uVar14 = 9;
                      }
                      else if (iVar12 < -0x18) {
                        uVar14 = 10;
                      }
                      else {
                        if (-10 < iVar12) goto LAB_1402c972b;
                        uVar14 = 0xb;
                      }
                    }
                    else {
                      uVar14 = 7;
                    }
                  }
                  else {
                    uVar14 = 6;
                  }
                }
                else {
                  uVar14 = 5;
                }
              }
              else {
                if ((0x31 < iVar21) && (0x31 < iVar12)) goto LAB_1402c96ab;
                if ((iVar21 < -0x31) && (iVar12 < -0x31)) {
                  uVar14 = 0x1b;
                }
                else if (iVar21 < 10) {
LAB_1402c98d7:
                  if (iVar21 < -9) {
                    if (iVar12 < 10) {
                      if (-10 < iVar12) goto LAB_1402c98fb;
                      uVar14 = 0x19;
                    }
                    else {
                      uVar14 = 4;
                    }
                  }
                  else {
LAB_1402c98fb:
                    if (iVar12 < 0x32) {
                      if (iVar12 < 0x19) {
                        if (iVar12 < 10) {
                          if (iVar12 < -0x31) {
                            uVar14 = 9;
                          }
                          else if (iVar12 < -0x18) {
                            uVar14 = 10;
                          }
                          else {
                            if (-10 < iVar12) goto LAB_1402c9a0f;
                            uVar14 = 0xb;
                          }
                        }
                        else {
                          uVar14 = 7;
                        }
                      }
                      else {
                        uVar14 = 6;
                      }
                    }
                    else {
                      uVar14 = 5;
                    }
                  }
                }
                else if (iVar12 < 10) {
                  if (-10 < iVar12) goto LAB_1402c98d7;
                  uVar14 = 8;
                }
                else {
                  uVar14 = 2;
                }
              }
            }
            else if ((iVar24 < 0x32) || (iVar12 < 0x32)) {
              if ((iVar24 < -0x31) && (iVar12 < -0x31)) {
                uVar14 = 0x1b;
              }
              else if (iVar24 < 10) {
LAB_1402c9793:
                if (iVar24 < -9) {
                  if (iVar12 < 10) {
                    if (-10 < iVar12) goto LAB_1402c97b7;
                    uVar14 = 0x19;
                  }
                  else {
                    uVar14 = 4;
                  }
                }
                else {
LAB_1402c97b7:
                  if (iVar12 < 0x32) {
                    if (iVar12 < 0x19) {
                      if (iVar12 < 10) {
                        if (iVar12 < -0x31) {
                          uVar14 = 9;
                        }
                        else if (iVar12 < -0x18) {
                          uVar14 = 10;
                        }
                        else {
                          if (-10 < iVar12) goto LAB_1402c9aa3;
                          uVar14 = 0xb;
                        }
                      }
                      else {
                        uVar14 = 7;
                      }
                    }
                    else {
                      uVar14 = 6;
                    }
                  }
                  else {
                    uVar14 = 5;
                  }
                }
              }
              else if (iVar12 < 10) {
                if (-10 < iVar12) goto LAB_1402c9793;
                uVar14 = 3;
              }
              else {
                uVar14 = 2;
              }
            }
            else {
LAB_1402c96ab:
              uVar14 = 0;
            }
          }
          else {
            if (iVar24 == -30000) goto LAB_1402c9876;
            if (iVar12 == -30000) goto LAB_1402c9732;
            lVar18 = ((longlong)local_274 * (longlong)local_26c * (longlong)local_270) / 10000;
            if (0x95 < lVar18) goto LAB_1402c96ab;
LAB_1402c96c4:
            if (0x7c < lVar18) {
              FUN_1402c7f90(puVar25,1,local_294);
              goto LAB_1402cabdb;
            }
            if (lVar18 < 0x6e) {
              if (lVar18 < 0x33) {
                uVar14 = 0x1b;
              }
              else if (lVar18 < 0x4c) {
                uVar14 = 0x19;
              }
              else if (lVar18 < 0x5b) {
                uVar14 = 0x1a;
              }
              else {
LAB_1402c972b:
                uVar14 = 0x18;
              }
            }
            else {
              uVar14 = 2;
            }
          }
LAB_1402c96ba:
          FUN_1402c7f90(puVar25,uVar14,local_294);
        }
      }
LAB_1402cabdb:
      local_248 = puVar7 + 1;
      puVar7 = local_248;
      lVar23 = local_258;
    } while (local_248 < puVar16);
  }
  if (puVar25[2] == 0) {
    FUN_14000c780(puVar25,"average",7);
  }
  FUN_1402829e0(&local_218);
  return;
}

