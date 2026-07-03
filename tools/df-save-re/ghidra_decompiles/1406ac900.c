// FUN_1406ac900 @ 1406ac900
// callees:
//   -> 1400048f0 FUN_1400048f0
//   -> 1401745b0 FUN_1401745b0
//   -> 14014eb90 FUN_14014eb90
//   -> 140c2efa0 FUN_140c2efa0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140004650 FUN_140004650
//   -> 1407ad2c0 FUN_1407ad2c0
//   -> 140620120 FUN_140620120
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140d89d60 FUN_140d89d60
//   -> 140074660 FUN_140074660
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140c7dec0 FUN_140c7dec0
//   -> 140c79d30 FUN_140c79d30
//   -> 140c8f3d0 FUN_140c8f3d0
//   -> 140803b20 FUN_140803b20
//   -> 140004830 FUN_140004830
//   -> 140d823e0 FUN_140d823e0
//   -> 140d99a10 FUN_140d99a10
//   -> 14014e2f0 FUN_14014e2f0
//   -> 1400c0380 FUN_1400c0380
//   -> 14066a3c0 FUN_14066a3c0
//   -> 1400c0400 FUN_1400c0400
//   -> 14066a430 FUN_14066a430
//   -> 1400c0480 FUN_1400c0480
//   -> 14066a4a0 FUN_14066a4a0
//   -> 14014e120 FUN_14014e120
//   -> 1401508a0 FUN_1401508a0
//   -> 14000d840 FUN_14000d840
//   -> 14066a580 FUN_14066a580
//   -> 14066a350 FUN_14066a350
//   -> 1400c5d30 FUN_1400c5d30
//   -> 14013b610 FUN_14013b610
//   -> 1400c05e0 FUN_1400c05e0
//   -> 1405b4fb0 FUN_1405b4fb0
//   -> 140dfb5c4 operator_new
//   -> 1405b4ca0 FUN_1405b4ca0
//   -> 140198ca0 FUN_140198ca0
//   -> 140d86a60 FUN_140d86a60
//   -> 14014e400 FUN_14014e400
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406ac900(short param_1,short param_2,short param_3,undefined2 param_4,ushort param_5,
                  undefined4 param_6,ushort param_7)

