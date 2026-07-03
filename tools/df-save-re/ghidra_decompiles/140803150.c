// FUN_140803150 @ 140803150
// callees:
//   -> 140c63d90 FUN_140c63d90
//   -> 14000c2d0 FUN_14000c2d0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140c2ab20 FUN_140c2ab20
//   -> 140cec410 FUN_140cec410
//   -> 140cec360 FUN_140cec360
//   -> 140c2efa0 FUN_140c2efa0
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1407f2110 FUN_1407f2110
//   -> 140c33070 FUN_140c33070
//   -> 140002020 FUN_140002020
//   -> 140074660 FUN_140074660
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140803150(longlong ****param_1,char param_2,undefined1 param_3,ulonglong param_4)

{
  undefined2 uVar1;
  longlong ******pppppplVar2;
  byte bVar3;
  longlong ******pppppplVar4;
  int iVar5;
  longlong *******ppppppplVar6;
  int iVar7;
  uint uVar8;
  longlong *******ppppppplVar9;
  longlong lVar10;
  longlong *****ppppplVar11;
  char *pcVar12;
  longlong *******ppppppplVar13;
  longlong *******ppppppplVar14;
  ulonglong uVar15;
  longlong *******ppppppplVar16;
  longlong *******ppppppplVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined7 uVar20;
  longlong *******ppppppplVar21;
  longlong *******ppppppplVar22;
  bool bVar23;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined2 local_140;
  undefined4 local_138;
  char local_128;
  char local_127;
  undefined2 local_124;
  longlong *******local_120;
  uint local_118;
  longlong *******local_110;
  longlong ******local_108;
  int local_100;
  longlong *******local_f8;
  longlong *******ppppppplStack_f0;
  longlong *******local_e8;
  longlong *******local_e0;
  longlong *******ppppppplStack_d8;
  longlong *******local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  ulonglong local_88;
  uint local_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  longlong ******local_58;
  longlong ******local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_c8 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_188;
  local_127 = (char)param_4;
  local_124 = CONCAT11(local_124._1_1_,param_3);
  local_118 = local_118 & 0xffffff00;
  local_f8 = (longlong *******)0x0;
  ppppppplStack_f0 = (longlong *******)0x0;
  ppppppplVar16 = (longlong *******)0x0;
  local_120 = (longlong *******)0x0;
  local_e8 = (longlong *******)0x0;
  local_e0 = (longlong *******)0x0;
  ppppppplStack_d8 = (longlong *******)0x0;
  local_110 = (longlong *******)0x0;
  local_d0 = (longlong *******)0x0;
  local_100 = -1;
  iVar7 = (int)((longlong)param_1[8] - (longlong)param_1[7] >> 3) + -1;
  local_108 = (longlong ******)(longlong)iVar7;
  ppppppplVar14 = (longlong *******)0x0;
  ppppppplVar21 = (longlong *******)0x0;
  ppppppplVar17 = (longlong *******)0x0;
  ppppppplVar22 = ppppppplVar16;
  local_128 = param_2;
  ppppppplVar9 = local_120;
  if (-1 < iVar7) {
    do {
      iVar7 = (*(code *)(*param_1[7][(longlong)local_108])[2])();
      if ((iVar7 == 0x12) &&
         (ppppppplVar9 = (longlong *******)(*(code *)(*param_1[7][(longlong)local_108])[4])(),
         local_120 = ppppppplVar9, ppppppplVar9 != (longlong *******)0x0)) {
        iVar7 = (int)((longlong)ppppppplVar9[0x80] - (longlong)ppppppplVar9[0x7f] >> 3) + -1;
        lVar10 = (longlong)iVar7;
        bVar23 = iVar7 < 0;
        while (!bVar23) {
          if ((*ppppppplVar9[0x7f][lVar10] == param_1) &&
             (*(short *)(ppppppplVar9[0x7f][lVar10] + 1) == 6)) {
            iVar7 = 0;
            goto LAB_1408032bb;
          }
          lVar10 = lVar10 + -1;
          bVar23 = lVar10 < 0;
        }
        local_138 = 0xffffffff;
        local_140 = 0xffff;
        local_148 = 9;
        local_150 = 0;
        local_158 = 0;
        local_160 = 3;
        local_168 = 0x32;
        param_4 = 0;
        iVar7 = FUN_140c63d90(ppppppplVar9,6,0x1f);
LAB_1408032bb:
        ppppppplVar13 = ppppppplVar21;
        iVar5 = iVar7;
        ppppppplVar6 = ppppppplVar21;
        if ((local_100 < iVar7) ||
           (ppppppplVar13 = ppppppplVar14, iVar5 = local_100, ppppppplVar6 = ppppppplStack_f0,
           iVar7 == local_100)) {
          ppppppplStack_f0 = ppppppplVar6;
          local_100 = iVar5;
          if ((&local_120 < ppppppplVar13) && (ppppppplVar21 <= &local_120)) {
            lVar10 = (longlong)&local_120 - (longlong)ppppppplVar21;
            if (ppppppplVar13 == ppppppplVar16) {
              FUN_14000c2d0(&local_f8,1);
              ppppppplVar13 = ppppppplStack_f0;
              ppppppplVar21 = local_f8;
              ppppppplVar16 = local_e8;
            }
            ppppppplVar22 = local_110;
            if (ppppppplVar13 != (longlong *******)0x0) {
              *ppppppplVar13 = ppppppplVar21[lVar10 >> 3];
            }
          }
          else {
            if (ppppppplVar13 == ppppppplVar16) {
              FUN_14000c2d0(&local_f8,1);
              ppppppplVar13 = ppppppplStack_f0;
              ppppppplVar21 = local_f8;
              ppppppplVar16 = local_e8;
            }
            if (ppppppplVar13 != (longlong *******)0x0) {
              *ppppppplVar13 = (longlong ******)ppppppplVar9;
            }
          }
          ppppppplVar14 = ppppppplVar13 + 1;
          ppppppplStack_f0 = ppppppplVar14;
        }
        if ((&local_120 < ppppppplVar17) && (local_e0 <= &local_120)) {
          lVar10 = (longlong)&local_120 - (longlong)local_e0;
          if (ppppppplVar17 == local_110) {
            FUN_14000c2d0(&local_e0,1);
            local_110 = local_d0;
            ppppppplVar17 = ppppppplStack_d8;
          }
          if (ppppppplVar17 != (longlong *******)0x0) {
            *ppppppplVar17 = local_e0[lVar10 >> 3];
          }
        }
        else {
          if (ppppppplVar17 == ppppppplVar22) {
            FUN_14000c2d0(&local_e0,1);
            local_110 = local_d0;
            ppppppplVar17 = ppppppplStack_d8;
          }
          if (ppppppplVar17 != (longlong *******)0x0) {
            *ppppppplVar17 = (longlong ******)ppppppplVar9;
          }
        }
        ppppppplVar17 = ppppppplVar17 + 1;
        ppppppplVar22 = local_110;
        ppppppplStack_d8 = ppppppplVar17;
        if ((DAT_1410b67dc == 1) &&
           (local_118 = local_118 & 0xff, ppppppplVar9 == (longlong *******)*DAT_141c66fe8)) {
          local_118 = 1;
        }
      }
      local_108 = (longlong ******)((longlong)local_108 + -1);
      ppppppplVar9 = ppppppplVar16;
    } while (-1 < (longlong)local_108);
  }
  local_120 = ppppppplVar9;
  iVar7 = 0;
  uVar8 = 0;
  uVar15 = (longlong)ppppppplVar14 - (longlong)ppppppplVar21 >> 3;
  if (uVar15 == 0) goto LAB_140803aa5;
  if (1 < (uint)uVar15) {
    uVar8 = FUN_1409fc0c0();
    uVar8 = (uVar8 + (int)((longlong)((ulonglong)uVar8 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar15 & 0xffffffff)) + 1U);
  }
  local_108 = (longlong ******)0x0;
  uVar15 = (longlong)ppppppplVar17 - (longlong)local_e0 >> 3;
  if (uVar15 != 0) {
    ppppppplVar14 = local_e0;
    do {
      if (*ppppppplVar14 != ppppppplVar21[(int)uVar8]) {
        local_168 = CONCAT31(local_168._1_3_,1);
        FUN_140c2ab20(*ppppppplVar14,param_1,0);
        local_108 = *ppppppplVar14;
      }
      iVar7 = iVar7 + 1;
      ppppppplVar14 = ppppppplVar14 + 1;
    } while ((ulonglong)(longlong)iVar7 < uVar15);
  }
  pppppplVar4 = local_108;
  if (((ulonglong)param_1[2] & 0x40000) != 0) {
    FUN_140cec410(ppppppplVar21[(int)uVar8],param_1);
  }
  if ((*(byte *)((longlong)param_1 + 0x14) & 0x20) != 0) {
    FUN_140cec360(ppppppplVar21[(int)uVar8],param_1);
  }
  if ((((char)local_118 == '\0') && (local_127 == '\0')) || ((char)local_124 == '\0'))
  goto LAB_140803aa5;
  if (DAT_1410b67dc == 0) {
    bVar3 = DAT_141c34534 & 0x70;
  }
  else {
    bVar3 = DAT_141c34534 & 8;
  }
  if (bVar3 == 0) goto LAB_140803aa5;
  local_a8 = 0xf;
  iVar7 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_88 = 0xf;
  local_90 = 0;
  local_a0 = 0;
  if ((char)local_118 == '\0') {
    uVar15 = param_4 & 0xffffffffffffff00;
    bVar23 = false;
    ppppppplVar14 = ppppppplVar21 + (int)uVar8;
    pppppplVar2 = *ppppppplVar14;
    uVar1 = local_124;
    if ((longlong)pppppplVar2[0x80] - (longlong)pppppplVar2[0x7f] >> 3 != 0) {
      ppppplVar11 = pppppplVar2[0x7f];
      do {
        if (((longlong ****)**ppppplVar11 == param_1) && (*(short *)(*ppppplVar11 + 1) == 6)) {
          uVar15 = CONCAT71((int7)(param_4 >> 8),1);
          bVar23 = true;
          uVar1 = *(undefined2 *)((longlong)pppppplVar2[0x7f][iVar7] + 10);
          break;
        }
        iVar7 = iVar7 + 1;
        ppppplVar11 = ppppplVar11 + 1;
      } while ((ulonglong)(longlong)iVar7 <
               (ulonglong)((longlong)pppppplVar2[0x80] - (longlong)pppppplVar2[0x7f] >> 3));
    }
    uVar20 = (undefined7)(uVar15 >> 8);
    if (local_128 == '\0') {
      if (bVar23) {
        FUN_14000c9f0(&local_c0,&DAT_140e5de34,4);
        FUN_1407f2110(param_1,&local_a0,0,0xffffffff);
        FUN_14000cb40(&local_c0,&local_a0,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_c0," remains stuck in ",0x12);
        local_60 = 0xf;
        local_68 = 0;
        local_78 = local_78 & 0xffffff00;
        local_168 = CONCAT31(local_168._1_3_,1);
        FUN_140c2efa0(*ppppppplVar14,&local_78,1,1);
        FUN_14000cb40(&local_c0,&local_78,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_c0,&DAT_140e5e008,3);
        FUN_140c33070(*ppppppplVar14,&local_a0,uVar1);
        FUN_14000cb40(&local_c0,&local_a0,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_c0,&DAT_140e597bc,1);
      }
      else {
        local_60 = 0xf;
        local_68 = 0;
        local_78 = (uint)local_78._1_3_ << 8;
        local_168 = CONCAT31(local_168._1_3_,1);
        FUN_140c2efa0(pppppplVar2,&local_78,1,CONCAT71(uVar20,1));
        FUN_14000cb40(&local_c0,&local_78,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_c0," maintains possession of the ",0x1d);
        FUN_1407f2110(param_1,&local_a0,0,0xffffffff);
        FUN_14000cb40(&local_c0,&local_a0,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_c0,&DAT_140e597bc,1);
      }
    }
    else {
      local_60 = 0xf;
      local_68 = 0;
      local_78 = (uint)local_78._1_3_ << 8;
      local_168 = CONCAT31(local_168._1_3_,1);
      FUN_140c2efa0(pppppplVar2,&local_78,1,CONCAT71(uVar20,1));
      FUN_14000cb40(&local_c0,&local_78,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_c0," gains possession of the ",0x19);
      FUN_1407f2110(param_1,&local_a0,0,0xffffffff);
      FUN_14000cb40(&local_c0,&local_a0,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_c0,&DAT_140e597bc,1);
    }
    if (0xf < local_60) {
      FUN_140002020(CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT14(uStack_74,local_78))),
                    local_60 + 1,1);
    }
  }
  else {
    bVar23 = false;
    pppppplVar2 = (longlong ******)*DAT_141c66fe8;
    uVar1 = local_124;
    if ((longlong)pppppplVar2[0x80] - (longlong)pppppplVar2[0x7f] >> 3 != 0) {
      ppppplVar11 = pppppplVar2[0x7f];
      do {
        if (((longlong ****)**ppppplVar11 == param_1) && (*(short *)(*ppppplVar11 + 1) == 6)) {
          bVar23 = true;
          uVar1 = *(undefined2 *)((longlong)pppppplVar2[0x7f][iVar7] + 10);
          break;
        }
        iVar7 = iVar7 + 1;
        ppppplVar11 = ppppplVar11 + 1;
      } while ((ulonglong)(longlong)iVar7 <
               (ulonglong)((longlong)pppppplVar2[0x80] - (longlong)pppppplVar2[0x7f] >> 3));
    }
    ppppppplVar14 = ppppppplVar21 + (int)uVar8;
    if (pppppplVar2 == *ppppppplVar14) {
      if (local_128 == '\0') {
        if (bVar23) {
          FUN_14000c9f0(&local_c0,&DAT_140e5de34,4);
          FUN_1407f2110(param_1,&local_a0,0,0xffffffff);
          FUN_14000cb40(&local_c0,&local_a0,0,0xffffffffffffffff);
          uVar18 = 0x17;
          pcVar12 = " remains stuck in your ";
          goto LAB_14080390c;
        }
        uVar19 = 0x1f;
        pcVar12 = "You maintain possession of the ";
      }
      else {
        uVar19 = 0x1b;
        pcVar12 = "You gain possession of the ";
      }
LAB_1408039a5:
      FUN_14000c9f0(&local_c0,pcVar12,uVar19);
      FUN_1407f2110(param_1,&local_a0,0,0xffffffff);
    }
    else {
      if (!bVar23) {
        uVar19 = 0x1e;
        pcVar12 = "You\'ve lost possession of the ";
        goto LAB_1408039a5;
      }
      FUN_14000c9f0(&local_c0,&DAT_140e5de34,4);
      FUN_1407f2110(param_1,&local_a0,0,0xffffffff);
      FUN_14000cb40(&local_c0,&local_a0,0,0xffffffffffffffff);
      uVar18 = 0x13;
      pcVar12 = " is torn from your ";
LAB_14080390c:
      FUN_14000c9f0(&local_c0,pcVar12,uVar18);
      FUN_140c33070(*DAT_141c66fe8,&local_a0,uVar1);
    }
    FUN_14000cb40(&local_c0,&local_a0,0,0xffffffffffffffff);
    FUN_14000c9f0(&local_c0,&DAT_140e597bc,1);
  }
  local_6c = 0;
  local_68 = CONCAT26(local_68._6_2_,0x8ad08ad08ad0);
  local_48 = 0xffffffff;
  local_44 = 0xffffffff;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_78 = 0x500ed;
  uStack_74 = 1;
  local_60 = local_60 & 0xffff000000000000;
  local_58 = *ppppppplVar14;
  uStack_72 = *(undefined2 *)(local_58 + 0x15);
  local_70 = *(undefined2 *)((longlong)local_58 + 0xaa);
  local_6e = *(undefined2 *)((longlong)local_58 + 0xac);
  local_50 = pppppplVar4;
  FUN_140074660(&DAT_141d64dc8,&local_c0,&local_78);
  if (0xf < local_88) {
    FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
  }
  local_88 = 0xf;
  local_90 = 0;
  local_a0 = 0;
  if (0xf < local_a8) {
    FUN_140002020(CONCAT71(uStack_bf,local_c0),local_a8 + 1,1);
  }
LAB_140803aa5:
  if (local_e0 != (longlong *******)0x0) {
    FUN_140002020(local_e0,(longlong)local_110 - (longlong)local_e0 >> 3,8);
  }
  if (ppppppplVar21 != (longlong *******)0x0) {
    FUN_140002020(ppppppplVar21,(longlong)local_120 - (longlong)ppppppplVar21 >> 3,8);
  }
  return;
}

