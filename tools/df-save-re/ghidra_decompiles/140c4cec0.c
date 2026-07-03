// FUN_140c4cec0 @ 140c4cec0
// callees:
//   -> 140d89e40 FUN_140d89e40
//   -> 140004830 FUN_140004830
//   -> 140366ce0 FUN_140366ce0
//   -> 140c32810 FUN_140c32810
//   -> 140dfb5c4 operator_new
//   -> 140475580 FUN_140475580
//   -> 140617dc0 FUN_140617dc0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140c2efa0 FUN_140c2efa0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140074660 FUN_140074660
//   -> 140002020 FUN_140002020
//   -> 140c7dec0 FUN_140c7dec0
//   -> 140c79b00 FUN_140c79b00
//   -> 140c79d30 FUN_140c79d30
//   -> 140c467f0 FUN_140c467f0
//   -> 140c60140 FUN_140c60140
//   -> 140c799b0 FUN_140c799b0
//   -> 140c79ee0 FUN_140c79ee0
//   -> 1405bd1c0 FUN_1405bd1c0
//   -> 1405cd060 FUN_1405cd060
//   -> 140d89d60 FUN_140d89d60
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> 140019af0 FUN_140019af0
//   -> 140c7dcf0 FUN_140c7dcf0
//   -> 140051f10 FUN_140051f10
//   -> 140050d30 FUN_140050d30
//   -> 140cbb440 FUN_140cbb440
//   -> 140004650 FUN_140004650
//   -> 1407ad2c0 FUN_1407ad2c0
//   -> 140620120 FUN_140620120
//   -> 14000cb40 FUN_14000cb40
//   -> 140168ac0 FUN_140168ac0
//   -> 140c8f3d0 FUN_140c8f3d0
//   -> 140c7e080 FUN_140c7e080
//   -> 140d2cb70 FUN_140d2cb70
//   -> 140ca3200 FUN_140ca3200
//   -> 14000d840 FUN_14000d840
//   -> 140c39a50 FUN_140c39a50
//   -> 140cc9ed0 FUN_140cc9ed0
//   -> 140d868e0 FUN_140d868e0
//   -> 1400048f0 FUN_1400048f0
//   -> 1401aa670 FUN_1401aa670
//   -> 14013bfd0 FUN_14013bfd0
//   -> 140210800 FUN_140210800
//   -> 140c5b130 FUN_140c5b130
//   -> 14000de70 FUN_14000de70
//   -> 1408243e0 FUN_1408243e0
//   -> 140c4cd40 FUN_140c4cd40
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140c4cec0(void *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  ushort uVar12;
  ushort uVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 uVar19;
  short sVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  char *pcVar24;
  short sVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined8 uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined8 *puVar32;
  undefined4 uVar33;
  ulonglong uVar34;
  bool bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auStack_1b8 [32];
  ushort local_198;
  uint local_190;
  uint local_188;
  char local_180;
  undefined4 local_178;
  byte local_168;
  longlong *local_160;
  uint local_158;
  uint local_154;
  undefined4 local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined4 local_138;
  undefined1 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined2 local_12e;
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  undefined4 local_120;
  undefined2 local_11c;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d0;
  ulonglong local_c8;
  uint local_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  ulonglong local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_e8 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_1b8;
  if ((*(uint *)((longlong)param_1 + 0x118) >> 0xc & 1) != 0) {
    return 0;
  }
  uVar21 = 0;
  local_158 = 0;
  local_148 = local_148 & 0xffffff00;
  local_154 = 0;
  local_14c = (uint)param_1 & 0xffffff00;
  local_144 = local_144 & 0xffffff00;
  local_f0 = param_1;
  if (((*(uint *)((longlong)param_1 + 0x110) & 0x200) == 0) &&
     ((*(uint *)((longlong)param_1 + 0x118) & 0x180000) == 0)) {
    local_190 = 0;
    local_198 = local_198 & 0xff00;
    cVar8 = FUN_140d89e40(&DAT_141c53470,*(undefined2 *)((longlong)param_1 + 0xa8),
                          *(undefined2 *)((longlong)param_1 + 0xaa),
                          *(undefined2 *)((longlong)param_1 + 0xac));
    if (cVar8 == '\0') {
      sVar11 = FUN_140004830(&DAT_141c53470,*(undefined2 *)((longlong)param_1 + 0xa8),
                             *(undefined2 *)((longlong)param_1 + 0xaa),
                             *(undefined2 *)((longlong)param_1 + 0xac));
      if ((((sVar11 == 0x23) || (sVar11 == 0x2a)) && (cVar8 = FUN_140366ce0(param_1), cVar8 == '\0')
          ) && ((*(short *)((longlong)param_1 + 0x4a8) == -30000 &&
                (*(int *)((longlong)param_1 + 0x4b0) == -1)))) {
        uVar22 = DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3;
        uVar34 = uVar21;
        if (uVar22 != 0) {
          do {
            iVar16 = (int)uVar34;
            if ((void *)*(longlong *)((longlong)DAT_141c66fe8 + uVar21) == param_1) {
              FUN_140c32810(DAT_141c66fe8[iVar16],0,1,0);
              local_f0 = operator_new(0x28);
              lVar17 = FUN_140475580(local_f0);
              *(undefined2 *)(lVar17 + 0x10) = 2;
              *(undefined2 *)(lVar17 + 0x18) = *(undefined2 *)(DAT_141c66fe8[iVar16] + 0xa8);
              *(undefined2 *)(lVar17 + 0x1a) = *(undefined2 *)(DAT_141c66fe8[iVar16] + 0xaa);
              *(undefined2 *)(lVar17 + 0x1c) = *(undefined2 *)(DAT_141c66fe8[iVar16] + 0xac);
              *(short *)(lVar17 + 0x12) = (short)DAT_141271228;
              *(short *)(lVar17 + 0x14) = (short)DAT_141271229;
              *(undefined1 *)(lVar17 + 0x16) = DAT_14127122a;
              *(undefined4 *)(lVar17 + 0x20) = 100;
              FUN_140617dc0(DAT_141c66fe8[iVar16],0,0x12,0);
              return 1;
            }
            uVar21 = uVar21 + 8;
            uVar34 = (ulonglong)(iVar16 + 1U);
          } while ((ulonglong)(longlong)(int)(iVar16 + 1U) < uVar22);
        }
        return 1;
      }
    }
    else {
      FUN_140366ce0(param_1);
    }
  }
  uVar15 = FUN_1409fc0c0();
  if (((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff) /
       0x28f5c29 == 0) || ((*(uint *)((longlong)param_1 + 0x110) & 0x800000) != 0)) {
    *(uint *)((longlong)param_1 + 0x110) = *(uint *)((longlong)param_1 + 0x110) & 0xff7fffff;
    sVar11 = *(short *)((longlong)param_1 + 0xac);
    sVar2 = *(short *)((longlong)param_1 + 0xaa);
    sVar25 = *(short *)((longlong)param_1 + 0xa8);
    if (((sVar25 < 0) || (((DAT_141d69554 <= sVar25 || (sVar2 < 0)) || (DAT_141d69558 <= sVar2))))
       || ((sVar11 < 0 || (DAT_141d6955c <= sVar11)))) {
LAB_140c4d1d6:
      plVar27 = &DAT_141d86420;
    }
    else if ((DAT_141d69520 == 0) ||
            (lVar17 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)(DAT_141d69520 + (longlong)(sVar25 >> 4) * 8) +
                         (longlong)(sVar2 >> 4) * 8) + (longlong)sVar11 * 8),
            plVar27 = (longlong *)(lVar17 + 0x68), lVar17 == 0)) goto LAB_140c4d1d6;
    iVar16 = (int)(plVar27[1] - *plVar27 >> 3) + -1;
    local_f8 = (longlong)iVar16;
    local_160 = plVar27;
    if (-1 < iVar16) {
      do {
        psVar4 = *(short **)(*plVar27 + local_f8 * 8);
        if ((((*(byte *)((longlong)psVar4 + 0x17) & 1) == 0) &&
            (sVar11 = psVar4[5], sVar11 == *(short *)((longlong)param_1 + 0xa8))) &&
           ((sVar2 = psVar4[6], sVar2 == *(short *)((longlong)param_1 + 0xaa) &&
            (sVar25 = psVar4[7], sVar25 == *(short *)((longlong)param_1 + 0xac))))) {
          sVar14 = *psVar4;
          if (sVar14 == 0xb) {
            local_154 = 0;
            local_14c = (psVar4[4] + 0x18) / 0x19;
            if ('\a' < (char)local_14c) {
              local_14c = (uint)CONCAT71((uint7)(uint3)((uint)(psVar4[4] + 0x18) >> 8),7);
            }
          }
          else if (((ushort)(sVar14 - 9U) < 2) || (sVar14 == 3)) {
            local_150 = 2;
            if (sVar14 == 3) {
              local_150 = 3;
            }
            else if (sVar14 == 9) {
              local_150 = 2;
            }
            else if (sVar14 == 10) {
              local_150 = 1;
            }
            uVar33 = local_150;
            if (sVar14 == 3) {
              uStack_b4 = 0xff;
              uStack_b3 = 0xff;
              uStack_b2 = 0xffff;
              local_b0 = 0;
              local_ac = 100;
              uStack_a8 = 0;
              local_a0 = 0;
              lStack_98 = 0;
              local_90 = 0;
              local_b8 = 0x3e;
              lVar17 = *(longlong *)((longlong)param_1 + 0xa78);
              if (((lVar17 != 0) && ((*(uint *)((longlong)param_1 + 0x110) & 0x502) != 2)) &&
                 ((*(uint *)((longlong)param_1 + 0x118) & 0x1000) == 0)) {
                cVar8 = FUN_140106f30(param_1);
                FUN_1409165e0(lVar17 + 0x248,&local_b8,cVar8 != '\0');
              }
            }
            iVar16 = FUN_140c7dcf0(param_1);
            if (iVar16 != 0) {
              lVar17 = FUN_140d89d60(&DAT_141c53470,psVar4[1],*(undefined4 *)(psVar4 + 2));
              lVar18 = FUN_140051f10(&DAT_141d6dd30,*(undefined2 *)((longlong)param_1 + 0xa4),
                                     *(undefined2 *)((longlong)param_1 + 300));
              if (((lVar17 != 0) && (lVar18 != 0)) &&
                 (iVar16 = (int)(*(longlong *)(lVar17 + 0x4d8) - *(longlong *)(lVar17 + 0x4d0) >> 3)
                           + -1, lVar26 = (longlong)iVar16, -1 < iVar16)) {
                do {
                  lVar5 = *(longlong *)(*(longlong *)(lVar17 + 0x4d0) + lVar26 * 8);
                  iVar16 = FUN_140050d30(*(undefined4 *)(lVar5 + 0x10c),lVar18 + 0x3f38);
                  if (iVar16 != -1) {
                    local_190 = (uint)psVar4[4];
                    local_188 = local_188 & 0xffffff00;
                    local_198 = 0xffff;
                    FUN_140cbb440(param_1,lVar5);
                  }
                  lVar26 = lVar26 + -1;
                  uVar33 = local_150;
                } while (-1 < lVar26);
              }
            }
            if (DAT_1410b67dc == 0) {
              bVar35 = (DAT_141c34338 & 0x70) != 0;
            }
            else {
              bVar35 = (bool)(DAT_141c34338 >> 3 & 1);
            }
            if (bVar35 != false) {
              local_a0 = 0xf;
              uStack_a8 = 0;
              uStack_a4 = 0;
              uStack_a2 = 0;
              local_b8 = local_b8 & 0xffffff00;
              local_198 = CONCAT11(local_198._1_1_,1);
              FUN_140c2efa0(param_1,&local_b8,1,1);
              local_c8 = 0xf;
              local_d0 = 0;
              local_e0 = 0;
              FUN_14000c8b0(&local_e0,&local_b8,0,0xffffffffffffffff);
              if ((DAT_1410b67dc == 1) && (param_1 == (void *)*DAT_141c66fe8)) {
                uVar28 = 4;
                puVar23 = &DAT_140e5f0cc;
              }
              else {
                uVar28 = 3;
                puVar23 = &DAT_140e5f0d4;
              }
              FUN_14000c9f0(&local_e0,puVar23,uVar28);
              FUN_14000c9f0(&local_e0," caught in a cloud of ",0x16);
              local_60 = 0xf;
              uVar3 = *(undefined4 *)(psVar4 + 2);
              sVar11 = psVar4[1];
              local_68 = 0;
              local_78 = 0;
              if ((((ushort)(sVar11 - 0xdbU) < 200) &&
                  (lVar17 = FUN_140004650(&DAT_141d7a048,uVar3), lVar17 != 0)) &&
                 (*(char *)(lVar17 + 0xaa) != '\0')) {
                local_40 = 0xf;
                local_48 = 0;
                local_58 = 0;
                lVar17 = FUN_1407ad2c0(lVar17);
                if ((lVar17 != 0) && (*(char *)(lVar17 + 0x72) != '\0')) {
                  FUN_140620120(lVar17,&local_58,1,0);
                }
                FUN_14000cb40(&local_78,&local_58,0,0xffffffffffffffff);
                FUN_14000c9f0(&local_78,&DAT_140e5e008,3);
                if (0xf < local_40) {
                  FUN_140002020(CONCAT71(uStack_57,local_58),local_40 + 1,1);
                }
              }
              lVar17 = FUN_140d89d60(&DAT_141c53470,sVar11,uVar3);
              if (lVar17 == 0) {
                FUN_14000c9f0(&local_78,"unknown material",0x10);
              }
              else {
                if (*(longlong *)(lVar17 + 0x518) != 0) {
                  FUN_14000cb40(&local_78,lVar17 + 0x508,0,0xffffffffffffffff);
                  FUN_14000c9f0(&local_78,&DAT_140e59864,1);
                }
                FUN_14000cb40(&local_78,(longlong)(short)uVar33 * 0x20 + 0xb8 + lVar17,0,
                              0xffffffffffffffff);
              }
              FUN_14000cb40(&local_e0,&local_78,0,0xffffffffffffffff);
              FUN_14000c9f0(&local_e0,&DAT_140e5e8bc,1);
              local_12c = 0;
              local_128 = 0x8ad08ad0;
              local_124 = 0x8ad0;
              local_120 = 0;
              local_110 = 0;
              local_108 = 0xffffffffffffffff;
              local_100 = 0xffffffff;
              local_fc = 0;
              local_138 = 0x4006e;
              local_134 = 1;
              local_11c = 2000;
              local_132 = *(undefined2 *)((longlong)param_1 + 0xa8);
              local_130 = *(undefined2 *)((longlong)param_1 + 0xaa);
              local_12e = *(undefined2 *)((longlong)param_1 + 0xac);
              local_118 = (longlong)param_1;
              FUN_140074660(&DAT_141d64dc8,&local_e0,&local_138);
              if (0xf < local_60) {
                FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
              }
              local_60 = 0xf;
              local_68 = 0;
              local_78 = 0;
              if (0xf < local_c8) {
                FUN_140002020(CONCAT71(uStack_df,local_e0),local_c8 + 1,1);
              }
              local_c8 = 0xf;
              local_d0 = 0;
              local_e0 = 0;
              if (0xf < local_a0) {
                FUN_140002020(CONCAT26(uStack_b2,CONCAT15(uStack_b3,CONCAT14(uStack_b4,local_b8))),
                              local_a0 + 1,1);
              }
            }
            uVar13 = 0xea61;
            sVar11 = *psVar4;
            if (sVar11 == 9) {
              uVar33 = *(undefined4 *)(psVar4 + 2);
              sVar11 = psVar4[1];
              lVar17 = FUN_140d89d60(&DAT_141c53470,sVar11,uVar33);
              if (lVar17 == 0) {
                uVar13 = 0xea61;
              }
              else {
                uVar13 = *(ushort *)(lVar17 + 0x8c);
              }
              lVar17 = FUN_140d89d60(&DAT_141c53470,sVar11,uVar33);
              if (lVar17 == 0) {
                uVar12 = 0xea61;
              }
              else {
                uVar12 = *(ushort *)(lVar17 + 0x8a);
              }
LAB_140c4e44e:
              if (uVar13 == 0xea61) {
LAB_140c4e450:
                uVar13 = uVar12;
                if ((uVar13 == 0xea61) &&
                   (uVar13 = FUN_140168ac0(&DAT_141c53470,*(undefined2 *)((longlong)param_1 + 0xa8),
                                           *(undefined2 *)((longlong)param_1 + 0xaa),
                                           *(undefined2 *)((longlong)param_1 + 0xac)),
                   uVar13 == 0xea61)) goto LAB_140c4e4ed;
              }
              uVar15 = FUN_1409fc0c0();
              uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / 0x12492493 + 1;
              if (uVar15 != 0) {
                uVar21 = (ulonglong)uVar15;
                do {
                  sVar11 = FUN_140c7dec0(param_1);
                  local_198 = CONCAT11(local_198._1_1_,1);
                  FUN_140c79d30(param_1,uVar13,(int)sVar11,10);
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
            }
            else {
              if (sVar11 == 10) {
                uVar33 = *(undefined4 *)(psVar4 + 2);
                sVar11 = psVar4[1];
                lVar17 = FUN_140d89d60(&DAT_141c53470,sVar11,uVar33);
                if (lVar17 == 0) {
                  uVar13 = 0xea61;
                }
                else {
                  uVar13 = *(ushort *)(lVar17 + 0x8c);
                }
                lVar17 = FUN_140d89d60(&DAT_141c53470,sVar11,uVar33);
                if (lVar17 == 0) {
                  uVar12 = 0xea61;
                }
                else {
                  uVar12 = *(ushort *)(lVar17 + 0x88);
                }
                goto LAB_140c4e44e;
              }
              if (sVar11 == 3) {
                lVar17 = FUN_140d89d60(&DAT_141c53470,psVar4[1],*(undefined4 *)(psVar4 + 2));
                if (lVar17 == 0) {
                  uVar12 = 0xea61;
                }
                else {
                  uVar12 = *(ushort *)(lVar17 + 0x8c);
                }
                goto LAB_140c4e450;
              }
            }
LAB_140c4e4ed:
            if (*psVar4 == 9) {
              local_198 = 0xea61;
              FUN_140c8f3d0(param_1,0xffffffff,0xffffffff,0xffffffff);
            }
            if (*psVar4 == 10) {
              local_198 = uVar13;
              FUN_140c8f3d0(param_1,psVar4[1],*(undefined4 *)(psVar4 + 2),1);
            }
            plVar27 = local_160;
            if (*psVar4 == 3) {
              uVar28 = 3;
              uVar33 = *(undefined4 *)(psVar4 + 2);
              uVar21 = (ulonglong)(ushort)psVar4[1];
              local_198 = uVar13;
LAB_140c4e557:
              FUN_140c8f3d0(param_1,uVar21,uVar33,uVar28);
              plVar27 = local_160;
            }
          }
          else if (sVar14 == 4) {
            if (DAT_1410b67dc == 0) {
              bVar35 = (DAT_141c34338 & 0x70) != 0;
            }
            else {
              bVar35 = (bool)(DAT_141c34338 >> 3 & 1);
            }
            if (bVar35 != false) {
              local_60 = 0xf;
              local_68 = 0;
              local_78 = 0;
              local_198 = CONCAT11(local_198._1_1_,1);
              FUN_140c2efa0(param_1,&local_78,1,1);
              local_c8 = 0xf;
              local_d0 = 0;
              local_e0 = 0;
              FUN_14000c8b0(&local_e0,&local_78,0,0xffffffffffffffff);
              if ((DAT_1410b67dc == 1) && (param_1 == (void *)*DAT_141c66fe8)) {
                uVar28 = 4;
                puVar23 = &DAT_140e5f0cc;
              }
              else {
                uVar28 = 3;
                puVar23 = &DAT_140e5f0d4;
              }
              FUN_14000c9f0(&local_e0,puVar23,uVar28);
              FUN_14000c9f0(&local_e0," caught in a lava mist!",0x17);
              local_ac = 0;
              uStack_a8 = 0x8ad08ad0;
              uStack_a4 = 0x8ad0;
              local_90 = 0;
              local_88 = 0xffffffff;
              local_84 = 0xffffffff;
              local_80 = 0xffffffff;
              local_7c = 0;
              local_b8 = 0x4006e;
              uStack_b4 = 1;
              local_a0 = CONCAT26((short)(local_a0 >> 0x30),0x7d000000000);
              uStack_b2 = *(undefined2 *)((longlong)param_1 + 0xa8);
              local_b0 = *(undefined4 *)((longlong)param_1 + 0xaa);
              lStack_98 = (longlong)param_1;
              FUN_140074660(&DAT_141d64dc8,&local_e0,&local_b8);
              if (0xf < local_c8) {
                FUN_140002020(CONCAT71(uStack_df,local_e0),local_c8 + 1,1);
              }
              local_c8 = 0xf;
              local_d0 = 0;
              local_e0 = 0;
              if (0xf < local_60) {
                FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
              }
            }
            uVar15 = FUN_1409fc0c0();
            uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / 0x12492493 + 1;
            plVar27 = local_160;
            if (uVar15 != 0) {
              uVar21 = (ulonglong)uVar15;
              do {
                sVar11 = FUN_140c7dec0(param_1);
                FUN_140c79b00(param_1,12000,sVar11);
                local_198 = CONCAT11(local_198._1_1_,1);
                FUN_140c79d30(param_1,12000,(int)sVar11,10);
                uVar21 = uVar21 - 1;
                plVar27 = local_160;
              } while (uVar21 != 0);
            }
          }
          else {
            if ((sVar14 != 6) || (cVar8 = FUN_140c467f0(param_1), cVar8 == '\x02')) {
              if ((sVar14 == 8) && (cVar8 = FUN_1405cd060(param_1), cVar8 == '\0')) {
                if (DAT_1410b67dc == 0) {
                  bVar35 = (DAT_141c3433c & 0x70) != 0;
                }
                else {
                  bVar35 = (bool)(DAT_141c3433c >> 3 & 1);
                }
                if (bVar35 != false) {
                  local_60 = 0xf;
                  local_68 = 0;
                  local_78 = 0;
                  local_198 = CONCAT11(local_198._1_1_,1);
                  FUN_140c2efa0(param_1,&local_78,1,1);
                  local_c8 = 0xf;
                  local_d0 = 0;
                  local_e0 = 0;
                  FUN_14000c8b0(&local_e0,&local_78,0,0xffffffffffffffff);
                  if ((DAT_1410b67dc == 1) && (param_1 == (void *)*DAT_141c66fe8)) {
                    uVar28 = 4;
                    puVar23 = &DAT_140e5f0cc;
                  }
                  else {
                    uVar28 = 3;
                    puVar23 = &DAT_140e5f0d4;
                  }
                  FUN_14000c9f0(&local_e0,puVar23,uVar28);
                  FUN_14000c9f0(&local_e0," caught up in the web!",0x16);
                  local_ac = 0;
                  uStack_a8 = 0x8ad08ad0;
                  uStack_a4 = 0x8ad0;
                  local_90 = 0;
                  local_88 = 0xffffffff;
                  local_84 = 0xffffffff;
                  local_80 = 0xffffffff;
                  local_7c = 0;
                  local_b8 = 0x4006f;
                  uStack_b4 = 1;
                  local_a0 = CONCAT26((short)(local_a0 >> 0x30),0x7d000000000);
                  uStack_b2 = *(undefined2 *)((longlong)param_1 + 0xa8);
                  local_b0 = *(undefined4 *)((longlong)param_1 + 0xaa);
                  lStack_98 = (longlong)param_1;
                  FUN_140074660(&DAT_141d64dc8,&local_e0,&local_b8);
                  if (0xf < local_c8) {
                    FUN_140002020(CONCAT71(uStack_df,local_e0),local_c8 + 1,1);
                  }
                  local_c8 = 0xf;
                  local_d0 = 0;
                  local_e0 = 0;
                  if (0xf < local_60) {
                    FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
                  }
                }
                uVar15 = FUN_1409fc0c0();
                *(short *)((longlong)param_1 + 0x7e8) =
                     *(short *)((longlong)param_1 + 0x7e8) +
                     (short)((ulonglong)
                             (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                       0x7fffffff) / 0x28f5c29) + 0x32;
                plVar27 = local_160;
                goto LAB_140c4e573;
              }
              if ((sVar14 == 7) && (cVar8 = FUN_140c467f0(param_1), cVar8 == '\0')) {
                cVar8 = FUN_140c60140(param_1,5,0);
                if (cVar8 == '\0') {
                  if (DAT_1410b67dc == 0) {
                    bVar35 = (DAT_141c34338 & 0x70) != 0;
                  }
                  else {
                    bVar35 = (bool)(DAT_141c34338 >> 3 & 1);
                  }
                  if (bVar35 != false) {
                    local_60 = 0xf;
                    local_68 = 0;
                    local_78 = 0;
                    local_198 = CONCAT11(local_198._1_1_,1);
                    FUN_140c2efa0(param_1,&local_78,1,1);
                    local_c8 = 0xf;
                    local_d0 = 0;
                    local_e0 = 0;
                    FUN_14000c8b0(&local_e0,&local_78,0,0xffffffffffffffff);
                    if ((DAT_1410b67dc == 1) && (param_1 == (void *)*DAT_141c66fe8)) {
                      uVar28 = 4;
                      puVar23 = &DAT_140e5f0cc;
                    }
                    else {
                      uVar28 = 3;
                      puVar23 = &DAT_140e5f0d4;
                    }
                    FUN_14000c9f0(&local_e0,puVar23,uVar28);
                    FUN_14000c9f0(&local_e0," caught in a cloud of flames!",0x1d);
                    local_ac = 0;
                    uStack_a8 = 0x8ad08ad0;
                    uStack_a4 = 0x8ad0;
                    local_90 = 0;
                    local_88 = 0xffffffff;
                    local_84 = 0xffffffff;
                    local_80 = 0xffffffff;
                    local_7c = 0;
                    local_b8 = 0x4006e;
                    uStack_b4 = 1;
                    local_a0 = CONCAT26((short)(local_a0 >> 0x30),0x7d000000000);
                    uStack_b2 = *(undefined2 *)((longlong)param_1 + 0xa8);
                    local_b0 = *(undefined4 *)((longlong)param_1 + 0xaa);
                    lStack_98 = (longlong)param_1;
                    FUN_140074660(&DAT_141d64dc8,&local_e0,&local_b8);
                    if (0xf < local_c8) {
                      FUN_140002020(CONCAT71(uStack_df,local_e0),local_c8 + 1,1);
                    }
                    local_c8 = 0xf;
                    local_d0 = 0;
                    local_e0 = 0;
                    if (0xf < local_60) {
                      FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
                    }
                  }
                  uVar15 = FUN_1409fc0c0();
                  uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                     0x7fffffff) / 0x12492493 + 1;
                  plVar27 = local_160;
                  if (uVar15 != 0) {
                    uVar21 = (ulonglong)uVar15;
                    do {
                      sVar11 = FUN_140c7dec0(param_1);
                      FUN_140c79b00(param_1,11000,sVar11);
                      local_198 = CONCAT11(local_198._1_1_,1);
                      FUN_140c79d30(param_1,11000,(int)sVar11,10);
                      uVar21 = uVar21 - 1;
                      plVar27 = local_160;
                    } while (uVar21 != 0);
                  }
                }
                else {
                  FUN_1405bd1c0(psVar4);
                  plVar27 = local_160;
                }
                goto LAB_140c4e573;
              }
              if (((sVar14 != 1) || (psVar4[1] != 1)) ||
                 (cVar8 = FUN_140c467f0(param_1), cVar8 != '\0')) {
                if (sVar14 == 2) {
                  local_b8 = 0x3d;
LAB_140c4dd49:
                  lVar17 = *(longlong *)((longlong)param_1 + 0xa78);
                  local_90 = 0;
                  local_a0 = 0;
                  lStack_98 = 0;
                  local_ac = 100;
                  uStack_a8 = 0;
                  local_b0 = 0;
                  uStack_b4 = 0xff;
                  uStack_b3 = 0xff;
                  uStack_b2 = 0xffff;
                  plVar27 = local_160;
                  if (lVar17 != 0) {
                    bVar35 = (*(uint *)((longlong)param_1 + 0x110) & 0x502) == 2;
LAB_140c4dd87:
                    uStack_a8 = 0;
                    local_ac = 100;
                    uStack_b2 = 0xffff;
                    uStack_b3 = 0xff;
                    uStack_b4 = 0xff;
                    local_90 = 0;
                    lStack_98 = 0;
                    local_a0 = 0;
                    local_b0 = 0;
                    plVar27 = local_160;
                    if (!bVar35) goto LAB_140c4dd8d;
                  }
                }
                else {
                  if ((sVar14 == 0) &&
                     (uVar15 = FUN_140019af0(&DAT_141c53470,sVar11,sVar2,sVar25),
                     (uVar15 >> 0xf & 1) != 0)) {
                    local_b8 = 0x3b;
                    goto LAB_140c4dd49;
                  }
                  plVar27 = local_160;
                  if ((sVar14 != 5) ||
                     (uVar15 = FUN_140019af0(&DAT_141c53470,sVar11,sVar2,sVar25),
                     plVar27 = local_160, (uVar15 >> 0xf & 1) == 0)) goto LAB_140c4e573;
                  uStack_b4 = 0xff;
                  uStack_b3 = 0xff;
                  uStack_b2 = 0xffff;
                  local_b0 = 0;
                  local_ac = 100;
                  uStack_a8 = 0;
                  local_a0 = 0;
                  lStack_98 = 0;
                  local_90 = 0;
                  local_b8 = 0x3c;
                  lVar17 = *(longlong *)((longlong)param_1 + 0xa78);
                  if (lVar17 == 0) goto LAB_140c4e573;
                  if ((*(uint *)((longlong)param_1 + 0x110) & 2) != 0) {
                    bVar35 = (*(uint *)((longlong)param_1 + 0x110) & 0x500) == 0;
                    goto LAB_140c4dd87;
                  }
LAB_140c4dd8d:
                  uStack_a8 = 0;
                  local_ac = 100;
                  uStack_b2 = 0xffff;
                  uStack_b3 = 0xff;
                  uStack_b4 = 0xff;
                  local_90 = 0;
                  lStack_98 = 0;
                  local_a0 = 0;
                  local_b0 = 0;
                  plVar27 = local_160;
                  if ((*(uint *)((longlong)param_1 + 0x118) & 0x1000) == 0) {
                    cVar8 = FUN_140106f30(param_1);
                    FUN_1409165e0(lVar17 + 0x248,&local_b8,cVar8 != '\0');
                    plVar27 = local_160;
                  }
                }
                goto LAB_140c4e573;
              }
              if (DAT_1410b67dc == 0) {
                bVar35 = (DAT_141c34338 & 0x70) != 0;
              }
              else {
                bVar35 = (bool)(DAT_141c34338 >> 3 & 1);
              }
              if (bVar35 != false) {
                local_60 = 0xf;
                local_68 = 0;
                local_78 = 0;
                local_198 = CONCAT11(local_198._1_1_,1);
                FUN_140c2efa0(param_1,&local_78,1,1);
                local_c8 = 0xf;
                local_d0 = 0;
                local_e0 = 0;
                FUN_14000c8b0(&local_e0,&local_78,0,0xffffffffffffffff);
                if ((DAT_1410b67dc == 1) && (param_1 == (void *)*DAT_141c66fe8)) {
                  uVar28 = 4;
                  puVar23 = &DAT_140e5f0cc;
                }
                else {
                  uVar28 = 3;
                  puVar23 = &DAT_140e5f0d4;
                }
                FUN_14000c9f0(&local_e0,puVar23,uVar28);
                FUN_14000c9f0(&local_e0," caught in a burst of steam!",0x1c);
                local_ac = 0;
                uStack_a8 = 0x8ad08ad0;
                uStack_a4 = 0x8ad0;
                local_90 = 0;
                local_88 = 0xffffffff;
                local_84 = 0xffffffff;
                local_80 = 0xffffffff;
                local_7c = 0;
                local_b8 = 0x4006e;
                uStack_b4 = 1;
                local_a0 = CONCAT26((short)(local_a0 >> 0x30),0x7d000000000);
                uStack_b2 = *(undefined2 *)((longlong)param_1 + 0xa8);
                local_b0 = *(undefined4 *)((longlong)param_1 + 0xaa);
                lStack_98 = (longlong)param_1;
                FUN_140074660(&DAT_141d64dc8,&local_e0,&local_b8);
                if (0xf < local_c8) {
                  FUN_140002020(CONCAT71(uStack_df,local_e0),local_c8 + 1,1);
                }
                local_c8 = 0xf;
                local_d0 = 0;
                local_e0 = 0;
                if (0xf < local_60) {
                  FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
                }
              }
              uVar15 = FUN_1409fc0c0();
              uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / 0x12492493 + 1;
              if (uVar15 != 0) {
                uVar21 = (ulonglong)uVar15;
                do {
                  sVar11 = FUN_140c7dec0(param_1);
                  lVar17 = FUN_140d89d60(&DAT_141c53470,6,0xffffffff);
                  if (lVar17 == 0) {
                    uVar19 = 0xea61;
                  }
                  else {
                    uVar19 = *(undefined2 *)(lVar17 + 0x8a);
                  }
                  local_198 = CONCAT11(local_198._1_1_,1);
                  FUN_140c79d30(param_1,uVar19,(int)sVar11,10);
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              uVar28 = 0xffffffff;
              uVar21 = 0xffffffff;
              local_198 = 0xea61;
              uVar33 = 0xffffffff;
              goto LAB_140c4e557;
            }
            cVar8 = FUN_140c60140(param_1,10,1);
            if (cVar8 == '\0') {
              if (DAT_1410b67dc == 0) {
                bVar35 = (DAT_141c34338 & 0x70) != 0;
              }
              else {
                bVar35 = (bool)(DAT_141c34338 >> 3 & 1);
              }
              if (bVar35 != false) {
                local_60 = 0xf;
                local_68 = 0;
                local_78 = 0;
                local_198 = CONCAT11(local_198._1_1_,1);
                FUN_140c2efa0(param_1,&local_78,1,1);
                local_c8 = 0xf;
                local_d0 = 0;
                local_e0 = 0;
                FUN_14000c8b0(&local_e0,&local_78,0,0xffffffffffffffff);
                if ((DAT_1410b67dc == 1) && (param_1 == (void *)*DAT_141c66fe8)) {
                  uVar28 = 4;
                  puVar23 = &DAT_140e5f0cc;
                }
                else {
                  uVar28 = 3;
                  puVar23 = &DAT_140e5f0d4;
                }
                FUN_14000c9f0(&local_e0,puVar23,uVar28);
                FUN_14000c9f0(&local_e0," caught in dragonfire!",0x16);
                local_ac = 0;
                uStack_a8 = 0x8ad08ad0;
                uStack_a4 = 0x8ad0;
                local_90 = 0;
                local_88 = 0xffffffff;
                local_84 = 0xffffffff;
                local_80 = 0xffffffff;
                local_7c = 0;
                local_b8 = 0x4006e;
                uStack_b4 = 1;
                local_a0 = CONCAT26((short)(local_a0 >> 0x30),0x7d000000000);
                uStack_b2 = *(undefined2 *)((longlong)param_1 + 0xa8);
                local_b0 = *(undefined4 *)((longlong)param_1 + 0xaa);
                lStack_98 = (longlong)param_1;
                FUN_140074660(&DAT_141d64dc8,&local_e0,&local_b8);
                if (0xf < local_c8) {
                  FUN_140002020(CONCAT71(uStack_df,local_e0),local_c8 + 1,1);
                }
                local_c8 = 0xf;
                local_d0 = 0;
                local_e0 = 0;
                if (0xf < local_60) {
                  FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
                }
              }
              FUN_140c799b0(param_1);
              local_188 = 10;
              local_190 = local_190 & 0xffffff00;
              FUN_140c79ee0(param_1,50000);
              plVar27 = local_160;
            }
            else {
              FUN_1405bd1c0(psVar4);
              plVar27 = local_160;
            }
          }
        }
LAB_140c4e573:
        local_f8 = local_f8 + -1;
      } while (-1 < local_f8);
    }
    sVar2 = *(short *)((longlong)param_1 + 0xac);
    sVar11 = sVar2 + -1;
    sVar25 = *(short *)((longlong)param_1 + 0xaa);
    sVar14 = *(short *)((longlong)param_1 + 0xa8);
    if (((((sVar14 < 0) || (DAT_141d69554 <= sVar14)) || (sVar25 < 0)) ||
        ((DAT_141d69558 <= sVar25 || (sVar11 < 0)))) ||
       ((DAT_141d6955c <= sVar11 ||
        ((DAT_141d69520 == 0 ||
         (lVar17 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)(DAT_141d69520 + (longlong)(sVar14 >> 4) * 8) +
                      (longlong)(sVar25 >> 4) * 8) + (longlong)sVar11 * 8), lVar17 == 0)))))) {
      plVar27 = &DAT_141d86420;
    }
    else {
      plVar27 = (longlong *)(lVar17 + 0x68);
    }
    iVar16 = (int)(plVar27[1] - *plVar27 >> 3) + -1;
    lVar17 = (longlong)iVar16;
    if (-1 < iVar16) {
      puVar32 = (undefined8 *)(*plVar27 + lVar17 * 8);
      do {
        psVar4 = (short *)*puVar32;
        if (((((*(byte *)((longlong)psVar4 + 0x17) & 1) == 0) && (psVar4[5] == sVar14)) &&
            (psVar4[6] == sVar25)) &&
           ((((int)psVar4[7] == sVar2 + -1 && (*psVar4 == 0xb)) &&
            (uVar15 = (psVar4[4] + 0x18) / 0x19, local_144 = uVar15 & 0xff, '\a' < (char)uVar15))))
        {
          local_144 = 7;
        }
        puVar32 = puVar32 + -1;
        lVar17 = lVar17 + -1;
        param_1 = local_f0;
      } while (-1 < lVar17);
    }
    sVar11 = sVar2 + 1;
    if ((((sVar14 < 0) || (DAT_141d69554 <= sVar14)) ||
        ((sVar25 < 0 || (((DAT_141d69558 <= sVar25 || (sVar11 < 0)) || (DAT_141d6955c <= sVar11)))))
        ) || ((DAT_141d69520 == 0 ||
              (lVar17 = *(longlong *)
                         (*(longlong *)
                           (*(longlong *)(DAT_141d69520 + (longlong)(sVar14 >> 4) * 8) +
                           (longlong)(sVar25 >> 4) * 8) + (longlong)sVar11 * 8),
              plVar27 = (longlong *)(lVar17 + 0x68), lVar17 == 0)))) {
      plVar27 = &DAT_141d86420;
    }
    iVar16 = (int)(plVar27[1] - *plVar27 >> 3) + -1;
    lVar17 = (longlong)iVar16;
    if (-1 < iVar16) {
      puVar32 = (undefined8 *)(*plVar27 + lVar17 * 8);
      do {
        psVar4 = (short *)*puVar32;
        if ((((*(byte *)((longlong)psVar4 + 0x17) & 1) == 0) && (psVar4[5] == sVar14)) &&
           ((psVar4[6] == sVar25 && (((int)psVar4[7] == sVar2 + 1 && (*psVar4 == 0xb)))))) {
          local_158 = 0;
          uVar15 = (psVar4[4] + 0x18) / 0x19;
          local_148 = uVar15 & 0xff;
          if ('\a' < (char)uVar15) {
            local_148 = 7;
          }
        }
        puVar32 = puVar32 + -1;
        lVar17 = lVar17 + -1;
        param_1 = local_f0;
      } while (-1 < lVar17);
    }
  }
  sVar11 = *(short *)((longlong)param_1 + 0xac);
  sVar2 = *(short *)((longlong)param_1 + 0xaa);
  sVar25 = *(short *)((longlong)param_1 + 0xa8);
  sVar14 = sVar25 >> 4;
  sVar20 = sVar2 >> 4;
  uVar15 = local_158;
  bVar36 = local_168;
  if ((((((-1 < sVar25) && (sVar25 < DAT_141d69554)) && (-1 < sVar2)) &&
       ((sVar2 < DAT_141d69558 && (-1 < sVar11)))) && (sVar11 < DAT_141d6955c)) &&
     ((DAT_141d69520 != 0 &&
      (lVar17 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(DAT_141d69520 + (longlong)sVar14 * 8) + (longlong)sVar20 * 8) +
                 (longlong)sVar11 * 8), lVar17 != 0)))) {
    uVar15 = (int)sVar25 & 0x8000000f;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
    }
    uVar29 = (int)sVar2 & 0x8000000f;
    if ((int)uVar29 < 0) {
      uVar29 = (uVar29 - 1 | 0xfffffff0) + 1;
    }
    uVar29 = *(uint *)(lVar17 + 0x294 +
                      ((longlong)(short)uVar15 * 0x10 + (longlong)(short)uVar29) * 4);
    bVar36 = (uVar29 & 1) != 0;
    if ((uVar29 & 2) != 0) {
      bVar36 = bVar36 + 2;
    }
    uVar15 = uVar29 & 0x200000;
    if ((uVar29 & 4) != 0) {
      bVar36 = bVar36 + 4;
    }
  }
  sVar1 = sVar11 + -1;
  uVar29 = local_158;
  bVar37 = local_168;
  if ((((-1 < sVar25) && (sVar25 < DAT_141d69554)) && (-1 < sVar2)) &&
     (((sVar2 < DAT_141d69558 && (-1 < sVar1)) &&
      ((sVar1 < DAT_141d6955c &&
       ((DAT_141d69520 != 0 &&
        (lVar17 = *(longlong *)
                   (*(longlong *)
                     (*(longlong *)(DAT_141d69520 + (longlong)sVar14 * 8) + (longlong)sVar20 * 8) +
                   (longlong)sVar1 * 8), lVar17 != 0)))))))) {
    uVar29 = (int)sVar25 & 0x8000000f;
    if ((int)uVar29 < 0) {
      uVar29 = (uVar29 - 1 | 0xfffffff0) + 1;
    }
    uVar30 = (int)sVar2 & 0x8000000f;
    if ((int)uVar30 < 0) {
      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
    }
    uVar30 = *(uint *)(lVar17 + 0x294 +
                      ((longlong)(short)uVar29 * 0x10 + (longlong)(short)uVar30) * 4);
    bVar37 = (uVar30 & 1) != 0;
    if ((uVar30 & 2) != 0) {
      bVar37 = bVar37 + 2;
    }
    uVar29 = uVar30 & 0x200000;
    if ((uVar30 & 4) != 0) {
      bVar37 = bVar37 + 4;
    }
  }
  sVar1 = sVar11 + 1;
  uVar30 = local_158;
  bVar38 = local_168;
  if ((((-1 < sVar25) && (sVar25 < DAT_141d69554)) && (-1 < sVar2)) &&
     (((sVar2 < DAT_141d69558 && (-1 < sVar1)) &&
      ((sVar1 < DAT_141d6955c &&
       ((DAT_141d69520 != 0 &&
        (lVar17 = *(longlong *)
                   (*(longlong *)
                     (*(longlong *)(DAT_141d69520 + (longlong)sVar14 * 8) + (longlong)sVar20 * 8) +
                   (longlong)sVar1 * 8), lVar17 != 0)))))))) {
    uVar30 = (int)sVar25 & 0x8000000f;
    if ((int)uVar30 < 0) {
      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
    }
    uVar31 = (int)sVar2 & 0x8000000f;
    if ((int)uVar31 < 0) {
      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
    }
    uVar31 = *(uint *)(lVar17 + 0x294 +
                      ((longlong)(short)uVar30 * 0x10 + (longlong)(short)uVar31) * 4);
    bVar38 = (uVar31 & 1) != 0;
    if ((uVar31 & 2) != 0) {
      bVar38 = bVar38 + 2;
    }
    uVar30 = uVar31 & 0x200000;
    if ((uVar31 & 4) != 0) {
      bVar38 = bVar38 + 4;
    }
  }
  uVar31 = local_14c;
  if (('\0' < (char)bVar36) && ((uVar15 != 0 || ((char)local_14c < (char)bVar36)))) {
    uVar31 = (uint)bVar36;
    local_154 = uVar15;
  }
  if (('\0' < (char)bVar38) && ((uVar30 != 0 || ((char)local_148 < (char)bVar38)))) {
    local_148 = CONCAT31(local_148._1_3_,bVar38);
    local_158 = uVar30;
  }
  uVar15 = local_144;
  if (('\0' < (char)bVar37) && ((uVar29 != 0 || ((char)local_144 < (char)bVar37)))) {
    uVar15 = (uint)bVar37;
  }
  cVar8 = (char)uVar31;
  if (local_154 == 0) {
    if ('\0' < cVar8) {
      local_198 = FUN_140168ac0(&DAT_141c53470,sVar25,sVar2,sVar11);
      FUN_140c8f3d0(param_1,6,0xffffffff,1);
    }
  }
  else if (((local_154 == 0x200000) && ('\0' < cVar8)) &&
          (cVar10 = FUN_140c467f0(param_1), cVar10 == '\0')) {
    if (DAT_1410b67dc == 0) {
      bVar36 = DAT_141c34338 & 0x70;
    }
    else {
      bVar36 = DAT_141c34338 & 8;
    }
    if (bVar36 != 0) {
      local_a0 = 0xf;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a2 = 0;
      local_b8 = local_b8 & 0xffffff00;
      local_198 = CONCAT11(local_198._1_1_,1);
      FUN_140c2efa0(param_1,&local_b8,1,1);
      local_c8 = 0xf;
      local_d0 = 0;
      local_e0 = 0;
      FUN_14000c8b0(&local_e0,&local_b8,0,0xffffffffffffffff);
      if ((DAT_1410b67dc == 1) && (param_1 == (void *)*DAT_141c66fe8)) {
        uVar28 = 4;
        puVar23 = &DAT_140e5f0cc;
      }
      else {
        uVar28 = 3;
        puVar23 = &DAT_140e5f0d4;
      }
      FUN_14000c9f0(&local_e0,puVar23,uVar28);
      uVar29 = FUN_140019af0(&DAT_141c53470,*(undefined2 *)((longlong)param_1 + 0xa8),
                             *(undefined2 *)((longlong)param_1 + 0xaa),
                             *(undefined2 *)((longlong)param_1 + 0xac));
      if ((uVar29 >> 0xf & 1) == 0) {
        uVar28 = 0x1a;
        pcVar24 = " caught in a pool of lava!";
      }
      else {
        uVar28 = 0x1b;
        pcVar24 = " caught in a pool of magma!";
      }
      FUN_14000c9f0(&local_e0,pcVar24,uVar28);
      local_12c = 0;
      local_128 = 0x8ad08ad0;
      local_124 = 0x8ad0;
      local_120 = 0;
      local_110 = 0;
      local_108 = 0xffffffffffffffff;
      local_100 = 0xffffffff;
      local_fc = 0;
      local_138 = 0x4006e;
      local_134 = 1;
      local_11c = 2000;
      local_132 = *(undefined2 *)((longlong)param_1 + 0xa8);
      local_130 = *(undefined2 *)((longlong)param_1 + 0xaa);
      local_12e = *(undefined2 *)((longlong)param_1 + 0xac);
      local_118 = (longlong)param_1;
      FUN_140074660(&DAT_141d64dc8,&local_e0,&local_138);
      if (0xf < local_c8) {
        FUN_140002020(CONCAT71(uStack_df,local_e0),local_c8 + 1,1);
      }
      local_c8 = 0xf;
      local_d0 = 0;
      local_e0 = 0;
      if (0xf < local_a0) {
        FUN_140002020(CONCAT26(uStack_b2,CONCAT15(uStack_b3,CONCAT14(uStack_b4,local_b8))),
                      local_a0 + 1,1);
      }
    }
    uVar29 = FUN_1409fc0c0();
    uVar29 = (uVar29 + (int)((longlong)((ulonglong)uVar29 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             0x12492493 + 1;
    if (uVar29 != 0) {
      uVar21 = (ulonglong)uVar29;
      do {
        sVar11 = FUN_140c7e080(param_1);
        FUN_140c79b00(param_1,12000,sVar11);
        local_198 = CONCAT11(local_198._1_1_,1);
        FUN_140c79d30(param_1,12000,(int)sVar11,10);
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  local_178 = 0;
  local_180 = 0;
  local_188 = local_188 & 0xffffff00;
  local_190 = local_190 & 0xffffff00;
  local_198 = local_198 & 0xff00;
  cVar9 = FUN_140d2cb70(&DAT_141c53470,*(undefined2 *)((longlong)param_1 + 0xa8),
                        *(undefined2 *)((longlong)param_1 + 0xaa),
                        *(undefined2 *)((longlong)param_1 + 0xac));
  uVar29 = local_154;
  cVar10 = cVar8;
  if (((cVar9 != '\0') && ((char)uVar15 == '\a')) && ('\0' < cVar8)) {
    cVar10 = cVar8 + '\a';
  }
  if (('\x06' < cVar10) ||
     ((bVar35 = false, '\x03' < cVar10 &&
      (((DAT_1410b67dc != 1 || ((void *)*DAT_141c66fe8 != param_1)) || (DAT_14158292c == 0)))))) {
    bVar35 = true;
  }
  *(uint *)((longlong)param_1 + 0xc44) = local_154;
  if ('\a' < cVar10) {
    cVar10 = '\a';
  }
  *(char *)((longlong)param_1 + 0xc48) = cVar10;
  if (bVar35) {
    iVar16 = FUN_140ca3200(param_1);
    if (iVar16 < 1) {
      *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) & 0xfffffffe;
      sVar11 = *(short *)((longlong)param_1 + 300);
      sVar2 = *(short *)((longlong)param_1 + 0xa4);
      if (((-1 < sVar2) &&
          ((ulonglong)(longlong)sVar2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
         (-1 < sVar11)) {
        lVar17 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8);
        if (((ulonglong)(longlong)sVar11 <
             (ulonglong)(*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3)) &&
           (lVar18 = DAT_141d6dd50,
           cVar10 = FUN_14000d840(*(longlong *)
                                   (*(longlong *)(lVar17 + 0x178) + (longlong)sVar11 * 8) + 0x6a8,0)
           , cVar10 != '\0')) goto LAB_140c4ef0f;
      }
      *(uint *)((longlong)param_1 + 0x118) = *(uint *)((longlong)param_1 + 0x118) | 0x40000;
      lVar18 = DAT_141d6dd50;
    }
    else {
      *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) | 1;
      *(uint *)((longlong)param_1 + 0x110) = *(uint *)((longlong)param_1 + 0x110) | 0x800000;
      lVar18 = DAT_141d6dd50;
    }
LAB_140c4ef0f:
    sVar11 = *(short *)((longlong)param_1 + 300);
    sVar2 = *(short *)((longlong)param_1 + 0xa4);
    if (-1 < sVar2) {
      uVar21 = DAT_141d6dd58 - lVar18 >> 3;
      if (((ulonglong)(longlong)sVar2 < uVar21) && (-1 < sVar11)) {
        lVar17 = *(longlong *)(lVar18 + (longlong)sVar2 * 8);
        if (((ulonglong)(longlong)sVar11 <
             (ulonglong)(*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3)) &&
           (cVar10 = FUN_14000d840(*(longlong *)
                                    (*(longlong *)(lVar17 + 0x178) + (longlong)sVar11 * 8) + 0x6a8,
                                   10), cVar10 != '\0')) {
          if (((-1 < sVar2) && ((ulonglong)(longlong)sVar2 < uVar21)) && (-1 < sVar11)) {
            lVar17 = *(longlong *)(lVar18 + (longlong)sVar2 * 8);
            if (((ulonglong)(longlong)sVar11 <
                 (ulonglong)(*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3)) &&
               (cVar10 = FUN_14000d840(*(longlong *)
                                        (*(longlong *)(lVar17 + 0x178) + (longlong)sVar11 * 8) +
                                       0x6a8,0x7b), cVar10 != '\0')) goto LAB_140c4f053;
          }
          uVar15 = FUN_1409fc0c0();
          if ((uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0xccccccd == 0) {
            FUN_140c39a50(param_1,0x47,1);
            FUN_140cc9ed0(param_1,0x47,1);
          }
        }
      }
    }
  }
  else {
    *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) & 0xfffffffe;
    *(uint *)((longlong)param_1 + 0x118) = *(uint *)((longlong)param_1 + 0x118) & 0xfffbffff;
  }
LAB_140c4f053:
  if ((*(uint *)((longlong)param_1 + 0x118) >> 10 & 1) != 0) goto LAB_140c4f35e;
  if (*(longlong *)((longlong)param_1 + 0xd60) == 0) {
    if ((*(uint *)((longlong)param_1 + 0x118) >> 0xc & 1) == 0) {
      if ((*(int *)((longlong)param_1 + 0x1260) < 9) ||
         ((*(byte *)(*(longlong *)((longlong)param_1 + 0x1258) + 8) & 4) == 0)) {
        if (((*(byte *)((longlong)param_1 + 0x810) & 0x20) == 0) &&
           ((*(byte *)((longlong)param_1 + 0x80c) & 0x20) != 0)) {
          bVar36 = 1;
        }
        else {
          bVar36 = 0;
        }
      }
      else {
        bVar36 = ~(*(byte *)((longlong)param_1 + 0x810) >> 5) & 1;
      }
    }
    else {
      bVar36 = 1;
    }
  }
  else {
    bVar36 = 1;
  }
  if (bVar36 != 0) goto LAB_140c4f35e;
  local_168 = cVar8 != '\a';
  bVar35 = false;
  if ('\x03' < cVar8) {
    bVar35 = false;
    if (uVar29 == 0) {
      bVar35 = true;
    }
  }
  if (cVar8 == '\a') {
    local_178 = 0;
    local_180 = 0;
    local_188 = local_188 & 0xffffff00;
    local_190 = local_190 & 0xffffff00;
    local_198 = local_198 & 0xff00;
    cVar8 = FUN_140d2cb70(&DAT_141c53470,*(undefined2 *)((longlong)param_1 + 0xa8),
                          *(undefined2 *)((longlong)param_1 + 0xaa),
                          *(short *)((longlong)param_1 + 0xac) + 1);
    iVar7 = DAT_141d6955c;
    iVar6 = DAT_141d69558;
    iVar16 = DAT_141d69554;
    if (cVar8 == '\0') {
LAB_140c4f1e5:
      sVar25 = *(short *)((longlong)param_1 + 0xac) + 1;
      sVar11 = *(short *)((longlong)param_1 + 0xaa);
      sVar2 = *(short *)((longlong)param_1 + 0xa8);
      if (((-1 < sVar2) && (((sVar2 < iVar16 && (-1 < sVar11)) && (sVar11 < iVar6)))) &&
         ((-1 < sVar25 && (sVar25 < iVar7)))) {
        if ((DAT_141d69520 != 0) &&
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(DAT_141d69520 + (longlong)(sVar2 >> 4) * 8) +
               (longlong)(sVar11 >> 4) * 8) + (longlong)sVar25 * 8) != 0)) goto LAB_140c4f279;
      }
    }
    else {
      sVar25 = *(short *)((longlong)param_1 + 0xac) + 1;
      sVar11 = *(short *)((longlong)param_1 + 0xaa);
      sVar2 = *(short *)((longlong)param_1 + 0xa8);
      if (((((sVar2 < 0) || (DAT_141d69554 <= sVar2)) || (sVar11 < 0)) ||
          ((DAT_141d69558 <= sVar11 || (sVar25 < 0)))) ||
         ((DAT_141d6955c <= sVar25 ||
          (cVar8 = FUN_140d868e0(&DAT_141c53470,sVar2,sVar11,sVar25), cVar8 == '\0'))))
      goto LAB_140c4f1e5;
      uVar15 = FUN_1400048f0(&DAT_141c53470,sVar2);
      if (((uVar15 & 7) == 6) ||
         (((uVar15 & 7) == 7 && (cVar8 = FUN_1401aa670(&DAT_141c6fd98,sVar2), cVar8 != '\0'))))
      goto LAB_140c4f1e5;
    }
    if ('\x03' < (char)local_148) {
      if (local_158 == 0) {
        bVar35 = true;
      }
      goto LAB_140c4f279;
    }
    if ((*(byte *)((longlong)param_1 + 0x114) & 1) == 0) goto LAB_140c4f279;
LAB_140c4f280:
    if ((0 < *(int *)((longlong)param_1 + 0x1260)) &&
       ((**(byte **)((longlong)param_1 + 0x1258) & 2) != 0)) goto LAB_140c4f2a4;
  }
  else {
LAB_140c4f279:
    if (local_168 != 0) goto LAB_140c4f280;
LAB_140c4f2a4:
    if ((!bVar35) ||
       ((*(int *)((longlong)param_1 + 0x1260) < 1 ||
        ((**(byte **)((longlong)param_1 + 0x1258) & 1) == 0)))) {
      *(uint *)((longlong)param_1 + 0x110) = *(uint *)((longlong)param_1 + 0x110) | 0x800020;
      *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) & 0xffffffdf;
      goto LAB_140c4f35e;
    }
  }
  if ((*(uint *)((longlong)param_1 + 0x110) & 0x20) != 0) {
    *(uint *)((longlong)param_1 + 0x110) = *(uint *)((longlong)param_1 + 0x110) & 0xffffffdf;
    *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) & 0xffffffdf;
    *(undefined4 *)((longlong)param_1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x3d0) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0x3d4) = 0xffff;
    *(undefined2 *)((longlong)param_1 + 0x3d6) = 0xffff;
    *(undefined2 *)((longlong)param_1 + 0x3d8) = 0xffff;
    *(undefined4 *)((longlong)param_1 + 0x3dc) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x3e0) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0x3e4) = 0xffff;
    *(undefined2 *)((longlong)param_1 + 0x3e6) = 0xffff;
    *(undefined2 *)((longlong)param_1 + 1000) = 0xffff;
    *(undefined4 *)((longlong)param_1 + 0x3ec) = 0xffffffff;
  }
