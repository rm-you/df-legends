// FUN_140c2cd40 @ 140c2cd40
// callees:
//   -> 140c800d0 FUN_140c800d0
//   -> 14000d840 FUN_14000d840
//   -> 140c80fd0 FUN_140c80fd0
//   -> 140c2efa0 FUN_140c2efa0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1407f2110 FUN_1407f2110
//   -> 14000cb40 FUN_14000cb40
//   -> 140074660 FUN_140074660
//   -> 140002020 FUN_140002020
//   -> 140c88550 FUN_140c88550
//   -> 1407f0860 FUN_1407f0860
//   -> 140c83ab0 FUN_140c83ab0
//   -> 140c26640 FUN_140c26640
//   -> 140c2a430 FUN_140c2a430
//   -> EXTERNAL:000000e1 memmove
//   -> 140c26f00 FUN_140c26f00
//   -> 1400ff040 FUN_1400ff040
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c2cd40(longlong param_1,uint param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  char *pcVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  int iVar23;
  short sVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_1c8 [32];
  undefined2 *local_1a8;
  ushort local_198;
  uint local_194;
  undefined4 local_188;
  undefined1 local_184;
  undefined2 local_182;
  undefined2 local_180;
  undefined2 local_17e;
  undefined4 local_17c;
  undefined4 local_178;
  undefined2 local_174;
  undefined4 local_170;
  undefined2 local_16c;
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  ulonglong local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  ulonglong local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined2 local_d8 [6];
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined1 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined2 local_46;
  ulonglong local_38;
  
  local_148 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_1c8;
  if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
    return;
  }
  FUN_140c800d0();
  local_198 = *(ushort *)(param_1 + 0xc1e);
  uVar22 = (ulonglong)local_198;
  local_194 = param_2 & 0xffffff00;
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x4b8) + 0x14);
    if (((0x34 < uVar4) || ((0x10000002268000U >> ((ulonglong)uVar4 & 0x3f) & 1) == 0)) &&
       (uVar4 != 0xd0)) {
      local_194 = (uint)(local_198 == 0);
    }
  }
  cVar9 = (char)local_194;
  iVar25 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
  lVar19 = DAT_141d6dd50;
  if (-1 < iVar25) {
LAB_140c2ce20:
    bVar8 = false;
    lVar18 = (longlong)iVar25 * 8;
    lVar6 = *(longlong *)(param_1 + 0x3f8);
    lVar7 = *(longlong *)(lVar6 + (longlong)iVar25 * 8);
    sVar11 = *(short *)(lVar7 + 8);
    if ((sVar11 == 0) && ((short)uVar22 == 0)) {
      sVar11 = *(short *)(param_1 + 300);
      sVar24 = *(short *)(param_1 + 0xa4);
      if (-1 < sVar24) {
        if (((ulonglong)(longlong)sVar24 < (ulonglong)(DAT_141d6dd58 - lVar19 >> 3)) &&
           (-1 < sVar11)) {
          lVar6 = *(longlong *)(lVar19 + (longlong)sVar24 * 8);
          if (((ulonglong)(longlong)sVar11 <
               (ulonglong)(*(longlong *)(lVar6 + 0x180) - *(longlong *)(lVar6 + 0x178) >> 3)) &&
             (cVar9 = FUN_14000d840(*(longlong *)
                                     (*(longlong *)(lVar6 + 0x178) + (longlong)sVar11 * 8) + 0x6a8,
                                    0x12), cVar9 != '\0')) goto LAB_140c2d6ac;
        }
        if (-1 < sVar24) {
          if (((ulonglong)(longlong)sVar24 < (ulonglong)(DAT_141d6dd58 - lVar19 >> 3)) &&
             (-1 < sVar11)) {
            lVar6 = *(longlong *)(lVar19 + (longlong)sVar24 * 8);
            if (((ulonglong)(longlong)sVar11 <
                 (ulonglong)(*(longlong *)(lVar6 + 0x180) - *(longlong *)(lVar6 + 0x178) >> 3)) &&
               (cVar9 = FUN_14000d840(*(longlong *)
                                       (*(longlong *)(lVar6 + 0x178) + (longlong)sVar11 * 8) + 0x6a8
                                      ,5), cVar9 != '\0')) goto LAB_140c2d6ac;
          }
          if (((-1 < sVar24) &&
              ((ulonglong)(longlong)sVar24 < (ulonglong)(DAT_141d6dd58 - lVar19 >> 3))) &&
             (-1 < sVar11)) {
            lVar6 = *(longlong *)(lVar19 + (longlong)sVar24 * 8);
            if (((ulonglong)(longlong)sVar11 <
                 (ulonglong)(*(longlong *)(lVar6 + 0x180) - *(longlong *)(lVar6 + 0x178) >> 3)) &&
               (cVar9 = FUN_14000d840(*(longlong *)
                                       (*(longlong *)(lVar6 + 0x178) + (longlong)sVar11 * 8) + 0x6a8
                                      ,0x99), cVar9 != '\0')) goto LAB_140c2d6ac;
          }
        }
      }
LAB_140c2d0b7:
      if (DAT_1410b67dc == 0) {
        if ((DAT_141c34350 & 0x70) != 0) {
LAB_140c2d0db:
          sVar11 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar18) + 8);
          if ((sVar11 != 6) && (sVar11 != 9)) {
            local_e8 = 0xf;
            local_f0 = 0;
            local_100 = 0;
            local_108 = 0xf;
            local_110 = 0;
            local_120 = 0;
            local_1a8 = (undefined2 *)CONCAT71(local_1a8._1_7_,1);
            FUN_140c2efa0(param_1,&local_100,1,1);
            local_128 = 0xf;
            local_130 = 0;
            local_140 = 0;
            FUN_14000c8b0(&local_140,&local_100,0,0xffffffffffffffff);
            if ((DAT_1410b67dc == 1) && (param_1 == *DAT_141c66fe8)) {
              uVar21 = 5;
              pcVar16 = " lose";
            }
            else {
              uVar21 = 6;
              pcVar16 = " loses";
            }
            FUN_14000c9f0(&local_140,pcVar16,uVar21);
            FUN_14000c9f0(&local_140," hold of the ",0xd);
            FUN_1407f2110(**(undefined8 **)(lVar18 + *(longlong *)(param_1 + 0x3f8)),&local_120,0,
                          0xffffffff);
            FUN_14000cb40(&local_140,&local_120,0);
            FUN_14000c9f0(&local_140,&DAT_140e597bc,1);
            local_17c = 0;
            local_178 = 0x8ad08ad0;
            local_174 = 0x8ad0;
            local_170 = 0;
            local_160 = 0;
            local_158 = 0xffffffff;
            local_154 = 0xffffffff;
            local_150 = 0xffffffff;
            local_14c = 0;
            local_188 = 0x60074;
            local_184 = param_1 == *DAT_141c66fe8;
            local_16c = 2000;
            local_182 = *(undefined2 *)(param_1 + 0xa8);
            local_180 = *(undefined2 *)(param_1 + 0xaa);
            local_17e = *(undefined2 *)(param_1 + 0xac);
            local_168 = param_1;
            FUN_140074660(&DAT_141d64dc8,&local_140,&local_188);
            if (0xf < local_128) {
              FUN_140002020(CONCAT71(uStack_13f,local_140),local_128 + 1,1);
            }
            local_128 = 0xf;
            local_130 = 0;
            local_140 = 0;
            if (0xf < local_108) {
              FUN_140002020(CONCAT71(uStack_11f,local_120),local_108 + 1,1);
            }
            local_108 = 0xf;
            local_110 = 0;
            local_120 = 0;
            if (0xf < local_e8) {
              FUN_140002020(CONCAT71(uStack_ff,local_100),local_e8 + 1,1);
            }
          }
          goto LAB_140c2d310;
        }
LAB_140c2d319:
        lVar19 = **(longlong **)(lVar18 + *(longlong *)(param_1 + 0x3f8));
        if ((lVar19 != 0) && (bVar8)) {
          cVar10 = FUN_140c88550(param_1);
          cVar9 = DAT_1410b674a;
          if (cVar10 != '\0') {
            cVar9 = DAT_14167ec9a;
          }
          if (cVar9 != '\0') {
            puVar1 = (uint *)(lVar19 + 0x10);
            *puVar1 = *puVar1 | 0x80000;
            FUN_1407f0860(**(undefined8 **)(lVar18 + *(longlong *)(param_1 + 0x3f8)),3);
          }
        }
      }
      else {
        if ((DAT_141c34350 & 8) != 0) goto LAB_140c2d0db;
LAB_140c2d310:
        if (DAT_1410b67dc == 0) goto LAB_140c2d319;
      }
      lVar19 = **(longlong **)(lVar18 + *(longlong *)(param_1 + 0x3f8));
      iVar17 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
      if (-1 < iVar17) {
        lVar18 = (longlong)iVar17 * 8;
        do {
          plVar14 = *(longlong **)(lVar18 + *(longlong *)(param_1 + 0x3f8));
          if (*plVar14 == lVar19) {
            sVar11 = (short)plVar14[1];
            if ((sVar11 == 6) || (sVar11 == 9)) {
              FUN_140c83ab0(param_1);
            }
            FUN_140c26640(param_1,iVar17);
          }
          lVar18 = lVar18 + -8;
          iVar17 = iVar17 + -1;
        } while (-1 < iVar17);
      }
      local_1a8 = (undefined2 *)CONCAT71(local_1a8._1_7_,1);
      FUN_140c2a430(param_1,lVar19,1);
      iVar5 = *(int *)(lVar19 + 0x1c);
      lVar18 = *(longlong *)(param_1 + 0x270);
      iVar17 = (int)(*(longlong *)(param_1 + 0x278) - lVar18 >> 2);
      if ((iVar17 != 0) && (iVar5 != -1)) {
        iVar20 = 0;
        iVar17 = iVar17 + -1;
        if (-1 < iVar17) {
          do {
            iVar13 = iVar20 + iVar17 >> 1;
            iVar23 = *(int *)(lVar18 + (longlong)iVar13 * 4);
            if (iVar23 == iVar5) {
              if (iVar13 != -1) {
                iVar20 = 0;
                iVar17 = (int)(*(longlong *)(param_1 + 0x278) - lVar18 >> 2) + -1;
                if (-1 < iVar17) goto LAB_140c2d480;
              }
              break;
            }
            if (iVar5 < iVar23) {
              iVar17 = iVar13 + -1;
            }
            else {
              iVar20 = iVar13 + 1;
            }
          } while (iVar20 <= iVar17);
        }
      }
      goto LAB_140c2d4c4;
    }
    if (((ushort)(sVar11 - 2U) < 5) || ((ushort)(sVar11 - 9U) < 2)) {
      bVar26 = (*(byte *)(*(longlong *)(param_1 + 0x4d0) + (longlong)*(short *)(lVar7 + 10) * 4) & 2
               ) != 0;
      if (sVar11 == 4) {
        iVar17 = (int)(*(longlong *)(param_1 + 0x400) - lVar6 >> 3) + -1;
        if (-1 < iVar17) {
          lVar12 = (longlong)iVar17;
          plVar14 = (longlong *)(lVar6 + lVar12 * 8);
          do {
            sVar11 = *(short *)(*plVar14 + 8);
            if (((sVar11 == 2) || (sVar11 == 5)) &&
               (*(short *)(*plVar14 + 10) == *(short *)(lVar7 + 10))) break;
            iVar17 = iVar17 + -1;
            plVar14 = plVar14 + -1;
            lVar12 = lVar12 + -1;
          } while (-1 < lVar12);
        }
        if (iVar17 == -1) {
          bVar26 = true;
        }
      }
      bVar8 = true;
      if (bVar26) goto LAB_140c2d0b7;
    }
    else if ((sVar11 == 1) &&
            (sVar11 = *(short *)(lVar7 + 10), FUN_140c800d0(param_1), lVar19 = DAT_141d6dd50,
            *(char *)((longlong)sVar11 + *(longlong *)(param_1 + 0x12b8)) == '\0')) {
      bVar8 = true;
      sVar11 = FUN_140c80fd0(param_1,0,**(undefined8 **)(lVar18 + *(longlong *)(param_1 + 0x3f8)));
      if (sVar11 == -1) goto LAB_140c2d0b7;
      *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar18) + 10) = sVar11;
      lVar19 = DAT_141d6dd50;
    }
    goto LAB_140c2d6ac;
  }
