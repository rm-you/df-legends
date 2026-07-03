// FUN_140074660 @ 140074660
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 14014a5c0 FUN_14014a5c0
//   -> 14014a240 FUN_14014a240
//   -> 140019af0 FUN_140019af0
//   -> 140c76870 FUN_140c76870
//   -> 140675110 FUN_140675110
//   -> 140dfb5c4 operator_new
//   -> 1400744c0 FUN_1400744c0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1400745b0 FUN_1400745b0
//   -> 140dfb5b4 free
//   -> 140657290 FUN_140657290
//   -> 14014a3b0 FUN_14014a3b0
//   -> 140002020 FUN_140002020
//   -> 140074260 FUN_140074260
//   -> 14000bc60 FUN_14000bc60
//   -> 14007b380 FUN_14007b380
//   -> 1400743a0 FUN_1400743a0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140074660(longlong *param_1,undefined8 *param_2,ushort *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char *pcVar9;
  ushort *puVar10;
  byte bVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ushort uVar15;
  uint uVar16;
  void *pvVar17;
  void *pvVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_c8 [32];
  char local_a8;
  longlong *local_a0;
  void *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *plStack_78;
  longlong local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  plVar12 = DAT_141c66fe8;
  local_88 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_c8;
  if (DAT_141ebeec8 == '\0') {
    return;
  }
  uVar15 = *param_3;
  if (0x15f < uVar15) {
    return;
  }
  local_a0 = param_1;
  local_90 = param_2;
  if (param_2[2] == 0) {
    local_68 = 0xf;
    local_70 = 0;
    local_80 = (longlong *)((ulonglong)local_80 & 0xffffffffffffff00);
    FUN_14000c780(&local_80,"Empty announcement ",0x13);
    FUN_14014a5c0((int)(short)*param_3,&local_80);
    FUN_14014a240(&local_80);
    if (local_68 < 0x10) {
      return;
    }
    lVar13 = local_68 + 1;
    uVar20 = 1;
    plVar12 = local_80;
    goto LAB_14007537c;
  }
  bVar3 = false;
  local_a8 = '\0';
  if (DAT_1410b67dc == 1) {
    bVar23 = true;
    local_a8 = '\x01';
    bVar3 = true;
    if (((param_3[3] != 0x8ad0) && (bVar3 = bVar23, uVar15 != 0x8e)) &&
       ((((uVar15 != 0xa1 && ((uVar15 != 0xaf && (uVar15 != 0xb1)))) &&
         ((DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 == 0 ||
          ((bVar3 = true, *(longlong *)(param_3 + 0x10) != *DAT_141c66fe8 &&
           (bVar3 = true, *(longlong *)(param_3 + 0x14) != *DAT_141c66fe8)))))) &&
        (uVar6 = FUN_140019af0(&DAT_141c53470,param_3[3],param_3[4],param_3[5]), bVar3 = true,
        (uVar6 & 0x10) == 0)))) {
      return;
    }
  }
  else {
    if ((*(longlong *)(param_3 + 0x10) != 0) || (*(longlong *)(param_3 + 0x14) != 0)) {
      bVar23 = false;
      if ((*(longlong *)(param_3 + 0x10) != 0) && (cVar4 = FUN_140c76870(), cVar4 == '\0')) {
        bVar23 = true;
      }
      if (((*(longlong *)(param_3 + 0x14) == 0) || (cVar4 = FUN_140c76870(), cVar4 != '\0')) &&
         (!bVar23)) {
        return;
      }
    }
    uVar15 = *param_3;
    uVar22 = *(uint *)((longlong)&DAT_141c34180 + (longlong)(short)uVar15 * 4);
    plVar12 = DAT_141c66fe8;
    if ((uVar22 & 0x10) == 0) {
      bVar23 = false;
      if ((uVar22 & 0x20) == 0) {
        if ((uVar22 & 0x40) == 0) {
          return;
        }
        lVar13 = *(longlong *)(param_3 + 0x10);
        if (lVar13 != 0) {
          if (((*(longlong *)(lVar13 + 0xce8) - *(longlong *)(lVar13 + 0xce0) >> 2 != 0) &&
              (DAT_1416b1980 == *(int *)(lVar13 + 0xd14))) &&
             (DAT_1416b1974 - *(int *)(lVar13 + 0xd20) < 0x1f5)) {
            bVar23 = true;
          }
          if (((*(longlong *)(lVar13 + 0xd00) - *(longlong *)(lVar13 + 0xcf8) >> 2 != 0) &&
              (DAT_1416b1980 == *(int *)(lVar13 + 0xd18))) &&
             (DAT_1416b1974 - *(int *)(lVar13 + 0xd24) < 0x1f5)) {
            bVar23 = true;
          }
          if (((*(longlong *)(lVar13 + 0xcd0) - *(longlong *)(lVar13 + 0xcc8) >> 2 != 0) &&
              (DAT_1416b1980 == *(int *)(lVar13 + 0xd10))) &&
             (DAT_1416b1974 - *(int *)(lVar13 + 0xd1c) < 0x1f5)) {
            bVar23 = true;
          }
        }
        lVar13 = *(longlong *)(param_3 + 0x14);
        if (lVar13 != 0) {
          if (((*(longlong *)(lVar13 + 0xce8) - *(longlong *)(lVar13 + 0xce0) >> 2 != 0) &&
              (DAT_1416b1980 == *(int *)(lVar13 + 0xd14))) &&
             (DAT_1416b1974 - *(int *)(lVar13 + 0xd20) < 0x1f5)) {
            bVar23 = true;
          }
          if (((*(longlong *)(lVar13 + 0xd00) - *(longlong *)(lVar13 + 0xcf8) >> 2 != 0) &&
              (DAT_1416b1980 == *(int *)(lVar13 + 0xd18))) &&
             (DAT_1416b1974 - *(int *)(lVar13 + 0xd24) < 0x1f5)) {
            bVar23 = true;
          }
          if (((*(longlong *)(lVar13 + 0xcd0) - *(longlong *)(lVar13 + 0xcc8) >> 2 != 0) &&
              (DAT_1416b1980 == *(int *)(lVar13 + 0xd10))) &&
             (DAT_1416b1974 - *(int *)(lVar13 + 0xd1c) < 0x1f5)) goto LAB_1400749e1;
        }
      }
      else {
        bVar23 = *(longlong *)(param_3 + 0x10) != 0;
        if (*(longlong *)(param_3 + 0x14) != 0) goto LAB_1400749e1;
      }
      if (!bVar23) {
        return;
      }
    }
  }
