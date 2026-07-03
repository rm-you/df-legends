// FUN_140c2bad0 @ 140c2bad0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14013b960 FUN_14013b960
//   -> 14000c2d0 FUN_14000c2d0
//   -> 1408264b0 FUN_1408264b0
//   -> 140cc1de0 FUN_140cc1de0
//   -> 140c882c0 FUN_140c882c0
//   -> 140c85b20 FUN_140c85b20
//   -> 1408317e0 FUN_1408317e0
//   -> 140c8f600 FUN_140c8f600
//   -> 140822a30 FUN_140822a30
//   -> 1407f5e50 FUN_1407f5e50
//   -> 1409f0530 FUN_1409f0530
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000dda0 FUN_14000dda0
//   -> 140c21270 FUN_140c21270
//   -> 140c5ad60 FUN_140c5ad60
//   -> 140cb7360 FUN_140cb7360
//   -> 140051300 FUN_140051300
//   -> 140c2c690 FUN_140c2c690
//   -> 140c841a0 FUN_140c841a0
//   -> 140c2cd40 FUN_140c2cd40
//   -> 140c88550 FUN_140c88550
//   -> 1407f0860 FUN_1407f0860


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c2bad0(longlong param_1,short param_2,char param_3,longlong param_4,ulonglong *param_5,
                  int param_6)

