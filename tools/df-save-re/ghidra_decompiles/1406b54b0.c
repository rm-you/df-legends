// FUN_1406b54b0 @ 1406b54b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 140763f70 FUN_140763f70
//   -> 140764260 FUN_140764260
//   -> 14048e4e0 FUN_14048e4e0
//   -> 140dfb5b4 free
//   -> 140050b50 FUN_140050b50
//   -> 140af5bf0 FUN_140af5bf0
//   -> 14000c780 FUN_14000c780
//   -> 140ca6640 FUN_140ca6640
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140086a20 FUN_140086a20
//   -> 14000c2d0 FUN_14000c2d0
//   -> 14053c490 FUN_14053c490
//   -> 1404cec60 FUN_1404cec60
//   -> 14073edb0 FUN_14073edb0
//   -> 140050d90 FUN_140050d90
//   -> 1407c6ea0 FUN_1407c6ea0
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> 14061fbe0 FUN_14061fbe0
//   -> 1400be580 FUN_1400be580
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140074660 FUN_140074660
//   -> 140526430 FUN_140526430
//   -> 14097ffb0 FUN_14097ffb0
//   -> 140071a80 FUN_140071a80
//   -> 14073d8e0 FUN_14073d8e0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406b54b0(int *param_1,longlong param_2)

{
  byte *pbVar1;
  short *psVar2;
  void *_Memory;
  int **ppiVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *puVar21;
  int *piVar22;
  ulonglong *puVar23;
  uint uVar24;
  int *piVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined4 local_190;
  undefined4 local_188;
  int local_178;
  int local_174;
  int *local_170;
  int *local_168;
  int *local_160;
  longlong *local_158;
  int *local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_142;
  undefined2 local_13e;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  longlong local_100;
  int *local_f8;
  longlong local_f0;
  int *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  void *local_b0;
  void *local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  ulonglong local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_d8 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_1b8;
  if (param_1[2] == *(int *)(param_2 + 0xc10)) {
    uVar30 = 0;
    uVar29 = uVar30;
    uVar27 = uVar30;
    local_150 = param_1;
    if (*(longlong *)(param_1 + 0x56) - *(longlong *)(param_1 + 0x54) >> 2 != 0) {
      do {
        plVar6 = operator_new(0x38);
        local_158 = plVar6;
        FUN_140709240(plVar6,0);
        *plVar6 = (longlong)history_event_first_contactst::vftable;
        plVar6[5] = -1;
        *(undefined4 *)(plVar6 + 6) = 0xffffffff;
        *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(uVar27 + *(longlong *)(param_1 + 0x5a));
        *(undefined4 *)((longlong)plVar6 + 0xc) =
             *(undefined4 *)(uVar27 + *(longlong *)(param_1 + 0x60));
        *(undefined4 *)(plVar6 + 5) = *(undefined4 *)(uVar27 + *(longlong *)(param_1 + 0x54));
        *(int *)((longlong)plVar6 + 0x2c) = DAT_141c36b80;
        *(int *)(plVar6 + 6) = DAT_141c36b84;
        (*(code *)history_event_first_contactst::vftable[0x25])(plVar6);
        uVar24 = (int)uVar29 + 1;
        uVar29 = (ulonglong)uVar24;
        uVar27 = uVar27 + 4;
      } while ((ulonglong)(longlong)(int)uVar24 <
               (ulonglong)(*(longlong *)(param_1 + 0x56) - *(longlong *)(param_1 + 0x54) >> 2));
    }
    *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_1 + 0x54);
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x5a);
    *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x60);
    uVar29 = uVar30;
    uVar27 = uVar30;
    if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x36) >> 2 != 0) {
      do {
        plVar6 = operator_new(0x40);
        local_158 = plVar6;
        FUN_140709240(plVar6,0);
        *plVar6 = (longlong)history_event_topicagreement_concludedst::vftable;
        plVar6[5] = -1;
        *(undefined4 *)(plVar6 + 6) = 0xffffffff;
        *(undefined2 *)((longlong)plVar6 + 0x34) = 0;
        *(undefined4 *)(plVar6 + 7) = 0;
        *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(uVar29 + *(longlong *)(param_1 + 0x42));
        *(undefined4 *)((longlong)plVar6 + 0xc) =
             *(undefined4 *)(uVar29 + *(longlong *)(param_1 + 0x48));
        *(undefined4 *)(plVar6 + 5) = *(undefined4 *)(uVar29 + *(longlong *)(param_1 + 0x36));
        *(int *)((longlong)plVar6 + 0x2c) = DAT_141c36b80;
        *(int *)(plVar6 + 6) = DAT_141c36b84;
        *(undefined2 *)((longlong)plVar6 + 0x34) =
             *(undefined2 *)(uVar30 + *(longlong *)(param_1 + 0x3c));
        *(int *)(plVar6 + 7) = (int)*(short *)(uVar30 + *(longlong *)(param_1 + 0x4e));
        (**(code **)(*plVar6 + 0x128))(plVar6);
        uVar24 = (int)uVar27 + 1;
        uVar30 = uVar30 + 2;
        uVar29 = uVar29 + 4;
        uVar27 = (ulonglong)uVar24;
      } while ((ulonglong)(longlong)(int)uVar24 <
               (ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x36) >> 2));
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x36);
    *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x42);
    *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x4e);
    local_178 = 0;
    if (*(longlong *)(param_1 + 0x32) - *(longlong *)(param_1 + 0x30) >> 3 != 0) {
      local_f0 = 0;
      local_160 = local_168;
      local_f8 = local_170;
LAB_1406b57a0:
      lVar19 = local_f0;
      piVar7 = local_160;
      iVar5 = 0;
      psVar2 = *(short **)(*(longlong *)(param_1 + 0x30) + local_f0 * 8);
      if (*psVar2 == 1) {
        plVar6 = operator_new(0x38);
        local_d0 = plVar6;
        FUN_140709240(plVar6,0);
        *plVar6 = (longlong)history_event_topicagreement_rejectedst::vftable;
        *(undefined2 *)(plVar6 + 5) = 0;
        *(undefined8 *)((longlong)plVar6 + 0x2c) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)plVar6 + 0x34) = 0xffffffff;
        *(undefined4 *)(plVar6 + 1) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 0x40);
        *(undefined4 *)((longlong)plVar6 + 0xc) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 0x44);
        *(undefined2 *)(plVar6 + 5) =
             *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 2);
        *(int *)((longlong)plVar6 + 0x2c) = *param_1;
        *(int *)(plVar6 + 6) = DAT_141c36b80;
        *(int *)((longlong)plVar6 + 0x34) = DAT_141c36b84;
        (**(code **)(*plVar6 + 0x128))(plVar6);
        goto LAB_1406b5845;
      }
      if (*psVar2 == 2) {
        plVar6 = operator_new(0x38);
        local_c8 = plVar6;
        FUN_140709240(plVar6,0);
        *plVar6 = (longlong)history_event_war_peace_acceptedst::vftable;
        piVar12 = (int *)0x0;
        *(undefined2 *)(plVar6 + 5) = 0;
        *(undefined8 *)((longlong)plVar6 + 0x2c) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)plVar6 + 0x34) = 0xffffffff;
        *(undefined4 *)(plVar6 + 1) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 0x40);
        *(undefined4 *)((longlong)plVar6 + 0xc) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 0x44);
        *(undefined2 *)(plVar6 + 5) =
             *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 2);
        *(int *)((longlong)plVar6 + 0x2c) = *param_1;
        *(int *)(plVar6 + 6) = DAT_141c36b88;
        *(int *)((longlong)plVar6 + 0x34) = DAT_141c36b84;
        uVar32 = (**(code **)(*plVar6 + 0x128))(plVar6);
        iVar5 = *param_1;
        lVar28 = DAT_141c53720 - DAT_141c53718 >> 3;
        piVar7 = piVar12;
        if (((lVar28 != 0) && (iVar5 != -1)) &&
           (iVar20 = (int)lVar28 + -1, piVar8 = piVar12, -1 < iVar20)) {
          do {
            iVar14 = iVar20 + (int)piVar8 >> 1;
            piVar7 = *(int **)(DAT_141c53718 + (longlong)iVar14 * 8);
            iVar15 = piVar7[1];
            if (iVar15 == iVar5) break;
            if (iVar5 < iVar15) {
              iVar20 = iVar14 + -1;
            }
            else {
              piVar8 = (int *)(ulonglong)(iVar14 + 1);
            }
            piVar7 = piVar12;
          } while ((int)piVar8 <= iVar20);
        }
        piVar8 = piVar12;
        if (((lVar28 != 0) && (DAT_141c36b88 != -1)) &&
           (iVar20 = (int)lVar28 + -1, piVar22 = piVar12, -1 < iVar20)) {
          do {
            iVar14 = iVar20 + (int)piVar22 >> 1;
            piVar8 = *(int **)(DAT_141c53718 + (longlong)iVar14 * 8);
            iVar15 = piVar8[1];
            if (iVar15 == DAT_141c36b88) break;
            if (DAT_141c36b88 < iVar15) {
              iVar20 = iVar14 + -1;
            }
            else {
              piVar22 = (int *)(ulonglong)(iVar14 + 1);
            }
            piVar8 = piVar12;
          } while ((int)piVar22 <= iVar20);
        }
        piVar22 = piVar12;
        if (piVar7 != (int *)0x0) {
          iVar20 = (int)(*(longlong *)(piVar7 + 0x408) - *(longlong *)(piVar7 + 0x406) >> 3) + -1;
          piVar25 = piVar12;
          if (-1 < iVar20) {
            do {
              iVar15 = iVar20 + (int)piVar25 >> 1;
              piVar22 = *(int **)(*(longlong *)(piVar7 + 0x406) + (longlong)iVar15 * 8);
              if (*piVar22 == DAT_141c36b88) goto LAB_1406b5a1f;
              if (DAT_141c36b88 < *piVar22) {
                iVar20 = iVar15 + -1;
              }
              else {
                piVar25 = (int *)(ulonglong)(iVar15 + 1);
              }
            } while ((int)piVar25 <= iVar20);
          }
          piVar22 = (int *)0x0;
        }
