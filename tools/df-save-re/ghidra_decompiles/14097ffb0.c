// FUN_14097ffb0 @ 14097ffb0
// callees:
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140526e10 FUN_140526e10
//   -> 140ca6640 FUN_140ca6640
//   -> 14073e380 FUN_14073e380
//   -> 14000c390 FUN_14000c390
//   -> 1400512a0 FUN_1400512a0
//   -> 14090bd30 FUN_14090bd30
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020
//   -> EXTERNAL:000000e1 memmove
//   -> 140c303c0 FUN_140c303c0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 140541a20 FUN_140541a20
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> 140074660 FUN_140074660
//   -> 14000f0b0 FUN_14000f0b0
//   -> 14078e1d0 FUN_14078e1d0
//   -> 14073d8e0 FUN_14073d8e0
//   -> 140ca7950 FUN_140ca7950
//   -> 140ca7b70 FUN_140ca7b70
//   -> 14073edb0 FUN_14073edb0
//   -> 140050d90 FUN_140050d90
//   -> 1407c6ea0 FUN_1407c6ea0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14097ffb0(undefined8 param_1,char param_2)

{
  ulonglong *_Dst;
  undefined8 *puVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  longlong *****ppppplVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  longlong ******pppppplVar13;
  longlong *****ppppplVar14;
  longlong ******pppppplVar15;
  longlong lVar16;
  undefined8 *puVar17;
  short *psVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  longlong ******pppppplVar22;
  ulonglong *puVar23;
  int iVar24;
  longlong ******pppppplVar25;
  longlong ******pppppplVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  ulonglong *puVar32;
  ulonglong uVar33;
  uint *puVar34;
  bool bVar35;
  undefined4 uVar36;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  uint local_1d8;
  char local_1d4;
  ulonglong *local_1d0;
  uint local_1c8;
  ulonglong local_1c0;
  uint *local_1b8;
  uint *puStack_1b0;
  uint *local_1a8;
  ulonglong *local_1a0;
  ulonglong *puStack_198;
  ulonglong *local_190;
  uint *local_188;
  uint *local_180;
  ulonglong *local_178;
  longlong *****local_170;
  ulonglong *local_168;
  uint *local_160;
  uint *puStack_158;
  uint *local_150;
  longlong ****local_148;
  int local_140;
  ulonglong *local_138;
  ulonglong *local_130;
  ulonglong *puStack_128;
  ulonglong *local_120;
  longlong *****local_118;
  longlong *****ppppplStack_110;
  longlong *****local_108;
  ulonglong *local_100;
  longlong *****local_f8;
  longlong *****ppppplStack_f0;
  longlong *****local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined2 local_c4;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong *****local_90;
  longlong *****local_88;
  longlong ****local_80;
  short *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  uint *local_50;
  uint *puStack_48;
  uint *local_40;
  ulonglong local_38;
  ulonglong local_30;
  longlong ******pppppplVar31;
  
  lVar28 = DAT_141c3d250;
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_218;
  local_98 = DAT_141c3d250;
  local_118 = (longlong *****)0x0;
  ppppplStack_110 = (longlong *****)0x0;
  pppppplVar13 = (longlong ******)0x0;
  local_88 = (longlong *****)0x0;
  local_108 = (longlong *****)0x0;
  local_f8 = (longlong *****)0x0;
  ppppplStack_f0 = (longlong *****)0x0;
  local_90 = (longlong *****)0x0;
  local_e8 = (longlong *****)0x0;
  local_170 = (longlong *****)0x0;
  local_1d4 = param_2;
  pppppplVar26 = (longlong ******)local_90;
  pppppplVar25 = (longlong ******)local_88;
  if (*(longlong *)(DAT_141c3d250 + 0x1108) - *(longlong *)(DAT_141c3d250 + 0x1100) >> 3 != 0) {
    pppppplVar22 = (longlong ******)0x0;
    pppppplVar25 = pppppplVar13;
    pppppplVar26 = pppppplVar13;
    pppppplVar31 = pppppplVar13;
    do {
      iVar4 = 0;
      lVar16 = *(longlong *)((longlong)pppppplVar13 + *(longlong *)(lVar28 + 0x1100));
      if ((0 < *(int *)(lVar16 + 0x18)) && ((**(byte **)(lVar16 + 0x10) & 1) != 0)) {
        iVar20 = *(int *)(*(longlong *)((longlong)pppppplVar13 + *(longlong *)(lVar28 + 0x1100)) +
                         0xc);
        iVar12 = (int)(*(longlong *)(lVar28 + 0x10b8) - *(longlong *)(lVar28 + 0x10b0) >> 3) + -1;
        if (-1 < iVar12) {
          do {
            iVar8 = iVar12 + iVar4 >> 1;
            ppppplVar5 = *(longlong ******)(*(longlong *)(lVar28 + 0x10b0) + (longlong)iVar8 * 8);
            if (*(int *)(ppppplVar5 + 4) == iVar20) goto LAB_1409800df;
            if (iVar20 < *(int *)(ppppplVar5 + 4)) {
              iVar12 = iVar8 + -1;
            }
            else {
              iVar4 = iVar8 + 1;
            }
          } while (iVar4 <= iVar12);
        }
        ppppplVar5 = (longlong *****)0x0;
LAB_1409800df:
        if (ppppplVar5 != (longlong *****)0x0) {
          if ((*(int *)(ppppplVar5 + 6) < 1) || (((ulonglong)*ppppplVar5[5] & 2) == 0)) {
            if ((DAT_141c36b78 & 4) != 0) {
              lVar16 = *(longlong *)((longlong)pppppplVar13 + *(longlong *)(lVar28 + 0x1100));
              goto LAB_140980147;
            }
            if (local_1d4 != '\0') goto LAB_140980151;
          }
          else {
            if (((DAT_141c36b78 & 4) != 0) && ((DAT_1416992a4 != 2000 || (DAT_1416992b2 != '\x01')))
               ) {
              lVar16 = *(longlong *)(*(longlong *)(lVar28 + 0x1100) + (longlong)pppppplVar13);
LAB_140980147:
              if (*(int *)(lVar16 + 4) != -1) goto LAB_14098026a;
            }
LAB_140980151:
            if ((longlong)ppppplVar5[0x5d] - (longlong)ppppplVar5[0x5c] >> 2 == 0) {
              if ((&local_170 < local_170) && (local_118 <= &local_170)) {
                lVar16 = (longlong)&local_170 - (longlong)local_118;
                if ((longlong ******)local_170 == pppppplVar25) {
                  local_170 = ppppplVar5;
                  FUN_14000c2d0(&local_118);
                  local_170 = ppppplStack_110;
                  pppppplVar25 = (longlong ******)local_108;
                }
                if ((longlong ******)local_170 != (longlong ******)0x0) {
                  *local_170 = local_118[lVar16 >> 3];
                }
              }
              else {
                if ((longlong ******)local_170 == pppppplVar25) {
                  local_170 = ppppplVar5;
                  FUN_14000c2d0(&local_118);
                  local_170 = ppppplStack_110;
                  pppppplVar25 = (longlong ******)local_108;
                }
                if ((longlong ******)local_170 != (longlong ******)0x0) {
                  *local_170 = (longlong ****)ppppplVar5;
                }
              }
              local_170 = local_170 + 1;
              pppppplVar15 = (longlong ******)
                             (*(longlong *)(lVar28 + 0x1100) + (longlong)pppppplVar13);
              ppppplStack_110 = local_170;
              if ((pppppplVar15 < pppppplVar22) && (local_f8 <= pppppplVar15)) {
                lVar16 = (longlong)pppppplVar15 - (longlong)local_f8;
                if (pppppplVar22 == pppppplVar26) {
                  FUN_14000c2d0(&local_f8);
                  pppppplVar22 = (longlong ******)ppppplStack_f0;
                  pppppplVar26 = (longlong ******)local_e8;
                }
                if (pppppplVar22 != (longlong ******)0x0) {
                  ppppplVar5 = (longlong *****)local_f8[lVar16 >> 3];
LAB_14098025d:
                  *pppppplVar22 = ppppplVar5;
                }
              }
              else {
                if (pppppplVar22 == pppppplVar26) {
                  FUN_14000c2d0(&local_f8);
                  pppppplVar22 = (longlong ******)ppppplStack_f0;
                  pppppplVar26 = (longlong ******)local_e8;
                }
                if (pppppplVar22 != (longlong ******)0x0) {
                  ppppplVar5 = *pppppplVar15;
                  goto LAB_14098025d;
                }
              }
              pppppplVar22 = pppppplVar22 + 1;
              ppppplStack_f0 = (longlong *****)pppppplVar22;
            }
          }
        }
      }
LAB_14098026a:
      uVar29 = (int)pppppplVar31 + 1;
      pppppplVar31 = (longlong ******)(ulonglong)uVar29;
      pppppplVar13 = pppppplVar13 + 1;
    } while ((ulonglong)(longlong)(int)uVar29 <
             (ulonglong)(*(longlong *)(lVar28 + 0x1108) - *(longlong *)(lVar28 + 0x1100) >> 3));
  }
  local_88 = (longlong *****)pppppplVar25;
  local_90 = (longlong *****)pppppplVar26;
  local_140 = 0;
  local_170 = (longlong *****)((longlong)local_170 - (longlong)local_118 >> 3);
  if (local_170 == (longlong *****)0x0) {
LAB_1409815eb:
    ppppplVar5 = local_118;
    DAT_141c36b78 = DAT_141c36b78 & 0xfffffffb;
    if ((longlong ******)local_f8 != (longlong ******)0x0) {
      FUN_140002020(local_f8,(longlong)local_90 - (longlong)local_f8 >> 3,8);
    }
    if ((longlong ******)ppppplVar5 != (longlong ******)0x0) {
      FUN_140002020(ppppplVar5,(longlong)local_88 - (longlong)ppppplVar5 >> 3,8);
    }
    return;
  }
  local_60 = 0;
LAB_1409802d0:
  uVar33 = 0;
  local_78 = (short *)0x0;
  lStack_70 = 0;
  local_68 = 0;
  local_148 = local_118[local_60];
  local_80 = local_f8[local_60];
  FUN_140526e10(local_148,&local_78);
  local_130 = (ulonglong *)0x0;
  puStack_128 = (ulonglong *)0x0;
  local_138 = (ulonglong *)0x0;
  local_120 = (ulonglong *)0x0;
  local_1a0 = (ulonglong *)0x0;
  puStack_198 = (ulonglong *)0x0;
  local_178 = (ulonglong *)0x0;
  local_190 = (ulonglong *)0x0;
  local_1b8 = (uint *)0x0;
  puStack_1b0 = (uint *)0x0;
  local_180 = (uint *)0x0;
  local_1a8 = (uint *)0x0;
  local_160 = (uint *)0x0;
  puStack_158 = (uint *)0x0;
  local_188 = (uint *)0x0;
  local_150 = (uint *)0x0;
  local_1c8 = 0;
  puVar32 = (ulonglong *)0x0;
  puVar19 = (uint *)0x0;
  local_1d0 = (ulonglong *)0x0;
  lVar28 = lStack_70;
  if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 == 0) {
    local_168 = (ulonglong *)0x0;
  }
  else {
    local_168 = (ulonglong *)0x0;
    uVar27 = uVar33;
    do {
      uVar29 = (uint)uVar33;
      cVar3 = FUN_140ca6640(*(undefined8 *)(DAT_141c66fe8 + uVar27));
      if (cVar3 != '\0') {
        puVar1 = *(undefined8 **)(*(longlong *)(DAT_141c66fe8 + uVar27) + 0x1c8);
        for (puVar17 = *(undefined8 **)(*(longlong *)(DAT_141c66fe8 + uVar27) + 0x1c0);
            puVar17 < puVar1; puVar17 = puVar17 + 1) {
          iVar4 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
          if (iVar4 == 3) {
            uVar33 = (**(code **)(*(longlong *)*puVar17 + 0x48))();
            goto LAB_1409803ec;
          }
        }
        uVar33 = 0;
LAB_1409803ec:
        local_1c0 = uVar33;
        if (uVar33 != 0) {
          if ((&local_1c0 < local_168) && (local_130 <= &local_1c0)) {
            lVar16 = (longlong)&local_1c0 - (longlong)local_130;
            if (local_168 == local_138) {
              FUN_14000c2d0(&local_130,1);
              local_138 = local_120;
              local_168 = puStack_128;
            }
            if (local_168 != (ulonglong *)0x0) {
              *local_168 = local_130[lVar16 >> 3];
            }
          }
          else {
            if (local_168 == local_138) {
              FUN_14000c2d0(&local_130,1);
              local_138 = local_120;
              local_168 = puStack_128;
            }
            if (local_168 != (ulonglong *)0x0) {
              *local_168 = uVar33;
            }
          }
          local_168 = local_168 + 1;
          local_1f8 = 0;
          puStack_128 = local_168;
          cVar3 = FUN_14073e380(*(undefined8 *)(uVar33 + 0x10),local_148,local_98,0);
          if (((cVar3 != '\0') ||
              (0x16 < (int)*(short *)(*(longlong *)(DAT_141c66fe8 + uVar27) + 0xa0) - 0x4bU)) ||
             (local_1d4 != '\0')) {
            if ((&local_1c0 < puVar32) && (local_1a0 <= &local_1c0)) {
              lVar16 = (longlong)&local_1c0 - (longlong)local_1a0;
              if (puVar32 == local_178) {
                FUN_14000c2d0(&local_1a0,1);
                local_178 = local_190;
                puVar32 = puStack_198;
              }
              if (puVar32 != (ulonglong *)0x0) {
                *puVar32 = local_1a0[lVar16 >> 3];
              }
            }
            else {
              if (puVar32 == local_178) {
                FUN_14000c2d0(&local_1a0,1);
                local_178 = local_190;
                puVar32 = puStack_198;
              }
              if (puVar32 != (ulonglong *)0x0) {
                *puVar32 = uVar33;
              }
            }
            local_1d0 = puVar32 + 1;
            local_1d8 = 0;
            puStack_198 = local_1d0;
            if ((&local_1d8 < puStack_1b0) && (local_1b8 <= &local_1d8)) {
              lVar16 = (longlong)&local_1d8 - (longlong)local_1b8;
              if (puStack_1b0 == local_180) {
                FUN_14000c390(&local_1b8,1);
                local_180 = local_1a8;
              }
              if (puStack_1b0 != (uint *)0x0) {
                *puStack_1b0 = local_1b8[lVar16 >> 2];
              }
            }
            else {
              if (puStack_1b0 == local_180) {
                FUN_14000c390(&local_1b8,1);
                local_180 = local_1a8;
              }
              if (puStack_1b0 != (uint *)0x0) {
                *puStack_1b0 = 0;
              }
            }
            uVar21 = 0;
            puStack_1b0 = puStack_1b0 + 1;
            uVar30 = 0;
            uVar33 = lVar28 - (longlong)local_78 >> 1;
            if (uVar33 != 0) {
              lVar28 = *(longlong *)(*(longlong *)(DAT_141c66fe8 + uVar27) + 0xa78);
              psVar18 = local_78;
              uVar30 = uVar21;
              do {
                if (((lVar28 == 0) || (*psVar18 == -1)) ||
                   (lVar16 = FUN_1400512a0(*psVar18,lVar28 + 0x218), lVar16 == 0)) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(lVar16 + 4);
                  if (iVar4 < 0) {
                    iVar4 = 0;
                  }
                }
                uVar30 = uVar30 + iVar4;
                uVar21 = uVar21 + 1;
                psVar18 = psVar18 + 1;
                uVar29 = local_1c8;
              } while ((ulonglong)(longlong)(int)uVar21 < uVar33);
            }
            local_1d8 = uVar30;
            if ((&local_1d8 < puVar19) && (local_160 <= &local_1d8)) {
              lVar28 = (longlong)&local_1d8 - (longlong)local_160;
              if (puVar19 == local_188) {
                FUN_14000c390(&local_160,1);
                local_188 = local_150;
                puVar19 = puStack_158;
              }
              if (puVar19 != (uint *)0x0) {
                *puVar19 = local_160[lVar28 >> 2];
              }
            }
            else {
              if (puVar19 == local_188) {
                FUN_14000c390(&local_160,1);
                local_188 = local_150;
                puVar19 = puStack_158;
              }
              if (puVar19 != (uint *)0x0) {
                *puVar19 = uVar30;
              }
            }
            puVar19 = puVar19 + 1;
            puVar32 = local_1d0;
            lVar28 = lStack_70;
            puStack_158 = puVar19;
          }
        }
      }
      local_1c8 = uVar29 + 1;
      uVar33 = (ulonglong)local_1c8;
      uVar27 = uVar27 + 8;
    } while ((ulonglong)(longlong)(int)local_1c8 < (ulonglong)(DAT_141c66ff0 - DAT_141c66fe8 >> 3));
  }
  uVar33 = 0;
  local_168 = (ulonglong *)((longlong)local_168 - (longlong)local_130 >> 3);
  if (local_168 != (ulonglong *)0x0) {
    if (((longlong)puVar32 - (longlong)local_1a0 >> 3 == 0) &&
       (local_1c8 = 0, uVar27 = uVar33, DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0)) {
      do {
        uVar29 = (uint)uVar33;
        cVar3 = FUN_140ca6640(*(undefined8 *)(DAT_141c66fe8 + uVar27));
        if (cVar3 != '\0') {
          puVar1 = *(undefined8 **)(*(longlong *)(DAT_141c66fe8 + uVar27) + 0x1c8);
          for (puVar17 = *(undefined8 **)(*(longlong *)(DAT_141c66fe8 + uVar27) + 0x1c0);
              puVar17 < puVar1; puVar17 = puVar17 + 1) {
            iVar4 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
            if (iVar4 == 3) {
              uVar33 = (**(code **)(*(longlong *)*puVar17 + 0x48))();
              goto LAB_1409807ec;
            }
          }
          uVar33 = 0;
LAB_1409807ec:
          local_1c0 = uVar33;
          if (uVar33 != 0) {
            local_1f8 = 0;
            cVar3 = FUN_14073e380(*(undefined8 *)(uVar33 + 0x10),local_148,local_98,0);
            if (cVar3 != '\0') {
              if ((&local_1c0 < puVar32) && (local_1a0 <= &local_1c0)) {
                lVar16 = (longlong)&local_1c0 - (longlong)local_1a0;
                if (puVar32 == local_178) {
                  FUN_14000c2d0(&local_1a0,1);
                  local_178 = local_190;
                  puVar32 = puStack_198;
                }
                if (puVar32 != (ulonglong *)0x0) {
                  *puVar32 = local_1a0[lVar16 >> 3];
                }
              }
              else {
                if (puVar32 == local_178) {
                  FUN_14000c2d0(&local_1a0,1);
                  local_178 = local_190;
                  puVar32 = puStack_198;
                }
                if (puVar32 != (ulonglong *)0x0) {
                  *puVar32 = uVar33;
                }
              }
              local_1d0 = puVar32 + 1;
              local_1d8 = 0;
              puStack_198 = local_1d0;
              if ((&local_1d8 < puStack_1b0) && (local_1b8 <= &local_1d8)) {
                lVar16 = (longlong)&local_1d8 - (longlong)local_1b8;
                if (puStack_1b0 == local_180) {
                  FUN_14000c390(&local_1b8,1);
                  local_180 = local_1a8;
                }
                if (puStack_1b0 != (uint *)0x0) {
                  *puStack_1b0 = local_1b8[lVar16 >> 2];
                }
              }
              else {
                if (puStack_1b0 == local_180) {
                  FUN_14000c390(&local_1b8,1);
                  local_180 = local_1a8;
                }
                if (puStack_1b0 != (uint *)0x0) {
                  *puStack_1b0 = 0;
                }
              }
              uVar21 = 0;
              puStack_1b0 = puStack_1b0 + 1;
              uVar30 = 0;
              uVar33 = lVar28 - (longlong)local_78 >> 1;
              if (uVar33 != 0) {
                lVar28 = *(longlong *)(*(longlong *)(DAT_141c66fe8 + uVar27) + 0xa78);
                psVar18 = local_78;
                uVar30 = uVar21;
                do {
                  if (((lVar28 == 0) || (*psVar18 == -1)) ||
                     (lVar16 = FUN_1400512a0(*psVar18,lVar28 + 0x218), lVar16 == 0)) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = *(int *)(lVar16 + 4);
                    if (iVar4 < 0) {
                      iVar4 = 0;
                    }
                  }
                  uVar30 = uVar30 + iVar4;
                  uVar21 = uVar21 + 1;
                  psVar18 = psVar18 + 1;
                  uVar29 = local_1c8;
                } while ((ulonglong)(longlong)(int)uVar21 < uVar33);
              }
              local_1d8 = uVar30;
              if ((&local_1d8 < puVar19) && (local_160 <= &local_1d8)) {
                lVar28 = (longlong)&local_1d8 - (longlong)local_160;
                if (puVar19 == local_188) {
                  FUN_14000c390(&local_160,1);
                  local_188 = local_150;
                  puVar19 = puStack_158;
                }
                if (puVar19 != (uint *)0x0) {
                  *puVar19 = local_160[lVar28 >> 2];
                }
              }
              else {
                if (puVar19 == local_188) {
                  FUN_14000c390(&local_160,1);
                  local_188 = local_150;
                  puVar19 = puStack_158;
                }
                if (puVar19 != (uint *)0x0) {
                  *puVar19 = uVar30;
                }
              }
              puVar19 = puVar19 + 1;
              puVar32 = local_1d0;
              puStack_158 = puVar19;
            }
          }
        }
        local_1c8 = uVar29 + 1;
        uVar33 = (ulonglong)local_1c8;
        uVar27 = uVar27 + 8;
        lVar28 = lStack_70;
      } while ((ulonglong)(longlong)(int)local_1c8 < (ulonglong)(DAT_141c66ff0 - DAT_141c66fe8 >> 3)
              );
    }
    if (local_168 == (ulonglong *)0x0) goto LAB_140981506;
    lVar28 = (longlong)puVar32 - (longlong)local_1a0;
    puVar23 = local_130;
    ppppplVar5 = (longlong *****)local_80;
    while (puVar19 = (uint *)(lVar28 >> 3), local_130 = puVar23,
          local_80 = (longlong ****)ppppplVar5, (uint *)0x1 < puVar19) {
      puVar6 = (uint *)0x0;
      uVar29 = 0;
      puVar10 = puVar6;
      if (puVar19 != (uint *)0x0) {
        do {
          local_1b8[(longlong)puVar10] = 0;
          uVar30 = (int)puVar6 + 1;
          puVar6 = (uint *)(ulonglong)uVar30;
          puVar10 = (uint *)(longlong)(int)uVar30;
        } while ((uint *)(longlong)(int)uVar30 < puVar19);
      }
      local_1c8 = 0;
      local_1c0 = local_1c0 & 0xffffffff00000000;
      if (local_168 != (ulonglong *)0x0) {
        do {
          puVar7 = (uint *)0x0;
          local_50 = (uint *)0x0;
          puStack_48 = (uint *)0x0;
          local_40 = (uint *)0x0;
          iVar4 = -1;
          local_1d8 = 0;
          puVar10 = (uint *)0x0;
          puVar6 = (uint *)0x0;
          puVar11 = puVar7;
          puVar34 = puVar7;
          local_100 = puVar23;
          if (puVar19 != (uint *)0x0) {
            do {
              iVar12 = FUN_14090bd30(*puVar23,local_1a0[(longlong)puVar7]);
              bVar35 = iVar12 == iVar4;
              puVar7 = puVar6;
              puVar2 = puVar6;
              if ((iVar4 < iVar12) ||
                 (puVar7 = puVar10, puVar2 = puStack_48, iVar12 = iVar4, bVar35)) {
                puStack_48 = puVar2;
                if ((&local_1d8 < puVar7) && (puVar6 <= &local_1d8)) {
                  lVar28 = (longlong)&local_1d8 - (longlong)puVar6;
                  if (puVar7 == puVar34) {
                    FUN_14000c390(&local_50,1);
                    puVar7 = puStack_48;
                    puVar6 = local_50;
                    puVar34 = local_40;
                  }
                  puVar23 = local_100;
                  if (puVar7 != (uint *)0x0) {
                    *puVar7 = puVar6[lVar28 >> 2];
                  }
                }
                else {
                  if (puVar7 == puVar34) {
                    FUN_14000c390(&local_50,1);
                    puVar7 = puStack_48;
                    puVar6 = local_50;
                    puVar34 = local_40;
                  }
                  if (puVar7 != (uint *)0x0) {
                    *puVar7 = (uint)puVar11;
                  }
                }
                puVar10 = puVar7 + 1;
                puStack_48 = puVar10;
                iVar4 = iVar12;
              }
              local_1d8 = (uint)puVar11 + 1;
              puVar7 = (uint *)(longlong)(int)local_1d8;
              puVar11 = (uint *)(ulonglong)local_1d8;
            } while (puVar7 < puVar19);
          }
          uVar33 = (longlong)puVar10 - (longlong)puVar6 >> 2;
          if (uVar33 != 0) {
            if ((uint)uVar33 < 2) {
              uVar29 = 0;
            }
            else {
              uVar29 = FUN_1409fc0c0();
              uVar29 = (uVar29 + (int)((longlong)((ulonglong)uVar29 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / ((int)(0x7fffffff / (uVar33 & 0xffffffff)) + 1U);
            }
            uVar29 = puVar6[(int)uVar29];
            local_1b8[(int)uVar29] = local_1b8[(int)uVar29] + 1;
            if ((int)local_1c8 < (int)local_1b8[(int)uVar29]) {
              local_1c8 = local_1b8[(int)uVar29];
            }
          }
          uVar29 = local_1c8;
          if (puVar6 != (uint *)0x0) {
            FUN_140002020(puVar6,(longlong)puVar34 - (longlong)puVar6 >> 2);
          }
          iVar4 = (int)local_1c0 + 1;
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar4);
          puVar23 = puVar23 + 1;
          puVar32 = local_1d0;
          local_100 = puVar23;
        } while ((ulonglong)(longlong)iVar4 < local_168);
      }
      bVar35 = false;
      uVar30 = 1000000000;
      iVar4 = (int)puVar19 + -1;
      if (iVar4 < 0) {
LAB_140980d8d:
        puVar23 = local_1a0;
        puVar19 = local_1b8;
        if ((longlong)puVar32 - (longlong)local_1a0 >> 3 == 2) {
          puVar10 = local_1b8 + 1;
          if ((int)*puVar10 < (int)*local_1b8) {
            memmove(local_1a0 + 1,local_1a0 + 2,(longlong)puVar32 - (longlong)(local_1a0 + 2));
            puVar6 = puStack_1b0;
            puVar32 = puVar32 + -1;
            local_1d0 = puVar32;
            puStack_198 = puVar32;
            memmove(puVar10,puVar19 + 2,(longlong)puStack_1b0 - (longlong)(puVar19 + 2));
            puStack_1b0 = puVar6 + -1;
          }
          else if ((int)*local_1b8 < (int)*puVar10) {
            memmove(local_1a0,local_1a0 + 1,(longlong)puVar32 - (longlong)(local_1a0 + 1));
            puVar6 = puStack_1b0;
            puVar32 = puVar32 + -1;
            local_1d0 = puVar32;
            puStack_198 = puVar32;
            memmove(puVar19,puVar10,(longlong)puStack_1b0 - (longlong)puVar10);
            puStack_1b0 = puVar6 + -1;
          }
          else {
            uVar29 = FUN_1409fc0c0();
            uVar29 = uVar29 + (int)((longlong)((ulonglong)uVar29 * 0x100000003) >> 0x3f) *
                              0x7fffffff >> 0x1e;
            _Dst = puVar23 + uVar29;
            memmove(_Dst,_Dst + 1,(longlong)puVar32 - (longlong)(_Dst + 1));
            puVar6 = puStack_1b0;
            puVar32 = puVar32 + -1;
            puVar10 = puVar19 + uVar29;
            local_1d0 = puVar32;
            puStack_198 = puVar32;
            memmove(puVar10,puVar10 + 1,(longlong)puStack_1b0 - (longlong)(puVar10 + 1));
            puStack_1b0 = puVar6 + -1;
          }
        }
        lVar28 = (longlong)puVar32 - (longlong)puVar23;
        puVar10 = puStack_1b0;
        while (2 < (ulonglong)(lVar28 >> 3)) {
          local_50 = (uint *)0x0;
          puStack_48 = (uint *)0x0;
          puVar11 = (uint *)0x0;
          local_40 = (uint *)0x0;
          uVar29 = (uint)(lVar28 >> 3);
          puVar6 = (uint *)0x0;
          puVar7 = (uint *)0x0;
          puVar34 = puStack_48;
          while (puStack_48 = puVar7, uVar29 = uVar29 - 1, local_1d8 = uVar29, -1 < (int)uVar29) {
            puVar7 = puStack_48;
            if (puVar19[(int)uVar29] == uVar30) {
              if ((&local_1d8 < puStack_48) && (puVar6 <= &local_1d8)) {
                lVar28 = (longlong)&local_1d8 - (longlong)puVar6;
                if (puStack_48 == puVar11) {
                  puStack_48 = puVar34;
                  FUN_14000c390(&local_50,1);
                  puVar6 = local_50;
                  puVar11 = local_40;
                }
                puVar19 = local_1b8;
                if (puStack_48 != (uint *)0x0) {
                  *puStack_48 = puVar6[lVar28 >> 2];
                }
              }
              else {
                if (puStack_48 == puVar11) {
                  puStack_48 = puVar34;
                  FUN_14000c390(&local_50,1);
                  puVar6 = local_50;
                  puVar11 = local_40;
                }
                if (puStack_48 != (uint *)0x0) {
                  *puStack_48 = uVar29;
                }
              }
              puVar34 = puStack_48 + 1;
              puVar7 = puVar34;
            }
          }
          uVar33 = (longlong)puStack_48 - (longlong)puVar6 >> 2;
          if (uVar33 == 0) {
            puVar32 = local_1d0;
            puStack_48 = puVar34;
            if (puVar6 != (uint *)0x0) {
              FUN_140002020(puVar6,(longlong)puVar11 - (longlong)puVar6 >> 2,4);
              puVar32 = local_1d0;
            }
            break;
          }
          if ((uint)uVar33 < 2) {
            uVar29 = 0;
            puStack_48 = puVar34;
          }
          else {
            puStack_48 = puVar34;
            uVar29 = FUN_1409fc0c0();
            uVar29 = (uVar29 + (int)((longlong)((ulonglong)uVar29 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar33 & 0xffffffff)) + 1U);
          }
          puVar32 = local_1d0;
          uVar29 = puVar6[(int)uVar29];
          puVar23 = local_1a0 + (int)uVar29;
          memmove(puVar23,puVar23 + 1,(longlong)local_1d0 - (longlong)(puVar23 + 1));
          puVar32 = puVar32 + -1;
          puVar34 = puVar19 + (int)uVar29;
          local_1d0 = puVar32;
          puStack_198 = puVar32;
          memmove(puVar34,puVar34 + 1,(longlong)puVar10 - (longlong)(puVar34 + 1));
          puVar10 = puVar10 + -1;
          puStack_1b0 = puVar10;
          if (puVar6 != (uint *)0x0) {
            FUN_140002020(puVar6,(longlong)puVar11 - (longlong)puVar6 >> 2,4);
          }
          lVar28 = (longlong)puVar32 - (longlong)local_1a0;
        }
      }
      else {
        puVar19 = local_1b8 + iVar4;
        puVar23 = local_1a0 + (longlong)iVar4 + 1;
        puVar32 = local_1d0;
        do {
          uVar21 = *puVar19;
          if ((int)uVar21 < (int)uVar29 / 2) {
            memmove(puVar23 + -1,puVar23,(longlong)puVar32 - (longlong)puVar23);
            puVar10 = puStack_1b0;
            puVar32 = puVar32 + -1;
            puStack_198 = puVar32;
            memmove(puVar19,puVar19 + 1,(longlong)puStack_1b0 - (longlong)(puVar19 + 1));
            puStack_1b0 = puVar10 + -1;
            bVar35 = true;
          }
          else if ((int)uVar21 < (int)uVar30) {
            uVar30 = uVar21;
          }
          puVar23 = puVar23 + -1;
          puVar19 = puVar19 + -1;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        local_1d0 = puVar32;
        if (!bVar35) goto LAB_140980d8d;
      }
      puVar23 = local_130;
      ppppplVar5 = (longlong *****)local_80;
      lVar28 = (longlong)puVar32 - (longlong)local_1a0;
    }
    if ((longlong)puVar32 - (longlong)local_1a0 >> 3 != 1) goto LAB_140981506;
    iVar12 = *(int *)((longlong)ppppplVar5 + 4);
    uVar33 = *local_1a0;
    iVar4 = 0;
    iVar20 = 0;
    if (local_1d4 == '\0') {
      local_38 = 0xf;
      local_40 = (uint *)0x0;
      local_50 = (uint *)((ulonglong)local_50 & 0xffffffffffffff00);
      FUN_140c303c0(*(undefined8 *)(uVar33 + 0x18),&local_50,0);
      if (*(int *)(*(longlong *)(uVar33 + 0x10) + 0xe0) == iVar12) {
        FUN_14000c9f0(&local_50," has been re-elected.",0x15);
        local_d8 = 0x43;
      }
      else {
        FUN_14000c9f0(&local_50," has been elected ",0x12);
        cVar3 = *(char *)(*(longlong *)(uVar33 + 0x18) + 0x12e);
        if (cVar3 == '\0') {
          ppppplVar14 = (longlong *****)(local_148 + 0x1b);
LAB_140981199:
          if (ppppplVar14[2] == (longlong ****)0x0) {
            ppppplVar14 = (longlong *****)(local_148 + 0x13);
          }
        }
        else {
          if (cVar3 == '\x01') {
            ppppplVar14 = (longlong *****)(local_148 + 0x23);
            goto LAB_140981199;
          }
          ppppplVar14 = (longlong *****)(local_148 + 0x13);
        }
        FUN_14000cb40(&local_50,ppppplVar14,0);
        if (0 < *(short *)(local_148 + 0x59)) {
          FUN_140541a20(local_98,ppppplVar5,&local_50);
        }
        FUN_14000c9f0(&local_50,&DAT_140e597bc,1);
        local_d8 = 0x42;
      }
      lVar28 = *(longlong *)(uVar33 + 0x18);
      local_d4 = 0xffffffff;
      local_d0 = 0;
      local_cc = 100;
      local_c0 = 0;
      lStack_b8 = 0;
      local_b0 = 0;
      lVar16 = *(longlong *)(lVar28 + 0xa78);
      if (((lVar16 != 0) && ((*(uint *)(lVar28 + 0x110) & 0x502) != 2)) &&
         ((*(uint *)(lVar28 + 0x118) & 0x1000) == 0)) {
        cVar3 = FUN_140106f30();
        FUN_1409165e0(lVar16 + 0x248,&local_d8,cVar3 != '\0');
      }
      if (DAT_1410b67dc == 0) {
        bVar35 = (DAT_141c345a0 & 0x70) != 0;
      }
      else {
        bVar35 = (bool)(DAT_141c345a0 >> 3 & 1);
      }
      if (bVar35 != false) {
        local_cc = 0x8ad08ad000000000;
        local_c4 = 0x8ad0;
        local_b0 = 0;
        local_a8 = 0xffffffffffffffff;
        local_a0 = 0xffffffff;
        local_9c = 0;
        local_d8 = 0x70108;
        local_d4 = CONCAT31(local_d4._1_3_,1);
        local_c0 = CONCAT26((short)((ulonglong)local_c0 >> 0x30),0x138800000000);
        lStack_b8 = *(longlong *)(uVar33 + 0x18);
        local_d4 = CONCAT22(*(undefined2 *)(lStack_b8 + 0xa8),(undefined2)local_d4);
        local_d0 = *(undefined4 *)(lStack_b8 + 0xaa);
        FUN_140074660(&DAT_141d64dc8,&local_50,&local_d8);
      }
      if (0xf < local_38) {
        FUN_140002020(local_50,local_38 + 1,1);
      }
    }
    if (*(int *)(*(longlong *)(uVar33 + 0x10) + 0xe0) == iVar12) goto LAB_140981506;
    FUN_14000f0b0(*(undefined8 *)(uVar33 + 0x18),8,0x189c0);
    lVar28 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if (((lVar28 != 0) && (iVar12 != -1)) && (iVar8 = (int)lVar28 + -1, iVar24 = iVar4, -1 < iVar8))
    {
      do {
        iVar9 = iVar8 + iVar24 >> 1;
        lVar28 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar9 * 8);
        if (*(int *)(lVar28 + 0xe0) == iVar12) {
          if (lVar28 != 0) {
            lVar16 = FUN_14078e1d0(lVar28,DAT_141c36b88,&local_100,&local_80);
            iVar12 = iVar20;
            if (lVar16 != 0) {
              iVar12 = *(int *)(lVar16 + 0x2d0);
            }
            local_1f8 = 1;
            FUN_14073d8e0(lVar28,*(undefined4 *)ppppplVar5,DAT_141c36b88,1);
            lVar16 = FUN_14078e1d0(lVar28,DAT_141c36b88,&local_100,&local_80);
            if (lVar16 != 0) {
              iVar20 = *(int *)(lVar16 + 0x2d0);
            }
            if (iVar20 < iVar12) {
              iVar20 = *(int *)(lVar28 + 0xd8);
              iVar12 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
              if (((iVar12 != 0) && (iVar20 != -1)) && (iVar12 = iVar12 + -1, -1 < iVar12))
              goto LAB_140981481;
            }
          }
          break;
        }
        if (iVar12 < *(int *)(lVar28 + 0xe0)) {
          iVar8 = iVar9 + -1;
        }
        else {
          iVar24 = iVar9 + 1;
        }
      } while (iVar24 <= iVar8);
    }
    goto LAB_1409814c0;
  }
  goto LAB_140981506;
  while( true ) {
    if (iVar20 < *(int *)(lVar28 + 0x130)) {
      iVar12 = iVar8 + -1;
    }
    else {
      iVar4 = iVar8 + 1;
    }
    if (iVar12 < iVar4) break;
LAB_140981481:
    iVar8 = iVar4 + iVar12 >> 1;
    lVar28 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar8 * 8);
    if (*(int *)(lVar28 + 0x130) == iVar20) {
      if (lVar28 != 0) {
        FUN_140ca7950(lVar28);
        FUN_140ca7b70(lVar28);
      }
      break;
    }
  }