{
  int *piVar1;
  uint *puVar2;
  short sVar3;
  longlong **pplVar4;
  longlong **pplVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  char cVar9;
  undefined2 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  int iVar19;
  ulonglong *puVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  short sVar26;
  longlong lVar27;
  ulonglong uVar28;
  bool bVar29;
  longlong *local_res8;
  short local_res10;
  char local_res18;
  longlong local_res20;
  longlong local_60;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (((*(uint *)(param_1 + 0x118) >> 0xc & 1) == 0) &&
     ((*(uint *)(param_1 + 0x118) >> 10 & 1) == 0)) {
    lVar27 = (longlong)
             *(int *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)param_2 * 8) + 0xe0
                     );
    uVar12 = *(uint *)(*(longlong *)((longlong)param_2 * 8 + **(longlong **)(param_1 + 0x5d8)) +
                      0x84);
    if (0 < (int)uVar12) {
      uVar23 = 1;
      uVar28 = (ulonglong)uVar12;
      do {
        if (((int)uVar12 < 2) ||
           ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + lVar27 * 4) & uVar23) != 0)) {
          plVar15 = operator_new(0x380);
          FUN_14013b960(plVar15,0);
          *plVar15 = (longlong)item_corpsepiecest::vftable;
          pplVar4 = (longlong **)param_5[1];
          local_res8 = plVar15;
          if ((&local_res8 < pplVar4) && (pplVar5 = (longlong **)*param_5, pplVar5 <= &local_res8))
          {
            if (pplVar4 == (longlong **)param_5[2]) {
              FUN_14000c2d0(param_5,1);
            }
            if ((undefined8 *)param_5[1] != (undefined8 *)0x0) {
              *(undefined8 *)param_5[1] =
                   *(undefined8 *)(*param_5 + ((longlong)&local_res8 - (longlong)pplVar5 >> 3) * 8);
            }
          }
          else {
            if (pplVar4 == (longlong **)param_5[2]) {
              FUN_14000c2d0(param_5,1);
            }
            if ((undefined8 *)param_5[1] != (undefined8 *)0x0) {
              *(undefined8 *)param_5[1] = plVar15;
            }
          }
          param_5[1] = param_5[1] + 8;
          FUN_1408264b0(plVar15,param_1,0);
          *(undefined4 *)((longlong)plVar15 + 0x284) = DAT_1416b1980;
          *(undefined4 *)(plVar15 + 0x51) = DAT_1416b1974;
          *(int *)(plVar15 + 0x61) = *(int *)(param_1 + 0x6a8) / 10;
          if (1 < (int)uVar12) {
            puVar2 = (uint *)(plVar15[0x26] + lVar27 * 4);
            *puVar2 = *puVar2 | uVar23;
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x4e8) + lVar27 * 4);
            *puVar2 = *puVar2 & ~uVar23;
          }
          lVar21 = param_1;
          if (*(int *)(param_1 + 0xc14) == -1) {
            uVar13 = *(undefined4 *)((longlong)plVar15 + 0x1c);
          }
          else {
            lVar16 = FUN_140cc1de0(&DAT_141c66fd0);
            uVar13 = *(undefined4 *)((longlong)plVar15 + 0x1c);
            if (lVar16 != 0) {
              lVar21 = lVar16;
            }
          }
          FUN_140c882c0(lVar21,uVar13);
          cVar8 = FUN_140c85b20(param_1);
          if (cVar8 != '\0') {
            *(uint *)(plVar15 + 2) = *(uint *)(plVar15 + 2) | 0x80;
          }
          if ((*(longlong *)(param_1 + 0xd60) != 0) &&
             (cVar8 = (**(code **)(*plVar15 + 0x170))(plVar15), cVar8 != '\0')) {
            *(uint *)(plVar15 + 2) = *(uint *)(plVar15 + 2) | 0x100;
          }
          lVar21 = *plVar15;
          uVar10 = FUN_140c8f600(param_1);
          (**(code **)(lVar21 + 0x4c0))(plVar15,uVar10);
          (**(code **)(*plVar15 + 0x318))(plVar15);
        }
        uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    if ((local_res18 != '\0') &&
       (iVar11 = (int)((longlong)(param_5[1] - *param_5) >> 3) + -1, lVar27 = (longlong)iVar11,
       -1 < iVar11)) {
      do {
        plVar15 = *(longlong **)(*param_5 + lVar27 * 8);
        plVar17 = operator_new(0x98);
        local_res8 = plVar17;
        FUN_1409f0530(plVar17,0);
        *plVar17 = (longlong)proj_itemst::vftable;
        *(undefined2 *)(plVar17 + 4) = *(undefined2 *)(param_1 + 0xa8);
        *(undefined2 *)((longlong)plVar17 + 0x22) = *(undefined2 *)(param_1 + 0xaa);
        *(undefined2 *)((longlong)plVar17 + 0x24) = *(undefined2 *)(param_1 + 0xac);
        *(undefined2 *)((longlong)plVar17 + 0x32) = *(undefined2 *)(param_1 + 0xa8);
        *(undefined2 *)((longlong)plVar17 + 0x34) = *(undefined2 *)(param_1 + 0xaa);
        *(undefined2 *)((longlong)plVar17 + 0x36) = *(undefined2 *)(param_1 + 0xac);
        do {
          uVar12 = FUN_1409fc0c0();
          *(short *)((longlong)plVar17 + 0x26) =
               (short)((ulonglong)
                       (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / 0x8888889) + -7 + *(short *)(param_1 + 0xa8);
          uVar12 = FUN_1409fc0c0();
          *(short *)(plVar17 + 5) =
               (short)((ulonglong)
                       (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / 0x8888889) + -7 + *(short *)(param_1 + 0xaa);
          uVar12 = FUN_1409fc0c0();
          *(short *)((longlong)plVar17 + 0x2a) =
               (short)((ulonglong)
                       (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / 0x8888889) + -7 + *(short *)(param_1 + 0xac);
          if (*(short *)((longlong)plVar17 + 0x26) != *(short *)(param_1 + 0xa8)) break;
        } while ((short)plVar17[5] == *(short *)(param_1 + 0xaa));
        *(undefined4 *)(plVar17 + 7) = 0;
        plVar17[8] = -1;
        uVar12 = FUN_1409fc0c0();
        *(uint *)((longlong)plVar17 + 0x3c) =
             (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             0xccccccd + 2;
        *(short *)((longlong)plVar17 + 0x2c) = (short)plVar17[4];
        *(undefined2 *)((longlong)plVar17 + 0x2e) = *(undefined2 *)((longlong)plVar17 + 0x22);
        *(undefined2 *)(plVar17 + 6) = *(undefined2 *)((longlong)plVar17 + 0x24);
        plVar17[0x12] = (longlong)plVar15;
        *(short *)(plVar15 + 1) = (short)plVar17[4];
        *(undefined2 *)(plVar17[0x12] + 10) = *(undefined2 *)((longlong)plVar17 + 0x2e);
        *(short *)(plVar17[0x12] + 0xc) = (short)plVar17[6];
        FUN_14000dda0(plVar17[0x12],0xc,(int)plVar17[2]);
        plVar17[3] = 0;
        *(undefined4 *)((longlong)plVar17 + 0x4c) = 0x50005;
        *(undefined4 *)(plVar17 + 0xb) = 10;
        uVar13 = FUN_140c21270(0xb,0,5);
        *(undefined4 *)(plVar17 + 10) = uVar13;
        *(uint *)(plVar15 + 2) = *(uint *)(plVar15 + 2) | 2;
        *(uint *)(plVar17 + 9) = *(uint *)(plVar17 + 9) | 1;
        (**(code **)(*plVar15 + 0x4b8))(plVar15);
        lVar27 = lVar27 + -1;
      } while (-1 < lVar27);
    }
  }
  lVar16 = local_res20;
  uVar28 = 0;
  lVar27 = (longlong)local_res10;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar27 * 4);
  *puVar2 = *puVar2 | 2;
  bVar29 = (*(uint *)(*(longlong *)(param_1 + 0x4d0) + lVar27 * 4) & 0x100000) != 0;
  lVar27 = lVar27 * 8;
  lVar21 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar27);
  iVar11 = (int)(*(longlong *)(lVar21 + 0x60) - *(longlong *)(lVar21 + 0x58) >> 3) + -1;
  lVar21 = (longlong)iVar11;
  if (-1 < iVar11) {
    do {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x518) +
                       (longlong)
                       *(int *)(*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar27) + 0x58)
                                 + lVar21 * 8) + 0x68) * 4);
      *puVar2 = *puVar2 | 1;
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffdfffff;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffffff7f;
  sVar26 = 0;
  uVar24 = uVar28;
  if ((*(longlong **)(param_1 + 0x5d8))[1] - **(longlong **)(param_1 + 0x5d8) >> 3 != 0) {
    do {
      sVar3 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar24 * 8) + 0x40);
      if ((sVar3 != -1) &&
         (((*(longlong *)(param_1 + 0xd60) == 0 ||
           (sVar26 != *(short *)(*(longlong *)(param_1 + 0xd60) + 0x18))) &&
          ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar3 * 4) & 2) != 0)))) {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x4d0) + uVar24 * 4);
        *puVar2 = *puVar2 | 2;
        if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar24 * 4) & 0x100000) != 0) {
          bVar29 = true;
        }
        lVar21 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar24 * 8);
        iVar11 = (int)(*(longlong *)(lVar21 + 0x60) - *(longlong *)(lVar21 + 0x58) >> 3) + -1;
        lVar21 = (longlong)iVar11;
        if (-1 < iVar11) {
          do {
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x518) +
                             (longlong)
                             *(int *)(*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)
                                           (**(longlong **)(param_1 + 0x5d8) + uVar24 * 8) + 0x58) +
                                       lVar21 * 8) + 0x68) * 4);
            *puVar2 = *puVar2 | 1;
            lVar21 = lVar21 + -1;
          } while (-1 < lVar21);
        }
      }
      sVar26 = sVar26 + 1;
      uVar24 = (longlong)sVar26;
    } while ((ulonglong)(longlong)sVar26 <
             (ulonglong)
             ((*(longlong **)(param_1 + 0x5d8))[1] - **(longlong **)(param_1 + 0x5d8) >> 3));
  }
  uVar7 = _UNK_140f92f78;
  uVar24 = _DAT_140f92f70;
  if (bVar29) {
    puVar20 = *(ulonglong **)(param_1 + 0x4d0);
    uVar25 = (ulonglong)((longlong)*(ulonglong **)(param_1 + 0x4d8) + (3 - (longlong)puVar20)) >> 2;
    if (*(ulonglong **)(param_1 + 0x4d8) < puVar20) {
      uVar25 = uVar28;
    }
    if (uVar25 != 0) {
      if (7 < uVar25) {
        do {
          *puVar20 = *puVar20 & uVar24;
          puVar20[1] = puVar20[1] & uVar7;
          puVar20[2] = puVar20[2] & uVar24;
          puVar20[3] = puVar20[3] & uVar7;
          puVar20 = puVar20 + 4;
          uVar28 = uVar28 + 8;
        } while (uVar28 < uVar25 - ((uint)uVar25 & 7));
      }
      for (; uVar28 < uVar25; uVar28 = uVar28 + 1) {
        *(uint *)puVar20 = (uint)*puVar20 & 0xffe7ffff;
        puVar20 = (ulonglong *)((longlong)puVar20 + 4);
      }
    }
    *(undefined4 *)(param_1 + 0xd78) = 0xffffffff;
  }
  iVar11 = (int)((longlong)(param_5[1] - *param_5) >> 3) + -1;
  lVar21 = (longlong)iVar11;
  if (-1 < iVar11) {
    do {
      plVar15 = *(longlong **)(*param_5 + lVar21 * 8);
      sVar26 = (short)((longlong)
                       (ulonglong)(uint)(*(int *)(param_1 + 0x4d8) - *(int *)(param_1 + 0x4d0)) >> 2
                      ) + -1;
      if (-1 < sVar26) {
        lVar22 = (longlong)sVar26 << 2;
        do {
          if ((*(byte *)(lVar22 + *(longlong *)(param_1 + 0x4d0)) & 2) == 0) {
            *(uint *)(plVar15[0x23] + lVar22) = *(uint *)(plVar15[0x23] + lVar22) | 2;
          }
          lVar22 = lVar22 + -4;
          sVar26 = sVar26 + -1;
        } while (-1 < sVar26);
      }
      iVar11 = (int)(*(longlong *)(param_1 + 0x520) - *(longlong *)(param_1 + 0x518) >> 2) + -1;
      lVar22 = (longlong)iVar11;
      if (-1 < iVar11) {
        do {
          if ((*(byte *)(*(longlong *)(param_1 + 0x518) + lVar22 * 4) & 1) == 0) {
            puVar2 = (uint *)(plVar15[0x2c] + lVar22 * 4);
            *puVar2 = *puVar2 | 1;
          }
          lVar22 = lVar22 + -1;
        } while (-1 < lVar22);
      }
      (**(code **)(*plVar15 + 0x188))(plVar15);
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
  if (*(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar27) + 0x40) != -1) {
    uVar13 = FUN_140c5ad60(param_1);
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar13);
    lVar21 = FUN_140cb7360(param_1);
    if (lVar16 != 0) {
      *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)(lVar16 + 0xc10);
      *(undefined4 *)(lVar21 + 0x24) = *(undefined4 *)(lVar16 + 0x130);
    }
    *(uint *)(lVar21 + 0x2c) = *(uint *)(lVar21 + 0x2c) | 1;
    sVar26 = *(short *)(param_1 + 0xa4);
    if ((sVar26 < 0) ||
       ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar26)) {
      local_60 = 0;
    }
    else {
      local_60 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar26 * 8);
    }
    lVar21 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar27);
    iVar11 = (int)(*(longlong *)(lVar21 + 0x60) - *(longlong *)(lVar21 + 0x58) >> 3) + -1;
    if (-1 < iVar11) {
      lVar21 = (longlong)iVar11 << 3;
      do {
        lVar22 = 0;
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar27) + 0x58) +
                  lVar21);
        if ((0 < *(int *)(lVar16 + 0x30)) && ((**(byte **)(lVar16 + 0x28) & 1) != 0)) {
          if (local_60 != 0) {
            lVar22 = *(longlong *)
                      (*(longlong *)(local_60 + 0x24c8) + (longlong)*(int *)(lVar16 + 0x20) * 8);
          }
          puVar18 = operator_new(0xa8);
          *(undefined8 *)(puVar18 + 6) = 0;
          *(undefined8 *)(puVar18 + 8) = 0;
          *(undefined8 *)(puVar18 + 10) = 0;
          *(undefined8 *)(puVar18 + 0xc) = 0;
          *(undefined8 *)(puVar18 + 0xe) = 0;
          *(undefined8 *)(puVar18 + 0x10) = 0;
          *(undefined8 *)(puVar18 + 0x12) = 0;
          *(undefined8 *)(puVar18 + 0x14) = 0;
          *(undefined8 *)(puVar18 + 0x16) = 0;
          *puVar18 = 0xffffffff;
          *(undefined2 *)(puVar18 + 1) = 0xffff;
          *(undefined2 *)((longlong)puVar18 + 6) = 0xffff;
          puVar18[2] = 1;
          *(undefined2 *)(puVar18 + 3) = 0;
          puVar18[4] = 0;
          *(undefined8 *)(puVar18 + 0x19) = 0;
          *(undefined2 *)(puVar18 + 0x18) = 0;
          *(undefined8 *)(puVar18 + 0x1b) = 0;
          *(undefined8 *)(puVar18 + 0x1d) = 0;
          *(undefined8 *)(puVar18 + 0x1f) = 0;
          *(undefined8 *)(puVar18 + 0x21) = 0;
          *(undefined8 *)(puVar18 + 0x23) = 0;
          *(undefined8 *)(puVar18 + 0x25) = 0;
          puVar18[0x27] = 0xffffffff;
          puVar18[0x28] = 0;
          *puVar18 = *(undefined4 *)(lVar16 + 0x68);
          *(short *)(puVar18 + 1) = local_res10;
          *(short *)((longlong)puVar18 + 6) = (short)iVar11;
          puVar18[0x1b] = *(int *)(lVar16 + 0x40) * 3;
          iVar14 = (int)(*(longlong **)(param_1 + 0x5d8))[0xc];
          iVar19 = 1;
          if (((0 < iVar14) &&
              (iVar14 = (*(int *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar27) + 0x80) *
                        100) / iVar14, iVar19 = 1, 0 < iVar14)) && (iVar19 = iVar14, 10 < iVar14)) {
            iVar19 = 10;
          }
          puVar18[0x1c] = (*(int *)(lVar16 + 0x44) * iVar19 * 300) / 1000;
          if ((((lVar22 != 0) &&
               ((lVar6 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar27),
                *(int *)(lVar6 + 0x50) < 2 ||
                ((*(byte *)(*(longlong *)(lVar6 + 0x48) + 1) & 0x20) == 0)))) &&
              (0 < *(int *)(lVar22 + 0x28))) &&
             (((**(byte **)(lVar22 + 0x20) & 4) != 0 && (param_6 < 0x32)))) {
            puVar18[0x1b] = puVar18[0x1b] + (*(int *)(lVar16 + 0x40) * (int)local_res8) / 10 + 1;
            puVar18[0x19] = 0x40000000;
          }
          if (((0 < *(int *)(lVar16 + 0x30)) && ((**(byte **)(lVar16 + 0x28) & 2) != 0)) &&
             (param_6 < 0x4b)) {
            puVar18[0x1b] = puVar18[0x1b] + (*(int *)(lVar16 + 0x40) * (int)local_res8) / 5 + 1;
            iVar14 = *(int *)(param_1 + 0x6a4) / 100;
            iVar19 = puVar18[0x1b];
            if ((int)puVar18[0x1b] < iVar14) {
              iVar19 = iVar14;
            }
            puVar18[0x1b] = iVar19;
            puVar18[0x19] = puVar18[0x19] | 0x4000;
          }
          FUN_140051300(puVar18);
          if ((-1 < param_6) && ((puVar18[0x19] & 0x4000) == 0)) {
            iVar14 = (int)((ulonglong)((longlong)param_6 * -0x66666667) >> 0x20);
            piVar1 = puVar18 + 0x1b;
            *piVar1 = *piVar1 + ((iVar14 >> 2) - (iVar14 >> 0x1f));
            uVar13 = puVar18[0x1b];
            if (*piVar1 < 0) {
              uVar13 = 0;
            }
            puVar18[0x1b] = uVar13;
          }
        }
        lVar21 = lVar21 + -8;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  FUN_140c2c690(param_1,param_5);
  FUN_140c841a0(param_1);
  FUN_140c2cd40(param_1);
  if ((DAT_1410b67dc == 0) &&
     (iVar11 = (int)((longlong)(param_5[1] - *param_5) >> 3) + -1, lVar27 = (longlong)iVar11,
     -1 < iVar11)) {
    do {
      lVar21 = *(longlong *)(*param_5 + lVar27 * 8);
      cVar9 = FUN_140c88550(param_1);
      cVar8 = DAT_14155b2da;
      if (cVar9 != '\0') {
        cVar8 = DAT_14155b2df;
      }
      if (cVar8 != '\0') {
        puVar2 = (uint *)(lVar21 + 0x10);
        *puVar2 = *puVar2 | 0x80000;
        FUN_1407f0860(lVar21,3);
      }
      lVar27 = lVar27 + -1;
    } while (-1 < lVar27);
  }
  return;
}