LAB_1406b5a1f:
        piVar7 = (int *)0x0;
        if (piVar8 != (int *)0x0) {
          iVar20 = (int)(*(longlong *)(piVar8 + 0x408) - *(longlong *)(piVar8 + 0x406) >> 3) + -1;
          piVar25 = piVar7;
          piVar12 = piVar7;
          if (-1 < iVar20) {
            do {
              iVar14 = iVar20 + (int)piVar25 >> 1;
              piVar12 = *(int **)(*(longlong *)(piVar8 + 0x406) + (longlong)iVar14 * 8);
              iVar15 = *piVar12;
              if (iVar15 == iVar5) break;
              if (iVar5 < iVar15) {
                iVar20 = iVar14 + -1;
              }
              else {
                piVar25 = (int *)(ulonglong)(iVar14 + 1);
              }
              piVar12 = piVar7;
            } while ((int)piVar25 <= iVar20);
          }
        }
        if ((piVar22 != (int *)0x0) && (piVar12 != (int *)0x0)) {
          *(undefined2 *)(piVar22 + 1) = 0;
          *(undefined2 *)(piVar12 + 1) = 0;
          piVar22[0x10] = piVar22[0x10] & 0xfffffffd;
          piVar12[0x10] = piVar12[0x10] & 0xfffffffe;
          piVar22[0x10] = piVar22[0x10] & 0xfffffffe;
          piVar12[0x10] = piVar12[0x10] & 0xfffffffd;
          iVar5 = piVar22[2];
          if (iVar5 != -1) {
            iVar20 = (int)(DAT_141d7a0e0 - DAT_141d7a0d8 >> 3) + -1;
            if (-1 < iVar20) {
              do {
                iVar14 = iVar20 + (int)piVar7 >> 1;
                lVar28 = *(longlong *)(DAT_141d7a0d8 + (longlong)iVar14 * 8);
                iVar15 = *(int *)(lVar28 + 0x58);
                if (iVar15 == iVar5) {
                  uVar32 = FUN_140050b50((int)plVar6[4],lVar28 + 8);
                  break;
                }
                if (iVar5 < iVar15) {
                  iVar20 = iVar14 + -1;
                }
                else {
                  piVar7 = (int *)(ulonglong)(iVar14 + 1);
                }
              } while ((int)piVar7 <= iVar20);
            }
            FUN_140af5bf0(uVar32,piVar22[2]);
          }
        }
        goto LAB_1406b5845;
      }
      if (*psVar2 == 3) {
        plVar6 = operator_new(0x38);
        local_c0 = plVar6;
        FUN_140709240(plVar6,0);
        *plVar6 = (longlong)history_event_war_peace_rejectedst::vftable;
        *(undefined2 *)(plVar6 + 5) = 0;
        *(undefined8 *)((longlong)plVar6 + 0x2c) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)plVar6 + 0x34) = 0xffffffff;
        *(undefined4 *)(plVar6 + 1) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 0x40);
        *(undefined4 *)((longlong)plVar6 + 0xc) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 0x44);
        *(undefined2 *)(plVar6 + 5) =
             *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 2);
        *(int *)((longlong)plVar6 + 0x2c) = *param_1;
        *(int *)(plVar6 + 6) = DAT_141c36b88;
        *(int *)((longlong)plVar6 + 0x34) = DAT_141c36b84;
        (**(code **)(*plVar6 + 0x128))(plVar6);
        iVar20 = *param_1;
        lVar28 = DAT_141c53720 - DAT_141c53718 >> 3;
        if (((lVar28 != 0) && (iVar20 != -1)) &&
           (iVar15 = (int)lVar28 + -1, iVar14 = iVar5, -1 < iVar15)) {
          do {
            iVar16 = iVar15 + iVar14 >> 1;
            lVar28 = *(longlong *)(DAT_141c53718 + (longlong)iVar16 * 8);
            if (*(int *)(lVar28 + 4) == iVar20) {
              if (lVar28 != 0) {
                iVar20 = (int)(*(longlong *)(lVar28 + 0x1020) - *(longlong *)(lVar28 + 0x1018) >> 3)
                         + -1;
                iVar15 = iVar5;
                if (iVar20 < 0) goto LAB_1406b5c6a;
                goto LAB_1406b5c41;
              }
              break;
            }
            if (iVar20 < *(int *)(lVar28 + 4)) {
              iVar15 = iVar16 + -1;
            }
            else {
              iVar14 = iVar16 + 1;
            }
          } while (iVar14 <= iVar15);
        }
        goto LAB_1406b5c6e;
      }
      bVar31 = true;
      if (*psVar2 == 0) {
        plVar6 = operator_new(0x38);
        local_b8 = plVar6;
        FUN_140709240(plVar6,0);
        *plVar6 = (longlong)history_event_topicagreement_madest::vftable;
        *(undefined2 *)(plVar6 + 5) = 0;
        *(undefined8 *)((longlong)plVar6 + 0x2c) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)plVar6 + 0x34) = 0xffffffff;
        *(undefined4 *)(plVar6 + 1) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 0x40);
        *(undefined4 *)((longlong)plVar6 + 0xc) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 0x44);
        *(undefined2 *)(plVar6 + 5) =
             *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 2);
        *(int *)((longlong)plVar6 + 0x2c) = *param_1;
        *(int *)(plVar6 + 6) = DAT_141c36b80;
        *(int *)((longlong)plVar6 + 0x34) = DAT_141c36b84;
        (**(code **)(*plVar6 + 0x128))(plVar6);
        if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 2) == 3) {
          local_68 = 0xf;
          local_70 = 0;
          local_80 = 0;
          uVar32 = FUN_14000c780(&local_80,"an official land of the realm",0x1d);
          iVar20 = *param_1;
          lVar28 = DAT_141c53720 - DAT_141c53718 >> 3;
          if (((lVar28 != 0) && (iVar20 != -1)) && (iVar15 = (int)lVar28 + -1, -1 < iVar15)) {
            do {
              iVar14 = iVar15 + iVar5 >> 1;
              piVar12 = *(int **)(DAT_141c53718 + (longlong)iVar14 * 8);
              local_170 = piVar12;
              if (piVar12[1] == iVar20) {
                if (piVar12 != (int *)0x0) {
                  local_158 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar19 * 8);
                  local_174 = 0;
                  local_100 = 0;
                  if (local_158[5] - local_158[4] >> 2 != 0) goto LAB_1406b5e80;
                }
                break;
              }
              if (iVar20 < piVar12[1]) {
                iVar15 = iVar14 + -1;
              }
              else {
                iVar5 = iVar14 + 1;
              }
            } while (iVar5 <= iVar15);
          }
