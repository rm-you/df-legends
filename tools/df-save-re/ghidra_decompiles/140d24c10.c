// FUN_140d24c10 @ 140d24c10
// callees:
//   -> 140d29c10 FUN_140d29c10
//   -> 140d29db0 FUN_140d29db0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140d29b00 FUN_140d29b00
//   -> 140ceef90 FUN_140ceef90
//   -> 14000bd10 FUN_14000bd10
//   -> 14014a480 FUN_14014a480
//   -> 140c5db20 FUN_140c5db20


void FUN_140d24c10(longlong param_1,int param_2,char param_3)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ushort *puVar6;
  ulonglong *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  short sVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong *plVar30;
  int iVar31;
  int iVar32;
  longlong *plVar33;
  longlong *plVar34;
  ulonglong uVar35;
  longlong *plVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  longlong *plVar40;
  int iVar41;
  longlong *plVar42;
  int iVar43;
  longlong *plVar44;
  int iVar45;
  longlong *plVar46;
  int iVar47;
  longlong *plVar48;
  int iVar49;
  int iVar50;
  longlong *plVar51;
  int iVar52;
  int iVar53;
  ulonglong uVar54;
  longlong *local_res20;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_78;
  longlong *local_70;
  
  FUN_140d29c10();
  FUN_140d29db0(param_1);
  plVar23 = *(longlong **)(param_1 + 0x13c28);
  for (plVar22 = *(longlong **)(param_1 + 0x13c20); plVar22 < plVar23; plVar22 = plVar22 + 1) {
    lVar28 = *plVar22;
    lVar19 = *(longlong *)(lVar28 + 0x10);
    if (*(int *)(lVar19 + 0x30) == -1) {
      plVar30 = *(longlong **)(lVar19 + 0xf0);
      for (plVar24 = *(longlong **)(lVar19 + 0xe8); plVar24 < plVar30; plVar24 = plVar24 + 1) {
        puVar21 = (undefined8 *)*plVar24;
        sVar17 = (**(code **)*puVar21)(puVar21);
        if (sVar17 == 10) {
          if (*(short *)((longlong)puVar21 + 0xc) != 0) goto switchD_140d24d36_caseD_3b;
          break;
        }
      }
      plVar30 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xf0);
      for (plVar24 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xe8); plVar24 < plVar30;
          plVar24 = plVar24 + 1) {
        puVar21 = (undefined8 *)*plVar24;
        sVar17 = (**(code **)*puVar21)(puVar21);
        if (sVar17 == 0xb) {
          if (*(short *)((longlong)puVar21 + 0xc) != 0) goto switchD_140d24d36_caseD_3b;
          break;
        }
      }
      lVar19 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x130);
      if ((lVar19 != 0) && (lVar19 = *(longlong *)(lVar19 + 8), lVar19 != 0)) {
        switch(*(undefined2 *)(lVar19 + 0x60)) {
        case 0x3b:
        case 0x45:
        case 0x4a:
        case 0x65:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
switchD_140d24d36_caseD_3b:
          if (1 < *(int *)(lVar28 + 0x60)) {
            pbVar1 = (byte *)(*(longlong *)(lVar28 + 0x58) + 1);
            *pbVar1 = *pbVar1 | 8;
          }
        }
      }
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x13c38);
  lVar28 = 0xf;
  puVar4 = (undefined8 *)(param_1 + 0x13c50);
  *(undefined8 *)(param_1 + 0x13c40) = *puVar3;
  puVar21 = (undefined8 *)(param_1 + 0x13c98);
  *(undefined8 *)(param_1 + 0x13c58) = *puVar4;
  *(undefined8 *)(param_1 + 0x13c70) = *(undefined8 *)(param_1 + 81000);
  *(undefined8 *)(param_1 + 0x13c88) = *(undefined8 *)(param_1 + 0x13c80);
  do {
    puVar21[1] = *puVar21;
    puVar21 = puVar21 + 3;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  *(undefined8 *)(param_1 + 0x13e08) = *(undefined8 *)(param_1 + 0x13e00);
  *(undefined8 *)(param_1 + 0x13e20) = *(undefined8 *)(param_1 + 0x13e18);
  *(undefined8 *)(param_1 + 0x13e38) = *(undefined8 *)(param_1 + 0x13e30);
  *(undefined8 *)(param_1 + 0x13e50) = *(undefined8 *)(param_1 + 0x13e48);
  *(undefined8 *)(param_1 + 0x13e68) = *(undefined8 *)(param_1 + 0x13e60);
  *(undefined8 *)(param_1 + 0x13e80) = *(undefined8 *)(param_1 + 0x13e78);
  *(undefined8 *)(param_1 + 0x13e98) = *(undefined8 *)(param_1 + 0x13e90);
  *(undefined8 *)(param_1 + 0x13eb0) = *(undefined8 *)(param_1 + 0x13ea8);
  *(undefined8 *)(param_1 + 0x13ec8) = *(undefined8 *)(param_1 + 0x13ec0);
  plVar22 = *(longlong **)(param_1 + 0x13c20);
  iVar47 = 0;
  iVar10 = 0;
  iVar49 = 0;
  iVar11 = 0;
  iVar32 = 0;
  local_a8 = 0;
  iVar52 = 0;
  iVar12 = 0;
  iVar26 = 0;
  iVar13 = 0;
  iVar38 = 0;
  iVar15 = 0;
  iVar41 = 0;
  iVar14 = 0;
  iVar43 = 0;
  iVar27 = 0;
  iVar45 = 0;
  iVar39 = 0;
  iVar20 = 0;
  iVar50 = 0;
  iVar31 = 0;
  iVar53 = 0;
  if (plVar22 < plVar23) {
LAB_140d24ea0:
    lVar28 = *plVar22;
    lVar19 = *(longlong *)(lVar28 + 0x10);
    iVar49 = iVar50;
    iVar32 = iVar31;
    iVar52 = iVar53;
    if (*(int *)(lVar19 + 0x30) == -1) {
      iVar32 = iVar10;
      if ((1 < *(int *)(lVar28 + 0x60)) &&
         ((*(byte *)(*(longlong *)(lVar28 + 0x58) + 1) & 0x20) != 0)) {
        iVar32 = iVar31 + 1;
      }
      iVar52 = iVar11;
      if ((*(longlong *)(lVar19 + 0x130) != 0) &&
         (lVar18 = *(longlong *)(*(longlong *)(lVar19 + 0x130) + 8), lVar18 != 0)) {
        switch(*(undefined2 *)(lVar18 + 0x60)) {
        case 0x3b:
        case 0x45:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
          iVar15 = iVar43 + 1;
          break;
        case 0x4a:
          iVar20 = iVar20 + 1;
          break;
        case 0x65:
        case 0x6a:
        case 0x6c:
        case 0x6d:
        case 0x6e:
          iVar14 = iVar45 + 1;
          break;
        case 0x6b:
        case 0x81:
        case 0x82:
          iVar27 = iVar27 + 1;
          break;
        case 0x71:
          local_a8 = iVar26 + 1;
          iVar52 = iVar53 + 1;
          break;
        case 0x72:
          iVar52 = iVar53 + 1;
          iVar12 = iVar38 + 1;
          break;
        case 0x73:
          iVar52 = iVar53 + 1;
          iVar13 = iVar41 + 1;
          break;
        case 0x83:
        case 0x84:
        case 0x85:
          iVar39 = iVar39 + 1;
        }
      }
      iVar43 = iVar15;
      iVar45 = iVar14;
      iVar41 = iVar13;
      iVar38 = iVar12;
      plVar30 = *(longlong **)(lVar19 + 0xf0);
      for (plVar24 = *(longlong **)(lVar19 + 0xe8); iVar26 = local_a8, iVar10 = iVar32,
          iVar11 = iVar52, iVar12 = iVar38, iVar13 = iVar41, iVar14 = iVar45, iVar15 = iVar43,
          plVar24 < plVar30; plVar24 = plVar24 + 1) {
        puVar21 = (undefined8 *)*plVar24;
        sVar17 = (**(code **)*puVar21)(puVar21);
        if (sVar17 == 0) {
          if (*(short *)((longlong)puVar21 + 0xc) != 0) goto LAB_140d25269;
          break;
        }
      }
      plVar30 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xf0);
      for (plVar24 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xe8); plVar24 < plVar30;
          plVar24 = plVar24 + 1) {
        puVar21 = (undefined8 *)*plVar24;
        sVar17 = (**(code **)*puVar21)(puVar21);
        if (sVar17 == 6) {
          if (*(short *)((longlong)puVar21 + 0xc) != 0) goto LAB_140d25269;
          break;
        }
      }
      plVar30 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xf0);
      for (plVar24 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xe8); plVar24 < plVar30;
          plVar24 = plVar24 + 1) {
        puVar21 = (undefined8 *)*plVar24;
        sVar17 = (**(code **)*puVar21)(puVar21);
        if (sVar17 == 4) {
          if (*(short *)((longlong)puVar21 + 0xc) != 0) goto LAB_140d25269;
          break;
        }
      }
      iVar47 = iVar47 + 1;
    }
    goto LAB_140d25055;
  }