LAB_1409814c0:
  local_1e8 = 0xffffffff;
  local_1f0 = 0xffffffff;
  FUN_14073edb0(*(undefined8 *)(uVar33 + 0x10),*(undefined4 *)ppppplVar5,DAT_141c36b88);
  uVar36 = FUN_140050d90(uVar33,&DAT_141c670c0);
  FUN_1407c6ea0(uVar36,DAT_141c3d250,local_148);
LAB_140981506:
  if (local_160 != (uint *)0x0) {
    FUN_140002020(local_160,(longlong)local_188 - (longlong)local_160 >> 2,4);
  }
  if (local_1b8 != (uint *)0x0) {
    FUN_140002020(local_1b8,(longlong)local_180 - (longlong)local_1b8 >> 2,4);
  }
  if (local_1a0 != (ulonglong *)0x0) {
    FUN_140002020(local_1a0,(longlong)local_178 - (longlong)local_1a0 >> 3,8);
  }
  if (local_130 != (ulonglong *)0x0) {
    FUN_140002020(local_130,(longlong)local_138 - (longlong)local_130 >> 3,8);
  }
  if (local_78 != (short *)0x0) {
    FUN_140002020(local_78,local_68 - (longlong)local_78 >> 1,2);
  }
  local_140 = local_140 + 1;
  local_60 = local_60 + 1;
  if (local_170 <= (longlong *****)(longlong)local_140) goto LAB_1409815eb;
  goto LAB_1409802d0;
}