LAB_1406b66e5:
          iVar5 = 0;
          if ((*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3 != 0
              ) && (DAT_141c36b84 != -1)) {
            iVar20 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) -
                           *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3) + -1;
            if (-1 < iVar20) {
              do {
                iVar15 = iVar20 + iVar5 >> 1;
                lVar28 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + (longlong)iVar15 * 8);
                if (*(int *)(lVar28 + 0x88) == DAT_141c36b84) {
                  if (lVar28 != 0) {
                    if (DAT_1410b67dc == 0) {
                      bVar31 = (DAT_141c34570 & 0x70) != 0;
                    }
                    else {
                      bVar31 = (bool)(DAT_141c34570 >> 3 & 1);
                    }
                    if (bVar31 != false) {
                      local_88 = 0xf;
                      local_90 = 0;
                      local_a0 = 0;
                      FUN_14061fbe0(lVar28,&local_a0);
                      uVar13 = FUN_1400be580(&local_60," and the surrounding lands have been made ",
                                             &local_80);
                      FUN_14000cb40(&local_a0,uVar13,0,0xffffffffffffffff);
                      if (0xf < local_48) {
                        FUN_140002020(CONCAT44(uStack_5c,local_60),local_48 + 1,1);
                      }
                      FUN_14000c9f0(&local_a0,&DAT_140e597bc,1);
                      local_142 = 0x8ad08ad0;
                      local_13e = 0x8ad0;
                      local_13c = 0;
                      local_138 = 0x8ad08ad0;
                      local_134 = 0x8ad0;
                      local_130 = 0;
                      local_128 = 0;
                      uStack_120 = 0;
                      local_118 = 0xffffffffffffffff;
                      local_110 = 0xffffffff;
                      local_10c = 0;
                      local_148 = 0x500fc;
                      local_144 = 0;
                      local_12c = 2000;
                      uVar32 = FUN_140074660(&DAT_141d64dc8,&local_a0,&local_148);
                      if (0xf < local_88) {
                        uVar32 = FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
                      }
                    }
                  }
                  break;
                }
                if (DAT_141c36b84 < *(int *)(lVar28 + 0x88)) {
                  iVar20 = iVar15 + -1;
                }
                else {
                  iVar5 = iVar15 + 1;
                }
              } while (iVar5 <= iVar20);
            }
          }
          if (DAT_141c3d250 != 0) {
            uVar32 = FUN_140526430();
          }
          FUN_14097ffb0(uVar32,0);
          bVar31 = false;
          if (0xf < local_68) {
            FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
          }
        }
        iVar5 = 0;
        if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8) + 2) != 4) {
          if (!bVar31) goto LAB_1406b5845;
          goto LAB_1406b723b;
        }
        local_88 = 0xf;
        local_90 = 0;
        local_a0 = 0;
        uVar32 = FUN_14000c780(&local_a0,"an even more official land of the realm",0x27);
        iVar15 = -1;
        local_168 = (int *)CONCAT44(local_168._4_4_,0xffffffff);
        local_174 = -1;
        iVar20 = *param_1;
        lVar28 = DAT_141c53720 - DAT_141c53718 >> 3;
        if (((lVar28 != 0) && (iVar20 != -1)) &&
           (iVar14 = (int)lVar28 + -1, iVar16 = iVar5, -1 < iVar14)) {
          do {
            iVar17 = iVar14 + iVar16 >> 1;
            lVar28 = *(longlong *)(DAT_141c53718 + (longlong)iVar17 * 8);
            param_1 = local_150;
            if (*(int *)(lVar28 + 4) == iVar20) {
              if (lVar28 != 0) {
                iVar20 = (int)(*(longlong *)(lVar28 + 0xd0) - *(longlong *)(lVar28 + 200) >> 3) + -1
                ;
                iVar16 = -1;
                iVar14 = iVar5;
                if (iVar20 < 0) goto LAB_1406b6a6f;
                goto LAB_1406b69c0;
              }
              break;
            }
            if (iVar20 < *(int *)(lVar28 + 4)) {
              iVar14 = iVar17 + -1;
            }
            else {
              iVar16 = iVar17 + 1;
            }
          } while (iVar16 <= iVar14);
        }
        goto LAB_1406b7035;
      }
