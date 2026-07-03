// FUN_140c5dc80 @ 140c5dc80
// callees:
//   -> 14000f360 FUN_14000f360
//   -> 140c5f100 FUN_140c5f100
//   -> 1406d1dd0 FUN_1406d1dd0
//   -> 1405b0560 FUN_1405b0560
//   -> 140d1d410 FUN_140d1d410
//   -> 140c88550 FUN_140c88550
//   -> 1400199b0 FUN_1400199b0
//   -> 140c30b20 FUN_140c30b20
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14014b6b0 FUN_14014b6b0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000cb40 FUN_14000cb40
//   -> 140074660 FUN_140074660
//   -> 140002020 FUN_140002020
//   -> 14000c780 FUN_14000c780
//   -> 14000efd0 FUN_14000efd0
//   -> 14073bc10 FUN_14073bc10
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> 140c84550 FUN_140c84550
//   -> 140c844c0 FUN_140c844c0
//   -> 14000d840 FUN_14000d840
//   -> 140669610 FUN_140669610
//   -> 140c26470 FUN_140c26470
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c5dc80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  short sVar7;
  longlong lVar8;
  char *pcVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  char *pcVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_40;
  undefined7 uStack_3f;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_78 = 0xfffffffffffffffe;
  local_20 = DAT_1410b5008 ^ (ulonglong)auStack_d8;
  if (DAT_1410b67dc != 0) {
    return;
  }
  uVar13 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  iVar17 = 0;
  if (((iVar1 != -1) && (lVar8 = DAT_141c53720 - DAT_141c53718 >> 3, lVar8 != 0)) &&
     (iVar14 = (int)lVar8 + -1, -1 < iVar14)) {
    do {
      iVar11 = iVar14 + iVar17 >> 1;
      lVar8 = *(longlong *)(DAT_141c53718 + (longlong)iVar11 * 8);
      if (*(int *)(lVar8 + 4) == iVar1) {
        if (((lVar8 != 0) && (0 < *(int *)(*(longlong *)(lVar8 + 8) + 0x3a8))) &&
           ((**(byte **)(*(longlong *)(lVar8 + 8) + 0x3a0) & 0x40) != 0)) {
          uVar13 = 1;
        }
        break;
      }
      if (iVar1 < *(int *)(lVar8 + 4)) {
        iVar14 = iVar11 + -1;
      }
      else {
        iVar17 = iVar11 + 1;
      }
    } while (iVar17 <= iVar14);
  }
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffbffff;
  if ((*(int *)(param_1 + 0x3b8) == -1) || (lVar8 = FUN_14000f360(&DAT_141c66fd0), lVar8 == 0)) {
    lVar8 = param_1;
  }
  FUN_140c5f100(lVar8,uVar13);
  if (DAT_1410b67dc == 0) {
    FUN_1406d1dd0(*(undefined2 *)(param_1 + 0xa4));
    lVar8 = FUN_1405b0560(&DAT_141c536c8,param_1 + 0x318);
    if (lVar8 != 0) {
      FUN_140d1d410(lVar8);
    }
  }
  if (((0 < *(short *)(param_1 + 0x7e4)) || (9 < *(short *)(param_1 + 0x7e8))) ||
     (bVar18 = false, 99 < *(int *)(param_1 + 0x958))) {
    bVar18 = true;
  }
  cVar4 = FUN_140c88550(param_1);
  if (cVar4 != '\0') {
    return;
  }
  if (((*(int *)(param_1 + 0x140) != -1) && (lVar8 = FUN_1400199b0(&DAT_141c53718), lVar8 != 0)) &&
     ((*(uint *)(lVar8 + 0x94) & 1) != 0)) {
    *(uint *)(lVar8 + 0x94) = *(uint *)(lVar8 + 0x94) | 2;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x114) >> 0x12 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x114) & 0x480000) == 0) {
        if ((*(longlong *)(param_1 + 0x11e8) != 0) &&
           (*(int *)(*(longlong *)(param_1 + 0x11e8) + 0xc0) == 0x11)) {
          local_28 = 0xf;
          local_30 = 0;
          local_40 = '\0';
          FUN_140c30b20(param_1,&local_40);
          FUN_14000c9f0(&local_40," was spotted sneaking around!",0x1d);
          FUN_14014b6b0(&local_40);
          cVar4 = FUN_14000efd0(param_1);
          bVar18 = false;
          lVar8 = *(longlong *)(param_1 + 0xa78);
          if (lVar8 != 0) {
            lVar2 = *(longlong *)(lVar8 + 0x3a0);
            sVar7 = *(short *)(lVar8 + 0x2d2);
            if (((lVar2 != 0) &&
                (sVar10 = *(short *)(lVar8 + 0x2d2) + *(short *)(lVar2 + 10), sVar7 = 0, -1 < sVar10
                )) && (sVar7 = sVar10, 100 < sVar10)) {
              sVar7 = 100;
            }
            sVar10 = *(short *)(lVar8 + 0x2d4);
            if (((lVar2 != 0) &&
                (sVar5 = *(short *)(lVar8 + 0x2d4) + *(short *)(lVar2 + 0xc), sVar10 = 0, -1 < sVar5
                )) && (sVar10 = sVar5, 100 < sVar5)) {
              sVar10 = 100;
            }
            if (sVar10 < sVar7) {
              bVar18 = cVar4 != '\0';
              if (bVar18) {
                FUN_14000c9f0(&local_40,"  \"You will not stand between me and ",0x25);
                puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x11e8) + 0xb8);
                FUN_14073bc10(puVar3,&local_40,*puVar3);
                FUN_14000c9f0(&local_40,&DAT_140f5e978,2);
              }
              uStack_6c = 0xffffffff;
              local_68 = 0;
              uStack_64 = 100;
              local_60 = 0;
              local_58 = 0;
              uStack_50 = 0;
              local_48 = 0;
              local_70 = 0xee;
              lVar8 = *(longlong *)(param_1 + 0xa78);
              if (((lVar8 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
                 ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
                cVar4 = FUN_140106f30(param_1);
                FUN_1409165e0(lVar8 + 0x248,&local_70,cVar4 != '\0');
              }
            }
            else if (cVar4 != '\0') {
              FUN_14000c9f0(&local_40,"  \"I\'ll live to fight another day!\"",0x23);
              bVar18 = true;
            }
          }
          local_ac = 0;
          local_a8 = 0x8ad08ad0;
          local_a4 = 0x8ad0;
          local_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0xffffffffffffffff;
          local_80 = 0xffffffff;
          local_7c = 0;
          uVar6 = 0x37;
          if (bVar18) {
            uVar6 = 0x140;
          }
          local_b8 = CONCAT22(4,uVar6);
          local_b4 = 1;
          local_9c = 5000;
          local_b2 = *(undefined2 *)(param_1 + 0xa8);
          local_b0 = *(undefined2 *)(param_1 + 0xaa);
          local_ae = *(undefined2 *)(param_1 + 0xac);
          FUN_140074660(&DAT_141d64dc8,&local_40,&local_b8);
LAB_140c5f0b3:
          if (local_28 < 0x10) {
            return;
          }
          uVar13 = CONCAT71(uStack_3f,local_40);
          uVar16 = local_28;
          goto LAB_140c5f0c1;
        }
        if (*(longlong *)(param_1 + 0x4b8) == 0) {
          uVar12 = *(uint *)(param_1 + 0x118) & 0x20000;
        }
        else {
          uVar12 = (uint)(*(short *)(*(longlong *)(param_1 + 0x4b8) + 0x14) == 0xde);
        }
        if (uVar12 == 0) {
          cVar4 = FUN_140c84550(param_1,8);
          if (cVar4 == '\0') {
            sVar7 = *(short *)(param_1 + 300);
            sVar10 = *(short *)(param_1 + 0xa4);
            if (((-1 < sVar10) &&
                ((ulonglong)(longlong)sVar10 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
               (-1 < sVar7)) {
              lVar8 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar10 * 8);
              if (((ulonglong)(longlong)sVar7 <
                   (ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3)) &&
                 (cVar4 = FUN_14000d840(*(longlong *)
                                         (*(longlong *)(lVar8 + 0x178) + (longlong)sVar7 * 8) +
                                        0x6a8,3), cVar4 != '\0')) {
                if (bVar18) goto LAB_140c5ef94;
                local_28 = 0xf;
                local_30 = 0;
                local_40 = '\0';
                FUN_14000c780(&local_40,&DAT_140e5dafc,2);
                local_58 = 0xf;
                local_60 = 0;
                uStack_5c = 0;
                local_70 = local_70 & 0xffffff00;
                FUN_140669610(*(undefined2 *)(param_1 + 0xa4),&local_70,0,
                              *(undefined2 *)(param_1 + 300));
                FUN_14000cb40(&local_40,&local_70,0,0xffffffffffffffff);
                FUN_14000c9f0(&local_40,"!  Drive it away!",0x11);
                local_ac = 0;
                local_a8 = 0x8ad08ad0;
                local_a4 = 0x8ad0;
                local_a0 = 0;
                local_98 = 0;
                uStack_90 = 0;
                local_88 = 0xffffffffffffffff;
                local_80 = 0xffffffff;
                local_7c = 0;
                local_b8 = 0x4003b;
                local_b4 = 1;
                local_9c = 5000;
                local_b2 = *(undefined2 *)(param_1 + 0xa8);
                local_b0 = *(undefined2 *)(param_1 + 0xaa);
                local_ae = *(undefined2 *)(param_1 + 0xac);
                FUN_140074660(&DAT_141d64dc8,&local_40,&local_b8);
                if (0xf < local_58) {
                  FUN_140002020(CONCAT44(uStack_6c,local_70),local_58 + 1,1);
                }
                local_58 = 0xf;
                local_60 = 0;
                uStack_5c = 0;
                local_70 = local_70 & 0xffffff00;
                goto LAB_140c5f0b3;
              }
            }
            cVar4 = FUN_140c84550(param_1,7);
            if (cVar4 == '\0') {
              cVar4 = FUN_140c84550(param_1,6);
              if (cVar4 == '\0') {
                if (!bVar18) {
                  cVar4 = FUN_140c26470(param_1);
                  local_28 = 0xf;
                  local_30 = 0;
                  local_40 = '\0';
                  if (cVar4 == '\0') {
                    FUN_14000c780(&local_40,&DAT_140e5dafc,2);
                    local_58 = 0xf;
                    local_60 = 0;
                    uStack_5c = 0;
                    local_70 = local_70 & 0xffffff00;
                    FUN_140669610(*(undefined2 *)(param_1 + 0xa4),&local_70,0,
                                  *(undefined2 *)(param_1 + 300));
                    FUN_14000cb40(&local_40,&local_70,0,0xffffffffffffffff);
                    FUN_14000c9f0(&local_40," has sprung from ambush!",0x18);
                    local_ac = 0;
                    local_a8 = 0x8ad08ad0;
                    local_a4 = 0x8ad0;
                    local_a0 = 0;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_88 = 0xffffffffffffffff;
                    local_80 = 0xffffffff;
                    local_7c = 0;
                    local_b8 = 0x40041;
                    local_b4 = 1;
                    local_9c = 5000;
                    local_b2 = *(undefined2 *)(param_1 + 0xa8);
                    local_b0 = *(undefined2 *)(param_1 + 0xaa);
                    local_ae = *(undefined2 *)(param_1 + 0xac);
                    FUN_140074660(&DAT_141d64dc8,&local_40,&local_b8);
                    if (0xf < local_58) {
                      FUN_140002020(CONCAT44(uStack_6c,local_70),local_58 + 1,1);
                    }
                    local_58 = 0xf;
                    local_60 = 0;
                    uStack_5c = 0;
                    local_70 = local_70 & 0xffffff00;
                  }
                  else {
                    FUN_14000c780(&local_40,"An injured ",0xb);
                    local_58 = 0xf;
                    local_60 = 0;
                    uStack_5c = 0;
                    local_70 = local_70 & 0xffffff00;
                    FUN_140669610(*(undefined2 *)(param_1 + 0xa4),&local_70,0,
                                  *(undefined2 *)(param_1 + 300));
                    FUN_14000cb40(&local_40,&local_70,0,0xffffffffffffffff);
                    FUN_14000c9f0(&local_40," has sprung from ambush!",0x18);
                    local_ac = 0;
                    local_a8 = 0x8ad08ad0;
                    local_a4 = 0x8ad0;
                    local_a0 = 0;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_88 = 0xffffffffffffffff;
                    local_80 = 0xffffffff;
                    local_7c = 0;
                    local_b8 = 0x40040;
                    local_b4 = 1;
                    local_9c = 5000;
                    local_b2 = *(undefined2 *)(param_1 + 0xa8);
                    local_b0 = *(undefined2 *)(param_1 + 0xaa);
                    local_ae = *(undefined2 *)(param_1 + 0xac);
                    FUN_140074660(&DAT_141d64dc8,&local_40,&local_b8);
                    if (0xf < local_58) {
                      FUN_140002020(CONCAT44(uStack_6c,local_70),local_58 + 1,1);
                    }
                    local_58 = 0xf;
                    local_60 = 0;
                    uStack_5c = 0;
                    local_70 = local_70 & 0xffffff00;
                  }
                  goto LAB_140c5f0b3;
                }
              }
              else if (!bVar18) {
                sVar7 = FUN_140c844c0(param_1,3);
                if (((((int)sVar7 - 8U < 8) ||
                     (sVar7 = FUN_140c844c0(param_1,4), (int)sVar7 - 8U < 8)) &&
                    ((DAT_141c3d250 != 0 &&
                     ((*(short *)(DAT_141c3d250 + 0xcea) == 1 ||
                      (*(short *)(DAT_141c3d250 + 0xcea) == 0x10)))))) &&
                   ((*(short *)(DAT_141c3d250 + 0xcec) == 1 ||
                    (*(short *)(DAT_141c3d250 + 0xcec) == 0x10)))) {
                  local_ac = 0;
                  local_a8 = 0x8ad08ad0;
                  local_a4 = 0x8ad0;
                  local_a0 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  local_88 = 0xffffffffffffffff;
                  local_80 = 0xffffffff;
                  local_7c = 0;
                  local_b8 = 0x4003e;
                  local_b4 = 1;
                  local_9c = 5000;
                  local_b2 = *(undefined2 *)(param_1 + 0xa8);
                  local_b0 = *(undefined2 *)(param_1 + 0xaa);
                  local_ae = *(undefined2 *)(param_1 + 0xac);
                  local_58 = 0xf;
                  local_60 = 0;
                  uStack_5c = 0;
                  local_70 = local_70 & 0xffffff00;
                  FUN_14000c780(&local_70,"An ambush!  Curse all friends of nature!",0x28);
                  FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
                }
                else {
                  local_ac = 0;
                  local_a8 = 0x8ad08ad0;
                  local_a4 = 0x8ad0;
                  local_a0 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  local_88 = 0xffffffffffffffff;
                  local_80 = 0xffffffff;
                  local_7c = 0;
                  local_b8 = 0x4003f;
                  local_b4 = 1;
                  local_9c = 5000;
                  local_b2 = *(undefined2 *)(param_1 + 0xa8);
                  local_b0 = *(undefined2 *)(param_1 + 0xaa);
                  local_ae = *(undefined2 *)(param_1 + 0xac);
                  local_58 = 0xf;
                  local_60 = 0;
                  uStack_5c = 0;
                  local_70 = local_70 & 0xffffff00;
                  FUN_14000c780(&local_70,"An ambush!  Curse them!",0x17);
                  FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
                }
                goto LAB_140c5e024;
              }
              goto LAB_140c5ef94;
            }
            if ((ushort)(*(short *)(param_1 + 0xa0) - 100U) < 2) {
              if (bVar18) goto LAB_140c5ef94;
              local_ac = 0;
              local_a8 = 0x8ad08ad0;
              local_a4 = 0x8ad0;
              local_a0 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0xffffffffffffffff;
              local_80 = 0xffffffff;
              local_7c = 0;
              local_b8 = 0x4003c;
              local_b4 = 1;
              local_9c = 5000;
              local_b2 = *(undefined2 *)(param_1 + 0xa8);
              local_b0 = *(undefined2 *)(param_1 + 0xaa);
              local_ae = *(undefined2 *)(param_1 + 0xac);
              local_58 = 0xf;
              local_60 = 0;
              uStack_5c = 0;
              local_70 = (uint)local_70._1_3_ << 8;
              FUN_14000c780(&local_70,"Snatcher!  Protect the children!",0x20);
              FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
            }
            else {
              if (bVar18) goto LAB_140c5ef94;
              local_ac = 0;
              local_a8 = 0x8ad08ad0;
              local_a4 = 0x8ad0;
              local_a0 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0xffffffffffffffff;
              local_80 = 0xffffffff;
              local_7c = 0;
              local_b8 = 0x4003d;
              local_b4 = 1;
              local_9c = 5000;
              local_b2 = *(undefined2 *)(param_1 + 0xa8);
              local_b0 = *(undefined2 *)(param_1 + 0xaa);
              local_ae = *(undefined2 *)(param_1 + 0xac);
              local_58 = 0xf;
              local_60 = 0;
              uStack_5c = 0;
              local_70 = (uint)local_70._1_3_ << 8;
              FUN_14000c780(&local_70,"An ambush!  Curse them!",0x17);
              FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
            }
          }
          else if ((ushort)(*(short *)(param_1 + 0xa0) - 100U) < 2) {
            if (bVar18) goto LAB_140c5ef94;
            local_ac = 0;
            local_a8 = 0x8ad08ad0;
            local_a4 = 0x8ad0;
            local_a0 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0xffffffffffffffff;
            local_80 = 0xffffffff;
            local_7c = 0;
            local_b8 = 0x40037;
            local_b4 = 1;
            local_9c = 5000;
            local_b2 = *(undefined2 *)(param_1 + 0xa8);
            local_b0 = *(undefined2 *)(param_1 + 0xaa);
            local_ae = *(undefined2 *)(param_1 + 0xac);
            local_58 = 0xf;
            local_60 = 0;
            uStack_5c = 0;
            local_70 = local_70 & 0xffffff00;
            FUN_14000c780(&local_70,"Thief!  Protect the hoard from skulking filth!",0x2e);
            FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
          }
          else {
            cVar4 = FUN_140c84550(param_1,0x2d);
            if (cVar4 == '\0') {
              if (bVar18) goto LAB_140c5ef94;
              sVar7 = FUN_140c844c0(param_1,3);
              if ((((((int)sVar7 - 8U < 8) ||
                    (sVar7 = FUN_140c844c0(param_1,4), (int)sVar7 - 8U < 8)) && (DAT_141c3d250 != 0)
                   ) && ((*(short *)(DAT_141c3d250 + 0xcea) == 1 ||
                         (*(short *)(DAT_141c3d250 + 0xcea) == 0x10)))) &&
                 ((*(short *)(DAT_141c3d250 + 0xcec) == 1 ||
                  (*(short *)(DAT_141c3d250 + 0xcec) == 0x10)))) {
                local_ac = 0;
                local_a8 = 0x8ad08ad0;
                local_a4 = 0x8ad0;
                local_a0 = 0;
                local_98 = 0;
                uStack_90 = 0;
                local_88 = 0xffffffffffffffff;
                local_80 = 0xffffffff;
                local_7c = 0;
                local_b8 = 0x40039;
                local_b4 = 1;
                local_9c = 5000;
                local_b2 = *(undefined2 *)(param_1 + 0xa8);
                local_b0 = *(undefined2 *)(param_1 + 0xaa);
                local_ae = *(undefined2 *)(param_1 + 0xac);
                local_58 = 0xf;
                local_60 = 0;
                uStack_5c = 0;
                local_70 = local_70 & 0xffffff00;
                FUN_14000c780(&local_70,"An ambush!  Curse all friends of nature!",0x28);
                FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
              }
              else {
                local_ac = 0;
                local_a8 = 0x8ad08ad0;
                local_a4 = 0x8ad0;
                local_a0 = 0;
                local_98 = 0;
                uStack_90 = 0;
                local_88 = 0xffffffffffffffff;
                local_80 = 0xffffffff;
                local_7c = 0;
                local_b8 = 0x4003a;
                local_b4 = 1;
                local_9c = 5000;
                local_b2 = *(undefined2 *)(param_1 + 0xa8);
                local_b0 = *(undefined2 *)(param_1 + 0xaa);
                local_ae = *(undefined2 *)(param_1 + 0xac);
                local_58 = 0xf;
                local_60 = 0;
                uStack_5c = 0;
                local_70 = local_70 & 0xffffff00;
                FUN_14000c780(&local_70,"An ambush!  Curse them!",0x17);
                FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
              }
            }
            else {
              if (bVar18) {
LAB_140c5ef94:
                local_28 = 0xf;
                local_30 = 0;
                local_40 = '\0';
                FUN_14000c780(&local_40,"There is a ",0xb);
                local_58 = 0xf;
                local_60 = 0;
                uStack_5c = 0;
                local_70 = local_70 & 0xffffff00;
                FUN_140669610(*(undefined2 *)(param_1 + 0xa4),&local_70,0,
                              *(undefined2 *)(param_1 + 300));
                FUN_14000cb40(&local_40,&local_70,0,0xffffffffffffffff);
                FUN_14000c9f0(&local_40," hidden away here.",0x12);
                local_ac = 0;
                local_a8 = 0x8ad08ad0;
                local_a4 = 0x8ad0;
                local_a0 = 0;
                local_98 = 0;
                uStack_90 = 0;
                local_88 = 0xffffffffffffffff;
                local_80 = 0xffffffff;
                local_7c = 0;
                local_b8 = 0x40042;
                local_b4 = 1;
                local_9c = 5000;
                local_b2 = *(undefined2 *)(param_1 + 0xa8);
                local_b0 = *(undefined2 *)(param_1 + 0xaa);
                local_ae = *(undefined2 *)(param_1 + 0xac);
                FUN_140074660(&DAT_141d64dc8,&local_40,&local_b8);
                if (0xf < local_58) {
                  FUN_140002020(CONCAT44(uStack_6c,local_70),local_58 + 1,1);
                }
                local_58 = 0xf;
                local_60 = 0;
                uStack_5c = 0;
                local_70 = local_70 & 0xffffff00;
                goto LAB_140c5f0b3;
              }
              local_ac = 0;
              local_a8 = 0x8ad08ad0;
              local_a4 = 0x8ad0;
              local_a0 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0xffffffffffffffff;
              local_80 = 0xffffffff;
              local_7c = 0;
              local_b8 = 0x40038;
              local_b4 = 1;
              local_9c = 5000;
              local_b2 = *(undefined2 *)(param_1 + 0xa8);
              local_b0 = *(undefined2 *)(param_1 + 0xaa);
              local_ae = *(undefined2 *)(param_1 + 0xac);
              local_58 = 0xf;
              local_60 = 0;
              uStack_5c = 0;
              local_70 = local_70 & 0xffffff00;
              FUN_14000c780(&local_70,"An ambush!  Skulking vermin!",0x1c);
              FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
            }
          }
        }
        else {
          local_58 = 0xf;
          local_60 = 0;
          uStack_5c = 0;
          local_70 = (uint)local_70._1_3_ << 8;
          FUN_14000c780(&local_70,"Intruders!  Drive them away!",0x1c);
          local_ac = 0;
          local_a8 = 0x8ad08ad0;
          local_a4 = 0x8ad0;
          local_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0xffffffffffffffff;
          local_80 = 0xffffffff;
          local_7c = 0;
          local_b8 = 0x4003b;
          local_b4 = 1;
          local_9c = 5000;
          local_b2 = *(undefined2 *)(param_1 + 0xa8);
          local_b0 = *(undefined2 *)(param_1 + 0xaa);
          local_ae = *(undefined2 *)(param_1 + 0xac);
          FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
        }
      }
      else {
        if (bVar18) goto LAB_140c5ef94;
        local_ac = 0;
        local_a8 = 0x8ad08ad0;
        local_a4 = 0x8ad0;
        local_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0xffffffffffffffff;
        local_80 = 0xffffffff;
        local_7c = 0;
        local_b8 = 0x40036;
        local_b4 = 1;
        local_9c = 5000;
        local_b2 = *(undefined2 *)(param_1 + 0xa8);
        local_b0 = *(undefined2 *)(param_1 + 0xaa);
        local_ae = *(undefined2 *)(param_1 + 0xac);
        local_58 = 0xf;
        local_60 = 0;
        uStack_5c = 0;
        local_70 = (uint)local_70._1_3_ << 8;
        FUN_14000c780(&local_70,"An ambush!  Drive them out!",0x1b);
        FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
      }
    }
    else {
      if (bVar18) goto LAB_140c5ef94;
      local_ac = 0;
      local_a8 = 0x8ad08ad0;
      local_a4 = 0x8ad0;
      local_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0xffffffffffffffff;
      local_80 = 0xffffffff;
      local_7c = 0;
      local_b8 = 0x40035;
      local_b4 = 1;
      local_9c = 5000;
      local_b2 = *(undefined2 *)(param_1 + 0xa8);
      local_b0 = *(undefined2 *)(param_1 + 0xaa);
      local_ae = *(undefined2 *)(param_1 + 0xac);
      local_58 = 0xf;
      local_60 = 0;
      uStack_5c = 0;
      local_70 = (uint)local_70._1_3_ << 8;
      FUN_14000c780(&local_70,"Horrors!  Demons in the deep!",0x1d);
      FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
    }
  }
  else {
    local_58 = 0xf;
    local_60 = 0;
    uStack_5c = 0;
    local_70 = (uint)local_70._1_3_ << 8;
    FUN_140c30b20(param_1,&local_70);
    FUN_14000c9f0(&local_70," has come!",10);
    FUN_14014b6b0(&local_70);
    local_28 = 0xf;
    local_30 = 0;
    local_40 = '\0';
    sVar7 = *(short *)(param_1 + 300);
    sVar10 = *(short *)(param_1 + 0xa4);
    if (((sVar10 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar10)) ||
       (sVar7 < 0)) {
LAB_140c5df47:
      bVar18 = local_30 == 0;
    }
    else {
      lVar8 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar10 * 8);
      if (((ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar7) ||
         (pcVar15 = (char *)(*(longlong *)(*(longlong *)(lVar8 + 0x178) + (longlong)sVar7 * 8) +
                            0x220), &local_40 == pcVar15)) goto LAB_140c5df47;
      FUN_14000c8b0(&local_40,pcVar15,0,0xffffffffffffffff);
      bVar18 = local_30 == 0;
      if (!bVar18) {
        pcVar15 = (char *)CONCAT71(uStack_3f,local_40);
        pcVar9 = &local_40;
        if (0xf < local_28) {
          pcVar9 = pcVar15;
        }
        if ('`' < *pcVar9) {
          pcVar9 = &local_40;
          if (0xf < local_28) {
            pcVar9 = pcVar15;
          }
          if (*pcVar9 < '{') {
            pcVar9 = &local_40;
            if (0xf < local_28) {
              pcVar9 = pcVar15;
            }
            *pcVar9 = *pcVar9 + -0x20;
          }
        }
        goto LAB_140c5df47;
      }
    }
    if (!bVar18) {
      FUN_14000c9f0(&local_70,&DAT_140e6f904,2);
      FUN_14000cb40(&local_70,&local_40,0,0xffffffffffffffff);
    }
    local_ac = 0;
    local_a8 = 0x8ad08ad0;
    local_a4 = 0x8ad0;
    local_a0 = 0;
    uStack_90 = 0;
    local_88 = 0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_7c = 0;
    local_b8 = 0x4005d;
    local_b4 = 1;
    local_9c = 5000;
    local_b2 = *(undefined2 *)(param_1 + 0xa8);
    local_b0 = *(undefined2 *)(param_1 + 0xaa);
    local_ae = *(undefined2 *)(param_1 + 0xac);
    local_98 = param_1;
    FUN_140074660(&DAT_141d64dc8,&local_70,&local_b8);
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffffef;
    if (0xf < local_28) {
      FUN_140002020(CONCAT71(uStack_3f,local_40),local_28 + 1,1);
    }
    local_28 = 0xf;
    local_30 = 0;
    local_40 = '\0';
  }
LAB_140c5e024:
  if (local_58 < 0x10) {
    return;
  }
  uVar13 = CONCAT44(uStack_6c,local_70);
  uVar16 = local_58;
LAB_140c5f0c1:
  FUN_140002020(uVar13,uVar16 + 1,1);
  return;
}