LAB_140c2d6cf:
  if (cVar9 != '\0') {
    local_98 = 0xf;
    local_a0 = 0;
    local_b0 = 0;
    local_78 = 0xf;
    local_80 = 0;
    local_90 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_cc = 0;
    local_c4 = 0;
    local_bc = 0;
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_50 = 0xffffffff;
    local_4c = 0xffff;
    local_4a = 0x8ad08ad0;
    local_46 = 0x8ad0;
    local_d8[0] = 8;
    local_1a8 = local_d8;
    FUN_140c26f00(param_1,0,0,CONCAT71((int7)(uVar22 >> 8),1));
    FUN_1400ff040(local_d8);
  }
  return;
  while( true ) {
    if (iVar5 < iVar23) {
      iVar17 = iVar13 + -1;
    }
    else {
      iVar20 = iVar13 + 1;
    }
    if (iVar17 < iVar20) break;
LAB_140c2d480:
    iVar13 = iVar17 + iVar20 >> 1;
    iVar23 = *(int *)(lVar18 + (longlong)iVar13 * 4);
    if (iVar23 == iVar5) {
      pvVar3 = (void *)(lVar18 + (longlong)iVar13 * 4);
      pvVar2 = (void *)((longlong)pvVar3 + 4);
      memmove(pvVar3,pvVar2,*(longlong *)(param_1 + 0x278) - (longlong)pvVar2);
      *(longlong *)(param_1 + 0x278) = *(longlong *)(param_1 + 0x278) + -4;
      break;
    }
  }