LAB_1406b723b:
      iVar5 = 0;
      iVar20 = *param_1;
      lVar28 = DAT_141c53720 - DAT_141c53718 >> 3;
      if (((lVar28 != 0) && (iVar20 != -1)) && (iVar15 = (int)lVar28 + -1, -1 < iVar15)) {
        do {
          iVar14 = iVar15 + iVar5 >> 1;
          lVar28 = *(longlong *)(DAT_141c53718 + (longlong)iVar14 * 8);
          if (*(int *)(lVar28 + 4) == iVar20) {
            if (lVar28 != 0) {
              puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar19 * 8);
              puVar23 = (ulonglong *)(lVar28 + 0x1370);
              puVar18 = *(undefined8 **)(lVar28 + 0x1378);
              if ((puVar21 < puVar18) && (puVar9 = (undefined8 *)*puVar23, puVar9 <= puVar21)) {
                if (puVar18 == *(undefined8 **)(lVar28 + 0x1380)) {
                  FUN_14000c2d0(puVar23,1);
                }
                if (*(undefined8 **)(lVar28 + 0x1378) != (undefined8 *)0x0) {
                  **(undefined8 **)(lVar28 + 0x1378) =
                       *(undefined8 *)(*puVar23 + ((longlong)puVar21 - (longlong)puVar9 >> 3) * 8);
                }
              }
              else {
                if (puVar18 == *(undefined8 **)(lVar28 + 0x1380)) {
                  FUN_14000c2d0(puVar23,1);
                }
                if (*(undefined8 **)(lVar28 + 0x1378) != (undefined8 *)0x0) {
                  **(undefined8 **)(lVar28 + 0x1378) = *puVar21;
                }
              }
              *(longlong *)(lVar28 + 0x1378) = *(longlong *)(lVar28 + 0x1378) + 8;
            }
            break;
          }
          if (iVar20 < *(int *)(lVar28 + 4)) {
            iVar15 = iVar14 + -1;
          }
          else {
            iVar5 = iVar14 + 1;
          }
        } while (iVar5 <= iVar15);
      }
      goto LAB_1406b732a;
    }
LAB_1406b736f:
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_1 + 0x30);
  }
  return;
  while( true ) {
    if (DAT_141c36b88 < *local_e8) {
      iVar20 = iVar14 + -1;
    }
    else {
      iVar15 = iVar14 + 1;
    }
    if (iVar20 < iVar15) break;
LAB_1406b5c41:
    iVar14 = iVar20 + iVar15 >> 1;
    local_e8 = *(int **)(*(longlong *)(lVar28 + 0x1018) + (longlong)iVar14 * 8);
    if (*local_e8 == DAT_141c36b88) goto LAB_1406b5c6e;
  }
LAB_1406b5c6a:
  local_e8 = (int *)0x0;
LAB_1406b5c6e:
  if (((local_e8 != (int *)0x0) && (iVar20 = local_e8[2], iVar20 != -1)) &&
     (iVar15 = (int)(DAT_141d7a0e0 - DAT_141d7a0d8 >> 3) + -1, -1 < iVar15)) {
    do {
      iVar16 = iVar15 + iVar5 >> 1;
      lVar28 = *(longlong *)(DAT_141d7a0d8 + (longlong)iVar16 * 8);
      iVar14 = *(int *)(lVar28 + 0x58);
      if (iVar14 == iVar20) {
        FUN_140050b50((int)plVar6[4],lVar28 + 8);
        break;
      }
      if (iVar20 < iVar14) {
        iVar15 = iVar16 + -1;
      }
      else {
        iVar5 = iVar16 + 1;
      }
    } while (iVar5 <= iVar15);
  }
  goto LAB_1406b5845;
LAB_1406b5e80:
  uVar29 = 0;
  iVar20 = *(int *)(local_158[1] + local_100 * 4);
  iVar5 = (int)(*(longlong *)(piVar12 + 0x42e) - *(longlong *)(piVar12 + 0x42c) >> 3) + -1;
  uVar30 = uVar29;
  if (-1 < iVar5) {
    do {
      iVar15 = iVar5 + (int)uVar30 >> 1;
      lVar19 = *(longlong *)(*(longlong *)(piVar12 + 0x42c) + (longlong)iVar15 * 8);
      local_e0 = lVar19;
      if (*(int *)(lVar19 + 0x20) == iVar20) {
        if (2 < *(int *)(lVar19 + 0x30)) {
          pbVar1 = (byte *)(*(longlong *)(lVar19 + 0x28) + 2);
          *pbVar1 = *pbVar1 | 4;
        }
        if (3 < *(int *)(lVar19 + 0x30)) {
          pbVar1 = (byte *)(*(longlong *)(lVar19 + 0x28) + 3);
          *pbVar1 = *pbVar1 | 0x80;
        }
        iVar5 = *(int *)(local_158[4] + local_100 * 4);
        lVar28 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
        if (((lVar28 != 0) && (iVar5 != -1)) &&
           (iVar20 = (int)lVar28 + -1, uVar30 = uVar29, -1 < iVar20)) goto LAB_1406b5f50;
        break;
      }
      if (iVar20 < *(int *)(lVar19 + 0x20)) {
        iVar5 = iVar15 + -1;
      }
      else {
        uVar30 = (ulonglong)(iVar15 + 1);
      }
    } while ((int)uVar30 <= iVar5);
  }
  goto LAB_1406b66a5;
  while( true ) {
    if (iVar5 < *(int *)(lVar28 + 0xe0)) {
      iVar20 = iVar15 + -1;
    }
    else {
      uVar30 = (ulonglong)(iVar15 + 1);
    }
    if (iVar20 < (int)uVar30) break;
LAB_1406b5f50:
    iVar15 = iVar20 + (int)uVar30 >> 1;
    lVar28 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar15 * 8);
    local_108 = lVar28;
    if (*(int *)(lVar28 + 0xe0) == iVar5) {
      if (lVar28 != 0) {
        iVar20 = *(int *)(lVar28 + 0xd8);
        iVar5 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
        if (((iVar5 != 0) && (iVar20 != -1)) && (iVar5 = iVar5 + -1, uVar30 = uVar29, -1 < iVar5))
        goto LAB_1406b5fd0;
      }
      break;
    }
  }
  goto LAB_1406b66a5;
  while( true ) {
    if (iVar20 < *(int *)(lVar10 + 0x130)) {
      iVar5 = iVar15 + -1;
    }
    else {
      uVar30 = (ulonglong)(iVar15 + 1);
    }
    if (iVar5 < (int)uVar30) break;
LAB_1406b5fd0:
    iVar15 = (int)uVar30 + iVar5 >> 1;
    lVar10 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar15 * 8);
    if (*(int *)(lVar10 + 0x130) == iVar20) {
      if ((lVar10 != 0) && (cVar4 = FUN_140ca6640(lVar10), uVar32 = extraout_XMM0_Da, cVar4 != '\0')
         ) {
        if ((*(longlong *)(lVar19 + 0x268) != 0) && (&local_80 != (undefined1 *)(lVar19 + 600))) {
          FUN_14000c8b0(&local_80,(undefined1 *)(lVar19 + 600),0,0xffffffffffffffff);
        }
        puVar23 = (ulonglong *)(piVar12 + 0x440);
        iVar5 = (int)((longlong)(*(longlong *)(piVar12 + 0x442) - *puVar23) >> 3) + -1;
        if (iVar5 < 0) goto LAB_1406b6099;
        lVar10 = (longlong)iVar5;
        goto LAB_1406b6070;
      }
      break;
    }
  }
  goto LAB_1406b66a5;
  while( true ) {
    iVar5 = iVar5 + -1;
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) break;
LAB_1406b6070:
    piVar7 = *(int **)(*puVar23 + lVar10 * 8);
    lVar28 = local_108;
    local_160 = piVar7;
    if ((piVar7[3] == *(int *)(lVar19 + 0x20)) && (piVar7[1] == -1)) break;
  }