LAB_140c4f35e:
  if (((((*(uint *)((longlong)param_1 + 0x110) & 0x2010202) == 0) &&
       ((*(uint *)((longlong)param_1 + 0x118) & 0x180000) == 0)) &&
      ((*(byte *)((longlong)param_1 + 0x114) & 1) == 0)) &&
     (((local_180 = FUN_140366ce0(param_1), local_180 == '\0' &&
       (*(short *)((longlong)param_1 + 0x4a8) == -30000)) &&
      (*(int *)((longlong)param_1 + 0x4b0) == -1)))) {
    local_178 = 0;
    local_188 = local_188 & 0xffffff00;
    local_190 = local_190 & 0xffffff00;
    local_198 = local_198 & 0xff00;
    cVar8 = FUN_140d2cb70(&DAT_141c53470,*(undefined2 *)((longlong)param_1 + 0xa8),
                          *(undefined2 *)((longlong)param_1 + 0xaa),
                          *(undefined2 *)((longlong)param_1 + 0xac));
    if (cVar8 != '\0') {
      sVar25 = *(short *)((longlong)param_1 + 0xac) + -1;
      sVar11 = *(short *)((longlong)param_1 + 0xaa);
      sVar2 = *(short *)((longlong)param_1 + 0xa8);
      cVar8 = FUN_14013bfd0(&DAT_141c53470,sVar2,sVar11,sVar25);
      if (((cVar8 != '\0') && (-1 < sVar2)) &&
         ((sVar2 < DAT_141d69554 &&
          ((((-1 < sVar11 && (sVar11 < DAT_141d69558)) && (-1 < sVar25)) &&
           ((sVar25 < DAT_141d6955c && (cVar8 = FUN_140d868e0(&DAT_141c53470,sVar2), cVar8 != '\0'))
           )))))) {
        uVar15 = FUN_1400048f0(&DAT_141c53470,sVar2);
        if (((uVar15 & 7) != 6) &&
           (((uVar15 & 7) != 7 || (cVar8 = FUN_1401aa670(&DAT_141c6fd98,sVar2), cVar8 == '\0')))) {
          lVar17 = FUN_140210800();
          *(undefined2 *)(lVar17 + 0x20) = *(undefined2 *)((longlong)param_1 + 0xa8);
          *(undefined2 *)(lVar17 + 0x22) = *(undefined2 *)((longlong)param_1 + 0xaa);
          *(undefined2 *)(lVar17 + 0x24) = *(undefined2 *)((longlong)param_1 + 0xac);
          *(undefined2 *)(lVar17 + 0x32) = *(undefined2 *)((longlong)param_1 + 0xa8);
          *(undefined2 *)(lVar17 + 0x34) = *(undefined2 *)((longlong)param_1 + 0xaa);
          *(undefined2 *)(lVar17 + 0x36) = *(undefined2 *)((longlong)param_1 + 0xac);
          *(undefined2 *)(lVar17 + 0x2c) = *(undefined2 *)((longlong)param_1 + 0xa8);
          *(undefined2 *)(lVar17 + 0x2e) = *(undefined2 *)((longlong)param_1 + 0xaa);
          *(undefined2 *)(lVar17 + 0x30) = *(undefined2 *)((longlong)param_1 + 0xac);
          *(void **)(lVar17 + 0x90) = param_1;
          *(undefined8 *)(lVar17 + 0x18) = 0;
          uVar15 = *(uint *)(lVar17 + 0x48);
          *(uint *)(lVar17 + 0x48) = uVar15 | 0x311;
          if ((*(uint *)((longlong)param_1 + 0x110) & 0x8000) == 0) {
            *(uint *)(lVar17 + 0x48) = uVar15 | 0x1311;
          }
          *(undefined8 *)(lVar17 + 0x6c) = 0;
          *(undefined8 *)(lVar17 + 0x74) = 0;
          *(undefined8 *)(lVar17 + 0x7c) = 0;
          *(undefined8 *)(lVar17 + 0x84) = 0;
          *(undefined4 *)(lVar17 + 0x8c) = 0;
          *(undefined4 *)(lVar17 + 0x50) = 0;
          FUN_140c5b130(param_1);
          *(uint *)((longlong)param_1 + 0x110) =
               *(uint *)((longlong)param_1 + 0x110) & 0xffff7fff | 0x10000;
          *(undefined4 *)((longlong)param_1 + 0x4a8) = 0x8ad08ad0;
          *(undefined2 *)((longlong)param_1 + 0x4ac) = 0x8ad0;
          if (*(int *)((longlong)param_1 + 0x4b0) != -1) {
            lVar17 = FUN_14000de70(&DAT_141c67368);
            if (lVar17 != 0) {
              FUN_1408243e0(lVar17,0x3a,*(undefined4 *)((longlong)param_1 + 0x130));
            }
            *(undefined4 *)((longlong)param_1 + 0x4b0) = 0xffffffff;
          }
          *(undefined1 *)((longlong)param_1 + 0x4a0) = 0;
          *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
          FUN_140c4cd40(param_1);
        }
      }
    }
  }
  return 0;
}