LAB_140c2d4c4:
  iVar5 = *(int *)(lVar19 + 0x1c);
  lVar18 = *(longlong *)(param_1 + 0x1f0);
  iVar17 = (int)(*(longlong *)(param_1 + 0x1f8) - lVar18 >> 2);
  if ((iVar17 != 0) && (iVar5 != -1)) {
    iVar20 = 0;
    iVar17 = iVar17 + -1;
    if (-1 < iVar17) {
      do {
        iVar13 = iVar17 + iVar20 >> 1;
        iVar23 = *(int *)(lVar18 + (longlong)iVar13 * 4);
        if (iVar23 == iVar5) {
          if (iVar13 != -1) {
            iVar20 = 0;
            iVar17 = (int)(*(longlong *)(param_1 + 0x1f8) - lVar18 >> 2) + -1;
            if (-1 < iVar17) goto LAB_140c2d550;
          }
          break;
        }
        if (iVar5 < iVar23) {
          iVar17 = iVar13 + -1;
        }
        else {
          iVar20 = iVar13 + 1;
        }
      } while (iVar20 <= iVar17);
    }
  }
LAB_140c2d594:
  plVar14 = (longlong *)(param_1 + 0x208);
  lVar18 = 4;
LAB_140c2d5a1:
  iVar5 = *(int *)(lVar19 + 0x1c);
  lVar6 = *plVar14;
  iVar17 = (int)(plVar14[1] - lVar6 >> 2);
  if ((iVar17 != 0) && (iVar5 != -1)) {
    iVar23 = 0;
    iVar20 = iVar17 + -1;
    if (-1 < iVar20) {
      do {
        iVar15 = iVar20 + iVar23 >> 1;
        iVar13 = *(int *)(lVar6 + (longlong)iVar15 * 4);
        if (iVar13 == iVar5) {
          if (iVar15 != -1) {
            iVar20 = 0;
            iVar17 = iVar17 + -1;
            if (-1 < iVar17) goto LAB_140c2d620;
          }
          break;
        }
        if (iVar5 < iVar13) {
          iVar20 = iVar15 + -1;
        }
        else {
          iVar23 = iVar15 + 1;
        }
      } while (iVar23 <= iVar20);
    }
  }
  goto LAB_140c2d661;
  while( true ) {
    if (iVar5 < iVar23) {
      iVar17 = iVar13 + -1;
    }
    else {
      iVar20 = iVar13 + 1;
    }
    if (iVar17 < iVar20) break;
LAB_140c2d550:
    iVar13 = iVar17 + iVar20 >> 1;
    iVar23 = *(int *)(lVar18 + (longlong)iVar13 * 4);
    if (iVar23 == iVar5) {
      pvVar3 = (void *)(lVar18 + (longlong)iVar13 * 4);
      pvVar2 = (void *)((longlong)pvVar3 + 4);
      memmove(pvVar3,pvVar2,*(longlong *)(param_1 + 0x1f8) - (longlong)pvVar2);
      *(longlong *)(param_1 + 0x1f8) = *(longlong *)(param_1 + 0x1f8) + -4;
      break;
    }
  }
  goto LAB_140c2d594;
  while( true ) {
    if (iVar5 < iVar23) {
      iVar17 = iVar13 + -1;
    }
    else {
      iVar20 = iVar13 + 1;
    }
    if (iVar17 < iVar20) break;
LAB_140c2d620:
    iVar13 = iVar17 + iVar20 >> 1;
    iVar23 = *(int *)(lVar6 + (longlong)iVar13 * 4);
    if (iVar23 == iVar5) {
      pvVar3 = (void *)(lVar6 + (longlong)iVar13 * 4);
      pvVar2 = (void *)((longlong)pvVar3 + 4);
      memmove(pvVar3,pvVar2,plVar14[1] - (longlong)pvVar2);
      plVar14[1] = plVar14[1] + -4;
      break;
    }
  }
LAB_140c2d661:
  plVar14 = plVar14 + 3;
  lVar18 = lVar18 + -1;
  if (lVar18 == 0) goto code_r0x000140c2d66f;
  goto LAB_140c2d5a1;
code_r0x000140c2d66f:
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) | 1;
  lVar19 = DAT_141d6dd50;
  if ((int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) < iVar25) {
    iVar25 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3);
  }
LAB_140c2d6ac:
  iVar25 = iVar25 + -1;
  uVar22 = (ulonglong)local_198;
  if (iVar25 < 0) goto code_r0x000140c2d6c3;
  goto LAB_140c2ce20;
code_r0x000140c2d6c3:
  cVar9 = (char)local_194;
  goto LAB_140c2d6cf;
}