LAB_1406b6099:
  piVar8 = piVar12;
  if (iVar5 == -1) {
    local_b0 = operator_new(0x58);
    piVar7 = (int *)FUN_140086a20(local_b0);
    *piVar7 = piVar12[0x446];
    piVar12[0x446] = piVar12[0x446] + 1;
    piVar7[3] = *(int *)(lVar19 + 0x20);
    local_168 = piVar7;
    local_160 = piVar7;
    if ((&local_168 < *(int ***)(piVar12 + 0x442)) &&
       (ppiVar3 = (int **)*puVar23, ppiVar3 <= &local_168)) {
      if (*(longlong *)(piVar12 + 0x442) == *(longlong *)(piVar12 + 0x444)) {
        FUN_14000c2d0(puVar23,1);
      }
      piVar8 = local_170;
      if (*(undefined8 **)(piVar12 + 0x442) != (undefined8 *)0x0) {
        **(undefined8 **)(piVar12 + 0x442) =
             *(undefined8 *)(*puVar23 + ((longlong)&local_168 - (longlong)ppiVar3 >> 3) * 8);
      }
    }
    else {
      if (*(longlong *)(piVar12 + 0x442) == *(longlong *)(piVar12 + 0x444)) {
        FUN_14000c2d0(puVar23,1);
      }
      if (*(undefined8 **)(piVar12 + 0x442) != (undefined8 *)0x0) {
        **(undefined8 **)(piVar12 + 0x442) = piVar7;
      }
    }
    *(longlong *)(piVar12 + 0x442) = *(longlong *)(piVar12 + 0x442) + 8;
    if (3 < *(int *)(lVar19 + 0x30)) {
      pbVar1 = (byte *)(*(longlong *)(lVar19 + 0x28) + 3);
      *pbVar1 = *pbVar1 | 4;
    }
  }
  piVar22 = local_160;
  piVar12 = local_170;
  if (0 < piVar7[6]) {
    **(byte **)(piVar7 + 4) = **(byte **)(piVar7 + 4) | 1;
  }
  if (3 < *(int *)(lVar19 + 0x30)) {
    pbVar1 = (byte *)(*(longlong *)(lVar19 + 0x28) + 3);
    *pbVar1 = *pbVar1 | 8;
  }
  iVar5 = (int)(*(longlong *)(piVar8 + 0x34) - *(longlong *)(piVar8 + 0x32) >> 3) + -1;
  uVar30 = uVar29;
  if (-1 < iVar5) {
    do {
      iVar20 = iVar5 + (int)uVar30 >> 1;
      piVar25 = *(int **)(*(longlong *)(piVar8 + 0x32) + (longlong)iVar20 * 8);
      if (*piVar25 == DAT_141c36b84) {
        if (piVar25 != (int *)0x0) {
          piVar25[2] = *piVar7;
          piVar25[3] = 0;
          piVar25[6] = piVar25[6] | 0xa00;
        }
        break;
      }
      if (DAT_141c36b84 < *piVar25) {
        iVar5 = iVar20 + -1;
      }
      else {
        uVar30 = (ulonglong)(iVar20 + 1);
      }
    } while ((int)uVar30 <= iVar5);
  }
  puVar21 = *(undefined8 **)(piVar8 + 0x32);
  uVar30 = (ulonglong)((longlong)*(undefined8 **)(piVar8 + 0x34) + (7 - (longlong)puVar21)) >> 3;
  if (*(undefined8 **)(piVar8 + 0x34) < puVar21) {
    uVar30 = 0;
  }
  if (uVar30 != 0) {
LAB_1406b6230:
    iVar5 = 0;
    piVar7 = (int *)*puVar21;
    if ((((piVar7[6] & 0x200U) != 0) &&
        (iVar20 = *piVar7,
        *(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3 != 0)) &&
       (iVar20 != -1)) {
      iVar15 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >>
                    3) + -1;
      if (-1 < iVar15) {
        do {
          iVar14 = iVar15 + iVar5 >> 1;
          lVar19 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + (longlong)iVar14 * 8);
          if (*(int *)(lVar19 + 0x88) == iVar20) {
            if ((((lVar19 != 0) &&
                 ((*(int *)(lVar19 + 0x2a8) < 1 || ((**(byte **)(lVar19 + 0x2a0) & 8) == 0)))) &&
                (lVar19 = FUN_14053c490(lVar19), lVar19 != 0)) &&
               (piVar8 = (int *)FUN_1404cec60(lVar19), piVar8 == piVar12)) {
              puVar18 = *(undefined8 **)(lVar19 + 200);
              goto joined_r0x0001406b6304;
            }
            break;
          }
          if (iVar20 < *(int *)(lVar19 + 0x88)) {
            iVar15 = iVar14 + -1;
          }
          else {
            iVar5 = iVar14 + 1;
          }
        } while (iVar5 <= iVar15);
      }
    }
    goto LAB_1406b6336;
  }
LAB_1406b6353:
  puVar21 = *(undefined8 **)(DAT_141c3d250 + 0x1018);
  puVar18 = *(undefined8 **)(DAT_141c3d250 + 0x1020);
  lVar10 = DAT_141c53718;
  if (puVar21 < puVar18) {
LAB_1406b6382:
    iVar5 = 0;
    if ((short)((int *)*puVar21)[1] == 3) {
      iVar20 = *(int *)*puVar21;
      lVar19 = DAT_141c53720 - lVar10 >> 3;
      if (((lVar19 != 0) && (iVar20 != -1)) &&
         (iVar15 = (int)lVar19 + -1, iVar14 = iVar5, -1 < iVar15)) {
        do {
          iVar16 = iVar15 + iVar14 >> 1;
          psVar2 = *(short **)(lVar10 + (longlong)iVar16 * 8);
          if (*(int *)(psVar2 + 2) == iVar20) {
            if ((psVar2 != (short *)0x0) && (*psVar2 == 1)) {
              puVar9 = *(undefined8 **)(psVar2 + 100);
              goto joined_r0x0001406b6412;
            }
            break;
          }
          if (iVar20 < *(int *)(psVar2 + 2)) {
            iVar15 = iVar16 + -1;
          }
          else {
            iVar14 = iVar16 + 1;
          }
        } while (iVar14 <= iVar15);
      }
    }
    goto LAB_1406b64a6;
  }
LAB_1406b64c5:
  local_188 = 0xffffffff;
  local_190 = 0xffffffff;
  uVar32 = FUN_14073edb0(lVar28,*piVar7,DAT_141c36b80);
  iVar5 = *(int *)(lVar28 + 0xdc);
  uVar30 = 0;
  if ((iVar5 != -1) &&
     (iVar20 = (int)(DAT_141c67098 - DAT_141c67090 >> 3) + -1, uVar29 = uVar30, -1 < iVar20)) {
    do {
      iVar15 = iVar20 + (int)uVar29 >> 1;
      piVar12 = *(int **)(DAT_141c67090 + (longlong)iVar15 * 8);
      if (*piVar12 == iVar5) {
        if (piVar12 != (int *)0x0) {
          uVar32 = FUN_140050d90(piVar12,&DAT_141c670c0);
          lVar10 = DAT_141c53720 - DAT_141c53718 >> 3;
          if (((lVar10 != 0) && (DAT_141c36b80 != -1)) &&
             (iVar5 = (int)lVar10 + -1, uVar29 = uVar30, -1 < iVar5)) goto LAB_1406b6590;
        }
        break;
      }
      if (iVar5 < *piVar12) {
        iVar20 = iVar15 + -1;
      }
      else {
        uVar29 = (ulonglong)(iVar15 + 1);
      }
    } while ((int)uVar29 <= iVar20);
  }
  goto LAB_1406b65cb;