LAB_140d2506c:
  FUN_14000b9d0(puVar3,(longlong)iVar47);
  FUN_14000b9d0(puVar4,(longlong)iVar49);
  FUN_14000b9d0(param_1 + 81000,(longlong)iVar32);
  FUN_14000b9d0((undefined8 *)(param_1 + 0x13e00),(longlong)iVar52);
  FUN_14000b9d0((undefined8 *)(param_1 + 0x13e18),(longlong)local_a8);
  FUN_14000b9d0((undefined8 *)(param_1 + 0x13e30),(longlong)iVar12);
  FUN_14000b9d0((undefined8 *)(param_1 + 0x13e48),(longlong)iVar13);
  FUN_14000b9d0(param_1 + 0x13e60,(longlong)iVar15);
  FUN_14000b9d0(param_1 + 0x13e78,(longlong)iVar14);
  FUN_14000b9d0(param_1 + 0x13e90,(longlong)iVar27);
  FUN_14000b9d0(param_1 + 0x13ea8,(longlong)iVar39);
  FUN_14000b9d0(param_1 + 0x13ec0,(longlong)iVar20);
  local_res20 = *(longlong **)(param_1 + 0x13e30);
  plVar22 = *(longlong **)(param_1 + 0x13e48);
  plVar24 = (longlong *)*puVar3;
  plVar30 = (longlong *)*puVar4;
  plVar25 = *(longlong **)(param_1 + 0x13e60);
  plVar40 = *(longlong **)(param_1 + 0x13e78);
  plVar42 = *(longlong **)(param_1 + 0x13e90);
  plVar44 = *(longlong **)(param_1 + 0x13ea8);
  plVar46 = *(longlong **)(param_1 + 0x13ec0);
  plVar36 = *(longlong **)(param_1 + 0x13c20);
  plVar34 = *(longlong **)(param_1 + 81000);
  plVar48 = *(longlong **)(param_1 + 0x13e00);
  plVar51 = *(longlong **)(param_1 + 0x13e18);
  local_a0 = plVar46;
  local_98 = plVar44;
  local_90 = plVar42;
  local_88 = plVar40;
  local_78 = plVar25;
  local_70 = plVar22;
  if (plVar36 < plVar23) {
LAB_140d251c0:
    lVar28 = *plVar36;
    if (*(int *)(*(longlong *)(lVar28 + 0x10) + 0x30) == -1) {
      if ((1 < *(int *)(lVar28 + 0x60)) &&
         ((*(byte *)(*(longlong *)(lVar28 + 0x58) + 1) & 0x20) != 0)) {
        *plVar34 = lVar28;
        plVar34 = plVar34 + 1;
      }
      lVar19 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x130);
      if ((lVar19 != 0) && (lVar19 = *(longlong *)(lVar19 + 8), lVar19 != 0)) {
        switch(*(undefined2 *)(lVar19 + 0x60)) {
        case 0x3b:
        case 0x45:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
          *plVar25 = lVar28;
          local_78 = plVar25 + 1;
          break;
        case 0x4a:
          *plVar46 = lVar28;
          local_a0 = plVar46 + 1;
          break;
        case 0x65:
        case 0x6a:
        case 0x6c:
        case 0x6d:
        case 0x6e:
          *plVar40 = lVar28;
          local_88 = plVar40 + 1;
          break;
        case 0x6b:
        case 0x81:
        case 0x82:
          *plVar42 = lVar28;
          local_90 = plVar42 + 1;
          break;
        case 0x71:
          *plVar48 = lVar28;
          plVar48 = plVar48 + 1;
          *plVar51 = lVar28;
          plVar51 = plVar51 + 1;
          break;
        case 0x72:
          *plVar48 = lVar28;
          plVar48 = plVar48 + 1;
          *local_res20 = lVar28;
          local_res20 = local_res20 + 1;
          break;
        case 0x73:
          *plVar48 = lVar28;
          plVar48 = plVar48 + 1;
          *plVar22 = lVar28;
          local_70 = plVar22 + 1;
          break;
        case 0x83:
        case 0x84:
        case 0x85:
          *plVar44 = lVar28;
          local_98 = plVar44 + 1;
        }
      }
      plVar5 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xf0);
      for (plVar33 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xe8); plVar22 = local_70,
          plVar25 = local_78, plVar40 = local_88, plVar42 = local_90, plVar44 = local_98,
          plVar46 = local_a0, plVar33 < plVar5; plVar33 = plVar33 + 1) {
        puVar21 = (undefined8 *)*plVar33;
        sVar17 = (**(code **)*puVar21)();
        if (sVar17 == 0) {
          if (*(short *)((longlong)puVar21 + 0xc) != 0) goto LAB_140d254ce;
          break;
        }
      }
      plVar5 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xf0);
      for (plVar33 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xe8); plVar33 < plVar5;
          plVar33 = plVar33 + 1) {
        puVar21 = (undefined8 *)*plVar33;
        sVar17 = (**(code **)*puVar21)();
        if (sVar17 == 6) {
          if (*(short *)((longlong)puVar21 + 0xc) != 0) goto LAB_140d254ce;
          break;
        }
      }
      plVar5 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xf0);
      for (plVar33 = *(longlong **)(*(longlong *)(lVar28 + 0x10) + 0xe8); plVar33 < plVar5;
          plVar33 = plVar33 + 1) {
        puVar21 = (undefined8 *)*plVar33;
        sVar17 = (**(code **)*puVar21)();
        if (sVar17 == 4) {
          if (*(short *)((longlong)puVar21 + 0xc) != 0) goto LAB_140d254ce;
          break;
        }
      }
      *plVar24 = lVar28;
      plVar24 = plVar24 + 1;
    }
    goto LAB_140d2543f;
  }