{
  void *pvVar1;
  void *pvVar2;
  longlong *plVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  short *psVar14;
  int iVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_158 [32];
  uint local_138;
  int local_130;
  short *local_128;
  undefined4 local_118;
  undefined1 local_114;
  short local_112;
  short local_110;
  short local_10e;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_d8 = 0xfffffffffffffffe;
  local_50 = DAT_1410b5008 ^ (ulonglong)auStack_158;
  uVar12 = FUN_1400048f0(&DAT_141c53470,param_1,param_2,param_3);
  if (((uVar12 & 7) != 0) &&
     (iVar9 = (int)(DAT_141c6fdc0 - DAT_141c6fdb8 >> 3) + -1, lVar21 = (longlong)iVar9, -1 < iVar9))
  {
    do {
      plVar3 = *(longlong **)(DAT_141c6fdb8 + lVar21 * 8);
      cVar4 = (**(code **)(*plVar3 + 0x138))(plVar3);
      if ((cVar4 != '\0') && ((int)param_3 == (int)plVar3[4])) {
        cVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
        if ((cVar4 == '\0') || (plVar3[6] == 0)) {
          if (((int)plVar3[1] <= (int)param_1) &&
             ((((int)param_1 <= *(int *)((longlong)plVar3 + 0x14) &&
               (*(int *)((longlong)plVar3 + 0xc) <= (int)param_2)) &&
              ((int)param_2 <= (int)plVar3[3])))) goto LAB_1406ac9e8;
        }
        else {
          cVar4 = FUN_1401745b0(plVar3,param_1,param_2,param_3);
          if (cVar4 != '\0') {
LAB_1406ac9e8:
            plVar3 = *(longlong **)(DAT_141c6fdb8 + lVar21 * 8);
            (**(code **)(*plVar3 + 0xa0))(plVar3,param_4,0,100);
          }
        }
      }
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  uVar12 = FUN_1400048f0(&DAT_141c53470,param_1,param_2,param_3);
  if (((uVar12 & 8) != 0) || (uVar12 = FUN_1400048f0(&DAT_141c53470,param_1), (uVar12 & 0x10) != 0))
  {
    iVar9 = 0;
    local_128 = (short *)((ulonglong)local_128 & 0xffffffff00000000);
    if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
      lVar21 = 0;
      do {
        lVar22 = *(longlong *)(DAT_141c66fe8 + lVar21);
        if (((*(uint *)(lVar22 + 0x110) & 0x2010002) == 0) &&
           (cVar4 = FUN_14014eb90(lVar22,param_1,param_2,param_3), cVar4 != '\0')) {
          if (DAT_1410b67dc == 0) {
            bVar23 = (DAT_141c34338 & 0x70) != 0;
          }
          else {
            bVar23 = (bool)(DAT_141c34338 >> 3 & 1);
          }
          if (bVar23 != false) {
            local_58 = 0xf;
            local_60 = 0;
            local_70 = 0;
            local_138 = CONCAT31(local_138._1_3_,1);
            FUN_140c2efa0(*(undefined8 *)(DAT_141c66fe8 + lVar21),&local_70,1,1);
            local_98 = 0xf;
            local_a0 = 0;
            local_b0 = 0;
            FUN_14000c8b0(&local_b0,&local_70,0,0xffffffffffffffff);
            if ((DAT_1410b67dc == 1) && (iVar9 == 0)) {
              uVar18 = 4;
              puVar17 = &DAT_140e5f0cc;
            }
            else {
              uVar18 = 3;
              puVar17 = &DAT_140e5f0d4;
            }
            FUN_14000c9f0(&local_b0,puVar17,uVar18);
            FUN_14000c9f0(&local_b0," caught in a burst of ",0x16);
            local_b8 = 0xf;
            local_c0 = 0;
            local_d0 = 0;
            if ((((ushort)(param_5 - 0xdb) < 200) &&
                (lVar13 = FUN_140004650(&DAT_141d7a048,param_6), lVar13 != 0)) &&
               (*(char *)(lVar13 + 0xaa) != '\0')) {
              local_78 = 0xf;
              local_80 = 0;
              local_90 = 0;
              lVar13 = FUN_1407ad2c0(lVar13);
              if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
                FUN_140620120(lVar13,&local_90,1,0);
              }
              FUN_14000cb40(&local_d0,&local_90,0,0xffffffffffffffff);
              FUN_14000c9f0(&local_d0,&DAT_140e5e008,3);
              if (0xf < local_78) {
                FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
              }
            }
            lVar13 = FUN_140d89d60(&DAT_141c53470,param_5,param_6);
            if (lVar13 == 0) {
              FUN_14000c9f0(&local_d0,"unknown material",0x10);
            }
            else {
              if (*(longlong *)(lVar13 + 0x518) != 0) {
                FUN_14000cb40(&local_d0,lVar13 + 0x508,0,0xffffffffffffffff);
                FUN_14000c9f0(&local_d0,&DAT_140e59864,1);
              }
              FUN_14000cb40(&local_d0,(longlong)(short)param_7 * 0x20 + 0xb8 + lVar13,0,
                            0xffffffffffffffff);
            }
            FUN_14000cb40(&local_b0,&local_d0,0,0xffffffffffffffff);
            FUN_14000c9f0(&local_b0,&DAT_140e5e8bc,1);
            local_10c = 0;
            local_108 = 0x8ad08ad0;
            local_104 = 0x8ad0;
            local_100 = 0;
            local_f0 = 0;
            local_e8 = 0xffffffff;
            local_e4 = 0xffffffff;
            local_e0 = 0xffffffff;
            local_dc = 0;
            local_118 = 0x4006e;
            local_114 = 1;
            local_fc = 2000;
            local_f8 = *(undefined8 *)(DAT_141c66fe8 + lVar21);
            local_112 = param_1;
            local_110 = param_2;
            local_10e = param_3;
            FUN_140074660(&DAT_141d64dc8,&local_b0,&local_118);
            if (0xf < local_b8) {
              FUN_140002020(CONCAT71(uStack_cf,local_d0),local_b8 + 1,1);
            }
            local_b8 = 0xf;
            local_c0 = 0;
            local_d0 = 0;
            if (0xf < local_98) {
              FUN_140002020(CONCAT71(uStack_af,local_b0),local_98 + 1,1);
            }
            local_98 = 0xf;
            local_a0 = 0;
            local_b0 = 0;
            if (0xf < local_58) {
              FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
            }
          }
          uVar10 = FUN_1409fc0c0();
          uVar10 = (uVar10 + (int)((longlong)((ulonglong)uVar10 * 0x100000003) >> 0x3f) * 0x7fffffff
                   ) / 0x12492493 + 1;
          if (uVar10 != 0) {
            uVar12 = (ulonglong)uVar10;
            do {
              sVar5 = FUN_140c7dec0(lVar22);
              local_138 = CONCAT31(local_138._1_3_,1);
              FUN_140c79d30(lVar22,param_4,(int)sVar5,10);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (param_7 == 2) {
            uVar20 = 0xffffffff;
            uVar12 = 0xffffffff;
            local_138 = CONCAT22(local_138._2_2_,0xea61);
            uVar18 = 0xffffffff;
          }
          else {
            local_138 = CONCAT22(local_138._2_2_,param_4);
            uVar20 = (ulonglong)param_7;
            uVar12 = (ulonglong)param_5;
            uVar18 = param_6;
          }
          FUN_140c8f3d0(lVar22,uVar12,uVar18,uVar20);
          iVar9 = (int)local_128;
        }
        iVar9 = iVar9 + 1;
        local_128 = (short *)CONCAT44(local_128._4_4_,iVar9);
        lVar21 = lVar21 + 8;
      } while ((ulonglong)(longlong)iVar9 < (ulonglong)(DAT_141c66ff0 - DAT_141c66fe8 >> 3));
    }
  }
  uVar12 = FUN_1400048f0(&DAT_141c53470,param_1,param_2,param_3);
  if ((((((uVar12 & 0x20) != 0) && (-1 < param_1)) &&
       ((param_1 < DAT_141d69554 &&
        ((((-1 < param_2 && (param_2 < DAT_141d69558)) && (-1 < param_3)) &&
         ((param_3 < DAT_141d6955c && (DAT_141d69520 != 0)))))))) &&
      (lVar21 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(DAT_141d69520 + ((longlong)param_1 >> 4) * 8) +
                   ((longlong)param_2 >> 4) * 8) + (longlong)param_3 * 8), lVar21 != 0)) &&
     (iVar9 = (int)(*(longlong *)(lVar21 + 0x58) - *(longlong *)(lVar21 + 0x50) >> 2) + -1,
     lVar22 = (longlong)iVar9, -1 < iVar9)) {
    do {
      iVar9 = *(int *)(*(longlong *)(lVar21 + 0x50) + lVar22 * 4);
      iVar11 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
      if ((iVar11 != 0) && (iVar9 != -1)) {
        uVar10 = iVar11 - 1;
        uVar12 = (ulonglong)uVar10;
        iVar11 = 0;
        if (-1 < (int)uVar10) {
          do {
            iVar15 = iVar11 + (int)uVar12 >> 1;
            plVar3 = *(longlong **)(DAT_141c67368 + (longlong)iVar15 * 8);
            if (*(int *)((longlong)plVar3 + 0x1c) == iVar9) {
              if ((((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 2) & 1) != 0)) &&
                  ((short)plVar3[1] == param_1)) &&
                 ((*(short *)((longlong)plVar3 + 10) == param_2 &&
                  (*(short *)((longlong)plVar3 + 0xc) == param_3)))) {
                cVar4 = FUN_140803b20(plVar3,CONCAT71((int7)(uVar12 >> 8),1));
                if (cVar4 != '\0') {
                  local_130 = 100;
                  local_138 = local_138 & 0xffffff00;
                  (**(code **)(*plVar3 + 0x4d0))(plVar3,param_4,1);
                }
                if (param_7 == 2) {
                  uVar20 = 0xffffffff;
                  uVar12 = 0xffffffff;
                  local_138 = CONCAT22(local_138._2_2_,0xea61);
                  uVar18 = 0xffffffff;
                }
                else {
                  local_138 = CONCAT22(local_138._2_2_,param_4);
                  uVar20 = (ulonglong)param_7;
                  uVar12 = (ulonglong)param_5;
                  uVar18 = param_6;
                }
                (**(code **)(*plVar3 + 0x5d0))(plVar3,uVar12,uVar18,uVar20);
              }
              break;
            }
            if (iVar9 < *(int *)((longlong)plVar3 + 0x1c)) {
              uVar12 = (ulonglong)(iVar15 - 1);
            }
            else {
              iVar11 = iVar15 + 1;
            }
          } while (iVar11 <= (int)uVar12);
        }
      }
      lVar22 = lVar22 + -1;
    } while (-1 < lVar22);
  }
  uVar6 = FUN_140004830(&DAT_141c53470,param_1,param_2,param_3);
  if ((uVar6 == 0x43) || (uVar6 == 0x46)) {
    uVar10 = FUN_1409fc0c0();
    uVar10 = (uVar10 + (int)((longlong)((ulonglong)uVar10 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             0x2aaaaaab;
    if (uVar10 == 0) {
      uVar7 = 0xee;
    }
    else if (uVar10 == 1) {
      uVar7 = 0xef;
    }
    else {
      if (uVar10 != 2) goto LAB_1406ad79f;
      uVar7 = 0xf0;
    }
    local_138 = CONCAT22(local_138._2_2_,uVar7);
    FUN_1400c5d30(&DAT_141c53470,param_1,param_2,param_3);
LAB_1406ad79f:
    iVar9 = (int)(DAT_141c53520 - DAT_141c53518 >> 3) + -1;
    lVar13 = (longlong)iVar9;
    lVar21 = DAT_141c53518;
    lVar22 = DAT_141c53520;
    if (-1 < iVar9) {
      do {
        psVar14 = *(short **)(lVar21 + lVar13 * 8);
        if (((*psVar14 == param_1) && (psVar14[1] == param_2)) &&
           ((psVar14[2] == param_3 && (psVar14 != (short *)0x0)))) {
          iVar9 = (int)(lVar22 - lVar21 >> 3) + -1;
          if (-1 < iVar9) {
            lVar16 = (longlong)iVar9;
            do {
              if (*(short **)(lVar21 + lVar16 * 8) == psVar14) {
                pvVar2 = (void *)(lVar21 + (longlong)iVar9 * 8);
                pvVar1 = (void *)((longlong)pvVar2 + 8);
                memmove(pvVar2,pvVar1,lVar22 - (longlong)pvVar1);
                DAT_141c53520 = DAT_141c53520 + -8;
                break;
              }
              iVar9 = iVar9 + -1;
              lVar16 = lVar16 + -1;
            } while (-1 < lVar16);
          }
          free(psVar14);
          lVar21 = DAT_141c53518;
          lVar22 = DAT_141c53520;
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    iVar9 = (int)(DAT_141c53550 - DAT_141c53548 >> 3) + -1;
    lVar13 = (longlong)iVar9;
    lVar21 = DAT_141c53548;
    lVar22 = DAT_141c53550;
    if (-1 < iVar9) {
      do {
        psVar14 = *(short **)(lVar21 + lVar13 * 8);
        if ((((*psVar14 == param_1) && (psVar14[1] == param_2)) && (psVar14[2] == param_3)) &&
           (psVar14 != (short *)0x0)) {
          iVar9 = (int)(lVar22 - lVar21 >> 3) + -1;
          if (-1 < iVar9) {
            lVar16 = (longlong)iVar9;
            do {
              if (*(short **)(lVar21 + lVar16 * 8) == psVar14) {
                pvVar2 = (void *)(lVar21 + (longlong)iVar9 * 8);
                pvVar1 = (void *)((longlong)pvVar2 + 8);
                memmove(pvVar2,pvVar1,lVar22 - (longlong)pvVar1);
                DAT_141c53550 = DAT_141c53550 + -8;
                break;
              }
              iVar9 = iVar9 + -1;
              lVar16 = lVar16 + -1;
            } while (-1 < lVar16);
          }
          free(psVar14);
          lVar21 = DAT_141c53548;
          lVar22 = DAT_141c53550;
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    return;
  }
  if (5 < uVar6 - 0x47) {
    return;
  }
  FUN_140d823e0(&DAT_141c53470,param_1);
  local_130 = 0;
  local_138 = CONCAT31(local_138._1_3_,1);
  FUN_140d99a10(&DAT_141c53470,param_1,param_2,param_3);
  sVar5 = param_3 + -1;
  uVar6 = FUN_140004830(&DAT_141c53470,param_1,param_2,sVar5);
  if ((((uVar6 == 0xd7) || (uVar6 == 0x147)) || (uVar6 == 0x14b)) ||
     ((uVar6 == 0x168 || (uVar6 == 0x1b4)))) {
LAB_1406ad23d:
    cVar4 = FUN_1400c0380(uVar6);
    if (cVar4 == '\0') {
      cVar4 = FUN_1400c0400(uVar6);
      if (cVar4 == '\0') {
        cVar4 = FUN_1400c0480(uVar6);
        if (cVar4 == '\0') {
          cVar4 = FUN_14014e120(uVar6);
          if (cVar4 == '\0') {
            iVar9 = FUN_1401508a0(&DAT_141c53470,param_1,param_2,sVar5);
            if (((iVar9 < 0) ||
                ((ulonglong)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3) <= (ulonglong)(longlong)iVar9)) ||
               (cVar4 = FUN_14000d840(*(longlong *)(DAT_141d6dbe0 + (longlong)iVar9 * 8) + 0x38,0xb)
               , cVar4 == '\0')) {
              if (uVar6 == 0x103) {
                uVar7 = 0x104;
              }
              else {
                uVar7 = FUN_14066a350();
              }
            }
            else {
              uVar7 = FUN_14066a580();
            }
          }
          else {
            uVar7 = 0xff;
          }
        }
        else {
          uVar7 = FUN_14066a4a0();
        }
      }
      else {
        uVar7 = FUN_14066a430();
      }
    }
    else {
      uVar7 = FUN_14066a3c0();
    }
LAB_1406ad30e:
    local_138 = CONCAT22(local_138._2_2_,uVar7);
  }
  else {
    if (0x14a < uVar6) {
      if (2 < uVar6 - 0x1b1) goto LAB_1406ad1d7;
      goto LAB_1406ad23d;
    }
    if (((0xab < uVar6) && (0x94 < uVar6 - 0xaf)) && (uVar6 != 0x147)) goto LAB_1406ad23d;
LAB_1406ad1d7:
    if ((uVar6 - 0x165 < 3) || ((uVar6 - 0x103 & 0xfffd) == 0)) goto LAB_1406ad23d;
    uVar7 = FUN_140004830(&DAT_141c53470,param_1,param_2,sVar5);
    cVar4 = FUN_14014e2f0(uVar7);
    if (cVar4 != '\0') {
      uVar7 = 1;
      goto LAB_1406ad30e;
    }
    local_138 = CONCAT22(local_138._2_2_,0x20);
  }
  FUN_1400c5d30(&DAT_141c53470,param_1);
  sVar8 = FUN_140004830(&DAT_141c53470,param_1,param_2,sVar5);
  if (sVar8 == 0x1eb) {
LAB_1406ad382:
    local_130 = (int)(DAT_141c53598 - DAT_141c53590 >> 3) + -1;
    local_138 = 0;
    lVar21 = FUN_1405b4fb0(&DAT_141c53470,param_1,param_2,sVar5);
    if (lVar21 != 0) {
      psVar14 = operator_new(0x14);
      psVar14[3] = -1;
      psVar14[4] = -1;
      psVar14[5] = -1;
      psVar14[6] = -1;
      psVar14[7] = -1;
      *(undefined1 *)(psVar14 + 8) = 0;
      psVar14[9] = 0x20;
      *psVar14 = param_1;
      psVar14[1] = param_2;
      psVar14[2] = param_3;
      psVar14[3] = *(short *)(lVar21 + 6);
      psVar14[4] = *(short *)(lVar21 + 8);
      psVar14[5] = *(short *)(lVar21 + 10);
      *(undefined4 *)(psVar14 + 6) = *(undefined4 *)(lVar21 + 0xc);
      *(byte *)(psVar14 + 8) = *(byte *)(psVar14 + 8) | 2;
      local_128 = psVar14;
      sVar5 = FUN_140004830(&DAT_141c53470,param_1,param_2,param_3);
      psVar14[9] = sVar5;
      FUN_1405b4ca0(&DAT_141c53470,psVar14);
      local_138 = CONCAT22(local_138._2_2_,0x1e9);
      FUN_1400c5d30(&DAT_141c53470,param_1,param_2,param_3);
    }
  }
  else {
    uVar7 = FUN_140004830(&DAT_141c53470,param_1);
    cVar4 = FUN_14013b610(uVar7);
    if (cVar4 != '\0') {
      uVar7 = FUN_140004830(&DAT_141c53470,param_1);
      cVar4 = FUN_1400c05e0(uVar7);
      if (cVar4 != '\0') goto LAB_1406ad382;
    }
  }
  uVar12 = FUN_1400048f0(&DAT_141c53470,param_1,param_2,param_3);
  if (((uVar12 & 7) != 0) &&
     (iVar9 = (int)(DAT_141c6fdc0 - DAT_141c6fdb8 >> 3) + -1, lVar21 = (longlong)iVar9, -1 < iVar9))
  {
    do {
      plVar3 = *(longlong **)(DAT_141c6fdb8 + lVar21 * 8);
      if (((int)plVar3[4] == (int)param_3) &&
         (iVar9 = (**(code **)(*plVar3 + 0xd8))(), iVar9 != 0x13)) {
        plVar3 = *(longlong **)(DAT_141c6fdb8 + lVar21 * 8);
        cVar4 = (**(code **)(*plVar3 + 0x138))(plVar3);
        if ((cVar4 != '\0') && ((int)param_3 == (int)plVar3[4])) {
          cVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
          if ((cVar4 == '\0') || (plVar3[6] == 0)) {
            if (((int)plVar3[1] <= (int)param_1) &&
               ((((int)param_1 <= *(int *)((longlong)plVar3 + 0x14) &&
                 (*(int *)((longlong)plVar3 + 0xc) <= (int)param_2)) &&
                ((int)param_2 <= (int)plVar3[3])))) goto LAB_1406ad554;
          }
          else {
            cVar4 = FUN_1401745b0(plVar3,param_1,param_2,param_3);
            if (cVar4 != '\0') {
LAB_1406ad554:
              FUN_140198ca0(*(undefined8 *)(DAT_141c6fdb8 + lVar21 * 8),0,1);
            }
          }
        }
      }
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  FUN_140d86a60(&DAT_141c53470,param_1,param_2,param_3);
  sVar5 = param_1 + -2;
  if ((int)sVar5 <= param_1 + 2) {
    do {
      uVar19 = (uint)(short)(param_2 + -2);
      uVar10 = uVar19;
      while (sVar8 = (short)uVar10, (int)uVar19 <= param_2 + 2) {
        uVar12 = FUN_1400048f0(&DAT_141c53470,sVar5,uVar10,param_3);
        if ((uVar12 & 7) != 0) {
          DAT_141c70671 = 1;
          goto LAB_1406ad5f8;
        }
        uVar10 = (uint)(ushort)(sVar8 + 1U);
        uVar19 = (uint)(short)(sVar8 + 1U);
      }
      sVar5 = sVar5 + 1;
    } while ((int)sVar5 <= param_1 + 2);
  }
LAB_1406ad5f8:
  uVar7 = FUN_140004830(&DAT_141c53470,param_1,param_2,param_3);
  cVar4 = FUN_14014e400(uVar7);
  if (cVar4 != '\0') {
    uVar10 = FUN_1409fc0c0();
    uVar10 = (uVar10 + (int)((longlong)((ulonglong)uVar10 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             0x2aaaaaab;
    if (uVar10 == 0) {
      uVar7 = 0xee;
    }
    else if (uVar10 == 1) {
      uVar7 = 0xef;
    }
    else {
      if (uVar10 != 2) goto LAB_1406ad68a;
      uVar7 = 0xf0;
    }
    local_138 = CONCAT22(local_138._2_2_,uVar7);
    FUN_1400c5d30(&DAT_141c53470,param_1,param_2,param_3);
  }
LAB_1406ad68a:
  iVar9 = (int)(DAT_141c53550 - DAT_141c53548 >> 3) + -1;
  lVar13 = (longlong)iVar9;
  lVar21 = DAT_141c53548;
  lVar22 = DAT_141c53550;
  if (iVar9 < 0) {
    return;
  }
  do {
    psVar14 = *(short **)(lVar21 + lVar13 * 8);
    if (((*psVar14 == param_1) && (psVar14[1] == param_2)) &&
       ((psVar14[2] == param_3 && (psVar14 != (short *)0x0)))) {
      iVar9 = (int)(lVar22 - lVar21 >> 3) + -1;
      if (-1 < iVar9) {
        lVar16 = (longlong)iVar9;
        do {
          if (*(short **)(lVar21 + lVar16 * 8) == psVar14) {
            pvVar2 = (void *)(lVar21 + (longlong)iVar9 * 8);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,lVar22 - (longlong)pvVar1);
            DAT_141c53550 = DAT_141c53550 + -8;
            break;
          }
          iVar9 = iVar9 + -1;
          lVar16 = lVar16 + -1;
        } while (-1 < lVar16);
      }
      free(psVar14);
      lVar21 = DAT_141c53548;
      lVar22 = DAT_141c53550;
    }
    lVar13 = lVar13 + -1;
    if (lVar13 < 0) {
      return;
    }
  } while( true );
}