joined_r0x0001406b6304:
  if (*(undefined8 **)(lVar19 + 0xd0) <= puVar18) goto LAB_1406b631e;
  if ((*(byte *)((int *)*puVar18 + 6) & 8) != 0) {
    iVar5 = *(int *)*puVar18;
    goto LAB_1406b6321;
  }
  puVar18 = puVar18 + 1;
  goto joined_r0x0001406b6304;
LAB_1406b631e:
  iVar5 = -1;
LAB_1406b6321:
  if (iVar5 == DAT_141c36b84) {
    piVar7[2] = *piVar22;
  }
LAB_1406b6336:
  puVar21 = puVar21 + 1;
  uVar29 = uVar29 + 1;
  piVar7 = local_160;
  lVar28 = local_108;
  lVar19 = local_e0;
  if (uVar30 <= uVar29) goto LAB_1406b6353;
  goto LAB_1406b6230;
joined_r0x0001406b6412:
  if (*(undefined8 **)(psVar2 + 0x68) <= puVar9) goto LAB_1406b64a6;
  if ((*(byte *)((int *)*puVar9 + 6) & 1) != 0) {
    iVar20 = *(int *)*puVar9;
    if (iVar20 != -1) {
      iVar15 = (int)(*(longlong *)(local_170 + 0x34) - *(longlong *)(local_170 + 0x32) >> 3) + -1;
      if (-1 < iVar15) goto LAB_1406b6460;
    }
    goto LAB_1406b64a6;
  }
  puVar9 = puVar9 + 1;
  goto joined_r0x0001406b6412;
  while( true ) {
    if (iVar20 < *piVar7) {
      iVar15 = iVar14 + -1;
    }
    else {
      iVar5 = iVar14 + 1;
    }
    if (iVar15 < iVar5) break;
LAB_1406b6460:
    iVar14 = iVar15 + iVar5 >> 1;
    piVar7 = *(int **)(*(longlong *)(local_170 + 0x32) + (longlong)iVar14 * 8);
    if (*piVar7 == iVar20) {
      if ((piVar7 != (int *)0x0) && ((piVar7[6] & 0x200U) != 0)) {
        piVar7[2] = *local_160;
        lVar10 = DAT_141c53718;
      }
      break;
    }
  }
LAB_1406b64a6:
  puVar21 = puVar21 + 1;
  piVar7 = local_160;
  lVar28 = local_108;
  lVar19 = local_e0;
  if (puVar18 <= puVar21) goto LAB_1406b64c5;
  goto LAB_1406b6382;
  while( true ) {
    if (DAT_141c36b80 < *(int *)(lVar10 + 4)) {
      iVar5 = iVar20 + -1;
    }
    else {
      uVar29 = (ulonglong)(iVar20 + 1);
    }
    if (iVar5 < (int)uVar29) break;
LAB_1406b6590:
    iVar20 = iVar5 + (int)uVar29 >> 1;
    lVar10 = *(longlong *)(DAT_141c53718 + (longlong)iVar20 * 8);
    if (*(int *)(lVar10 + 4) == DAT_141c36b80) {
      if (lVar10 != 0) {
        uVar32 = FUN_1407c6ea0(iVar20,lVar10,lVar19,piVar12);
      }
      break;
    }
  }
LAB_1406b65cb:
  iVar20 = *(int *)(lVar28 + 0xd8);
  iVar5 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
  uVar29 = uVar30;
  if (((iVar5 != 0) && (iVar20 != -1)) && (iVar5 = iVar5 + -1, uVar27 = uVar30, -1 < iVar5)) {
    do {
      iVar14 = (int)uVar27 + iVar5 >> 1;
      uVar29 = *(ulonglong *)(DAT_141c66fd0 + (longlong)iVar14 * 8);
      iVar15 = *(int *)(uVar29 + 0x130);
      if (iVar15 == iVar20) break;
      if (iVar20 < iVar15) {
        iVar5 = iVar14 + -1;
      }
      else {
        uVar27 = (ulonglong)(iVar14 + 1);
      }
      uVar29 = uVar30;
    } while ((int)uVar27 <= iVar5);
  }
  piVar12 = local_170;
  if (uVar29 != 0) {
    uStack_5c = 0xffffffff;
    local_58 = 0;
    local_54 = 100;
    uVar32 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_60 = 0x50;
    lVar19 = *(longlong *)(uVar29 + 0xa78);
    if (((lVar19 != 0) && ((*(uint *)(uVar29 + 0x110) & 0x502) != 2)) &&
       ((*(uint *)(uVar29 + 0x118) & 0x1000) == 0)) {
      cVar4 = FUN_140106f30(uVar29);
      uVar32 = FUN_1409165e0(lVar19 + 0x248,&local_60,cVar4 != '\0');
      piVar12 = local_170;
    }
  }
LAB_1406b66a5:
  local_174 = local_174 + 1;
  local_100 = local_100 + 1;
  param_1 = local_150;
  lVar19 = local_f0;
  if ((ulonglong)(local_158[5] - local_158[4] >> 2) <= (ulonglong)(longlong)local_174)
  goto LAB_1406b66e5;
  goto LAB_1406b5e80;
  while( true ) {
    if (DAT_141c36b84 < *piVar7) {
      iVar20 = iVar17 + -1;
    }
    else {
      iVar14 = iVar17 + 1;
    }
    if (iVar20 < iVar14) break;
LAB_1406b69c0:
    iVar17 = iVar20 + iVar14 >> 1;
    piVar7 = *(int **)(*(longlong *)(lVar28 + 200) + (longlong)iVar17 * 8);
    iVar16 = iVar15;
    if (*piVar7 == DAT_141c36b84) {
      if ((piVar7 != (int *)0x0) && (piVar7[1] == *(int *)(lVar28 + 4))) {
        iVar20 = (int)(*(longlong *)(lVar28 + 0x1108) - *(longlong *)(lVar28 + 0x1100) >> 3) + -1;
        if (-1 < iVar20) goto LAB_1406b6a21;
      }
      break;
    }
  }
  goto LAB_1406b6a6f;
  while( true ) {
    if (piVar7[2] < *piVar12) {
      iVar20 = iVar15 + -1;
    }
    else {
      iVar5 = iVar15 + 1;
    }
    if (iVar20 < iVar5) break;
LAB_1406b6a21:
    iVar15 = iVar20 + iVar5 >> 1;
    piVar12 = *(int **)(*(longlong *)(lVar28 + 0x1100) + (longlong)iVar15 * 8);
    if (*piVar12 == piVar7[2]) {
      lVar10 = FUN_140071a80(piVar12[3],lVar28 + 0x10b0);
      uVar32 = extraout_XMM0_Da_00;
      if (lVar10 != 0) {
        local_168 = (int *)CONCAT44(local_168._4_4_,*(int *)(lVar10 + 0x20));
        local_174 = *piVar12;
        iVar16 = *(int *)(lVar10 + 0x20);
      }
      break;
    }
  }
