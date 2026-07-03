// FUN_140c773a0 @ 140c773a0
// callees:
//   -> 1402107b0 FUN_1402107b0
//   -> 140cb7360 FUN_140cb7360
//   -> 140073a00 FUN_140073a00
//   -> 140dfb5c4 operator_new
//   -> 140566dd0 FUN_140566dd0
//   -> 14000be20 FUN_14000be20
//   -> 140051300 FUN_140051300
//   -> 14000c460 FUN_14000c460
//   -> 1408054d0 FUN_1408054d0
//   -> 140d43ff0 FUN_140d43ff0
//   -> 140c77360 FUN_140c77360
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1407ea250 FUN_1407ea250
//   -> 140d43000 FUN_140d43000
//   -> 140d435a0 FUN_140d435a0
//   -> 1400047c0 FUN_1400047c0
//   -> 14015b330 FUN_14015b330
//   -> 140073930 FUN_140073930
//   -> 14015e1e0 FUN_14015e1e0
//   -> 140dfb5b4 free
//   -> 140c241b0 FUN_140c241b0
//   -> 1407efc10 FUN_1407efc10
//   -> 140002020 FUN_140002020
//   -> 140d43cb0 FUN_140d43cb0
//   -> 140d43830 FUN_140d43830
//   -> 140c2c690 FUN_140c2c690
//   -> 140c5ad60 FUN_140c5ad60
//   -> 140c2bad0 FUN_140c2bad0
//   -> 140c841a0 FUN_140c841a0
//   -> 140c2cd40 FUN_140c2cd40
//   -> 140c808b0 FUN_140c808b0
//   -> 140617dc0 FUN_140617dc0
//   -> 14000c780 FUN_14000c780
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140074660 FUN_140074660
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c773a0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulonglong *puVar21;
  undefined2 uVar22;
  int iVar23;
  ulonglong uVar24;
  char *pcVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  short sVar33;
  int iVar34;
  undefined8 uVar35;
  short sVar36;
  short *psVar37;
  ushort uVar38;
  ushort *puVar39;
  short *psVar40;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined2 local_1a8 [4];
  ulonglong local_1a0;
  longlong local_198;
  int local_190;
  longlong local_188;
  ushort *local_180;
  char local_178;
  char local_177;
  char local_176;
  char local_175;
  uint local_174;
  short local_170 [2];
  short local_16c [2];
  short local_168 [2];
  short local_164 [2];
  short local_160 [2];
  short local_15c [2];
  undefined2 local_158 [2];
  undefined2 local_154 [2];
  short local_150 [2];
  short local_14c [2];
  short local_148 [2];
  undefined2 local_144 [2];
  undefined2 local_140 [2];
  int local_13c;
  undefined2 local_138 [2];
  undefined2 local_134 [2];
  undefined2 local_130 [2];
  undefined2 local_12c [2];
  int local_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined1 local_104;
  undefined2 local_102;
  undefined2 local_100;
  undefined2 local_fe;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 *local_c0;
  short *local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  short *local_98;
  short *local_90;
  short *psStack_88;
  short *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_60 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_1e8;
  if ((*(uint *)(param_1 + 0x118) & 0x1100) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x100;
  local_b0 = 0;
  local_c8 = 0;
  local_128 = 0;
  local_13c = 0;
  local_177 = '\0';
  local_176 = '\0';
  local_175 = '\0';
  local_a8 = -1;
  if ((-1 < *(short *)(param_1 + 0xa4)) &&
     (param_3 = (ulonglong)*(short *)(param_1 + 0xa4),
     param_3 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) {
    local_b0 = *(longlong *)(DAT_141d6dd50 + param_3 * 8);
  }
  param_3 = param_3 & 0xffffffffffffff00;
  local_174 = (uint)param_3;
  local_90 = (short *)0x0;
  psStack_88 = (short *)0x0;
  local_98 = (short *)0x0;
  local_80 = (short *)0x0;
  lVar30 = *(longlong *)(param_1 + 0xc30) - *(longlong *)(param_1 + 0xc28);
  local_160[0] = (short)(lVar30 >> 3) + -1;
  uVar31 = CONCAT62((int6)(lVar30 >> 0x13),local_160[0]);
  psVar40 = (short *)0x0;
  local_1a0 = uVar31;
  if (-1 < local_160[0]) {
    local_b8 = (short *)0x0;
    do {
      iVar15 = 0;
      lVar30 = (longlong)(short)uVar31;
      local_198 = lVar30;
      if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + lVar30 * 4) & 2) == 0) {
        puVar39 = *(ushort **)(*(longlong *)(param_1 + 0xc28) + lVar30 * 8);
        lVar28 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar30 * 8);
        local_188 = lVar28;
        local_180 = puVar39;
        if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + lVar30 * 4) & 1) == 0) {
          uVar3 = *(ushort *)(lVar28 + 0xda);
          if (((*puVar39 < uVar3) || (uVar3 == 0xea61)) &&
             ((*(ushort *)(lVar28 + 0xd8) < *puVar39 || (uVar3 == 0xea61)))) goto LAB_140c78e33;
        }
        local_190 = 0;
        local_178 = '\0';
        *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffeff;
        lVar18 = *(longlong *)(lVar28 + 0x60) - *(longlong *)(lVar28 + 0x58);
        sVar14 = (short)(lVar18 >> 3) + -1;
        local_118 = CONCAT62((int6)(lVar18 >> 0x13),sVar14);
        local_1a0 = uVar31;
        uVar16 = (uint)param_3;
        if (-1 < sVar14) {
          do {
            lVar18 = *(longlong *)(*(longlong *)(lVar28 + 0x58) + (longlong)(short)local_118 * 8);
            local_a0 = lVar18;
            if (((*(byte *)(*(longlong *)(param_1 + 0x518) + (longlong)*(int *)(lVar18 + 0x68) * 4)
                 & 1) == 0) &&
               (local_120 = *(longlong *)
                             (*(longlong *)(local_b0 + 0x24c8) +
                             (longlong)*(int *)(lVar18 + 0x20) * 8),
               *(short *)(local_120 + 0xd0) != -1)) {
              if (*(int *)(lVar18 + 0x6c) == -1) {
                local_190 = iVar15 + 1;
              }
              uVar3 = *(ushort *)(local_120 + 0x11e);
              uVar4 = *(ushort *)(local_120 + 0x120);
              uVar38 = *(ushort *)(local_120 + 0x122);
              if ((uVar3 != 0xea61) && (uVar3 <= *puVar39)) {
                iVar15 = (((uint)*puVar39 - (uint)uVar3) + 1) * 3;
                if (100 < iVar15) {
                  iVar15 = 100;
                }
                if ((*(int *)(param_1 + 0x5b0) == -1) ||
                   (puVar19 = (undefined4 *)FUN_1402107b0(param_1), puVar19 == (undefined4 *)0x0)) {
                  puVar19 = (undefined4 *)FUN_140cb7360(param_1);
                  *(undefined4 *)(param_1 + 0x5b0) = *puVar19;
                }
                puVar20 = (undefined4 *)FUN_140073a00(puVar19,*(undefined4 *)(lVar18 + 0x68));
                if (puVar20 == (undefined4 *)0x0) {
                  local_c0 = operator_new(0xa8);
                  puVar20 = (undefined4 *)FUN_140566dd0(local_c0);
                  *(short *)(puVar20 + 1) = (short)local_1a0;
                  *(short *)((longlong)puVar20 + 6) = (short)local_118;
                  local_1a8[0] = 1;
                  FUN_14000be20(puVar20 + 0x12,local_1a8);
                  local_1a8[0] = 0;
                  FUN_14000be20(puVar20 + 6,local_1a8);
                  local_1a8[0] = 0;
                  FUN_14000be20(puVar20 + 0xc,local_1a8);
                  puVar20[2] = 0xffffffff;
                  *(undefined2 *)(puVar20 + 3) = 100;
                  puVar20[0x1a] = puVar20[0x1a] | 2;
                  *puVar20 = *(undefined4 *)(lVar18 + 0x68);
                  FUN_140051300(puVar20,puVar19 + 2);
                }
                uVar31 = local_1a0;
                puVar39 = local_180;
                if (**(short **)(puVar20 + 6) < iVar15) {
                  iVar34 = (iVar15 - **(short **)(puVar20 + 6)) * (int)*(short *)(puVar20 + 3);
                  if (0 < iVar34) {
                    piVar1 = (int *)(*(longlong *)(param_1 + 0x578) +
                                    (longlong)*(int *)(lVar18 + 0x68) * 4);
                    *piVar1 = *piVar1 + iVar34;
                    iVar34 = *piVar1;
                    if (1000000000 < iVar34) {
                      iVar34 = 1000000000;
                    }
                    *piVar1 = iVar34;
                  }
                  **(short **)(puVar20 + 6) = (short)iVar15;
                  if (**(short **)(puVar20 + 0xc) < iVar15) {
                    **(short **)(puVar20 + 0xc) = (short)iVar15;
                  }
                  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
                  if (local_c8 < iVar15) {
                    local_c8 = iVar15;
                  }
                }
              }
              if ((uVar4 != 0xea61) && (*puVar39 <= uVar4)) {
                iVar15 = (((uint)uVar4 - (uint)*puVar39) + 1) * 3;
                if (100 < iVar15) {
                  iVar15 = 100;
                }
                if ((*(int *)(param_1 + 0x5b4) == -1) ||
                   (puVar19 = (undefined4 *)FUN_1402107b0(param_1), puVar19 == (undefined4 *)0x0)) {
                  puVar19 = (undefined4 *)FUN_140cb7360(param_1);
                  *(undefined4 *)(param_1 + 0x5b4) = *puVar19;
                }
                puVar20 = (undefined4 *)FUN_140073a00(puVar19,*(undefined4 *)(local_a0 + 0x68));
                if (puVar20 == (undefined4 *)0x0) {
                  local_c0 = operator_new(0xa8);
                  puVar20 = (undefined4 *)FUN_140566dd0(local_c0);
                  *(short *)(puVar20 + 1) = (short)uVar31;
                  *(short *)((longlong)puVar20 + 6) = (short)local_118;
                  local_1a8[0] = 2;
                  if ((local_1a8 < *(undefined2 **)(puVar20 + 0x14)) &&
                     (puVar5 = *(undefined2 **)(puVar20 + 0x12), puVar5 <= local_1a8)) {
                    if (*(longlong *)(puVar20 + 0x14) == *(longlong *)(puVar20 + 0x16)) {
                      FUN_14000c460(puVar20 + 0x12);
                    }
                    if (*(undefined2 **)(puVar20 + 0x14) != (undefined2 *)0x0) {
                      **(undefined2 **)(puVar20 + 0x14) =
                           *(undefined2 *)
                            (*(longlong *)(puVar20 + 0x12) +
                            ((longlong)local_1a8 - (longlong)puVar5 >> 1) * 2);
                    }
                  }
                  else {
                    if (*(longlong *)(puVar20 + 0x14) == *(longlong *)(puVar20 + 0x16)) {
                      FUN_14000c460(puVar20 + 0x12,1);
                    }
                    if (*(undefined2 **)(puVar20 + 0x14) != (undefined2 *)0x0) {
                      **(undefined2 **)(puVar20 + 0x14) = 2;
                    }
                  }
                  *(longlong *)(puVar20 + 0x14) = *(longlong *)(puVar20 + 0x14) + 2;
                  local_1a8[0] = 0;
                  if ((local_1a8 < *(undefined2 **)(puVar20 + 8)) &&
                     (puVar5 = *(undefined2 **)(puVar20 + 6), puVar5 <= local_1a8)) {
                    if (*(longlong *)(puVar20 + 8) == *(longlong *)(puVar20 + 10)) {
                      FUN_14000c460(puVar20 + 6);
                    }
                    if (*(undefined2 **)(puVar20 + 8) != (undefined2 *)0x0) {
                      **(undefined2 **)(puVar20 + 8) =
                           *(undefined2 *)
                            (*(longlong *)(puVar20 + 6) +
                            ((longlong)local_1a8 - (longlong)puVar5 >> 1) * 2);
                    }
                  }
                  else {
                    if (*(longlong *)(puVar20 + 8) == *(longlong *)(puVar20 + 10)) {
                      FUN_14000c460(puVar20 + 6);
                    }
                    if (*(undefined2 **)(puVar20 + 8) != (undefined2 *)0x0) {
                      **(undefined2 **)(puVar20 + 8) = 0;
                    }
                  }
                  *(longlong *)(puVar20 + 8) = *(longlong *)(puVar20 + 8) + 2;
                  local_1a8[0] = 0;
                  if ((local_1a8 < *(undefined2 **)(puVar20 + 0xe)) &&
                     (puVar5 = *(undefined2 **)(puVar20 + 0xc), puVar5 <= local_1a8)) {
                    if (*(longlong *)(puVar20 + 0xe) == *(longlong *)(puVar20 + 0x10)) {
                      FUN_14000c460(puVar20 + 0xc,1);
                    }
                    if (*(undefined2 **)(puVar20 + 0xe) != (undefined2 *)0x0) {
                      **(undefined2 **)(puVar20 + 0xe) =
                           *(undefined2 *)
                            (*(longlong *)(puVar20 + 0xc) +
                            ((longlong)local_1a8 - (longlong)puVar5 >> 1) * 2);
                    }
                  }
                  else {
                    if (*(longlong *)(puVar20 + 0xe) == *(longlong *)(puVar20 + 0x10)) {
                      FUN_14000c460(puVar20 + 0xc);
                    }
                    if (*(undefined2 **)(puVar20 + 0xe) != (undefined2 *)0x0) {
                      **(undefined2 **)(puVar20 + 0xe) = 0;
                    }
                  }
                  *(longlong *)(puVar20 + 0xe) = *(longlong *)(puVar20 + 0xe) + 2;
                  puVar20[2] = 0xffffffff;
                  *(undefined2 *)(puVar20 + 3) = 100;
                  puVar20[0x1a] = puVar20[0x1a] | 2;
                  *puVar20 = *(undefined4 *)(local_a0 + 0x68);
                  FUN_140051300(puVar20,puVar19 + 2);
                }
                lVar18 = local_a0;
                if (**(short **)(puVar20 + 6) < iVar15) {
                  iVar34 = (iVar15 - **(short **)(puVar20 + 6)) * (int)*(short *)(puVar20 + 3);
                  if (0 < iVar34) {
                    piVar1 = (int *)(*(longlong *)(param_1 + 0x578) +
                                    (longlong)*(int *)(local_a0 + 0x68) * 4);
                    *piVar1 = *piVar1 + iVar34;
                    iVar34 = *piVar1;
                    if (1000000000 < iVar34) {
                      iVar34 = 1000000000;
                    }
                    *piVar1 = iVar34;
                  }
                  **(short **)(puVar20 + 6) = (short)iVar15;
                  if (**(short **)(puVar20 + 0xc) < iVar15) {
                    **(short **)(puVar20 + 0xc) = (short)iVar15;
                  }
                  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
                  if (local_128 < iVar15) {
                    local_128 = iVar15;
                  }
                }
              }
              puVar39 = local_180;
              if (((uVar38 == 0xea61) || (*local_180 < uVar38)) ||
                 ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + local_198 * 4) & 1) != 0)) {
                uVar22 = (undefined2)local_1a0;
              }
              else {
                if (local_a8 == -1) {
                  local_1a8[0] = 0x8ad0;
                  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
                    local_1a8[0] = *(undefined2 *)(param_1 + 0xa8);
                    local_12c[0] = *(undefined2 *)(param_1 + 0xaa);
                    local_130[0] = *(undefined2 *)(param_1 + 0xac);
                  }
                  else {
                    puVar6 = *(undefined8 **)(param_1 + 0x1c8);
                    for (puVar26 = *(undefined8 **)(param_1 + 0x1c0); puVar26 < puVar6;
                        puVar26 = puVar26 + 1) {
                      iVar15 = (**(code **)(*(longlong *)*puVar26 + 0x10))();
                      if ((iVar15 == 0xb) &&
                         (lVar30 = (**(code **)(*(longlong *)*puVar26 + 0x18))(), lVar30 != 0)) {
                        FUN_1408054d0(lVar30,local_1a8,local_12c,local_130);
                        break;
                      }
                    }
                  }
                  local_a8 = FUN_140d43ff0(&DAT_141c53470,local_1a8[0],local_12c[0],local_130[0]);
                }
                uVar22 = (undefined2)local_1a0;
                if ((local_a8 == 3) &&
                   (lVar30 = local_198, cVar11 = FUN_140c77360(param_1,local_1a0 & 0xffff),
                   cVar11 == '\0')) {
                  puVar2 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar30 * 4);
                  *puVar2 = *puVar2 | 1;
                }
              }
              if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + local_198 * 4) & 1) != 0) {
                uVar16 = FUN_1409fc0c0();
                if ((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0x6666667 == 0) {
                  if ((*(int *)(param_1 + 0x5b8) == -1) ||
                     (puVar19 = (undefined4 *)FUN_1402107b0(param_1), puVar19 == (undefined4 *)0x0))
                  {
                    puVar19 = (undefined4 *)FUN_140cb7360(param_1);
                    *(undefined4 *)(param_1 + 0x5b8) = *puVar19;
                  }
                  puVar20 = (undefined4 *)FUN_140073a00(puVar19,*(undefined4 *)(lVar18 + 0x68));
                  if (puVar20 == (undefined4 *)0x0) {
                    local_c0 = operator_new(0xa8);
                    puVar20 = (undefined4 *)FUN_140566dd0(local_c0);
                    *(undefined2 *)(puVar20 + 1) = uVar22;
                    *(short *)((longlong)puVar20 + 6) = (short)local_118;
                    local_1a8[0] = 3;
                    FUN_14000be20(puVar20 + 0x12,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 6,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 0xc,local_1a8);
                    puVar20[2] = 0xffffffff;
                    *(undefined2 *)(puVar20 + 3) = 100;
                    puVar20[0x1a] = puVar20[0x1a] | 2;
                    *puVar20 = *(undefined4 *)(lVar18 + 0x68);
                    FUN_140051300(puVar20,puVar19 + 2);
                  }
                  if (**(short **)(puVar20 + 6) < 100) {
                    if (0 < *(short *)(puVar20 + 3)) {
                      piVar1 = (int *)(*(longlong *)(param_1 + 0x578) +
                                      (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *piVar1 = *piVar1 + (int)*(short *)(puVar20 + 3);
                      iVar15 = *piVar1;
                      if (1000000000 < iVar15) {
                        iVar15 = 1000000000;
                      }
                      *piVar1 = iVar15;
                    }
                    **(short **)(puVar20 + 6) = **(short **)(puVar20 + 6) + 1;
                    if (**(short **)(puVar20 + 0xc) < **(short **)(puVar20 + 6)) {
                      **(short **)(puVar20 + 0xc) = **(short **)(puVar20 + 6);
                    }
                    iVar15 = (*(int *)(lVar18 + 0x40) * (int)**(short **)(puVar20 + 6)) / 10;
                    if ((int)puVar20[0x1b] < iVar15) {
                      puVar20[0x1b] = iVar15;
                    }
                    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
                    if (local_13c < **(short **)(puVar20 + 6)) {
                      local_13c = (int)**(short **)(puVar20 + 6);
                    }
                  }
                }
                if (uVar38 != 0xea61) {
                  uVar38 = uVar38 + 200;
                  if (60000 < uVar38) {
                    uVar38 = 60000;
                  }
                  if (*puVar39 < uVar38) {
                    FUN_1407ea250(puVar39,uVar38,*(undefined2 *)(local_188 + 0xdc),10);
                  }
                  local_1a8[0] = 0x8ad0;
                  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
                    local_1a8[0] = *(undefined2 *)(param_1 + 0xa8);
                    local_154[0] = *(undefined2 *)(param_1 + 0xaa);
                    local_158[0] = *(undefined2 *)(param_1 + 0xac);
                  }
                  else {
                    puVar6 = *(undefined8 **)(param_1 + 0x1c8);
                    for (puVar26 = *(undefined8 **)(param_1 + 0x1c0); puVar26 < puVar6;
                        puVar26 = puVar26 + 1) {
                      iVar15 = (**(code **)(*(longlong *)*puVar26 + 0x10))();
                      if ((iVar15 == 0xb) &&
                         (lVar30 = (**(code **)(*(longlong *)*puVar26 + 0x18))(), lVar30 != 0)) {
                        FUN_1408054d0(lVar30,local_1a8,local_154,local_158);
                        break;
                      }
                    }
                  }
                  local_1c0 = CONCAT22(local_1c0._2_2_,uVar38);
                  local_1c8 = (longlong *)CONCAT62(local_1c8._2_6_,uVar38);
                  FUN_140d43000(&DAT_141c53470,local_1a8[0],local_154[0],local_158[0]);
                  uVar16 = FUN_1409fc0c0();
                  if ((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                                0x7fffffff) / 0xccccccd == 0) {
                    uVar16 = FUN_1409fc0c0();
                    local_1c8 = (longlong *)
                                CONCAT62(local_1c8._2_6_,
                                         (short)((ulonglong)
                                                 (uVar16 + (int)((longlong)
                                                                 ((ulonglong)uVar16 * 0x100000003)
                                                                >> 0x3f) * 0x7fffffff) / 0xccccccd)
                                         + 10);
                    FUN_140d435a0(&DAT_141c53470,local_1a8[0],local_154[0],local_158[0]);
                  }
                }
              }
              lVar27 = local_120;
              uVar3 = *(ushort *)(local_120 + 0x124);
              uVar4 = *(ushort *)(local_120 + 0x126);
              sVar14 = *(short *)(local_120 + 0x11c);
              if ((((sVar14 == 0) || ((ushort)(sVar14 - 3U) < 3)) && (uVar3 != 0xea61)) &&
                 (uVar3 <= *puVar39)) {
                uVar16 = FUN_1409fc0c0();
                uVar31 = local_1a0;
                lVar28 = local_188;
                lVar30 = local_198;
                iVar15 = local_190;
                if ((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0x1999999a == 0) {
                  if ((*(int *)(param_1 + 0x5bc) == -1) ||
                     (puVar19 = (undefined4 *)FUN_1402107b0(param_1), puVar19 == (undefined4 *)0x0))
                  {
                    puVar19 = (undefined4 *)FUN_140cb7360(param_1);
                    *(undefined4 *)(param_1 + 0x5bc) = *puVar19;
                  }
                  puVar20 = (undefined4 *)FUN_140073a00(puVar19,*(undefined4 *)(lVar18 + 0x68));
                  uVar31 = local_1a0;
                  if (puVar20 == (undefined4 *)0x0) {
                    local_c0 = operator_new(0xa8);
                    puVar20 = (undefined4 *)FUN_140566dd0(local_c0);
                    uVar31 = local_1a0;
                    *(short *)(puVar20 + 1) = (short)local_1a0;
                    *(short *)((longlong)puVar20 + 6) = (short)local_118;
                    local_1a8[0] = 4;
                    FUN_14000be20(puVar20 + 0x12,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 6,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 0xc,local_1a8);
                    puVar20[2] = 0xffffffff;
                    *(undefined2 *)(puVar20 + 3) = 100;
                    puVar20[0x1a] = puVar20[0x1a] | 2;
                    *puVar20 = *(undefined4 *)(lVar18 + 0x68);
                    FUN_140051300(puVar20,puVar19 + 2);
                  }
                  lVar28 = local_188;
                  lVar30 = local_198;
                  puVar39 = local_180;
                  iVar15 = local_190;
                  if (**(short **)(puVar20 + 6) < 100) {
                    if (0 < *(short *)(puVar20 + 3)) {
                      piVar1 = (int *)(*(longlong *)(param_1 + 0x578) +
                                      (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *piVar1 = *piVar1 + (int)*(short *)(puVar20 + 3);
                      iVar34 = *piVar1;
                      if (1000000000 < iVar34) {
                        iVar34 = 1000000000;
                      }
                      *piVar1 = iVar34;
                    }
                    **(short **)(puVar20 + 6) = **(short **)(puVar20 + 6) + 1;
                    if (**(short **)(puVar20 + 0xc) < **(short **)(puVar20 + 6)) {
                      **(short **)(puVar20 + 0xc) = **(short **)(puVar20 + 6);
                    }
                    iVar34 = (*(int *)(lVar18 + 0x40) * (int)**(short **)(puVar20 + 6)) / 10;
                    if ((int)puVar20[0x1b] < iVar34) {
                      puVar20[0x1b] = iVar34;
                    }
                    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
                    local_177 = '\x01';
                    if (**(short **)(puVar20 + 6) == 100) {
                      puVar2 = (uint *)(*(longlong *)(param_1 + 0x518) +
                                       (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *puVar2 = *puVar2 | 1;
                      *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffdfffff;
                      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
                      local_178 = '\x01';
                      if (*(int *)(lVar18 + 0x6c) == -1) {
                        local_190 = local_190 + -1;
                      }
                      iVar15 = local_190;
                      local_170[0] = -30000;
                      if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
                        local_170[0] = *(short *)(param_1 + 0xa8);
                        local_150[0] = *(short *)(param_1 + 0xaa);
                        local_138[0] = *(undefined2 *)(param_1 + 0xac);
                      }
                      else {
                        puVar26 = *(undefined8 **)(param_1 + 0x1c0);
                        puVar6 = *(undefined8 **)(param_1 + 0x1c8);
                        if (puVar6 <= puVar26) goto LAB_140c78208;
                        do {
                          iVar34 = (**(code **)(*(longlong *)*puVar26 + 0x10))();
                          if ((iVar34 == 0xb) &&
                             (lVar30 = (**(code **)(*(longlong *)*puVar26 + 0x18))(), lVar30 != 0))
                          {
                            FUN_1408054d0(lVar30,local_170,local_150,local_138);
                            lVar27 = local_120;
                            break;
                          }
                          puVar26 = puVar26 + 1;
                          lVar27 = local_120;
                        } while (puVar26 < puVar6);
                      }
                      if (local_170[0] != -30000) {
                        uVar29 = *(undefined4 *)(lVar27 + 0xd4);
                        sVar14 = *(short *)(lVar27 + 0xd0);
                        sVar36 = local_170[0];
                        sVar33 = local_150[0];
                        uVar22 = local_138[0];
joined_r0x000140c785de:
                        if ((sVar14 != -1) &&
                           (lVar30 = FUN_1400047c0(&DAT_141c53470,sVar36,sVar33,uVar22), lVar30 != 0
                           )) {
                          uVar16 = (int)sVar33 & 0x8000000f;
                          if ((int)uVar16 < 0) {
                            uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                          }
                          uVar17 = (int)sVar36 & 0x8000000f;
                          if ((int)uVar17 < 0) {
                            uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
                          }
                          uVar22 = 1;
LAB_140c781dc:
                          local_1b0 = 1;
                          local_1b8 = 100;
                          local_1c0 = CONCAT22(local_1c0._2_2_,uVar22);
                          local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,uVar29);
                          FUN_14015b330(lVar30,uVar17 & 0xffff,uVar16 & 0xffff,sVar14);
                        }
                      }
                      goto LAB_140c78208;
                    }
                  }
                }
              }
              else if (((sVar14 == 2) && (uVar4 != 0xea61)) && (*puVar39 < uVar4)) {
                uVar16 = FUN_1409fc0c0();
                uVar31 = local_1a0;
                lVar28 = local_188;
                lVar30 = local_198;
                iVar15 = local_190;
                if ((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0x1999999a == 0) {
                  if ((*(int *)(param_1 + 0x5c8) == -1) ||
                     (puVar19 = (undefined4 *)FUN_1402107b0(param_1), puVar19 == (undefined4 *)0x0))
                  {
                    puVar19 = (undefined4 *)FUN_140cb7360(param_1);
                    *(undefined4 *)(param_1 + 0x5c8) = *puVar19;
                  }
                  puVar20 = (undefined4 *)FUN_140073a00(puVar19,*(undefined4 *)(lVar18 + 0x68));
                  uVar31 = local_1a0;
                  if (puVar20 == (undefined4 *)0x0) {
                    local_c0 = operator_new(0xa8);
                    puVar20 = (undefined4 *)FUN_140566dd0(local_c0);
                    uVar31 = local_1a0;
                    *(short *)(puVar20 + 1) = (short)local_1a0;
                    *(short *)((longlong)puVar20 + 6) = (short)local_118;
                    local_1a8[0] = 7;
                    FUN_14000be20(puVar20 + 0x12,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 6,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 0xc,local_1a8);
                    puVar20[2] = 0xffffffff;
                    *(undefined2 *)(puVar20 + 3) = 100;
                    puVar20[0x1a] = puVar20[0x1a] | 2;
                    *puVar20 = *(undefined4 *)(lVar18 + 0x68);
                    FUN_140051300(puVar20,puVar19 + 2);
                  }
                  lVar28 = local_188;
                  lVar30 = local_198;
                  puVar39 = local_180;
                  iVar15 = local_190;
                  if (**(short **)(puVar20 + 6) < 100) {
                    if (0 < *(short *)(puVar20 + 3)) {
                      piVar1 = (int *)(*(longlong *)(param_1 + 0x578) +
                                      (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *piVar1 = *piVar1 + (int)*(short *)(puVar20 + 3);
                      iVar34 = *piVar1;
                      if (1000000000 < iVar34) {
                        iVar34 = 1000000000;
                      }
                      *piVar1 = iVar34;
                    }
                    **(short **)(puVar20 + 6) = **(short **)(puVar20 + 6) + 1;
                    if (**(short **)(puVar20 + 0xc) < **(short **)(puVar20 + 6)) {
                      **(short **)(puVar20 + 0xc) = **(short **)(puVar20 + 6);
                    }
                    iVar34 = (*(int *)(lVar18 + 0x40) * (int)**(short **)(puVar20 + 6)) / 10;
                    if ((int)puVar20[0x1b] < iVar34) {
                      puVar20[0x1b] = iVar34;
                    }
                    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
                    local_175 = '\x01';
                    if (**(short **)(puVar20 + 6) == 100) {
                      puVar2 = (uint *)(*(longlong *)(param_1 + 0x518) +
                                       (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *puVar2 = *puVar2 | 1;
                      *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffdfffff;
                      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
                      local_178 = '\x01';
                      if (*(int *)(lVar18 + 0x6c) == -1) {
                        local_190 = local_190 + -1;
                      }
                      iVar15 = local_190;
                      local_16c[0] = -30000;
                      if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
                        local_16c[0] = *(short *)(param_1 + 0xa8);
                        local_14c[0] = *(short *)(param_1 + 0xaa);
                        local_134[0] = *(undefined2 *)(param_1 + 0xac);
                      }
                      else {
                        puVar26 = *(undefined8 **)(param_1 + 0x1c0);
                        puVar6 = *(undefined8 **)(param_1 + 0x1c8);
                        if (puVar6 <= puVar26) goto LAB_140c78208;
                        do {
                          iVar34 = (**(code **)(*(longlong *)*puVar26 + 0x10))();
                          if ((iVar34 == 0xb) &&
                             (lVar30 = (**(code **)(*(longlong *)*puVar26 + 0x18))(), lVar30 != 0))
                          {
                            FUN_1408054d0(lVar30,local_16c,local_14c,local_134);
                            lVar27 = local_120;
                            break;
                          }
                          puVar26 = puVar26 + 1;
                          lVar27 = local_120;
                        } while (puVar26 < puVar6);
                      }
                      if (local_16c[0] != -30000) {
                        uVar29 = *(undefined4 *)(lVar27 + 0xd4);
                        sVar14 = *(short *)(lVar27 + 0xd0);
                        sVar36 = local_16c[0];
                        sVar33 = local_14c[0];
                        uVar22 = local_134[0];
                        goto joined_r0x000140c785de;
                      }
                      goto LAB_140c78208;
                    }
                  }
                }
              }
              else if (((sVar14 == 0) || ((ushort)(sVar14 - 3U) < 3)) ||
                      ((uVar3 == 0xea61 || (uVar3 <= *puVar39)))) {
                uVar31 = local_1a0;
                lVar28 = local_188;
                lVar30 = local_198;
                iVar15 = local_190;
                if ((((sVar14 != 2) && (uVar4 != 0xea61)) && (uVar4 <= *puVar39)) &&
                   (uVar16 = FUN_1409fc0c0(), uVar31 = local_1a0, lVar28 = local_188,
                   lVar30 = local_198, iVar15 = local_190,
                   (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff
                   ) / 0x1999999a == 0)) {
                  if ((*(int *)(param_1 + 0x5c0) == -1) ||
                     (puVar19 = (undefined4 *)FUN_1402107b0(param_1), puVar19 == (undefined4 *)0x0))
                  {
                    puVar19 = (undefined4 *)FUN_140cb7360(param_1);
                    *(undefined4 *)(param_1 + 0x5c0) = *puVar19;
                  }
                  puVar20 = (undefined4 *)FUN_140073a00(puVar19,*(undefined4 *)(lVar18 + 0x68));
                  uVar31 = local_1a0;
                  if (puVar20 == (undefined4 *)0x0) {
                    local_c0 = operator_new(0xa8);
                    puVar20 = (undefined4 *)FUN_140566dd0(local_c0);
                    uVar31 = local_1a0;
                    *(short *)(puVar20 + 1) = (short)local_1a0;
                    *(short *)((longlong)puVar20 + 6) = (short)local_118;
                    local_1a8[0] = 5;
                    FUN_14000be20(puVar20 + 0x12,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 6,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 0xc,local_1a8);
                    puVar20[2] = 0xffffffff;
                    *(undefined2 *)(puVar20 + 3) = 100;
                    puVar20[0x1a] = puVar20[0x1a] | 2;
                    *puVar20 = *(undefined4 *)(lVar18 + 0x68);
                    FUN_140051300(puVar20,puVar19 + 2);
                  }
                  lVar28 = local_188;
                  lVar30 = local_198;
                  puVar39 = local_180;
                  iVar15 = local_190;
                  if (**(short **)(puVar20 + 6) < 100) {
                    if (0 < *(short *)(puVar20 + 3)) {
                      piVar1 = (int *)(*(longlong *)(param_1 + 0x578) +
                                      (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *piVar1 = *piVar1 + (int)*(short *)(puVar20 + 3);
                      iVar34 = *piVar1;
                      if (1000000000 < iVar34) {
                        iVar34 = 1000000000;
                      }
                      *piVar1 = iVar34;
                    }
                    **(short **)(puVar20 + 6) = **(short **)(puVar20 + 6) + 1;
                    if (**(short **)(puVar20 + 0xc) < **(short **)(puVar20 + 6)) {
                      **(short **)(puVar20 + 0xc) = **(short **)(puVar20 + 6);
                    }
                    iVar34 = (*(int *)(lVar18 + 0x40) * (int)**(short **)(puVar20 + 6)) / 10;
                    if ((int)puVar20[0x1b] < iVar34) {
                      puVar20[0x1b] = iVar34;
                    }
                    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
                    local_177 = '\x01';
                    if (**(short **)(puVar20 + 6) == 100) {
                      puVar2 = (uint *)(*(longlong *)(param_1 + 0x518) +
                                       (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *puVar2 = *puVar2 | 1;
                      *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffdfffff;
                      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
                      local_178 = '\x01';
                      if (*(int *)(lVar18 + 0x6c) == -1) {
                        local_190 = local_190 + -1;
                      }
                      iVar15 = local_190;
                      local_164[0] = -30000;
                      if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
                        local_164[0] = *(short *)(param_1 + 0xa8);
                        local_144[0] = *(undefined2 *)(param_1 + 0xaa);
                        local_140[0] = *(undefined2 *)(param_1 + 0xac);
                      }
                      else {
                        puVar26 = *(undefined8 **)(param_1 + 0x1c0);
                        puVar6 = *(undefined8 **)(param_1 + 0x1c8);
                        if (puVar6 <= puVar26) goto LAB_140c78208;
                        do {
                          iVar34 = (**(code **)(*(longlong *)*puVar26 + 0x10))();
                          if ((iVar34 == 0xb) &&
                             (lVar30 = (**(code **)(*(longlong *)*puVar26 + 0x18))(), lVar30 != 0))
                          {
                            FUN_1408054d0(lVar30,local_164,local_144,local_140);
                            lVar27 = local_120;
                            break;
                          }
                          puVar26 = puVar26 + 1;
                          lVar27 = local_120;
                        } while (puVar26 < puVar6);
                      }
                      if (local_164[0] != -30000) {
                        if (*(short *)(lVar27 + 0xd0) == 6) {
                          local_1c0 = CONCAT31(local_1c0._1_3_,1);
                          local_1c8 = (longlong *)CONCAT62(local_1c8._2_6_,100);
                          FUN_140d43cb0(&DAT_141c53470,local_164[0],local_144[0],local_140[0]);
                        }
                        else {
                          local_1b8 = CONCAT22(local_1b8._2_2_,100);
                          local_1c0 = CONCAT22(local_1c0._2_2_,local_140[0]);
                          local_1c8 = (longlong *)CONCAT62(local_1c8._2_6_,local_144[0]);
                          FUN_140d43830(&DAT_141c53470,*(short *)(lVar27 + 0xd0),
                                        *(undefined4 *)(lVar27 + 0xd4),local_164[0]);
                        }
                      }
                      goto LAB_140c78208;
                    }
                  }
                }
              }
              else {
                uVar16 = FUN_1409fc0c0();
                uVar31 = local_1a0;
                lVar28 = local_188;
                lVar30 = local_198;
                iVar15 = local_190;
                if ((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0x1999999a == 0) {
                  if ((*(int *)(param_1 + 0x5c4) == -1) ||
                     (puVar19 = (undefined4 *)FUN_1402107b0(param_1), puVar19 == (undefined4 *)0x0))
                  {
                    puVar19 = (undefined4 *)FUN_140cb7360(param_1);
                    *(undefined4 *)(param_1 + 0x5c4) = *puVar19;
                  }
                  puVar20 = (undefined4 *)FUN_140073a00(puVar19,*(undefined4 *)(lVar18 + 0x68));
                  uVar31 = local_1a0;
                  if (puVar20 == (undefined4 *)0x0) {
                    local_c0 = operator_new(0xa8);
                    puVar20 = (undefined4 *)FUN_140566dd0(local_c0);
                    uVar31 = local_1a0;
                    *(short *)(puVar20 + 1) = (short)local_1a0;
                    *(short *)((longlong)puVar20 + 6) = (short)local_118;
                    local_1a8[0] = 6;
                    FUN_14000be20(puVar20 + 0x12,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 6,local_1a8);
                    local_1a8[0] = 0;
                    FUN_14000be20(puVar20 + 0xc,local_1a8);
                    puVar20[2] = 0xffffffff;
                    *(undefined2 *)(puVar20 + 3) = 100;
                    puVar20[0x1a] = puVar20[0x1a] | 2;
                    *puVar20 = *(undefined4 *)(lVar18 + 0x68);
                    FUN_140051300(puVar20,puVar19 + 2);
                  }
                  lVar28 = local_188;
                  lVar30 = local_198;
                  puVar39 = local_180;
                  iVar15 = local_190;
                  if (**(short **)(puVar20 + 6) < 100) {
                    if (0 < *(short *)(puVar20 + 3)) {
                      piVar1 = (int *)(*(longlong *)(param_1 + 0x578) +
                                      (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *piVar1 = *piVar1 + (int)*(short *)(puVar20 + 3);
                      iVar34 = *piVar1;
                      if (1000000000 < iVar34) {
                        iVar34 = 1000000000;
                      }
                      *piVar1 = iVar34;
                    }
                    **(short **)(puVar20 + 6) = **(short **)(puVar20 + 6) + 1;
                    if (**(short **)(puVar20 + 0xc) < **(short **)(puVar20 + 6)) {
                      **(short **)(puVar20 + 0xc) = **(short **)(puVar20 + 6);
                    }
                    iVar34 = (*(int *)(lVar18 + 0x40) * (int)**(short **)(puVar20 + 6)) / 10;
                    if ((int)puVar20[0x1b] < iVar34) {
                      puVar20[0x1b] = iVar34;
                    }
                    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
                    local_176 = '\x01';
                    if (**(short **)(puVar20 + 6) == 100) {
                      puVar2 = (uint *)(*(longlong *)(param_1 + 0x518) +
                                       (longlong)*(int *)(lVar18 + 0x68) * 4);
                      *puVar2 = *puVar2 | 1;
                      *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffdfffff;
                      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
                      local_178 = '\x01';
                      if (*(int *)(lVar18 + 0x6c) == -1) {
                        local_190 = local_190 + -1;
                      }
                      iVar15 = local_190;
                      local_168[0] = -30000;
                      if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
                        local_168[0] = *(short *)(param_1 + 0xa8);
                        local_148[0] = *(short *)(param_1 + 0xaa);
                        local_15c[0] = *(short *)(param_1 + 0xac);
                      }
                      else {
                        puVar26 = *(undefined8 **)(param_1 + 0x1c0);
                        puVar6 = *(undefined8 **)(param_1 + 0x1c8);
                        if (puVar6 <= puVar26) goto LAB_140c78208;
                        do {
                          iVar34 = (**(code **)(*(longlong *)*puVar26 + 0x10))();
                          if ((iVar34 == 0xb) &&
                             (lVar30 = (**(code **)(*(longlong *)*puVar26 + 0x18))(), lVar30 != 0))
                          {
                            FUN_1408054d0(lVar30,local_168,local_148,local_15c);
                            lVar27 = local_120;
                            break;
                          }
                          puVar26 = puVar26 + 1;
                          lVar27 = local_120;
                        } while (puVar26 < puVar6);
                      }
                      if (local_168[0] != -30000) {
                        uVar29 = *(undefined4 *)(lVar27 + 0xd4);
                        sVar14 = *(short *)(lVar27 + 0xd0);
                        if ((sVar14 != -1) &&
                           (sVar36 = local_168[0], sVar33 = local_148[0],
                           lVar30 = FUN_1400047c0(&DAT_141c53470,local_168[0],local_148[0],
                                                  local_15c[0]), lVar30 != 0)) {
                          uVar16 = (int)sVar33 & 0x8000000f;
                          if ((int)uVar16 < 0) {
                            uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                          }
                          uVar17 = (int)sVar36 & 0x8000000f;
                          if ((int)uVar17 < 0) {
                            uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
                          }
                          uVar22 = 3;
                          goto LAB_140c781dc;
                        }
                      }
LAB_140c78208:
                      FUN_140073930(puVar20,puVar19 + 2);
                      FUN_14015e1e0(puVar20);
                      free(puVar20);
                      *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
                      uVar31 = local_1a0;
                      lVar28 = local_188;
                      lVar30 = local_198;
                      puVar39 = local_180;
                      if (((((*(longlong *)(puVar19 + 4) - *(longlong *)(puVar19 + 2) >> 3 == 0) &&
                            ((int)puVar19[0xd] < 1)) && ((int)puVar19[0xe] < 1)) &&
                          ((((int)puVar19[0xf] < 1 && ((int)puVar19[0x12] < 1)) &&
                           (((int)puVar19[0x10] < 1 &&
                            (((int)puVar19[0x11] < 1 && (puVar19[0xc] == -1)))))))) &&
                         ((*(longlong *)(puVar19 + 0x14) == 0 ||
                          (cVar11 = FUN_140c241b0(), uVar31 = local_1a0, lVar28 = local_188,
                          lVar30 = local_198, puVar39 = local_180, cVar11 != '\0')))) {
                        *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 8;
                        FUN_140073930(puVar19,param_1 + 0x590);
                        FUN_1407efc10(puVar19);
                        lVar30 = *(longlong *)(puVar19 + 2);
                        if (lVar30 != 0) {
                          FUN_140002020(lVar30,*(longlong *)(puVar19 + 6) - lVar30 >> 3,8);
                          *(undefined8 *)(puVar19 + 2) = 0;
                          *(undefined8 *)(puVar19 + 4) = 0;
                          *(undefined8 *)(puVar19 + 6) = 0;
                        }
                        free(puVar19);
                        uVar31 = local_1a0;
                        lVar28 = local_188;
                        lVar30 = local_198;
                        puVar39 = local_180;
                      }
                    }
                  }
                }
              }
            }
            sVar14 = (short)local_118 + -1;
            local_118 = CONCAT62((int6)((ulonglong)local_118 >> 0x10),sVar14);
          } while (-1 < sVar14);
          if ((local_178 != '\0') &&
             (sVar14 = (short)(*(longlong *)(lVar28 + 0x60) - *(longlong *)(lVar28 + 0x58) >> 3) +
                       -1, -1 < sVar14)) {
            lVar18 = (longlong)sVar14 << 3;
            do {
              lVar27 = *(longlong *)(lVar18 + *(longlong *)(lVar28 + 0x58));
              iVar34 = *(int *)(lVar27 + 0x70);
              if ((iVar34 != -1) &&
                 ((*(byte *)(*(longlong *)(param_1 + 0x518) + (longlong)iVar34 * 4) & 1) != 0)) {
                puVar2 = (uint *)(*(longlong *)(param_1 + 0x518) +
                                 (longlong)*(int *)(lVar27 + 0x68) * 4);
                *puVar2 = *puVar2 | 1;
                *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffdfffff;
                *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
              }
              lVar18 = lVar18 + -8;
              sVar14 = sVar14 + -1;
            } while (-1 < sVar14);
          }
          param_3 = (ulonglong)local_174;
          psVar40 = local_b8;
          uVar16 = local_174;
          if (iVar15 != 0) goto LAB_140c78e33;
        }
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar30 * 4);
        *puVar2 = *puVar2 | 2;
        local_174 = uVar16 & 0xff;
        if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + lVar30 * 4) & 0x100000) != 0) {
          local_174 = 1;
        }
        sVar14 = (short)(*(longlong *)(lVar28 + 0x60) - *(longlong *)(lVar28 + 0x58) >> 3) + -1;
        if (-1 < sVar14) {
          lVar30 = (longlong)sVar14 << 3;
          do {
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x518) +
                             (longlong)
                             *(int *)(*(longlong *)(lVar30 + *(longlong *)(lVar28 + 0x58)) + 0x68) *
                             4);
            *puVar2 = *puVar2 | 1;
            *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffdfffff;
            *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
            lVar30 = lVar30 + -8;
            sVar14 = sVar14 + -1;
          } while (-1 < sVar14);
        }
        if ((local_160 < psVar40) && (local_90 <= local_160)) {
          lVar30 = (longlong)local_160 - (longlong)local_90;
          if (psVar40 == local_98) {
            FUN_14000c460(&local_90,1);
            local_98 = local_80;
            psVar40 = psStack_88;
          }
          if (psVar40 != (short *)0x0) {
            *psVar40 = local_90[lVar30 >> 1];
          }
        }
        else {
          if (psVar40 == local_98) {
            FUN_14000c460(&local_90,1);
            local_98 = local_80;
            psVar40 = psStack_88;
          }
          if (psVar40 != (short *)0x0) {
            *psVar40 = (short)uVar31;
          }
        }
        psVar40 = psVar40 + 1;
        param_3 = (ulonglong)local_174;
        local_b8 = psVar40;
        psStack_88 = psVar40;
      }
LAB_140c78e33:
      uVar10 = _UNK_140f92f78;
      uVar9 = _DAT_140f92f70;
      uVar24 = 0;
      local_160[0] = (short)uVar31 + -1;
      uVar31 = CONCAT62((int6)(uVar31 >> 0x10),local_160[0]);
    } while (-1 < local_160[0]);
    local_1a0 = uVar31;
    if ((char)param_3 != '\0') {
      puVar21 = *(ulonglong **)(param_1 + 0x4d0);
      uVar31 = (ulonglong)((longlong)*(ulonglong **)(param_1 + 0x4d8) + (3 - (longlong)puVar21)) >>
               2;
      if (*(ulonglong **)(param_1 + 0x4d8) < puVar21) {
        uVar31 = uVar24;
      }
      if (uVar31 != 0) {
        if (7 < uVar31) {
          do {
            *puVar21 = *puVar21 & uVar9;
            puVar21[1] = puVar21[1] & uVar10;
            puVar21[2] = puVar21[2] & uVar9;
            puVar21[3] = puVar21[3] & uVar10;
            puVar21 = puVar21 + 4;
            uVar24 = uVar24 + 8;
          } while (uVar24 < uVar31 - ((uint)uVar31 & 7));
        }
        for (; uVar24 < uVar31; uVar24 = uVar24 + 1) {
          *(uint *)puVar21 = (uint)*puVar21 & 0xffe7ffff;
          puVar21 = (ulonglong *)((longlong)puVar21 + 4);
        }
      }
      *(undefined4 *)(param_1 + 0xd78) = 0xffffffff;
    }
  }
  psVar37 = local_90;
  lVar30 = (longlong)psVar40 - (longlong)local_90 >> 1;
  if (lVar30 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_140c2c690(param_1,&local_58);
    for (local_b0 = (longlong)((int)lVar30 + -1); -1 < local_b0; local_b0 = local_b0 + -1) {
      lVar30 = 0;
      sVar14 = psVar37[local_b0];
      lVar28 = (longlong)sVar14;
      sVar36 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar28 * 8) + 0x40);
      local_15c[0] = sVar14;
      if ((sVar36 != -1) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar36 * 4) & 2) == 0)) {
        local_b8 = (short *)FUN_140cb7360(param_1);
        *(uint *)(local_b8 + 0x16) = *(uint *)(local_b8 + 0x16) | 1;
        sVar36 = *(short *)(param_1 + 0xa4);
        if ((-1 < sVar36) &&
           ((ulonglong)(longlong)sVar36 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) {
          lVar30 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar36 * 8);
        }
        local_174 = FUN_140c5ad60(param_1,sVar14);
        lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar28 * 8);
        iVar15 = (int)(*(longlong *)(lVar18 + 0x60) - *(longlong *)(lVar18 + 0x58) >> 3) + -1;
        if (-1 < iVar15) {
          lVar18 = (longlong)iVar15 << 3;
          do {
            lVar27 = *(longlong *)
                      (lVar18 + *(longlong *)
                                 (*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar28 * 8) +
                                 0x58));
            if ((0 < *(int *)(lVar27 + 0x30)) && ((**(byte **)(lVar27 + 0x28) & 1) != 0)) {
              if (lVar30 == 0) {
                lVar32 = 0;
              }
              else {
                lVar32 = *(longlong *)
                          (*(longlong *)(lVar30 + 0x24c8) + (longlong)*(int *)(lVar27 + 0x20) * 8);
              }
              local_c0 = operator_new(0xa8);
              *(undefined8 *)(local_c0 + 6) = 0;
              *(undefined8 *)(local_c0 + 8) = 0;
              *(undefined8 *)(local_c0 + 10) = 0;
              *(undefined8 *)(local_c0 + 0xc) = 0;
              *(undefined8 *)(local_c0 + 0xe) = 0;
              *(undefined8 *)(local_c0 + 0x10) = 0;
              *(undefined8 *)(local_c0 + 0x12) = 0;
              *(undefined8 *)(local_c0 + 0x14) = 0;
              *(undefined8 *)(local_c0 + 0x16) = 0;
              *local_c0 = 0xffffffff;
              *(undefined2 *)(local_c0 + 1) = 0xffff;
              *(undefined2 *)((longlong)local_c0 + 6) = 0xffff;
              local_c0[2] = 1;
              *(undefined2 *)(local_c0 + 3) = 0;
              local_c0[4] = 0;
              *(undefined8 *)(local_c0 + 0x19) = 0;
              *(undefined2 *)(local_c0 + 0x18) = 0;
              *(undefined8 *)(local_c0 + 0x1b) = 0;
              *(undefined8 *)(local_c0 + 0x1d) = 0;
              *(undefined8 *)(local_c0 + 0x1f) = 0;
              *(undefined8 *)(local_c0 + 0x21) = 0;
              *(undefined8 *)(local_c0 + 0x23) = 0;
              *(undefined8 *)(local_c0 + 0x25) = 0;
              local_c0[0x27] = 0xffffffff;
              local_c0[0x28] = 0;
              *local_c0 = *(undefined4 *)(lVar27 + 0x68);
              *(short *)(local_c0 + 1) = local_15c[0];
              *(short *)((longlong)local_c0 + 6) = (short)iVar15;
              local_c0[0x1b] = *(int *)(lVar27 + 0x40) * 3;
              iVar34 = (int)(*(longlong **)(param_1 + 0x5d8))[0xc];
              iVar23 = 1;
              if (((0 < iVar34) &&
                  (iVar34 = (*(int *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar28 * 8) +
                                     0x80) * 100) / iVar34, iVar23 = 1, 0 < iVar34)) &&
                 (iVar23 = iVar34, 10 < iVar34)) {
                iVar23 = 10;
              }
              local_c0[0x1c] = (*(int *)(lVar27 + 0x44) * iVar23 * 300) / 1000;
              if ((((lVar32 != 0) &&
                   ((lVar7 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar28 * 8),
                    *(int *)(lVar7 + 0x50) < 2 ||
                    ((*(byte *)(*(longlong *)(lVar7 + 0x48) + 1) & 0x20) == 0)))) &&
                  (0 < *(int *)(lVar32 + 0x28))) && ((**(byte **)(lVar32 + 0x20) & 4) != 0)) {
                local_c0[0x1b] =
                     local_c0[0x1b] + (int)(*(int *)(lVar27 + 0x40) * local_174) / 10 + 1;
                local_c0[0x19] = 0x40000000;
              }
              if ((0 < *(int *)(lVar27 + 0x30)) && ((**(byte **)(lVar27 + 0x28) & 2) != 0)) {
                local_c0[0x1b] = local_c0[0x1b] + (int)(*(int *)(lVar27 + 0x40) * local_174) / 5 + 1
                ;
                iVar34 = *(int *)(param_1 + 0x6a4) / 100;
                iVar23 = local_c0[0x1b];
                if ((int)local_c0[0x1b] < iVar34) {
                  iVar23 = iVar34;
                }
                local_c0[0x1b] = iVar23;
                local_c0[0x19] = local_c0[0x19] | 0x4000;
              }
              FUN_140051300();
            }
            lVar18 = lVar18 + -8;
            iVar15 = iVar15 + -1;
          } while (-1 < iVar15);
        }
      }
      psVar37 = local_90;
    }
    sVar14 = (short)(*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2) + -1;
    if (-1 < sVar14) {
      lVar30 = (longlong)sVar14 * 8;
      lVar28 = (longlong)sVar14 * 4;
      do {
        if (((((*(byte *)(lVar28 + *(longlong *)(param_1 + 0x4d0)) & 2) == 0) &&
             (sVar36 = *(short *)(*(longlong *)(lVar30 + **(longlong **)(param_1 + 0x5d8)) + 0x40),
             sVar36 != -1)) &&
            ((*(longlong *)(param_1 + 0xd60) == 0 ||
             (sVar14 != *(short *)(*(longlong *)(param_1 + 0xd60) + 0x18))))) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar36 * 4) & 2) != 0)) {
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_1c0 = 0xffffffff;
          local_1c8 = &local_78;
          FUN_140c2bad0(param_1,sVar14,1,0);
          if (local_78 != 0) {
            FUN_140002020(local_78,local_68 - local_78 >> 3,8);
          }
        }
        lVar28 = lVar28 + -4;
        lVar30 = lVar30 + -8;
        sVar14 = sVar14 + -1;
        psVar37 = local_90;
      } while (-1 < sVar14);
    }
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
    FUN_140c841a0(param_1);
    FUN_140c2cd40(param_1);
    if (local_58 != 0) {
      FUN_140002020(local_58,(longlong)(local_48 - local_58) >> 3,8);
    }
  }
  cVar13 = local_176;
  cVar11 = local_177;
  if (((local_177 != '\0') || (local_176 != '\0')) || (local_175 != '\0')) {
    cVar12 = FUN_140c808b0(param_1);
    if (cVar12 != '\0') {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 2;
    }
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
    if ((*(byte *)(param_1 + 0x110) & 2) != 0) {
      if (cVar13 == '\0') {
        if (cVar11 == '\0') {
          FUN_140617dc0(param_1,0,0x29);
        }
        else {
          FUN_140617dc0(param_1,0,0x28);
        }
      }
      else {
        FUN_140617dc0(param_1,0,0x2a);
      }
      goto LAB_140c79958;
    }
  }
  iVar23 = local_c8;
  iVar34 = local_128;
  iVar15 = local_13c;
  if (((0 < local_c8) || (0 < local_128)) || (0 < local_13c)) {
    cVar13 = FUN_140c808b0(param_1);
    if (cVar13 != '\0') {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 2;
    }
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
    if ((*(byte *)(param_1 + 0x110) & 2) != 0) {
      if ((iVar34 < iVar23) || (iVar34 < iVar15)) {
        if (iVar15 < iVar23) {
          FUN_140617dc0(param_1,0,0x19);
        }
        else {
          FUN_140617dc0(param_1,0,0xd);
        }
      }
      else {
        FUN_140617dc0(param_1,0,0x1a,0);
      }
      goto LAB_140c79958;
    }
  }
  if ((DAT_1410b67dc == 1) && (param_1 == *DAT_141c66fe8)) {
    if ((0 < iVar23) && ((DAT_141c34524 & 8) != 0)) {
      local_40 = 0xf;
      local_48 = 0;
      local_58 = local_58 & 0xffffffffffffff00;
      FUN_14000c780(&local_58,"You are ",8);
      if (iVar23 < 0x21) {
        uVar35 = 10;
        pcVar25 = "blistering";
      }
      else if (iVar23 < 0x42) {
        uVar35 = 7;
        pcVar25 = "burning";
      }
      else {
        uVar35 = 0x11;
        pcVar25 = "being incinerated";
      }
      FUN_14000c9f0(&local_58,pcVar25,uVar35);
      FUN_14000c9f0(&local_58,&DAT_140e5e8bc,1);
      local_fc = 0;
      local_f8 = 0x8ad08ad0;
      local_f4 = 0x8ad0;
      local_f0 = 0;
      local_e0 = 0;
      local_d8 = 0xffffffff;
      local_d4 = 0xffffffff;
      local_d0 = 0xffffffff;
      local_cc = 0;
      local_108 = 0x400e9;
      local_104 = 1;
      local_ec = 0;
      local_102 = *(undefined2 *)(param_1 + 0xa8);
      local_100 = *(undefined2 *)(param_1 + 0xaa);
      local_fe = *(undefined2 *)(param_1 + 0xac);
      local_e8 = param_1;
      FUN_140074660(&DAT_141d64dc8,&local_58,&local_108);
      if (0xf < local_40) {
        FUN_140002020(local_58,local_40 + 1,1);
      }
    }
    if (0 < iVar34) {
      if (DAT_1410b67dc == 0) {
        bVar8 = DAT_141c34524 & 0x70;
      }
      else {
        bVar8 = DAT_141c34524 & 8;
      }
      if (bVar8 != 0) {
        local_40 = 0xf;
        local_48 = 0;
        local_58 = local_58 & 0xffffffffffffff00;
        FUN_14000c780(&local_58,"You are ",8);
        if (iVar34 < 0x21) {
          uVar35 = 8;
          pcVar25 = "freezing";
        }
        else if (iVar34 < 0x42) {
          uVar35 = 0x12;
          pcVar25 = "being frozen solid";
        }
        else {
          uVar35 = 0x11;
          pcVar25 = "freezing to death";
        }
        FUN_14000c9f0(&local_58,pcVar25,uVar35);
        FUN_14000c9f0(&local_58,&DAT_140e5e8bc,1);
        local_fc = 0;
        local_f8 = 0x8ad08ad0;
        local_f4 = 0x8ad0;
        local_f0 = 0;
        local_e0 = 0;
        local_d8 = 0xffffffff;
        local_d4 = 0xffffffff;
        local_d0 = 0xffffffff;
        local_cc = 0;
        local_108 = 0x300e9;
        local_104 = 1;
        local_ec = 0;
        local_102 = *(undefined2 *)(param_1 + 0xa8);
        local_100 = *(undefined2 *)(param_1 + 0xaa);
        local_fe = *(undefined2 *)(param_1 + 0xac);
        local_e8 = param_1;
        FUN_140074660(&DAT_141d64dc8,&local_58,&local_108);
        if (0xf < local_40) {
          FUN_140002020(local_58,local_40 + 1,1);
        }
      }
    }
    if (0 < iVar15) {
      if (DAT_1410b67dc == 0) {
        bVar8 = DAT_141c34524 & 0x70;
      }
      else {
        bVar8 = DAT_141c34524 & 8;
      }
      if (bVar8 != 0) {
        local_40 = 0xf;
        local_48 = 0;
        local_58 = local_58 & 0xffffffffffffff00;
        FUN_14000c780(&local_58,"You are ",8);
        if (iVar15 < 0x21) {
          uVar35 = 7;
          pcVar25 = "on fire";
        }
        else if (iVar15 < 0x42) {
          uVar35 = 0xd;
          pcVar25 = "burning alive";
        }
        else {
          uVar35 = 0x10;
          pcVar25 = "burning to death";
        }
        FUN_14000c9f0(&local_58,pcVar25,uVar35);
        FUN_14000c9f0(&local_58,&DAT_140e5e8bc,1);
        local_fc = 0;
        local_f8 = 0x8ad08ad0;
        local_f4 = 0x8ad0;
        local_f0 = 0;
        local_e0 = 0;
        local_d8 = 0xffffffff;
        local_d4 = 0xffffffff;
        local_d0 = 0xffffffff;
        local_cc = 0;
        local_108 = 0x400e9;
        local_104 = 1;
        local_ec = 0;
        local_102 = *(undefined2 *)(param_1 + 0xa8);
        local_100 = *(undefined2 *)(param_1 + 0xaa);
        local_fe = *(undefined2 *)(param_1 + 0xac);
        local_e8 = param_1;
        FUN_140074660(&DAT_141d64dc8,&local_58,&local_108);
        if (0xf < local_40) {
          FUN_140002020(local_58,local_40 + 1,1);
        }
      }
    }
    if (cVar11 != '\0') {
      if (DAT_1410b67dc == 0) {
        bVar8 = DAT_141c34524 & 0x70;
      }
      else {
        bVar8 = DAT_141c34524 & 8;
      }
      if (bVar8 != 0) {
        local_fc = 0;
        local_f8 = 0x8ad08ad0;
        local_f4 = 0x8ad0;
        local_f0 = 0;
        local_e0 = 0;
        local_d8 = 0xffffffff;
        local_d4 = 0xffffffff;
        local_d0 = 0xffffffff;
        local_cc = 0;
        local_108 = 0x400e9;
        local_104 = 1;
        local_ec = 0;
        local_102 = *(undefined2 *)(param_1 + 0xa8);
        local_100 = *(undefined2 *)(param_1 + 0xaa);
        local_fe = *(undefined2 *)(param_1 + 0xac);
        local_40 = 0xf;
        local_48 = 0;
        local_58 = local_58 & 0xffffffffffffff00;
        local_e8 = param_1;
        FUN_14000c780(&local_58,"You are melting!",0x10);
        FUN_140074660(&DAT_141d64dc8,&local_58,&local_108);
        if (0xf < local_40) {
          FUN_140002020(local_58,local_40 + 1,1);
        }
      }
    }
  }
LAB_140c79958:
  if (psVar37 != (short *)0x0) {
    FUN_140002020(psVar37,(longlong)local_98 - (longlong)psVar37 >> 1,2);
  }
  return;
}