LAB_140d2544c:
  if (DAT_1410b67dc == 0) {
    lVar28 = *(longlong *)(param_1 + 0x2b0) - *(longlong *)(param_1 + 0x2a8) >> 3;
    if ((lVar28 != 0) && (DAT_141c36b88 != -1)) {
      iVar39 = 0;
      iVar27 = (int)lVar28 + -1;
      if (-1 < iVar27) {
        do {
          iVar20 = iVar27 + iVar39 >> 1;
          DAT_141c3d250 = *(longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar20 * 8);
          if (*(int *)(DAT_141c3d250 + 4) == DAT_141c36b88) goto LAB_140d25526;
          if (DAT_141c36b88 < *(int *)(DAT_141c3d250 + 4)) {
            iVar27 = iVar20 + -1;
          }
          else {
            iVar39 = iVar20 + 1;
          }
        } while (iVar39 <= iVar27);
      }
    }
    DAT_141c3d250 = 0;
LAB_140d25526:
    uVar35 = 0;
    lVar28 = *(longlong *)(param_1 + 0x119b60);
    DAT_141c3d258 = uVar35;
    if (((*(longlong *)(lVar28 + 0x170) - *(longlong *)(lVar28 + 0x168) & 0xfffffffffffffff8U) != 0)
       && (DAT_141c36b84 != -1)) {
      iVar27 = (int)(*(longlong *)(lVar28 + 0x170) - *(longlong *)(lVar28 + 0x168) >> 3) + -1;
      uVar54 = uVar35;
      if (-1 < iVar27) {
        do {
          iVar20 = iVar27 + (int)uVar54 >> 1;
          DAT_141c3d258 = *(ulonglong *)(*(longlong *)(lVar28 + 0x168) + (longlong)iVar20 * 8);
          iVar39 = *(int *)(DAT_141c3d258 + 0x88);
          if (iVar39 == DAT_141c36b84) break;
          if (DAT_141c36b84 < iVar39) {
            iVar27 = iVar20 + -1;
          }
          else {
            uVar54 = (ulonglong)(iVar20 + 1);
          }
          DAT_141c3d258 = uVar35;
        } while ((int)uVar54 <= iVar27);
      }
    }
  }
  uVar35 = 0;
  if ((param_3 != '\0') &&
     (FUN_140d29b00(param_1), uVar54 = uVar35, uVar29 = uVar35,
     *(longlong *)(param_1 + 0x1d3d8) - *(longlong *)(param_1 + 0x1d3d0) >> 3 != 0)) {
    do {
      FUN_140ceef90(*(undefined8 *)(uVar54 + *(longlong *)(param_1 + 0x1d3d0)));
      uVar37 = (int)uVar29 + 1;
      uVar54 = uVar54 + 8;
      uVar29 = (ulonglong)uVar37;
    } while ((ulonglong)(longlong)(int)uVar37 <
             (ulonglong)(*(longlong *)(param_1 + 0x1d3d8) - *(longlong *)(param_1 + 0x1d3d0) >> 3));
  }
  plVar23 = *(longlong **)(param_1 + 0x1c930);
  uVar54 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x1c938) + (7 - (longlong)plVar23)) >> 3;
  if (*(longlong **)(param_1 + 0x1c938) < plVar23) {
    uVar54 = uVar35;
  }
  uVar29 = uVar35;
  if (uVar54 != 0) {
    do {
      if (*(longlong *)(*plVar23 + 0xe0) == 0) {
        *(undefined4 *)(*plVar23 + 0xd8) = 0xffffffff;
      }
      plVar23 = plVar23 + 1;
      uVar29 = uVar29 + 1;
    } while (uVar29 < uVar54);
  }
  if (param_2 < 0x5a6) {
    lVar28 = DAT_141c36e08 - DAT_141c36e00 >> 2;
    if ((lVar28 != 0) && (lVar28 != (int)(DAT_141d77a40 - DAT_141d77a38 >> 1))) {
      FUN_14000bd10(&DAT_141c36e00);
      FUN_14014a480("old save: resizing plant values");
    }
  }
  if (param_2 < 0x5a3) {
    bVar8 = false;
    plVar23 = *(longlong **)(param_1 + 0x126c38);
    uVar54 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x126c40) + (7 - (longlong)plVar23)) >>
             3;
    if (*(longlong **)(param_1 + 0x126c40) < plVar23) {
      uVar54 = uVar35;
    }
    lVar28 = DAT_141d6cfd0;
    if (uVar54 != 0) {
      do {
        lVar19 = *plVar23;
        if ((((*(longlong *)(lVar19 + 0x130) != 0) &&
             (lVar18 = *(longlong *)(*(longlong *)(lVar19 + 0x130) + 0x28), lVar18 != 0)) &&
            (*(int *)(lVar18 + 0x1c) != -1)) &&
           ((*(int *)(lVar28 + 0xa0) <= *(int *)(lVar18 + 0x1c) / 0x30 ||
            (*(int *)(lVar28 + 0xa4) <= *(int *)(lVar18 + 0x20) / 0x30)))) {
          if (!bVar8) {
            FUN_14014a480("old save: resetting out of bound hf coordinates");
            bVar8 = true;
          }
          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar19 + 0x130) + 0x28) + 0x1c) = 0xffffffff;
          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar19 + 0x130) + 0x28) + 0x20) = 0xffffffff;
          puVar2 = (uint *)(*(longlong *)(*(longlong *)(lVar19 + 0x130) + 0x28) + 0x24);
          *puVar2 = *puVar2 & 0xfffffffc;
          lVar28 = DAT_141d6cfd0;
        }
        plVar23 = plVar23 + 1;
        uVar35 = uVar35 + 1;
      } while (uVar35 < uVar54);
    }
  }
  plVar23 = DAT_141c66ff0;
  if (((param_2 < 0x5a5) && (DAT_1410b67dc == 0)) &&
     (bVar8 = false, plVar22 = DAT_141c66fe8, DAT_141c66fe8 < DAT_141c66ff0)) {
    do {
      lVar28 = *plVar22;
      if (((*(int *)(lVar28 + 0x140) == DAT_141c36b80) && (*(short *)(lVar28 + 0x348) != 7)) &&
         (cVar16 = FUN_140c5db20(lVar28), cVar16 == '\0')) {
        if ((*(int *)(lVar28 + 0x1260) < 2) ||
           ((*(byte *)(*(longlong *)(lVar28 + 0x1258) + 1) & 8) == 0)) {
          if (((*(byte *)(lVar28 + 0x810) & 2) != 0) || ((*(byte *)(lVar28 + 0x80c) & 2) == 0))
          goto LAB_140d2587d;
        }
        else if ((*(byte *)(lVar28 + 0x810) & 2) != 0) {
LAB_140d2587d:
          if (((*(longlong *)(lVar28 + 0xd60) == 0) && ((*(uint *)(lVar28 + 0x118) & 0x1000) == 0))
             && ((*(uint *)(lVar28 + 0x110) & 0xa08d0) == 0)) {
            if ((*(uint *)(lVar28 + 0x114) >> 0x12 & 1) != 0) {
              bVar8 = true;
              *(uint *)(lVar28 + 0x114) = *(uint *)(lVar28 + 0x114) & 0xfffbffff;
            }
            uVar37 = *(uint *)(*plVar22 + 0x114);
            if ((uVar37 >> 0x13 & 1) != 0) {
              bVar8 = true;
              *(uint *)(*plVar22 + 0x114) = uVar37 & 0xfff7ffff;
            }
            uVar37 = *(uint *)(*plVar22 + 0x114);
            if ((uVar37 >> 0x16 & 1) != 0) {
              bVar8 = true;
              *(uint *)(*plVar22 + 0x114) = uVar37 & 0xffbfffff;
            }
            uVar37 = *(uint *)(*plVar22 + 0x114);
            if ((uVar37 >> 0x17 & 1) != 0) {
              bVar8 = true;
              *(uint *)(*plVar22 + 0x114) = uVar37 & 0xff7fffff;
            }
            uVar37 = *(uint *)(*plVar22 + 0x118);
            if ((int)uVar37 < 0) {
              bVar8 = true;
              *(uint *)(*plVar22 + 0x118) = uVar37 & 0x7fffffff;
            }
          }
        }
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 < plVar23);
    if (bVar8) {
      FUN_14014a480("old save: fixing possible broken hostile migrants");
    }
  }
  if (param_2 < 0x5af) {
    bVar8 = false;
    bVar9 = false;
    plVar23 = *(longlong **)(*(longlong *)(param_1 + 0x119b60) + 0x170);
    plVar22 = *(longlong **)(*(longlong *)(param_1 + 0x119b60) + 0x168);
    lVar28 = DAT_141c53718;
    if (plVar22 < plVar23) {
      do {
        uVar35 = 0;
        lVar19 = *plVar22;
        lVar18 = *(longlong *)(lVar19 + 0x3f0);
        if (lVar18 != 0) {
          plVar24 = *(longlong **)(lVar18 + 8);
          uVar54 = (ulonglong)((longlong)*(longlong **)(lVar18 + 0x10) + (7 - (longlong)plVar24)) >>
                   3;
          if (*(longlong **)(lVar18 + 0x10) < plVar24) {
            uVar54 = uVar35;
          }
          if (uVar54 != 0) {
            do {
              lVar18 = DAT_141c53720 - lVar28 >> 3;
              iVar27 = *(int *)(*plVar24 + 8);
              if ((lVar18 != 0) && (iVar27 != -1)) {
                iVar39 = (int)lVar18 + -1;
                iVar20 = 0;
                bVar8 = bVar9;
                if (-1 < iVar39) {
                  do {
                    iVar32 = iVar39 + iVar20 >> 1;
                    puVar6 = *(ushort **)(lVar28 + (longlong)iVar32 * 8);
                    if (*(int *)(puVar6 + 2) == iVar27) {
                      if ((puVar6 != (ushort *)0x0) && (*puVar6 < 2)) {
                        *(undefined4 *)(*plVar24 + 8) = 0xffffffff;
                        bVar9 = true;
                        lVar28 = DAT_141c53718;
                        bVar8 = true;
                      }
                      break;
                    }
                    if (iVar27 < *(int *)(puVar6 + 2)) {
                      iVar39 = iVar32 + -1;
                    }
                    else {
                      iVar20 = iVar32 + 1;
                    }
                  } while (iVar20 <= iVar39);
                }
              }
              plVar24 = plVar24 + 1;
              uVar35 = uVar35 + 1;
            } while (uVar35 < uVar54);
          }
        }
        puVar7 = *(ulonglong **)(lVar19 + 0x308);
        if (puVar7 != (ulonglong *)0x0) {
          plVar24 = (longlong *)puVar7[1];
          plVar30 = (longlong *)*puVar7;
          if (plVar30 < plVar24) {
            do {
              plVar25 = *(longlong **)(*plVar30 + 0x60);
              plVar40 = *(longlong **)(*plVar30 + 0x68);
              uVar35 = (ulonglong)((longlong)plVar40 + (7 - (longlong)plVar25)) >> 3;
              if (plVar40 < plVar25) {
                uVar35 = 0;
              }
              uVar54 = 0;
              if (uVar35 != 0) {
                do {
                  lVar18 = DAT_141c53720 - lVar28 >> 3;
                  iVar27 = *(int *)(*plVar25 + 8);
                  if ((lVar18 != 0) && (iVar27 != -1)) {
                    iVar39 = (int)lVar18 + -1;
                    iVar20 = 0;
                    if (-1 < iVar39) {
                      do {
                        iVar32 = iVar39 + iVar20 >> 1;
                        puVar6 = *(ushort **)(lVar28 + (longlong)iVar32 * 8);
                        bVar8 = bVar9;
                        if (*(int *)(puVar6 + 2) == iVar27) {
                          if ((puVar6 != (ushort *)0x0) && (*puVar6 < 2)) {
                            *(undefined4 *)(*plVar25 + 8) = 0xffffffff;
                            bVar9 = true;
                            lVar28 = DAT_141c53718;
                            bVar8 = true;
                          }
                          break;
                        }
                        if (iVar27 < *(int *)(puVar6 + 2)) {
                          iVar39 = iVar32 + -1;
                        }
                        else {
                          iVar20 = iVar32 + 1;
                        }
                      } while (iVar20 <= iVar39);
                    }
                  }
                  plVar25 = plVar25 + 1;
                  uVar54 = uVar54 + 1;
                } while (uVar54 < uVar35);
              }
              plVar30 = plVar30 + 1;
            } while (plVar30 < plVar24);
          }
          plVar24 = *(longlong **)(*(longlong *)(lVar19 + 0x308) + 0x41748);
          plVar30 = *(longlong **)(*(longlong *)(lVar19 + 0x308) + 0x41740);
          if (plVar30 < plVar24) {
            do {
              plVar25 = *(longlong **)(*plVar30 + 0xf0);
              plVar40 = *(longlong **)(*plVar30 + 0xf8);
              uVar35 = (ulonglong)((longlong)plVar40 + (7 - (longlong)plVar25)) >> 3;
              if (plVar40 < plVar25) {
                uVar35 = 0;
              }
              uVar54 = 0;
              if (uVar35 != 0) {
                do {
                  lVar19 = DAT_141c53720 - lVar28 >> 3;
                  iVar27 = *(int *)(*plVar25 + 8);
                  if ((lVar19 != 0) && (iVar27 != -1)) {
                    iVar39 = (int)lVar19 + -1;
                    iVar20 = 0;
                    if (-1 < iVar39) {
                      do {
                        iVar32 = iVar39 + iVar20 >> 1;
                        puVar6 = *(ushort **)(lVar28 + (longlong)iVar32 * 8);
                        bVar8 = bVar9;
                        if (*(int *)(puVar6 + 2) == iVar27) {
                          if ((puVar6 != (ushort *)0x0) && (*puVar6 < 2)) {
                            *(undefined4 *)(*plVar25 + 8) = 0xffffffff;
                            bVar9 = true;
                            lVar28 = DAT_141c53718;
                            bVar8 = true;
                          }
                          break;
                        }
                        if (iVar27 < *(int *)(puVar6 + 2)) {
                          iVar39 = iVar32 + -1;
                        }
                        else {
                          iVar20 = iVar32 + 1;
                        }
                      } while (iVar20 <= iVar39);
                    }
                  }
                  plVar25 = plVar25 + 1;
                  uVar54 = uVar54 + 1;
                } while (uVar54 < uVar35);
              }
              plVar30 = plVar30 + 1;
            } while (plVar30 < plVar24);
          }
        }
        plVar22 = plVar22 + 1;
      } while (plVar22 < plVar23);
      if (bVar8) {
        FUN_14014a480("old save: updating resource pile information");
      }
    }
  }
  plVar22 = DAT_141c66ff0;
  plVar23 = DAT_141c66fe8;
  if (param_2 < 0x5b0) {
    for (; plVar23 < plVar22; plVar23 = plVar23 + 1) {
      lVar28 = *plVar23;
      if ((*(short *)(lVar28 + 0x3a0) == 8) && (*(longlong *)(lVar28 + 0xd60) == 0)) {
        if ((*(int *)(lVar28 + 0x1260) < 8) ||
           ((*(byte *)(*(longlong *)(lVar28 + 0x1258) + 7) & 4) == 0)) {
          if (((*(uint *)(lVar28 + 0x810) & 0x2000000) == 0) &&
             ((*(uint *)(lVar28 + 0x80c) & 0x2000000) != 0)) goto LAB_140d25d4f;
        }
        else if ((*(uint *)(lVar28 + 0x810) & 0x2000000) == 0) {
LAB_140d25d4f:
          *(undefined8 *)(lVar28 + 0x398) = 0;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x127228) = 1;
  return;
LAB_140d25269:
  if ((1 < *(int *)(lVar28 + 0x60)) && ((*(byte *)(*(longlong *)(lVar28 + 0x58) + 1) & 8) != 0)) {
    iVar49 = iVar50 + 1;
  }
LAB_140d25055:
  plVar22 = plVar22 + 1;
  iVar50 = iVar49;
  iVar31 = iVar32;
  iVar53 = iVar52;
  if (plVar23 <= plVar22) goto LAB_140d2506c;
  goto LAB_140d24ea0;
LAB_140d254ce:
  if ((1 < *(int *)(lVar28 + 0x60)) && ((*(byte *)(*(longlong *)(lVar28 + 0x58) + 1) & 8) != 0)) {
    *plVar30 = lVar28;
    plVar30 = plVar30 + 1;
  }
LAB_140d2543f:
  plVar36 = plVar36 + 1;
  if (plVar23 <= plVar36) goto LAB_140d2544c;
  goto LAB_140d251c0;
}