LAB_1406b6a6f:
  iVar5 = (int)(*(longlong *)(lVar28 + 0x10b8) - *(longlong *)(lVar28 + 0x10b0) >> 3) + -1;
  local_158 = (longlong *)(longlong)iVar5;
  param_1 = local_150;
  if (-1 < iVar5) {
LAB_1406b6aa0:
    iVar5 = 0;
    lVar19 = *(longlong *)(lVar28 + 0x10b0);
    lVar10 = *(longlong *)(lVar19 + (longlong)local_158 * 8);
    if (((*(int *)(lVar10 + 0x20) == iVar16) && (iVar20 = *(int *)(lVar10 + 0x2d4), iVar20 != -1))
       && (iVar15 = (int)(*(longlong *)(lVar28 + 0x10b8) - lVar19 >> 3) + -1, iVar14 = iVar5,
          -1 < iVar15)) {
      do {
        iVar17 = iVar15 + iVar14 >> 1;
        lVar10 = *(longlong *)(lVar19 + (longlong)iVar17 * 8);
        if (*(int *)(lVar10 + 0x20) == iVar20) {
          plVar6 = (longlong *)(lVar28 + 0x1100);
          iVar20 = (int)(*(longlong *)(lVar28 + 0x1108) - *plVar6 >> 3) + -1;
          lVar19 = (longlong)iVar20;
          if (-1 < iVar20) {
            goto LAB_1406b6b40;
          }
          break;
        }
        if (iVar20 < *(int *)(lVar10 + 0x20)) {
          iVar15 = iVar17 + -1;
        }
        else {
          iVar14 = iVar17 + 1;
        }
      } while (iVar14 <= iVar15);
    }
    goto LAB_1406b7014;
  }
LAB_1406b7035:
  iVar5 = 0;
  if ((*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3 != 0) &&
     (DAT_141c36b84 != -1)) {
    iVar20 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3)
             + -1;
    if (-1 < iVar20) {
      do {
        iVar15 = iVar20 + iVar5 >> 1;
        lVar28 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + (longlong)iVar15 * 8);
        if (*(int *)(lVar28 + 0x88) == DAT_141c36b84) {
          if (lVar28 != 0) {
            if (DAT_1410b67dc == 0) {
              bVar31 = (DAT_141c34574 & 0x70) != 0;
            }
            else {
              bVar31 = (bool)(DAT_141c34574 >> 3 & 1);
            }
            if (bVar31 != false) {
              local_68 = 0xf;
              local_70 = 0;
              local_80 = 0;
              FUN_14061fbe0(lVar28,&local_80);
              uVar13 = FUN_1400be580(&local_60," and the surrounding lands have been made ",
                                     &local_a0);
              FUN_14000cb40(&local_80,uVar13,0,0xffffffffffffffff);
              if (0xf < local_48) {
                FUN_140002020(CONCAT44(uStack_5c,local_60),local_48 + 1,1);
              }
              FUN_14000c9f0(&local_80,&DAT_140e597bc,1);
              local_142 = 0x8ad08ad0;
              local_13e = 0x8ad0;
              local_13c = 0;
              local_138 = 0x8ad08ad0;
              local_134 = 0x8ad0;
              local_130 = 0;
              local_128 = 0;
              uStack_120 = 0;
              local_118 = 0xffffffffffffffff;
              local_110 = 0xffffffff;
              local_10c = 0;
              local_148 = 0x500fd;
              local_144 = 0;
              local_12c = 2000;
              uVar32 = FUN_140074660(&DAT_141d64dc8,&local_80,&local_148);
              if (0xf < local_68) {
                uVar32 = FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
              }
            }
          }
          break;
        }
        if (DAT_141c36b84 < *(int *)(lVar28 + 0x88)) {
          iVar20 = iVar15 + -1;
        }
        else {
          iVar5 = iVar15 + 1;
        }
      } while (iVar5 <= iVar20);
    }
  }
  if (DAT_141c3d250 != 0) {
    uVar32 = FUN_140526430();
  }
  FUN_14097ffb0(uVar32,0);
  if (0xf < local_88) {
    FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
  }
LAB_1406b5845:
  _Memory = *(void **)(*(longlong *)(param_1 + 0x30) + lVar19 * 8);
  if (_Memory != (void *)0x0) {
    FUN_14048e4e0(_Memory);
    free(_Memory);
  }
LAB_1406b732a:
  local_178 = local_178 + 1;
  local_f0 = lVar19 + 1;
  if ((ulonglong)(*(longlong *)(param_1 + 0x32) - *(longlong *)(param_1 + 0x30) >> 3) <=
      (ulonglong)(longlong)local_178) goto LAB_1406b736f;
  goto LAB_1406b57a0;
  while (lVar19 = lVar19 + -1, -1 < lVar19) {
LAB_1406b6b40:
    piVar7 = *(int **)(*plVar6 + lVar19 * 8);
    if (*piVar7 == local_174) {
      if ((*(longlong *)(lVar10 + 0x268) != 0) && (&local_a0 != (undefined1 *)(lVar10 + 600))) {
        uVar32 = FUN_14000c8b0(&local_a0,(undefined1 *)(lVar10 + 600),0,0xffffffffffffffff);
      }
      if (2 < *(int *)(lVar10 + 0x30)) {
        pbVar1 = (byte *)(*(longlong *)(lVar10 + 0x28) + 2);
        *pbVar1 = *pbVar1 | 4;
      }
      if (3 < *(int *)(lVar10 + 0x30)) {
        pbVar1 = (byte *)(*(longlong *)(lVar10 + 0x28) + 3);
        *pbVar1 = *pbVar1 | 0x80;
      }
      if (0 < piVar7[6]) {
        **(byte **)(piVar7 + 4) = **(byte **)(piVar7 + 4) & 0xfe;
      }
      iVar20 = piVar7[1];
      if (((iVar20 != -1) && (lVar19 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3, lVar19 != 0)) &&
         (iVar15 = (int)lVar19 + -1, -1 < iVar15)) goto LAB_1406b6bf0;
      break;
    }
  }
  goto LAB_1406b7014;
  while( true ) {
    if (iVar20 < *(int *)(lVar19 + 0xe0)) {
      iVar15 = iVar14 + -1;
    }
    else {
      iVar5 = iVar14 + 1;
    }
    if (iVar15 < iVar5) break;
LAB_1406b6bf0:
    iVar14 = iVar15 + iVar5 >> 1;
    lVar19 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar14 * 8);
    if (*(int *)(lVar19 + 0xe0) == iVar20) {
      if (lVar19 != 0) {
        iVar20 = *(int *)(lVar19 + 0xd8);
        iVar5 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
        if ((iVar5 != 0) && (iVar20 != -1)) {
          iVar5 = iVar5 + -1;
          uVar27 = 0;
          uVar30 = uVar27;
          uVar29 = uVar27;
          if (-1 < iVar5) goto LAB_1406b6c60;
          goto LAB_1406b6c8b;
        }
        uVar30 = 0;
        goto LAB_1406b6c9c;
      }
      break;
    }
  }
  goto LAB_1406b7014;
  while( true ) {
    if (iVar20 < iVar15) {
      iVar5 = iVar14 + -1;
    }
    else {
      uVar29 = (ulonglong)(iVar14 + 1);
    }
    uVar30 = uVar27;
    if (iVar5 < (int)uVar29) break;
LAB_1406b6c60:
    iVar14 = (int)uVar29 + iVar5 >> 1;
    uVar30 = *(ulonglong *)(DAT_141c66fd0 + (longlong)iVar14 * 8);
    iVar15 = *(int *)(uVar30 + 0x130);
    if (iVar15 == iVar20) break;
  }