LAB_1400749e1:
  uVar22 = *(uint *)((longlong)&DAT_141c34180 + (longlong)(short)uVar15 * 4);
  if ((uVar22 & 6) != 0) {
    if ((uVar22 & 4) == 0) {
      uVar19 = 0xffff8ad0;
      uVar21 = 0xffff8ad0;
      uVar6 = 0xffff8ad0;
      bVar11 = 1;
    }
    else {
      bVar11 = (byte)(uVar22 >> 1) & 1;
      uVar19 = (ulonglong)param_3[5];
      uVar21 = (ulonglong)param_3[4];
      uVar6 = (ulonglong)param_3[3];
    }
    FUN_140675110(uVar6,uVar21,uVar19,bVar11);
    plVar12 = DAT_141c66fe8;
  }
  if (((*(byte *)((longlong)&DAT_141c34180 + (longlong)(short)*param_3 * 4) & 1) != 0) &&
     (((DAT_141c66ff0 - (longlong)plVar12 >> 3 == 0 || (!bVar3)) ||
      (*(short *)(*plVar12 + 0x7e4) < 1)))) {
    local_98 = operator_new(0x28);
    puVar7 = (undefined8 *)FUN_1400744c0(local_98);
    if (puVar7 != param_2) {
      FUN_14000c8b0(puVar7,param_2,0,0xffffffffffffffff);
    }
    *(ushort *)(puVar7 + 4) = param_3[1];
    *(char *)((longlong)puVar7 + 0x22) = (char)param_3[2];
    lVar8 = DAT_141d64e00 - (longlong)DAT_141d64df8;
    puVar7 = DAT_141d64df8;
    lVar13 = DAT_141d64e00;
    while (3000 < (ulonglong)(lVar8 >> 3)) {
      pvVar17 = (void *)*puVar7;
      if (pvVar17 != (void *)0x0) {
        FUN_1400745b0(pvVar17);
        free(pvVar17);
        puVar7 = DAT_141d64df8;
        lVar13 = DAT_141d64e00;
      }
      lVar8 = lVar13 - (longlong)puVar7;
    }
  }
  local_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  uVar6 = 0;
  local_70 = 0;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140657290(&local_80,param_2);
  lVar13 = *param_1;
  pvVar18 = (void *)(param_1[1] - lVar13 >> 3);
  pvVar17 = (void *)((longlong)plStack_78 - (longlong)local_80 >> 3);
  uVar22 = 0;
  local_98 = pvVar17;
  if ((pvVar18 < pvVar17) || (DAT_1410b67dc != 0)) {
LAB_140074ccf:
    bVar23 = false;
    bVar3 = false;
    local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
    plVar12 = local_80;
    if (pvVar17 != (void *)0x0) {
      do {
        local_98 = operator_new(0x68);
        puVar10 = (ushort *)FUN_140074260(local_98,0);
        *puVar10 = *param_3;
        if (*(char *)*plVar12 != '\0') {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (((char *)*plVar12)[lVar13] != '\0');
        }
        FUN_14000c780(puVar10 + 4);
        puVar10[0x14] = param_3[1];
        *(char *)(puVar10 + 0x15) = (char)param_3[2];
        puVar10[0x16] = 100;
        puVar10[0x17] = 0;
        puVar10[0x1e] = param_3[3];
        puVar10[0x1f] = param_3[4];
        puVar10[0x20] = param_3[5];
        *(undefined4 *)(puVar10 + 0x1c) = *(undefined4 *)(param_3 + 6);
        puVar10[0x24] = param_3[8];
        puVar10[0x25] = param_3[9];
        puVar10[0x26] = param_3[10];
        *(undefined4 *)(puVar10 + 0x22) = *(undefined4 *)(param_3 + 0xc);
        *(undefined4 *)(puVar10 + 0x2e) = *(undefined4 *)(param_3 + 0x18);
        *(undefined4 *)(puVar10 + 0x30) = *(undefined4 *)(param_3 + 0x1a);
        *(undefined4 *)(puVar10 + 0x32) = *(undefined4 *)(param_3 + 0x1c);
        *(int *)(puVar10 + 0x2a) = DAT_1416b1980;
        *(int *)(puVar10 + 0x2c) = DAT_1416b1974;
        if (0 < (int)local_a0) {
          *(byte *)(puVar10 + 0x18) = (byte)puVar10[0x18] | 1;
        }
        if (((DAT_141c66ff0 - (longlong)DAT_141c66fe8 >> 3 != 0) && (local_a8 != '\0')) &&
           (0 < *(short *)(*DAT_141c66fe8 + 0x7e4))) {
          *(byte *)(puVar10 + 0x18) = (byte)puVar10[0x18] | 2;
        }
        bVar3 = bVar23;
        if (DAT_1410b67dc == 0) {
          if ((*(byte *)((longlong)&DAT_141c34180 + (longlong)(short)*param_3 * 4) & 0x20) != 0) {
            lVar13 = *(longlong *)(param_3 + 0x10);
            if (lVar13 != 0) {
              if ((param_3[0x1e] & 1) == 0) {
                if ((*(longlong *)(lVar13 + 0x4b8) == 0) ||
                   (*(short *)(*(longlong *)(lVar13 + 0x4b8) + 0x14) != 0x18)) {
                  FUN_14000bc60(lVar13 + 0xcc8,puVar10 + 0x28);
                  *(int *)(*(longlong *)(param_3 + 0x10) + 0xd10) = DAT_1416b1980;
                  *(int *)(*(longlong *)(param_3 + 0x10) + 0xd1c) = DAT_1416b1974;
                  DAT_141d64e14 = DAT_141d64e14 | 1;
                }
                else {
                  FUN_14000bc60(lVar13 + 0xcf8,puVar10 + 0x28);
                  *(int *)(*(longlong *)(param_3 + 0x10) + 0xd18) = DAT_1416b1980;
                  *(int *)(*(longlong *)(param_3 + 0x10) + 0xd24) = DAT_1416b1974;
                  DAT_141d64e14 = DAT_141d64e14 | 2;
                }
              }
              else {
                FUN_14000bc60(lVar13 + 0xce0,puVar10 + 0x28);
                *(int *)(*(longlong *)(param_3 + 0x10) + 0xd14) = DAT_1416b1980;
                *(int *)(*(longlong *)(param_3 + 0x10) + 0xd20) = DAT_1416b1974;
                DAT_141d64e14 = DAT_141d64e14 | 4;
              }
              bVar23 = true;
            }
            lVar13 = *(longlong *)(param_3 + 0x14);
            if (lVar13 != 0) {
              if ((param_3[0x1e] & 1) == 0) {
                if ((*(longlong *)(lVar13 + 0x4b8) == 0) ||
                   (*(short *)(*(longlong *)(lVar13 + 0x4b8) + 0x14) != 0x18)) {
                  FUN_14000bc60(lVar13 + 0xcc8,puVar10 + 0x28);
                  *(int *)(*(longlong *)(param_3 + 0x14) + 0xd10) = DAT_1416b1980;
                  *(int *)(*(longlong *)(param_3 + 0x14) + 0xd1c) = DAT_1416b1974;
                  DAT_141d64e14 = DAT_141d64e14 | 1;
                }
                else {
                  FUN_14000bc60(lVar13 + 0xcf8,puVar10 + 0x28);
                  *(int *)(*(longlong *)(param_3 + 0x14) + 0xd18) = DAT_1416b1980;
                  *(int *)(*(longlong *)(param_3 + 0x14) + 0xd24) = DAT_1416b1974;
                  DAT_141d64e14 = DAT_141d64e14 | 2;
                }
              }
              else {
                FUN_14000bc60(lVar13 + 0xce0,puVar10 + 0x28);
                *(int *)(*(longlong *)(param_3 + 0x14) + 0xd14) = DAT_1416b1980;
                *(int *)(*(longlong *)(param_3 + 0x14) + 0xd20) = DAT_1416b1974;
                DAT_141d64e14 = DAT_141d64e14 | 4;
              }
              bVar23 = true;
            }
          }
          bVar3 = bVar23;
          if ((*(byte *)((longlong)&DAT_141c34180 + (longlong)(short)*param_3 * 4) & 0x40) != 0) {
            lVar13 = *(longlong *)(param_3 + 0x10);
            if (lVar13 != 0) {
              if (((*(longlong *)(lVar13 + 0xce8) - *(longlong *)(lVar13 + 0xce0) >> 2 != 0) &&
                  (DAT_1416b1980 == *(int *)(lVar13 + 0xd14))) &&
                 (DAT_1416b1974 - *(int *)(lVar13 + 0xd20) < 0x1f5)) {
                FUN_14000bc60((longlong *)(lVar13 + 0xce0),puVar10 + 0x28);
                *(int *)(*(longlong *)(param_3 + 0x10) + 0xd14) = DAT_1416b1980;
                *(int *)(*(longlong *)(param_3 + 0x10) + 0xd20) = DAT_1416b1974;
                DAT_141d64e14 = DAT_141d64e14 | 4;
                bVar23 = true;
              }
              lVar13 = *(longlong *)(param_3 + 0x10);
              if (((*(longlong *)(lVar13 + 0xd00) - *(longlong *)(lVar13 + 0xcf8) >> 2 != 0) &&
                  (DAT_1416b1980 == *(int *)(lVar13 + 0xd18))) &&
                 (DAT_1416b1974 - *(int *)(lVar13 + 0xd24) < 0x1f5)) {
                FUN_14000bc60((longlong *)(lVar13 + 0xcf8),puVar10 + 0x28);
                *(int *)(*(longlong *)(param_3 + 0x10) + 0xd18) = DAT_1416b1980;
                *(int *)(*(longlong *)(param_3 + 0x10) + 0xd24) = DAT_1416b1974;
                DAT_141d64e14 = DAT_141d64e14 | 2;
                bVar23 = true;
              }
              lVar13 = *(longlong *)(param_3 + 0x10);
              if (((*(longlong *)(lVar13 + 0xcd0) - *(longlong *)(lVar13 + 0xcc8) >> 2 != 0) &&
                  (DAT_1416b1980 == *(int *)(lVar13 + 0xd10))) &&
                 (DAT_1416b1974 - *(int *)(lVar13 + 0xd1c) < 0x1f5)) {
                FUN_14000bc60((longlong *)(lVar13 + 0xcc8),puVar10 + 0x28);
                *(int *)(*(longlong *)(param_3 + 0x10) + 0xd10) = DAT_1416b1980;
                *(int *)(*(longlong *)(param_3 + 0x10) + 0xd1c) = DAT_1416b1974;
                DAT_141d64e14 = DAT_141d64e14 | 1;
                bVar23 = true;
              }
            }
            lVar13 = *(longlong *)(param_3 + 0x14);
            bVar3 = bVar23;
            if (lVar13 != 0) {
              if (((*(longlong *)(lVar13 + 0xce8) - *(longlong *)(lVar13 + 0xce0) >> 2 != 0) &&
                  (DAT_1416b1980 == *(int *)(lVar13 + 0xd14))) &&
                 (DAT_1416b1974 - *(int *)(lVar13 + 0xd20) < 0x1f5)) {
                FUN_14000bc60((longlong *)(lVar13 + 0xce0),puVar10 + 0x28);
                *(int *)(*(longlong *)(param_3 + 0x14) + 0xd14) = DAT_1416b1980;
                *(int *)(*(longlong *)(param_3 + 0x14) + 0xd20) = DAT_1416b1974;
                DAT_141d64e14 = DAT_141d64e14 | 4;
                bVar23 = true;
              }
              lVar13 = *(longlong *)(param_3 + 0x14);
              if (((*(longlong *)(lVar13 + 0xd00) - *(longlong *)(lVar13 + 0xcf8) >> 2 != 0) &&
                  (DAT_1416b1980 == *(int *)(lVar13 + 0xd18))) &&
                 (DAT_1416b1974 - *(int *)(lVar13 + 0xd24) < 0x1f5)) {
                FUN_14000bc60((longlong *)(lVar13 + 0xcf8),puVar10 + 0x28);
                *(int *)(*(longlong *)(param_3 + 0x14) + 0xd18) = DAT_1416b1980;
                *(int *)(*(longlong *)(param_3 + 0x14) + 0xd24) = DAT_1416b1974;
                DAT_141d64e14 = DAT_141d64e14 | 2;
                bVar23 = true;
              }
              lVar13 = *(longlong *)(param_3 + 0x14);
              bVar3 = bVar23;
              if (((*(longlong *)(lVar13 + 0xcd0) - *(longlong *)(lVar13 + 0xcc8) >> 2 != 0) &&
                  (DAT_1416b1980 == *(int *)(lVar13 + 0xd10))) &&
                 (DAT_1416b1974 - *(int *)(lVar13 + 0xd1c) < 0x1f5)) {
                FUN_14000bc60((longlong *)(lVar13 + 0xcc8),puVar10 + 0x28);
                *(int *)(*(longlong *)(param_3 + 0x14) + 0xd10) = DAT_1416b1980;
                *(int *)(*(longlong *)(param_3 + 0x14) + 0xd1c) = DAT_1416b1974;
                DAT_141d64e14 = DAT_141d64e14 | 1;
                bVar3 = true;
              }
            }
          }
        }
        if (DAT_1410b67dc == 1) {
          bVar11 = *(byte *)((longlong)&DAT_141c34180 + (longlong)(short)*param_3 * 4) & 8;
joined_r0x0001400752be:
          if (bVar11 != 0) {
            FUN_14007b380(puVar10);
            *(byte *)(puVar10 + 0x18) = (byte)puVar10[0x18] | 4;
            *(int *)(param_1 + 0x18) = (int)(short)param_3[0xe];
            bVar3 = true;
          }
        }
        else if (DAT_1410b67dc == 0) {
          bVar11 = *(byte *)((longlong)&DAT_141c34180 + (longlong)(short)*param_3 * 4) & 0x10;
          goto joined_r0x0001400752be;
        }
        free((void *)*plVar12);
        iVar5 = (int)local_a0 + 1;
        local_a0 = (longlong *)CONCAT44(local_a0._4_4_,iVar5);
        plVar12 = plVar12 + 1;
        bVar23 = bVar3;
      } while ((void *)(longlong)iVar5 < pvVar17);
    }
    plVar12 = local_80;
    plStack_78 = local_80;
    if ((DAT_1410b67e0 != '\0') && (bVar3)) {
      FUN_14014a3b0(local_90);
    }
    lVar13 = param_1[1] - *param_1;
    while (3000 < (ulonglong)(lVar13 >> 3)) {
      pvVar17 = *(void **)*param_1;
      if (pvVar17 != (void *)0x0) {
        FUN_1400743a0(pvVar17);
        free(pvVar17);
      }
      lVar13 = param_1[1] - *param_1;
    }
  }
  else {
    uVar16 = (uint)pvVar17;
    iVar5 = (int)pvVar18;
    if (0 < (int)uVar16) {
      plVar12 = local_80;
      uVar21 = uVar6;
      uVar19 = uVar6;
      do {
        uVar22 = (uint)uVar19;
        lVar8 = *(longlong *)
                 ((((longlong)iVar5 - (longlong)(int)uVar16) * 8 - (longlong)local_80) + lVar13 +
                 (longlong)plVar12);
        pcVar9 = (char *)(lVar8 + 8);
        if (0xf < *(ulonglong *)(lVar8 + 0x20)) {
          pcVar9 = *(char **)pcVar9;
        }
        lVar8 = *plVar12 - (longlong)pcVar9;
        do {
          cVar4 = *pcVar9;
          cVar2 = pcVar9[lVar8];
          if (cVar4 != cVar2) break;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        param_1 = local_a0;
        if (cVar4 != cVar2) break;
        uVar22 = uVar22 + 1;
        uVar19 = (ulonglong)uVar22;
        uVar21 = uVar21 + 1;
        plVar12 = plVar12 + 1;
      } while ((longlong)uVar21 < (longlong)(int)uVar16);
    }
    if (uVar22 != uVar16) goto LAB_140074ccf;
    lVar8 = (longlong)(iVar5 + -1) * 8;
    *(undefined4 *)(*(longlong *)(lVar8 + lVar13) + 0x2c) = 100;
    piVar1 = (int *)(*(longlong *)(lVar8 + *param_1) + 0x34);
    *piVar1 = *piVar1 + 1;
    if (((*(byte *)((longlong)&DAT_141c34180 + (longlong)(short)*param_3 * 4) & 0x10) != 0) &&
       (*(int *)(param_1 + 0x18) = (int)(short)param_3[0xe], DAT_1410b67e0 != '\0')) {
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      FUN_14000c780(&local_60,&DAT_140e5e8d8,1);
      FUN_14014a5c0(*(int *)(*(longlong *)(lVar8 + *param_1) + 0x34) + 1,&local_60);
      FUN_14014a3b0(&local_60);
      if (0xf < local_48) {
        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
      }
    }
    plVar12 = local_80;
    plVar14 = local_80;
    if (pvVar17 != (void *)0x0) {
      do {
        free((void *)*plVar14);
        uVar22 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar22;
        plVar14 = plVar14 + 1;
      } while ((void *)(longlong)(int)uVar22 < pvVar17);
    }
  }
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  lVar13 = local_70 - (longlong)plVar12 >> 3;
  uVar20 = 8;
LAB_14007537c:
  FUN_140002020(plVar12,lVar13,uVar20);
  return;
}