LAB_1406b6c8b:
  if (uVar30 == 0) {
LAB_1406b6c9c:
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_140ca6640(uVar30);
    uVar32 = extraout_XMM0_Da_01;
  }
  if (cVar4 == '\0') {
    iVar16 = (int)local_168;
  }
  else {
    local_198 = 1;
    FUN_14073d8e0(lVar19,*piVar7,*(undefined4 *)(lVar28 + 4));
    iVar5 = (int)(*(longlong *)(lVar28 + 0x1108) - *plVar6 >> 3) + -1;
    if (-1 < iVar5) {
      lVar11 = (longlong)iVar5;
      do {
        local_f8 = *(int **)(*plVar6 + lVar11 * 8);
        if ((local_f8[3] == *(int *)(lVar10 + 0x20)) && (local_f8[1] == -1)) break;
        iVar5 = iVar5 + -1;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    puVar23 = (ulonglong *)(lVar28 + 0x1100);
    if (iVar5 == -1) {
      local_a8 = operator_new(0x58);
      piVar12 = (int *)FUN_140086a20(local_a8);
      *piVar12 = *(int *)(lVar28 + 0x1118);
      *(int *)(lVar28 + 0x1118) = *(int *)(lVar28 + 0x1118) + 1;
      piVar12[3] = *(int *)(lVar10 + 0x20);
      local_170 = piVar12;
      local_f8 = piVar12;
      if ((&local_170 < *(int ***)(lVar28 + 0x1108)) &&
         (ppiVar3 = (int **)*puVar23, ppiVar3 <= &local_170)) {
        if (*(longlong *)(lVar28 + 0x1108) == *(longlong *)(lVar28 + 0x1110)) {
          FUN_14000c2d0(puVar23,1);
        }
        if (*(undefined8 **)(lVar28 + 0x1108) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar28 + 0x1108) =
               *(undefined8 *)(*puVar23 + ((longlong)&local_170 - (longlong)ppiVar3 >> 3) * 8);
        }
      }
      else {
        if (*(longlong *)(lVar28 + 0x1108) == *(longlong *)(lVar28 + 0x1110)) {
          FUN_14000c2d0(puVar23,1);
        }
        if (*(undefined8 **)(lVar28 + 0x1108) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar28 + 0x1108) = piVar12;
        }
      }
      *(longlong *)(lVar28 + 0x1108) = *(longlong *)(lVar28 + 0x1108) + 8;
      if (3 < *(int *)(lVar10 + 0x30)) {
        pbVar1 = (byte *)(*(longlong *)(lVar10 + 0x28) + 3);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    if (0 < local_f8[6]) {
      **(byte **)(local_f8 + 4) = **(byte **)(local_f8 + 4) | 1;
    }
    if (3 < *(int *)(lVar10 + 0x30)) {
      pbVar1 = (byte *)(*(longlong *)(lVar10 + 0x28) + 3);
      *pbVar1 = *pbVar1 | 8;
    }
    iVar20 = 0;
    iVar5 = (int)(*(longlong *)(lVar28 + 0xd0) - *(longlong *)(lVar28 + 200) >> 3) + -1;
    if (-1 < iVar5) {
      do {
        iVar15 = iVar5 + iVar20 >> 1;
        piVar12 = *(int **)(*(longlong *)(lVar28 + 200) + (longlong)iVar15 * 8);
        if (*piVar12 == DAT_141c36b84) {
          if (piVar12 != (int *)0x0) {
            piVar12[2] = *local_f8;
            piVar12[3] = 0;
            piVar12[6] = piVar12[6] | 0xa00;
          }
          break;
        }
        if (DAT_141c36b84 < *piVar12) {
          iVar5 = iVar15 + -1;
        }
        else {
          iVar20 = iVar15 + 1;
        }
      } while (iVar20 <= iVar5);
    }
    uVar27 = 0;
    plVar6 = *(longlong **)(lVar28 + 200);
    uVar29 = (ulonglong)((longlong)*(longlong **)(lVar28 + 0xd0) + (7 - (longlong)plVar6)) >> 3;
    if (*(longlong **)(lVar28 + 0xd0) < plVar6) {
      uVar29 = uVar27;
    }
    uVar26 = uVar27;
    if (uVar29 != 0) {
      do {
        if (*(int *)(*plVar6 + 8) == *piVar7) {
          *(int *)(*plVar6 + 8) = *local_f8;
        }
        plVar6 = plVar6 + 1;
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar29);
    }
    plVar6 = (longlong *)*puVar23;
    uVar29 = (*(longlong *)(lVar28 + 0x1108) - (longlong)plVar6) + 7U >> 3;
    if (*(longlong **)(lVar28 + 0x1108) < plVar6) {
      uVar29 = uVar27;
    }
    if (uVar29 != 0) {
      do {
        lVar11 = *plVar6;
        if ((*(int *)(lVar11 + 0x2c) == *(int *)(lVar28 + 4)) &&
           (*(int *)(lVar11 + 0x30) == *piVar7)) {
          *(int *)(lVar11 + 0x30) = *local_f8;
        }
        plVar6 = plVar6 + 1;
        uVar27 = uVar27 + 1;
      } while (uVar27 < uVar29);
    }
    local_188 = 0xffffffff;
    local_190 = 0xffffffff;
    FUN_14073edb0(lVar19,*local_f8,*(undefined4 *)(lVar28 + 4));
    iVar20 = *(int *)(lVar19 + 0xdc);
    iVar5 = 0;
    if ((iVar20 != -1) && (iVar15 = (int)(DAT_141c67098 - DAT_141c67090 >> 3) + -1, -1 < iVar15)) {
      do {
        iVar14 = iVar15 + iVar5 >> 1;
        piVar7 = *(int **)(DAT_141c67090 + (longlong)iVar14 * 8);
        if (*piVar7 == iVar20) {
          if (piVar7 != (int *)0x0) {
            uVar32 = FUN_140050d90(piVar7,&DAT_141c670c0);
            FUN_1407c6ea0(uVar32,lVar28,lVar10,piVar7);
          }
          break;
        }
        if (iVar20 < *piVar7) {
          iVar15 = iVar14 + -1;
        }
        else {
          iVar5 = iVar14 + 1;
        }
      } while (iVar5 <= iVar15);
    }
    uStack_5c = 0xffffffff;
    local_58 = 0;
    local_54 = 100;
    uVar32 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_60 = 0x4f;
    lVar19 = *(longlong *)(uVar30 + 0xa78);
    if (((lVar19 != 0) && ((*(uint *)(uVar30 + 0x110) & 0x502) != 2)) &&
       ((*(uint *)(uVar30 + 0x118) & 0x1000) == 0)) {
      cVar4 = FUN_140106f30(uVar30);
      uVar32 = FUN_1409165e0(lVar19 + 0x248,&local_60,cVar4 != '\0');
    }
    iVar16 = (int)local_168;
  }
LAB_1406b7014:
  local_158 = (longlong *)((longlong)local_158 + -1);
  param_1 = local_150;
  lVar19 = local_f0;
  if ((longlong)local_158 < 0) goto LAB_1406b7035;
  goto LAB_1406b6aa0;
}

