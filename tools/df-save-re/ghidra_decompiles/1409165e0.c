// FUN_1409165e0 @ 1409165e0
// callees:
//   -> 1401b81b0 FUN_1401b81b0
//   -> 140004650 FUN_140004650
//   -> 140914d80 FUN_140914d80
//   -> 140914eb0 FUN_140914eb0
//   -> 14000d840 FUN_14000d840
//   -> 14000dcd0 FUN_14000dcd0
//   -> 1400511c0 FUN_1400511c0
//   -> 1400199b0 FUN_1400199b0
//   -> 140051ee0 FUN_140051ee0


void FUN_1409165e0(longlong param_1,int *param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  undefined2 uVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  short *psVar18;
  undefined8 *puVar19;
  int *piVar20;
  longlong lVar21;
  longlong lVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  longlong *plVar26;
  short sVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  int *piVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  short sVar38;
  undefined4 uVar39;
  ushort uVar40;
  int *piVar41;
  int *piVar42;
  ulonglong uVar43;
  longlong *plVar44;
  uint *puVar45;
  IMAGE_DOS_HEADER *pIVar46;
  undefined4 uVar47;
  uint uVar48;
  uint uVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  uint local_res18;
  
  puVar17 = (uint *)FUN_1401b81b0(param_1,*param_2,param_2[1],param_2[2]);
  uVar28 = param_2[3] >> 0x1f;
  puVar17[1] = puVar17[1] + ((param_2[3] ^ uVar28) - uVar28);
  if (100 < (int)puVar17[1]) {
    puVar17[1] = 100;
  }
  if ((param_3 == '\0') || (uVar28 = param_2[3], uVar28 == 0)) {
    *puVar17 = 0xffffffff;
    puVar17[2] = 0;
    return;
  }
  uVar49 = (uVar28 ^ (int)uVar28 >> 0x1f) - ((int)uVar28 >> 0x1f);
  if (100 < (int)uVar49) {
    uVar49 = 100;
  }
  uVar33 = 0xffffffff;
  uVar32 = 0xffffffff;
  uVar2 = puVar17[3] - 2;
  piVar34 = (int *)0x0;
  uVar35 = 0;
  if (0x111 < uVar2) goto switchD_1409166c5_caseD_9b;
  uVar30 = 1;
  uVar48 = 0x2a;
  uVar37 = 0;
  sVar14 = 0;
  uVar8 = (int)uVar49 >> 0x1f;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_14091f678)[(int)uVar2]) {
  case 0:
    if (((int)uVar49 < 1) || (iVar16 = *(int *)(param_1 + 0x130), iVar16 == 100))
    goto switchD_1409166c5_caseD_9b;
    if (iVar16 < 0x43) {
      if ((iVar16 < 0x21) || (uVar49 = (int)uVar49 / 2, uVar49 != 0)) goto LAB_14091701f;
      uVar49 = 1;
      uVar33 = 0x58;
    }
    else {
      uVar49 = (int)uVar49 / 10;
      if (uVar49 == 0) {
        uVar49 = 1;
        uVar33 = 0x58;
      }
      else {
LAB_14091701f:
        if ((int)uVar49 < 1) goto switchD_1409166c5_caseD_9b;
        uVar33 = 0x58;
      }
    }
    break;
  case 1:
    if (0 < (int)uVar49) {
      iVar16 = *(int *)(param_1 + 0x130);
      if (iVar16 == 100) {
        uVar49 = 0;
        uVar33 = 0x90;
        break;
      }
      if (iVar16 < 0x43) {
        if ((0x20 < iVar16) && (uVar49 = (int)uVar49 / 2, uVar49 == 0)) {
          uVar49 = 1;
        }
      }
      else {
        uVar49 = (int)uVar49 / 10;
        if (uVar49 == 0) {
          uVar49 = 1;
          uVar33 = 0x90;
          break;
        }
      }
    }
    uVar33 = 0x90;
    break;
  case 2:
    if ((int)uVar28 < 0) goto switchD_1409166c5_caseD_90;
    if (0 < (int)uVar49) {
      iVar16 = *(int *)(param_1 + 0x130);
      if (iVar16 == 100) {
        uVar33 = 0x4e;
        uVar49 = 0;
        break;
      }
      if (iVar16 < 0x43) {
        if ((0x20 < iVar16) && (uVar49 = (int)uVar49 / 2, uVar49 == 0)) {
          uVar49 = 1;
        }
      }
      else {
        uVar49 = (int)uVar49 / 10;
        if (uVar49 == 0) {
          uVar49 = 1;
          uVar33 = 0x4e;
          break;
        }
      }
    }
    uVar33 = 0x4e;
    break;
  case 3:
    uVar33 = 0x7e;
    if ((int)uVar28 < 0) {
      uVar33 = 0x9c;
    }
    break;
  case 4:
    if ((int)uVar28 < 1) goto switchD_1409166c5_caseD_9b;
    uVar33 = 0x88;
    break;
  case 5:
    if ((int)uVar28 < 1) goto switchD_1409166c5_caseD_9b;
    uVar33 = 0x66;
    break;
  case 6:
    uVar33 = 0x9f;
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 0x16) || (iVar16 == 0x1b)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140918086;
  case 7:
    uVar33 = 0x89;
    for (plVar26 = *(longlong **)(param_1 + 0x48); plVar26 < *(longlong **)(param_1 + 0x50);
        plVar26 = plVar26 + 1) {
      if (*(int *)(*plVar26 + 4) - 4U < 2) {
        puVar45 = (uint *)(*plVar26 + 0x28);
        *puVar45 = *puVar45 | 1;
        puVar17[6] = puVar17[6] | 2;
        break;
      }
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    uVar37 = uVar35;
    if (piVar20 != (int *)0x0) {
      do {
        uVar28 = *(uint *)*plVar26;
        if ((uVar28 < 0x10) && ((0xa018U >> (uVar28 & 0x1f) & 1) != 0)) {
          ((uint *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    if (*param_2 != 10) goto LAB_140916878;
    break;
  case 8:
    uVar33 = 0x89;
    bVar50 = false;
    switch(param_2[1]) {
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
      bVar50 = true;
    }
    for (plVar26 = *(longlong **)(param_1 + 0x48); plVar26 < *(longlong **)(param_1 + 0x50);
        plVar26 = plVar26 + 1) {
      iVar16 = *(int *)(*plVar26 + 4);
      if ((iVar16 == 8) || ((iVar16 == 7 && (bVar50)))) {
        puVar45 = (uint *)(*plVar26 + 0x28);
        *puVar45 = *puVar45 | 1;
        puVar17[6] = puVar17[6] | 2;
        break;
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x140);
    for (puVar19 = *(undefined8 **)(param_1 + 0x138); puVar19 < puVar3; puVar19 = puVar19 + 1) {
      iVar16 = *(int *)*puVar19;
      if (iVar16 == 6) {
LAB_140916e50:
        ((int *)*puVar19)[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
      }
      else if (iVar16 == 0xe) {
        if (bVar50) goto LAB_140916e50;
      }
      else if (iVar16 == 0xf) goto LAB_140916e50;
    }
    break;
  case 9:
    uVar33 = 0x6c;
    for (plVar26 = *(longlong **)(param_1 + 0x48); plVar26 < *(longlong **)(param_1 + 0x50);
        plVar26 = plVar26 + 1) {
      if (*(int *)(*plVar26 + 4) == 9) {
        puVar45 = (uint *)(*plVar26 + 0x28);
        *puVar45 = *puVar45 | 1;
        puVar17[6] = puVar17[6] | 2;
        break;
      }
    }
    puVar19 = *(undefined8 **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(undefined8 **)(param_1 + 0x140) + (7 - (longlong)puVar19)) >> 3);
    if (*(undefined8 **)(param_1 + 0x140) < puVar19) {
      piVar20 = piVar34;
    }
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*puVar19 == 0x11) {
          ((int *)*puVar19)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        }
        puVar19 = puVar19 + 1;
        piVar34 = (int *)((longlong)piVar34 + 1);
      } while (piVar34 < piVar20);
    }
    break;
  case 10:
    uVar33 = 0x19;
    for (plVar26 = *(longlong **)(param_1 + 0x48); plVar26 < *(longlong **)(param_1 + 0x50);
        plVar26 = plVar26 + 1) {
      if (*(int *)(*plVar26 + 4) == 2) {
        puVar45 = (uint *)(*plVar26 + 0x28);
        *puVar45 = *puVar45 | 1;
        puVar17[6] = puVar17[6] | 2;
        break;
      }
    }
    puVar19 = *(undefined8 **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(undefined8 **)(param_1 + 0x140) + (7 - (longlong)puVar19)) >> 3);
    if (*(undefined8 **)(param_1 + 0x140) < puVar19) {
      piVar20 = piVar34;
    }
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*puVar19 == 7) {
          ((int *)*puVar19)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        }
        puVar19 = puVar19 + 1;
        piVar34 = (int *)((longlong)piVar34 + 1);
      } while (piVar34 < piVar20);
    }
    break;
  case 0xb:
    uVar33 = 6;
    goto LAB_140916c70;
  case 0xc:
    uVar33 = 0x95;
    goto LAB_140916c70;
  case 0xd:
    uVar33 = 0x58;
    break;
  case 0xe:
    sVar14 = *(short *)(param_1 + 0x8c);
    if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_1409180f4:
      if (0x3c < sVar14) goto LAB_1409180fa;
LAB_140918101:
      uVar33 = 0x89;
    }
    else {
      sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0xc);
      if (sVar14 < 0) goto LAB_140918101;
      if (sVar14 < 0x65) goto LAB_1409180f4;
LAB_1409180fa:
      uVar33 = 0x81;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x18) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140918163;
  case 0xf:
    sVar14 = *(short *)(param_1 + 0xcc);
    if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_1409181f8:
      if (sVar14 < 10) goto LAB_1409181fe;
LAB_140918205:
      uVar33 = 0x35;
    }
    else {
      sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x4c);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_1409181f8;
        goto LAB_140918205;
      }
LAB_1409181fe:
      uVar33 = 0x85;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 0x18) || (iVar16 == 0x1b)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140918163;
  case 0x10:
    iVar16 = *param_2;
    if (((iVar16 == 0x1c) || (iVar16 == 0xea)) || (iVar16 == 0x1e)) {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar13 = *(short *)(param_1 + 0xb4);
      sVar27 = sVar13;
      if (lVar22 != 0) {
        sVar27 = sVar13 + *(short *)(lVar22 + 0x34);
        if (-1 < sVar27) {
          if (sVar27 < 0x65) goto LAB_1409182b2;
          goto LAB_1409182b8;
        }
        goto LAB_140918305;
      }
LAB_1409182b2:
      if (sVar27 < 0x3d) goto LAB_140918305;
LAB_1409182b8:
      sVar27 = *(short *)(param_1 + 0x92);
      if (lVar22 != 0) {
        uVar40 = sVar27 + *(short *)(lVar22 + 0x12);
        piVar20 = piVar34;
        if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
          piVar20 = (int *)0x64;
        }
        sVar27 = (short)piVar20;
        if (((lVar22 != 0) &&
            (sVar23 = sVar13 + *(short *)(lVar22 + 0x34), sVar13 = sVar14, -1 < sVar23)) &&
           (sVar13 = sVar23, 100 < sVar23)) {
          sVar13 = 100;
        }
      }
      uVar33 = 0x7d;
      if (sVar13 < sVar27) {
        uVar33 = 0x7f;
      }
    }
    else {
LAB_140918305:
      lVar22 = *(longlong *)(param_1 + 0x158);
      piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0xbc);
      if (lVar22 != 0) {
        uVar40 = *(ushort *)(param_1 + 0xbc) + *(short *)(lVar22 + 0x3c);
        piVar20 = piVar34;
        if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
          piVar20 = (int *)0x64;
        }
      }
      sVar13 = *(short *)(param_1 + 0x86);
      if (((lVar22 != 0) &&
          (sVar27 = *(short *)(param_1 + 0x86) + *(short *)(lVar22 + 6), sVar13 = sVar14,
          -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
        sVar13 = 100;
      }
      sVar27 = *(short *)(param_1 + 0xde);
      if (((lVar22 != 0) &&
          (sVar23 = *(short *)(param_1 + 0xde) + *(short *)(lVar22 + 0x5e), sVar27 = sVar14,
          -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
        sVar27 = 100;
      }
      sVar23 = *(short *)(param_1 + 0xe2);
      if (((lVar22 != 0) &&
          (sVar38 = *(short *)(param_1 + 0xe2) + *(short *)(lVar22 + 0x62), sVar23 = sVar14,
          -1 < sVar38)) && (sVar23 = sVar38, 100 < sVar38)) {
        sVar23 = 100;
      }
      if (((sVar27 < 0x3d) && (sVar23 < 0x3d)) || (iVar16 = param_2[2], iVar16 < 1000)) {
        uVar33 = 0x7c;
        if (sVar13 < (short)piVar20) {
          uVar33 = 0x60;
        }
      }
      else if (iVar16 < 10000) {
        if (iVar16 < 5000) {
          uVar33 = 0xa9;
        }
        else {
          uVar33 = 8;
          if (0x3c < (short)piVar20) {
            uVar33 = 0xa1;
          }
        }
      }
      else {
        uVar33 = 0x17;
      }
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x1d) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140918163;
  case 0x11:
    if (((int)uVar49 < 1) || (iVar16 = *(int *)(param_1 + 0x130), iVar16 == 100))
    goto switchD_1409166c5_caseD_9b;
    if (iVar16 < 0x43) {
      if ((iVar16 < 0x21) || (uVar49 = (int)uVar49 / 2, uVar49 != 0)) goto LAB_1409184a7;
      uVar49 = 1;
    }
    else {
      uVar49 = (int)uVar49 / 10;
      if (uVar49 == 0) {
        uVar49 = 1;
      }
      else {
LAB_1409184a7:
        if ((int)uVar49 < 1) goto switchD_1409166c5_caseD_9b;
      }
    }
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x88);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar27 = sVar14, -1 < sVar23)
        ) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = 0x27;
    if (sVar27 < sVar13) {
      uVar33 = 0x2e;
    }
    break;
  case 0x12:
    iVar16 = FUN_140914d80(param_1,0);
    if ((iVar16 < 0xb) && (iVar16 = FUN_140914d80(param_1,0x12), iVar16 < 0xb)) {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar14 = *(short *)(param_1 + 0x96);
      if (lVar22 == 0) {
LAB_140918555:
        if (sVar14 < 0x3d) {
LAB_14091858d:
          sVar14 = *(short *)(param_1 + 0xdc);
          if (lVar22 == 0) {
LAB_1409185a5:
            if (sVar14 < 0x3d) {
LAB_1409185d7:
              uVar33 = 0x9c;
              goto LAB_140918629;
            }
          }
          else {
            sVar14 = sVar14 + *(short *)(lVar22 + 0x5c);
            if (sVar14 < 0) goto LAB_1409185d7;
            if (sVar14 < 0x65) goto LAB_1409185a5;
          }
          sVar14 = *(short *)(param_1 + 0x86);
          if (lVar22 == 0) {
LAB_1409185c3:
            if (sVar14 < 0x3d) {
LAB_1409185d0:
              uVar33 = 0x3e;
              goto LAB_140918629;
            }
          }
          else {
            sVar14 = sVar14 + *(short *)(lVar22 + 6);
            if (sVar14 < 0) goto LAB_1409185d0;
            if (sVar14 < 0x65) goto LAB_1409185c3;
          }
          uVar33 = 0x49;
          goto LAB_140918629;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x16);
        if (sVar14 < 0) goto LAB_14091858d;
        if (sVar14 < 0x65) goto LAB_140918555;
      }
      sVar14 = *(short *)(param_1 + 0x8a);
      if (lVar22 == 0) {
LAB_140918573:
        if (sVar14 < 0x3d) {
LAB_140918583:
          uVar33 = 0x9a;
          goto LAB_140918629;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 10);
        if (sVar14 < 0) goto LAB_140918583;
        if (sVar14 < 0x65) goto LAB_140918573;
      }
      uVar33 = 0x41;
    }
    else {
      sVar14 = *(short *)(param_1 + 0xbe);
      if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_1409185fd:
        if (sVar14 < 0x3d) {
LAB_14091860a:
          iVar16 = FUN_140914d80(param_1,0x10);
          uVar33 = 0x82;
          if (10 < iVar16) {
            uVar33 = 0x34;
          }
          goto LAB_140918629;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x3e);
        if (sVar14 < 0) goto LAB_14091860a;
        if (sVar14 < 0x65) goto LAB_1409185fd;
      }
      uVar33 = 0x8f;
    }
LAB_140918629:
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 5) || (iVar16 == 0x17)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
LAB_140918163:
    if (0 < (int)uVar49) {
      if ((int)uVar37 < 2) {
        uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
      }
      else if ((int)uVar37 < 3) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
      }
      else if ((int)uVar37 < 6) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
      }
      else if ((int)uVar37 < 0xb) {
        uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
      }
      if ((int)uVar49 < 1) {
        uVar49 = 1;
      }
    }
    goto LAB_14091f096;
  case 0x13:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x88);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    if ((sVar13 < 0x3d) && (sVar27 < 0x3d)) {
      sVar14 = *(short *)(param_1 + 0xba);
      if (lVar22 == 0) {
LAB_140918704:
        if (sVar14 < 0x3d) {
LAB_140918717:
          uVar33 = 0x43;
          break;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x3a);
        if (sVar14 < 0) goto LAB_140918717;
        if (sVar14 < 0x65) goto LAB_140918704;
      }
      uVar33 = 0x56;
    }
    else {
LAB_140918724:
      uVar33 = 0x81;
    }
    break;
  case 0x14:
    uVar33 = 0xd;
    break;
  case 0x15:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xae);
    if (lVar22 == 0) {
LAB_140918760:
      if (sVar14 < 0x5b) {
        if (sVar14 < 0x4c) {
          if (0x3c < sVar14) {
            uVar49 = uVar49 * 2;
          }
        }
        else {
          uVar49 = uVar49 * 3;
        }
      }
      else {
LAB_140918766:
        uVar49 = uVar49 * 5;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x2e);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_140918760;
        goto LAB_140918766;
      }
    }
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091879a:
      if (0x3c < sVar14) {
LAB_1409187a0:
        iVar16 = FUN_140914d80(param_1,9);
        if (10 < iVar16) {
LAB_14091f0c3:
          uVar33 = 0x8f;
          break;
        }
        sVar14 = *(short *)(param_1 + 0xb4);
        if (lVar22 == 0) {
LAB_1409187cf:
          if (sVar14 < 0x3d) {
LAB_1409187df:
            uVar33 = 0x34;
            break;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
          if (sVar14 < 0) goto LAB_1409187df;
          if (sVar14 < 0x65) goto LAB_1409187cf;
        }
        uVar33 = 0x5a;
        break;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_14091879a;
        goto LAB_1409187a0;
      }
    }
    sVar14 = *(short *)(param_1 + 0x8a);
    if (lVar22 == 0) {
LAB_140918802:
      if (0x3c < sVar14) goto LAB_140918808;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 10);
      if (-1 < sVar14) {
        if (100 < sVar14) goto LAB_140918808;
        goto LAB_140918802;
      }
    }
    sVar14 = *(short *)(param_1 + 0x88);
    if (lVar22 == 0) {
LAB_14091883a:
      if (sVar14 < 0x3d) goto LAB_14091884a;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 8);
      if (sVar14 < 0) goto LAB_14091884a;
      if (sVar14 < 0x65) goto LAB_14091883a;
    }
LAB_140918840:
    uVar33 = 0x23;
    break;
  case 0x16:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xae);
    if (lVar22 == 0) {
LAB_140918874:
      if (sVar14 < 0x5b) {
        if (sVar14 < 0x4c) {
          if (0x3c < sVar14) {
            uVar49 = uVar49 * 2;
          }
        }
        else {
          uVar49 = uVar49 * 3;
        }
      }
      else {
LAB_14091887a:
        uVar49 = uVar49 * 5;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x2e);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_140918874;
        goto LAB_14091887a;
      }
    }
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_1409188ae:
      if (0x3c < sVar14) {
LAB_1409188b4:
        iVar16 = FUN_140914d80(param_1,9);
        if (iVar16 < 0xb) {
          sVar14 = *(short *)(param_1 + 0xb4);
          if (lVar22 != 0) {
            sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
            if (sVar14 < 0) goto LAB_14091f0c3;
            if (100 < sVar14) goto LAB_1409188ed;
          }
          if (sVar14 < 0x3d) goto LAB_14091f0c3;
        }
LAB_1409188ed:
        uVar33 = 0x71;
        break;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_1409188ae;
        goto LAB_1409188b4;
      }
    }
    sVar14 = *(short *)(param_1 + 0x8a);
    if (lVar22 == 0) {
LAB_140918914:
      if (0x3c < sVar14) {
        uVar33 = 0x18;
        break;
      }
LAB_140918933:
      sVar14 = *(short *)(param_1 + 0x88);
      if (lVar22 != 0) {
        sVar14 = sVar14 + *(short *)(lVar22 + 8);
        if (sVar14 < 0) goto LAB_14091884a;
        if (sVar14 < 0x65) goto LAB_140918954;
        goto LAB_140918840;
      }
LAB_140918954:
      if (0x3c < sVar14) {
        uVar33 = 0x23;
        break;
      }
LAB_14091884a:
      uVar33 = 0x61;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 10);
      if (sVar14 < 0) goto LAB_140918933;
      if (sVar14 < 0x65) goto LAB_140918914;
LAB_140918808:
      uVar33 = 0x18;
    }
    break;
  case 0x17:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x88);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = 0x40;
    if (sVar27 < sVar13) {
      uVar33 = 0x4a;
    }
    break;
  case 0x18:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x88);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = 0x44;
    if (sVar27 < sVar13) {
      uVar33 = 0x58;
    }
    bVar50 = param_2[2] == 0;
    goto LAB_140918a21;
  case 0x19:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xdc);
    if (lVar22 == 0) {
LAB_140918b7e:
      if (0x3c < sVar14) goto LAB_140918c0f;
LAB_140918b88:
      sVar14 = *(short *)(param_1 + 0x96);
      if (lVar22 == 0) {
LAB_140918ba0:
        if (0x3c < sVar14) goto LAB_140918c0f;
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x16);
        if (-1 < sVar14) {
          if (100 < sVar14) goto LAB_140918c0f;
          goto LAB_140918ba0;
        }
      }
      sVar14 = *(short *)(param_1 + 0xac);
      if (lVar22 == 0) {
LAB_140918bbe:
        if (0x4b < sVar14) goto LAB_140918bc4;
LAB_140918bcb:
        iVar16 = FUN_140914d80(param_1,0xc);
        if (((iVar16 < 0xb) && (iVar16 = FUN_140914d80(param_1,0x15), iVar16 < 0xb)) &&
           (iVar16 = FUN_140914d80(param_1,0x19), iVar16 < 0xb)) {
          uVar33 = 0x89;
        }
        else {
          uVar33 = 0x7c;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x2c);
        if (sVar14 < 0) goto LAB_140918bcb;
        if (sVar14 < 0x65) goto LAB_140918bbe;
LAB_140918bc4:
        uVar33 = 0x4c;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x5c);
      if (sVar14 < 0) goto LAB_140918b88;
      if (sVar14 < 0x65) goto LAB_140918b7e;
LAB_140918c0f:
      uVar33 = 0x3e;
    }
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (plVar26 = *(longlong **)(param_1 + 0x138); uVar37 = (uint)piVar34, plVar26 < plVar6;
        plVar26 = plVar26 + 1) {
      switch(*(undefined4 *)*plVar26) {
      case 0:
      case 3:
      case 5:
      case 0xe:
      case 0xf:
      case 0x16:
        ((undefined4 *)*plVar26)[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if ((int)uVar37 < *(int *)(*plVar26 + 0xc)) {
          piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
        }
      }
    }
    if ((int)uVar49 < 1) goto LAB_14091f096;
    if ((int)uVar37 < 2) {
      uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    else if ((int)uVar37 < 3) {
      uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    else {
      if (5 < (int)uVar37) {
        iVar16 = uVar37 - 10;
        bVar50 = uVar37 == 10;
        goto LAB_140918ced;
      }
      uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    goto LAB_14091756b;
  case 0x1a:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x8a);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar13 = sVar14, -1 < sVar27
        )) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = 0x62;
    if (sVar27 < sVar13) {
      uVar33 = 0x45;
    }
    goto LAB_140918d64;
  case 0x1b:
    iVar16 = FUN_140914d80(param_1,1);
    uVar33 = 0x1a;
    iVar29 = FUN_140914d80(param_1,0x1a);
    iVar15 = FUN_140914d80(param_1,0x1b);
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0x8a);
    if (lVar22 == 0) {
LAB_140918dcd:
      if (sVar14 < 0x3d) goto LAB_140918e0d;
LAB_140918dd3:
      sVar14 = *(short *)(param_1 + 0xce);
      if (lVar22 == 0) {
LAB_140918dec:
        if (0x27 < sVar14) goto LAB_140918e0d;
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x4e);
        if (-1 < sVar14) {
          if (100 < sVar14) goto LAB_140918e0d;
          goto LAB_140918dec;
        }
      }
      if (((10 < iVar16) || (10 < iVar29)) && ((iVar15 <= iVar29 || (iVar15 <= iVar16))))
      goto LAB_140918e0d;
      uVar33 = 0x85;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 10);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_140918dcd;
        goto LAB_140918dd3;
      }
LAB_140918e0d:
      sVar14 = *(short *)(param_1 + 0x8c);
      if (lVar22 == 0) {
LAB_140918e26:
        if (sVar14 != 0) {
LAB_140918e2b:
          uVar33 = 3;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
        if (-1 < sVar14) {
          if (sVar14 < 0x65) goto LAB_140918e26;
          goto LAB_140918e2b;
        }
      }
    }
    if (0 < (int)uVar49) {
      uVar49 = (int)(uVar49 + (uVar8 & 7)) >> 3;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_14091756b;
    }
    goto LAB_14091f096;
  case 0x1c:
    sVar14 = *(short *)(param_1 + 0xba);
    if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_140918e7b:
      if (0x27 < sVar14) {
LAB_140918e8b:
        uVar33 = 0x29;
        goto LAB_140918d64;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x3a);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_140918e7b;
        goto LAB_140918e8b;
      }
    }
    uVar33 = 0x57;
    goto LAB_140918d64;
  case 0x1d:
    lVar22 = *(longlong *)(param_1 + 0x158);
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x8c);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    sVar13 = *(short *)(param_1 + 0x82);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x82) + *(short *)(lVar22 + 2), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x88);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar27 = sVar14, -1 < sVar23)
        ) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    sVar23 = *(short *)(param_1 + 0x8a);
    if (((lVar22 != 0) &&
        (sVar38 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar23 = sVar14, -1 < sVar38
        )) && (sVar23 = sVar38, 100 < sVar38)) {
      sVar23 = 100;
    }
    sVar38 = *(short *)(param_1 + 0xa8);
    if (((lVar22 != 0) &&
        (sVar24 = *(short *)(param_1 + 0xa8) + *(short *)(lVar22 + 0x28), sVar38 = sVar14,
        -1 < sVar24)) && (sVar38 = sVar24, 100 < sVar24)) {
      sVar38 = 100;
    }
    sVar14 = (short)piVar20;
    if ((((sVar13 < sVar38) && (sVar27 < sVar38)) && (sVar23 < sVar38)) &&
       ((sVar14 < sVar38 && (0x3c < sVar38)))) {
      uVar33 = 0x8b;
    }
    else if (((sVar27 < sVar13) && ((sVar23 < sVar13 && (sVar14 < sVar13)))) && (0x3c < sVar13)) {
      uVar33 = 0x69;
    }
    else if (((sVar23 < sVar27) && (sVar14 < sVar27)) && (0x3c < sVar27)) {
      uVar33 = 0x4a;
    }
    else if ((sVar23 < 0x3d) || (sVar14 < 0x3d)) {
      if ((sVar27 < sVar13) && ((sVar23 < sVar13 && (sVar14 < sVar13)))) {
        uVar33 = 0x61;
      }
      else if ((sVar23 < sVar27) && (sVar14 < sVar27)) {
        uVar33 = 0x16;
      }
      else {
        uVar33 = 0xe;
        if (sVar14 < sVar23) {
          uVar33 = 0x50;
        }
      }
    }
    else {
      uVar33 = 3;
    }
    goto LAB_140918ff0;
  case 0x1e:
    uVar33 = 0x61;
    goto LAB_14091900f;
  case 0x1f:
    uVar33 = 3;
    goto LAB_140919033;
  case 0x20:
    uVar33 = 0x77;
LAB_140919033:
    if ((int)uVar49 < 1) break;
    uVar49 = (int)uVar49 / 2;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409168ed;
  case 0x21:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xba);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0xba) + *(short *)(lVar22 + 0x3a), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = 0x8e;
    if (sVar27 < sVar13) {
      uVar33 = 0x57;
    }
    break;
  case 0x22:
    uVar33 = 0xe;
    goto LAB_14091928e;
  case 0x23:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x88);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8a);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar27 = sVar14, -1 < sVar23
        )) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = 0x61;
    if (sVar27 < sVar13) {
      uVar33 = 0x51;
    }
    goto LAB_140918d64;
  case 0x24:
    iVar16 = FUN_140914d80(param_1,0x17);
    if ((iVar16 < 0x1a) && (iVar16 = FUN_140914d80(param_1,0x1a), iVar16 < 0x1a)) {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar14 = *(short *)(param_1 + 0xda);
      if (lVar22 == 0) {
LAB_140919356:
        if (sVar14 < 0x4c) {
LAB_140919360:
          sVar14 = *(short *)(param_1 + 0xce);
          if (lVar22 == 0) {
LAB_14091937c:
            if (0x4b < sVar14) goto LAB_14091941a;
          }
          else {
            sVar14 = sVar14 + *(short *)(lVar22 + 0x4e);
            if (-1 < sVar14) {
              if (100 < sVar14) goto LAB_14091941a;
              goto LAB_14091937c;
            }
          }
          sVar14 = *(short *)(param_1 + 0xba);
          if (lVar22 == 0) {
LAB_14091939e:
            if (sVar14 < 0x3d) {
LAB_1409193ab:
              sVar14 = *(short *)(param_1 + 0xac);
              if (lVar22 == 0) {
LAB_1409193c3:
                if (sVar14 < 0x3d) {
LAB_1409193d0:
                  uVar33 = 0x1f;
                  goto LAB_140919426;
                }
              }
              else {
                sVar14 = sVar14 + *(short *)(lVar22 + 0x2c);
                if (sVar14 < 0) goto LAB_1409193d0;
                if (sVar14 < 0x65) goto LAB_1409193c3;
              }
              uVar33 = 0x4c;
              goto LAB_140919426;
            }
          }
          else {
            sVar14 = sVar14 + *(short *)(lVar22 + 0x3a);
            if (sVar14 < 0) goto LAB_1409193ab;
            if (sVar14 < 0x65) goto LAB_14091939e;
          }
          uVar33 = 0x75;
          goto LAB_140919426;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x5a);
        if (sVar14 < 0) goto LAB_140919360;
        if (sVar14 < 0x65) goto LAB_140919356;
      }
LAB_14091941a:
      uVar33 = 0xa8;
    }
    else {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar14 = *(short *)(param_1 + 0xbe);
      if (lVar22 == 0) {
LAB_1409193f6:
        if (sVar14 < 0x3d) {
LAB_1409193fc:
          sVar14 = *(short *)(param_1 + 0xb4);
          if (lVar22 != 0) {
            sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
            if (sVar14 < 0) goto LAB_140919421;
            if (100 < sVar14) goto LAB_14091941a;
          }
          if (0x27 < sVar14) goto LAB_14091941a;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
        if (sVar14 < 0) goto LAB_1409193fc;
        if (sVar14 < 0x65) goto LAB_1409193f6;
      }
LAB_140919421:
      uVar33 = 0x52;
    }
LAB_140919426:
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x10) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140918adf;
  case 0x25:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xba);
    if (lVar22 == 0) {
LAB_1409194ab:
      if (0x27 < sVar14) {
LAB_1409194b8:
        sVar14 = *(short *)(param_1 + 0x8c);
        if (lVar22 == 0) {
LAB_1409194d0:
          if (sVar14 < 0x3d) {
LAB_140919502:
            sVar14 = *(short *)(param_1 + 0x82);
            if (lVar22 == 0) {
LAB_14091951a:
              if (sVar14 < 0x3d) {
LAB_140919527:
                uVar33 = 0x9d;
                goto LAB_14091952c;
              }
            }
            else {
              sVar14 = sVar14 + *(short *)(lVar22 + 2);
              if (sVar14 < 0) goto LAB_140919527;
              if (sVar14 < 0x65) goto LAB_14091951a;
            }
            uVar33 = 0x29;
            goto LAB_14091952c;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
          if (sVar14 < 0) goto LAB_140919502;
          if (sVar14 < 0x65) goto LAB_1409194d0;
        }
        sVar14 = *(short *)(param_1 + 0x90);
        if (lVar22 == 0) {
LAB_1409194ee:
          if (sVar14 < 0x4c) {
LAB_1409194fb:
            uVar33 = 0x58;
            goto LAB_14091952c;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x10);
          if (sVar14 < 0) goto LAB_1409194fb;
          if (sVar14 < 0x65) goto LAB_1409194ee;
        }
        uVar33 = 0x77;
        goto LAB_14091952c;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3a);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_1409194ab;
        goto LAB_1409194b8;
      }
    }
    uVar33 = 0x27;
    goto LAB_14091952c;
  case 0x26:
    iVar16 = *(int *)(param_1 + 300);
    if (iVar16 - 1U < 2) {
      if (iVar16 == 2) {
        uVar33 = 0xe;
        uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
        if (uVar49 == 0) {
          uVar49 = uVar30;
        }
      }
      else {
        if (iVar16 == 1) {
          uVar49 = (int)uVar49 / 2;
        }
        if (uVar49 == 0) {
          uVar49 = 1;
        }
LAB_140919611:
        uVar33 = 0xe;
      }
    }
    else {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar13 = *(short *)(param_1 + 0x88);
      if (((lVar22 != 0) &&
          (sVar27 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar13 = sVar14,
          -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
        sVar13 = 100;
      }
      sVar27 = *(short *)(param_1 + 0x8a);
      if (((lVar22 != 0) &&
          (sVar23 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar27 = sVar14,
          -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
        sVar27 = 100;
      }
      if ((sVar27 < sVar13) && (0x3c < sVar13)) {
        uVar33 = 0x23;
      }
      else if (sVar27 < 0x3d) {
        if ((sVar13 < 0x28) || (sVar27 < 0x28)) goto LAB_140919611;
        uVar33 = 0x50;
      }
      else {
        uVar33 = 0x3c;
      }
    }
    goto LAB_140918d64;
  case 0x27:
    uVar33 = 0x29;
    goto LAB_140916c70;
  case 0x28:
    iVar16 = FUN_140914d80(param_1,0x1e);
    if (iVar16 < 0xb) {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar13 = *(short *)(param_1 + 0x8c);
      if (((lVar22 != 0) &&
          (sVar27 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar13 = sVar14,
          -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
        sVar13 = 100;
      }
      sVar27 = *(short *)(param_1 + 0x86);
      if (((lVar22 != 0) &&
          (sVar23 = *(short *)(param_1 + 0x86) + *(short *)(lVar22 + 6), sVar27 = sVar14,
          -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
        sVar27 = 100;
      }
      uVar33 = 0x1f;
      if (sVar27 < sVar13) {
        uVar33 = 0x81;
      }
    }
    else {
      uVar33 = 0x24;
    }
    goto LAB_140918d64;
  case 0x29:
    if (-1 < (int)uVar28) {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar13 = *(short *)(param_1 + 0x8c);
      if (((lVar22 != 0) &&
          (sVar27 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar13 = sVar14,
          -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
        sVar13 = 100;
      }
      sVar27 = *(short *)(param_1 + 0xb4);
      if (((lVar22 != 0) &&
          (sVar23 = *(short *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34), sVar27 = sVar14,
          -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
        sVar27 = 100;
      }
      if ((sVar27 < sVar13) && (0x3c < sVar13)) {
        uVar33 = 0x81;
      }
      else {
        uVar33 = 0x89;
        if (0x3c < sVar27) {
          uVar33 = 0x7d;
        }
      }
      goto LAB_14091982c;
    }
    lVar22 = *(longlong *)(param_1 + 0x158);
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0xb4);
    if (lVar22 == 0) {
LAB_1409196bf:
      sVar13 = (short)piVar20;
    }
    else {
      uVar40 = *(ushort *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34);
      piVar20 = piVar34;
      if (((short)uVar40 < 0) || (piVar20 = (int *)(ulonglong)uVar40, (short)uVar40 < 0x65))
      goto LAB_1409196bf;
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8a);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar27 = sVar14, -1 < sVar23
        )) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    if ((sVar27 < sVar13) && (0x3c < sVar13)) {
      uVar33 = 0x5a;
    }
    else if (sVar27 < 0x3d) {
      iVar16 = FUN_140914d80(param_1,1);
      if ((iVar16 < -10) && (iVar16 = FUN_140914d80(param_1,4), iVar16 < -10)) {
        sVar14 = *(short *)(param_1 + 0xd4);
        if (lVar22 == 0) {
LAB_140919760:
          if (0x27 < sVar14) {
LAB_140919775:
            sVar14 = *(short *)(param_1 + 0x8c);
            if (lVar22 == 0) {
LAB_14091978e:
              uVar33 = uVar35;
              if (sVar14 < 0x3d) goto LAB_14091982c;
            }
            else {
              sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
              uVar33 = uVar35;
              if (sVar14 < 0) goto LAB_14091982c;
              if (sVar14 < 0x65) goto LAB_14091978e;
            }
            uVar33 = 0xa2;
            goto LAB_14091982c;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x54);
          if (-1 < sVar14) {
            if (sVar14 < 0x65) goto LAB_140919760;
            goto LAB_140919775;
          }
        }
        uVar33 = 0x95;
      }
      else {
        uVar33 = 0x28;
        if (0x27 < sVar27) {
          uVar33 = 0x45;
        }
      }
    }
    else {
      uVar33 = 0x76;
    }
    goto LAB_14091982c;
  case 0x2a:
    iVar16 = FUN_140914d80(param_1,0);
    uVar33 = uVar35;
    if (iVar16 < 0x29) {
      if (iVar16 < 0x1a) {
        lVar22 = *(longlong *)(param_1 + 0x158);
        sVar13 = *(short *)(param_1 + 0xb4);
        if (((lVar22 != 0) &&
            (sVar27 = *(short *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34), sVar13 = sVar14,
            -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
          sVar13 = 100;
        }
        piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x8a);
        if (lVar22 != 0) {
          uVar40 = *(ushort *)(param_1 + 0x8a) + *(short *)(lVar22 + 10);
          piVar20 = piVar34;
          if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
            piVar20 = (int *)0x64;
          }
        }
        sVar27 = *(short *)(param_1 + 0x82);
        if (((lVar22 != 0) &&
            (sVar23 = *(short *)(param_1 + 0x82) + *(short *)(lVar22 + 2), sVar27 = sVar14,
            -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
          sVar27 = 100;
        }
        sVar14 = (short)piVar20;
        if ((sVar13 < 0x3d) || (sVar14 < 0x3d)) {
          if (sVar13 < 0x4c) {
            if (sVar14 < 0x3d) {
              sVar23 = *(short *)(param_1 + 0x90);
              if (lVar22 == 0) {
LAB_14091993f:
                if (sVar23 < 0x3d) {
LAB_14091995f:
                  if (sVar27 < 0x3d) {
                    if (sVar13 < 0x28) {
                      if (sVar14 < 0x28) goto LAB_14091999f;
                      uVar33 = 0x45;
                    }
                    else if (sVar14 < 0x28) {
LAB_14091999f:
                      if (iVar16 < -10) {
                        uVar33 = 0x11;
                        if (0x27 < sVar27) {
                          uVar33 = 0x18;
                        }
                      }
                      else {
                        uVar33 = 0x2a;
                      }
                    }
                    else {
                      uVar33 = 0x87;
                    }
                  }
                  else {
                    uVar33 = 0x29;
                  }
                  break;
                }
              }
              else {
                sVar23 = sVar23 + *(short *)(lVar22 + 0x10);
                if (sVar23 < 0) goto LAB_14091995f;
                if (sVar23 < 0x65) goto LAB_14091993f;
              }
              uVar33 = 0x2c;
              if (-0xb < iVar16) {
                uVar33 = 0x8e;
              }
            }
            else {
              uVar33 = 0xb;
            }
          }
          else {
            uVar33 = 0x5f;
          }
        }
        else {
          uVar33 = 0x76;
        }
      }
      else {
        uVar33 = 9;
      }
    }
    break;
  case 0x2b:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xd4);
    if (lVar22 == 0) {
LAB_140919a00:
      if (0x27 < sVar13) {
LAB_140919a13:
        sVar13 = *(short *)(param_1 + 0x8c);
        if (((lVar22 != 0) &&
            (sVar27 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar13 = sVar14,
            -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
          sVar13 = 100;
        }
        sVar27 = *(short *)(param_1 + 0x86);
        if (((lVar22 != 0) &&
            (sVar23 = *(short *)(param_1 + 0x86) + *(short *)(lVar22 + 6), sVar27 = sVar14,
            -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
          sVar27 = 100;
        }
        uVar33 = 0x33;
        if (sVar27 < sVar13) {
          uVar33 = 0x81;
        }
        break;
      }
    }
    else {
      sVar13 = sVar13 + *(short *)(lVar22 + 0x54);
      if (-1 < sVar13) {
        if (sVar13 < 0x65) goto LAB_140919a00;
        goto LAB_140919a13;
      }
    }
    uVar33 = 0x14;
    break;
  case 0x2c:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xa6);
    if (lVar22 == 0) {
LAB_140919a94:
      if (sVar13 < 0x19) {
LAB_140919a9a:
        uVar33 = 0x14;
        break;
      }
    }
    else {
      sVar13 = sVar13 + *(short *)(lVar22 + 0x26);
      if (sVar13 < 0) goto LAB_140919a9a;
      if (sVar13 < 0x65) goto LAB_140919a94;
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (lVar22 == 0) {
LAB_140919acd:
      if (sVar27 < 0x4c) {
LAB_140919aec:
        sVar27 = *(short *)(param_1 + 0xaa);
        if (lVar22 == 0) {
LAB_140919b09:
          if (sVar27 < 0x3d) {
LAB_140919b13:
            iVar16 = FUN_140914d80(param_1,4);
            if (iVar16 < 0xb) {
              sVar27 = *(short *)(param_1 + 0x86);
              if (((lVar22 != 0) &&
                  (sVar23 = *(short *)(param_1 + 0x86) + *(short *)(lVar22 + 6), sVar27 = sVar14,
                  -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
                sVar27 = 100;
              }
              sVar23 = *(short *)(param_1 + 0xac);
              if (((lVar22 != 0) &&
                  (sVar38 = *(short *)(param_1 + 0xac) + *(short *)(lVar22 + 0x2c), sVar23 = sVar14,
                  -1 < sVar38)) && (sVar23 = sVar38, 100 < sVar38)) {
                sVar23 = 100;
              }
              piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0xb4);
              if (lVar22 != 0) {
                uVar40 = *(ushort *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34);
                piVar20 = piVar34;
                if ((-1 < (short)uVar40) &&
                   (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
                  piVar20 = (int *)0x64;
                }
              }
              piVar41 = (int *)(ulonglong)*(ushort *)(param_1 + 0xce);
              if (lVar22 != 0) {
                uVar40 = *(ushort *)(param_1 + 0xce) + *(short *)(lVar22 + 0x4e);
                piVar41 = piVar34;
                if ((-1 < (short)uVar40) &&
                   (piVar41 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
                  piVar41 = (int *)0x64;
                }
              }
              sVar14 = *(short *)(param_1 + 0xda);
              if (lVar22 != 0) {
                sVar14 = sVar14 + *(short *)(lVar22 + 0x5a);
                if (sVar14 < 0) {
                  sVar14 = 0;
                }
                else if (100 < sVar14) {
                  sVar14 = 100;
                }
              }
              if (sVar14 < (short)piVar41) {
                sVar14 = (short)piVar41;
              }
              sVar38 = (short)piVar20;
              if ((((sVar27 < sVar14) && (sVar23 < sVar14)) && (sVar38 < sVar14)) && (0x27 < sVar14)
                 ) {
                uVar33 = 0x31;
              }
              else if (((sVar23 < sVar27) && (sVar38 < sVar27)) && (0x27 < sVar27)) {
                uVar33 = 0x33;
              }
              else if ((sVar38 < sVar23) && (0x27 < sVar23)) {
                uVar33 = 0x4c;
              }
              else if (sVar38 < 0x28) {
                uVar33 = 0x89;
                if (sVar13 < 0x28) {
                  uVar33 = 9;
                }
              }
              else {
                uVar33 = 0x7d;
              }
              break;
            }
          }
        }
        else {
          sVar27 = sVar27 + *(short *)(lVar22 + 0x2a);
          if (sVar27 < 0) goto LAB_140919b13;
          if (sVar27 < 0x65) goto LAB_140919b09;
        }
        uVar33 = 0x9c;
        break;
      }
    }
    else {
      sVar27 = sVar27 + *(short *)(lVar22 + 0xc);
      if (sVar27 < 0) goto LAB_140919aec;
      if (sVar27 < 0x65) goto LAB_140919acd;
    }
    uVar33 = 0x81;
    if (sVar13 < 0x28) {
      uVar33 = 0x73;
    }
    break;
  case 0x2d:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x86);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x86) + *(short *)(lVar22 + 6), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0xac);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0xac) + *(short *)(lVar22 + 0x2c), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    if ((sVar13 < sVar27) && (0x3c < sVar27)) {
      uVar33 = 0x4c;
    }
    else {
      uVar33 = 0x89;
      if (0x3c < sVar13) {
        uVar33 = 0x67;
      }
    }
    goto LAB_14091952c;
  case 0x2e:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xb4);
    if (lVar22 != 0) {
      sVar13 = sVar13 + *(short *)(lVar22 + 0x34);
      if (sVar13 < 0) {
        sVar13 = 0;
      }
      else if (100 < sVar13) {
        sVar13 = 100;
      }
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x8a);
    if (lVar22 == 0) {
LAB_14091a174:
      sVar27 = (short)piVar20;
    }
    else {
      uVar40 = *(ushort *)(param_1 + 0x8a) + *(short *)(lVar22 + 10);
      piVar20 = piVar34;
      if (((short)uVar40 < 0) || (piVar20 = (int *)(ulonglong)uVar40, (short)uVar40 < 0x65))
      goto LAB_14091a174;
      sVar27 = 100;
    }
    sVar23 = *(short *)(param_1 + 0x82);
    if (((lVar22 != 0) &&
        (sVar38 = *(short *)(param_1 + 0x82) + *(short *)(lVar22 + 2), sVar23 = sVar14, -1 < sVar38)
        ) && (sVar23 = sVar38, 100 < sVar38)) {
      sVar23 = 100;
    }
    sVar14 = *(short *)(param_1 + 0x90);
    if (lVar22 != 0) {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x10);
      if (sVar14 < 0) {
        sVar14 = 0;
      }
      else if (100 < sVar14) {
        sVar14 = 100;
      }
    }
    sVar38 = *(short *)(param_1 + 0x88);
    if (lVar22 != 0) {
      sVar38 = sVar38 + *(short *)(lVar22 + 8);
      if (sVar38 < 0) {
        sVar38 = 0;
      }
      else if (100 < sVar38) {
        sVar38 = 100;
      }
    }
    sVar24 = *(short *)(param_1 + 0xba);
    if (lVar22 != 0) {
      sVar24 = sVar24 + *(short *)(lVar22 + 0x3a);
      if (sVar24 < 0) {
        sVar24 = 0;
      }
      else if (100 < sVar24) {
        sVar24 = 100;
      }
    }
    iVar16 = FUN_140914d80(param_1,0);
    if (sVar13 < 0x3d) {
      if ((sVar27 < sVar14) && (0x3c < sVar14)) {
        uVar33 = 0x2c;
      }
      else if (sVar27 < 0x3d) {
        if ((sVar13 < 0x28) || (sVar27 < 0x28)) {
          if ((sVar38 < 0x28) || (sVar23 < 0x28)) {
            if ((sVar38 < sVar23) && (0x27 < sVar23)) {
              uVar33 = 0x85;
            }
            else if (sVar38 < 0x28) {
              if ((sVar27 < sVar14) && (0x27 < sVar14)) {
                uVar33 = 0x3c;
              }
              else if (sVar27 < 0x28) {
                if (iVar16 < 0xb) {
                  if (iVar16 < -10) {
                    sVar14 = *(short *)(param_1 + 0xd6);
                    if (lVar22 == 0) {
LAB_14091a373:
                      if (0x27 < sVar14) {
LAB_14091a380:
                        uVar33 = 0xe;
                        goto LAB_14091a38d;
                      }
                    }
                    else {
                      sVar14 = sVar14 + *(short *)(lVar22 + 0x56);
                      if (-1 < sVar14) {
                        if (sVar14 < 0x65) goto LAB_14091a373;
                        goto LAB_14091a380;
                      }
                    }
                    uVar33 = 7;
                  }
                  else {
                    uVar33 = 0x2a;
                  }
                }
                else {
                  uVar33 = 0;
                  if (sVar24 < 0x1a) {
                    if (10 < sVar24) {
                      uVar33 = 0x28;
                    }
                  }
                  else {
                    uVar33 = 0x80;
                  }
                }
              }
              else {
                uVar33 = 0x45;
              }
            }
            else {
              uVar33 = 0x4b;
            }
          }
          else {
            uVar33 = 0x18;
          }
        }
        else {
          uVar33 = 0x87;
        }
      }
      else {
        uVar33 = 0xb;
      }
    }
    else if (sVar27 < 0x3d) {
      sVar14 = *(short *)(param_1 + 0xbe);
      if (lVar22 == 0) {
LAB_14091a260:
        if (sVar14 < 0x3d) {
LAB_14091a270:
          uVar33 = 0x5f;
          if (0x3c < sVar23) {
            uVar33 = 0x1e;
          }
          goto LAB_14091a38d;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
        if (sVar14 < 0) goto LAB_14091a270;
        if (sVar14 < 0x65) goto LAB_14091a260;
      }
      uVar33 = 0x5a;
    }
    else {
      uVar33 = 0x76;
    }
LAB_14091a38d:
    if (0 < (int)uVar49) {
      uVar49 = (int)(uVar49 + (uVar8 & 3)) >> 2;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_14091756b;
    }
    goto LAB_14091f096;
  case 0x2f:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0x8a);
    if (lVar22 == 0) {
LAB_14091a3d0:
      if (sVar14 < 0x3d) {
LAB_14091a3e0:
        sVar14 = *(short *)(param_1 + 0x8c);
        if (lVar22 == 0) {
LAB_14091a3f8:
          if (0x3c < sVar14) {
LAB_14091a3fe:
            uVar33 = 0x62;
            goto LAB_140918d64;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
          if (-1 < sVar14) {
            if (sVar14 < 0x65) goto LAB_14091a3f8;
            goto LAB_14091a3fe;
          }
        }
        sVar14 = *(short *)(param_1 + 0xc4);
        if (lVar22 == 0) {
LAB_14091a424:
          if (0x18 < sVar14) goto LAB_14091a581;
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x44);
          if (-1 < sVar14) {
            if (100 < sVar14) goto LAB_14091a581;
            goto LAB_14091a424;
          }
        }
LAB_14091a42e:
        uVar33 = 0;
        goto LAB_140918d64;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 10);
      if (sVar14 < 0) goto LAB_14091a3e0;
      if (sVar14 < 0x65) goto LAB_14091a3d0;
    }
LAB_14091a3d6:
    uVar33 = 0x76;
    goto LAB_140918d64;
  case 0x30:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0x8a);
    if (lVar22 == 0) {
LAB_14091a454:
      if (sVar14 < 0x3d) {
LAB_14091a464:
        sVar14 = *(short *)(param_1 + 0x8c);
        if (lVar22 == 0) {
LAB_14091a480:
          if (sVar14 < 0x3d) goto LAB_14091a5ba;
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
          if (sVar14 < 0) goto LAB_14091a5ba;
          if (sVar14 < 0x65) goto LAB_14091a480;
        }
LAB_14091a48a:
        uVar33 = 0xa2;
        goto LAB_140918ff0;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 10);
      if (sVar14 < 0) goto LAB_14091a464;
      if (sVar14 < 0x65) goto LAB_14091a454;
    }
LAB_14091a45a:
    uVar33 = 0x76;
    goto LAB_140918ff0;
  case 0x31:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0x8a);
    sVar13 = sVar14;
    if (lVar22 == 0) {
LAB_14091a4ba:
      if (0x3c < sVar13) {
        uVar33 = 0x76;
        goto LAB_140918d64;
      }
    }
    else {
      sVar13 = sVar14 + *(short *)(lVar22 + 10);
      if (-1 < sVar13) {
        if (100 < sVar13) goto LAB_14091a3d6;
        goto LAB_14091a4ba;
      }
    }
    sVar13 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091a4e2:
      if (sVar13 < 0x3d) {
LAB_14091a4f2:
        sVar13 = *(short *)(param_1 + 0xd4);
        if (lVar22 == 0) {
LAB_14091a50a:
          if (0x27 < sVar13) {
LAB_14091a51a:
            sVar13 = *(short *)(param_1 + 0x8c);
            if (lVar22 == 0) {
LAB_14091a532:
              if (0x3c < sVar13) goto LAB_14091a538;
            }
            else {
              sVar13 = sVar13 + *(short *)(lVar22 + 0xc);
              if (-1 < sVar13) {
                if (100 < sVar13) goto LAB_14091a538;
                goto LAB_14091a532;
              }
            }
            sVar13 = *(short *)(param_1 + 0xb6);
            if (lVar22 == 0) {
LAB_14091a55e:
              if (0x3c < sVar13) {
                uVar33 = 0;
                goto LAB_140918d64;
              }
            }
            else {
              sVar13 = sVar13 + *(short *)(lVar22 + 0x36);
              if (-1 < sVar13) {
                if (100 < sVar13) goto LAB_14091a42e;
                goto LAB_14091a55e;
              }
            }
            if (lVar22 == 0) {
LAB_14091a57b:
              if (0x27 < sVar14) goto LAB_14091a581;
            }
            else {
              sVar14 = sVar14 + *(short *)(lVar22 + 10);
              if (-1 < sVar14) {
                if (100 < sVar14) goto LAB_14091a581;
                goto LAB_14091a57b;
              }
            }
            uVar33 = 0x28;
            goto LAB_140918d64;
          }
        }
        else {
          sVar13 = sVar13 + *(short *)(lVar22 + 0x54);
          if (-1 < sVar13) {
            if (sVar13 < 0x65) goto LAB_14091a50a;
            goto LAB_14091a51a;
          }
        }
        uVar33 = 0x95;
        goto LAB_140918d64;
      }
    }
    else {
      sVar13 = sVar13 + *(short *)(lVar22 + 0x3e);
      if (sVar13 < 0) goto LAB_14091a4f2;
      if (sVar13 < 0x65) goto LAB_14091a4e2;
    }
    uVar33 = 0x5a;
    goto LAB_140918d64;
  case 0x32:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0x8a);
    if (lVar22 == 0) {
LAB_14091a5b4:
      if (sVar14 < 0x3d) {
LAB_14091a5c4:
        sVar14 = *(short *)(param_1 + 0xd4);
        if (lVar22 == 0) {
LAB_14091a5dc:
          if (0x27 < sVar14) {
LAB_14091a5ec:
            sVar14 = *(short *)(param_1 + 0x8c);
            if (lVar22 == 0) {
LAB_14091a608:
              if (0x3c < sVar14) {
                uVar33 = 0xa2;
                goto LAB_140918ff0;
              }
            }
            else {
              sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
              if (-1 < sVar14) {
                if (sVar14 < 0x65) goto LAB_14091a608;
                goto LAB_14091a48a;
              }
            }
            sVar14 = *(short *)(param_1 + 0xb6);
            if (lVar22 == 0) {
LAB_14091a630:
              if (sVar14 < 0x3d) {
LAB_14091a63d:
                uVar33 = 0x28;
                goto LAB_140918ff0;
              }
            }
            else {
              sVar14 = sVar14 + *(short *)(lVar22 + 0x36);
              if (sVar14 < 0) goto LAB_14091a63d;
              if (sVar14 < 0x65) goto LAB_14091a630;
            }
            uVar33 = 0;
            goto LAB_140918ff0;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x54);
          if (-1 < sVar14) {
            if (sVar14 < 0x65) goto LAB_14091a5dc;
            goto LAB_14091a5ec;
          }
        }
        uVar33 = 0x95;
        goto LAB_140918ff0;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 10);
      if (sVar14 < 0) goto LAB_14091a5c4;
      if (sVar14 < 0x65) goto LAB_14091a5b4;
    }
LAB_14091a5ba:
    uVar33 = 0x45;
    goto LAB_140918ff0;
  case 0x33:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8a);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar27 = sVar14, -1 < sVar23
        )) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x88);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0x88) + *(short *)(lVar22 + 8);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    if ((sVar27 < sVar13) && ((short)piVar20 < sVar13)) {
      uVar33 = 0x10;
    }
    else {
      uVar33 = 0x45;
      if (sVar27 < (short)piVar20) {
        uVar33 = 0x23;
      }
    }
    goto LAB_140918d64;
  case 0x34:
    sVar14 = *(short *)(param_1 + 0xb4);
    if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_14091a6f8:
      if (sVar14 < 0x3d) {
LAB_14091a70b:
        uVar33 = 0x89;
        break;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x34);
      if (sVar14 < 0) goto LAB_14091a70b;
      if (sVar14 < 0x65) goto LAB_14091a6f8;
    }
    uVar33 = 0x7d;
    break;
  case 0x35:
    sVar14 = *(short *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_14091a737:
      if (0x3c < sVar14) goto LAB_14091a73d;
LAB_14091a747:
      uVar33 = 0x1d;
    }
    else {
      sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x10);
      if (sVar14 < 0) goto LAB_14091a747;
      if (sVar14 < 0x65) goto LAB_14091a737;
LAB_14091a73d:
      uVar33 = 0x8e;
    }
    goto LAB_140918a27;
  case 0x36:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xb4);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    sVar23 = *(short *)(param_1 + 0x86);
    if (((lVar22 != 0) &&
        (sVar38 = *(short *)(param_1 + 0x86) + *(short *)(lVar22 + 6), sVar23 = sVar14, -1 < sVar38)
        ) && (sVar23 = sVar38, 100 < sVar38)) {
      sVar23 = 100;
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0xba);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0xba) + *(short *)(lVar22 + 0x3a);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    sVar14 = (short)piVar20;
    if ((((sVar27 < sVar13) && (sVar23 < sVar13)) && (sVar14 < sVar13)) && (0x27 < sVar13)) {
      uVar33 = 0x7d;
    }
    else if (((sVar23 < sVar27) && (sVar14 < sVar27)) && (0x27 < sVar27)) {
      uVar33 = 0x81;
    }
    else if ((sVar14 < sVar23) && (0x27 < sVar23)) {
      uVar33 = 0x65;
    }
    else {
      uVar33 = 0x1f;
      if (0x27 < sVar14) {
        uVar33 = 0x75;
      }
    }
    goto LAB_14091952c;
  case 0x37:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xa0);
    if (lVar22 == 0) {
LAB_14091a865:
      if (sVar14 < 0x19) {
LAB_14091a86b:
        iVar16 = FUN_140914d80(param_1,9);
        if (iVar16 < -10) {
          uVar33 = 9;
          if ((int)uVar49 < 1) goto LAB_14091f0bc;
          uVar49 = (int)(uVar49 + (uVar8 & 0xf)) >> 4;
          bVar52 = SBORROW4(uVar49,1);
          bVar50 = (int)(uVar49 - 1) < 0;
          goto LAB_1409168ed;
        }
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x20);
      if (sVar14 < 0) goto LAB_14091a86b;
      if (sVar14 < 0x65) goto LAB_14091a865;
    }
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091a8d8:
      if (sVar14 < 0x4c) {
        if (sVar14 < 0x3d) {
          uVar33 = 0x5a;
          if (sVar14 < 0x28) goto LAB_14091a907;
        }
        else {
          uVar33 = 0x8f;
        }
      }
      else {
LAB_14091a8de:
        uVar33 = 0x71;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_14091a8d8;
        goto LAB_14091a8de;
      }
LAB_14091a907:
      uVar33 = 0x34;
    }
LAB_14091982c:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)(uVar49 + (uVar8 & 3)) >> 2;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_14091756b;
  case 0x38:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xa0);
    if (lVar22 == 0) {
LAB_14091a931:
      if (sVar14 < 0x19) {
LAB_14091a937:
        uVar33 = 9;
        iVar16 = FUN_140914d80(param_1,9);
        if (iVar16 < -10) {
          if (0 < (int)uVar49) {
            uVar49 = (int)(uVar49 + (uVar8 & 0x1f)) >> 5;
            bVar52 = SBORROW4(uVar49,1);
            bVar50 = (int)(uVar49 - 1) < 0;
            goto LAB_1409168ed;
          }
LAB_14091f0bc:
          uVar33 = 9;
          break;
        }
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x20);
      if (sVar14 < 0) goto LAB_14091a937;
      if (sVar14 < 0x65) goto LAB_14091a931;
    }
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091a9a4:
      if (sVar14 < 0x4c) {
        uVar33 = 0x5a;
        if (sVar14 < 0x3d) goto LAB_14091a9bc;
      }
      else {
LAB_14091a9aa:
        uVar33 = 0x8f;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_14091a9a4;
        goto LAB_14091a9aa;
      }
LAB_14091a9bc:
      uVar33 = 0x34;
    }
    if (0 < (int)uVar49) {
      uVar49 = (int)(uVar49 + (uVar8 & 7)) >> 3;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_14091756b;
    }
    goto LAB_14091f096;
  case 0x39:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091aa05:
      if (sVar14 < 0x28) goto LAB_14091aa43;
LAB_14091aa0b:
      sVar14 = *(short *)(param_1 + 0xa0);
      if (lVar22 == 0) {
LAB_14091aa24:
        if (sVar14 < 0x28) {
LAB_14091aa2a:
          iVar16 = FUN_140914d80(param_1,9);
          if (iVar16 < 0xb) goto LAB_14091aa43;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x20);
        if (sVar14 < 0) goto LAB_14091aa2a;
        if (sVar14 < 0x65) goto LAB_14091aa24;
      }
      uVar33 = 0x71;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_14091aa05;
        goto LAB_14091aa0b;
      }
LAB_14091aa43:
      sVar14 = *(short *)(param_1 + 0xa0);
      if (lVar22 == 0) {
LAB_14091aa5c:
        if (sVar14 < 10) {
LAB_14091aa69:
          uVar33 = 0x81;
          goto LAB_14091aa6e;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x20);
        if (sVar14 < 0) goto LAB_14091aa69;
        if (sVar14 < 0x65) goto LAB_14091aa5c;
      }
      uVar33 = 0x29;
    }
LAB_14091aa6e:
    if (0 < (int)uVar49) {
      uVar49 = (int)uVar49 / 2;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_14091756b;
    }
    goto LAB_14091f096;
  case 0x3a:
    iVar16 = FUN_140914d80(param_1,0);
    if ((iVar16 < 0xb) && (iVar16 = FUN_140914d80(param_1,0x12), iVar16 < 0xb)) {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar14 = *(short *)(param_1 + 0x96);
      if (lVar22 == 0) {
LAB_14091aad6:
        if (sVar14 < 0x3d) {
LAB_14091ab0e:
          sVar14 = *(short *)(param_1 + 0xdc);
          if (lVar22 == 0) {
LAB_14091ab26:
            if (sVar14 < 0x3d) {
LAB_14091ab58:
              uVar33 = 0x9c;
              goto LAB_14091abaa;
            }
          }
          else {
            sVar14 = sVar14 + *(short *)(lVar22 + 0x5c);
            if (sVar14 < 0) goto LAB_14091ab58;
            if (sVar14 < 0x65) goto LAB_14091ab26;
          }
          sVar14 = *(short *)(param_1 + 0x86);
          if (lVar22 == 0) {
LAB_14091ab44:
            if (sVar14 < 0x3d) {
LAB_14091ab51:
              uVar33 = 0x3e;
              goto LAB_14091abaa;
            }
          }
          else {
            sVar14 = sVar14 + *(short *)(lVar22 + 6);
            if (sVar14 < 0) goto LAB_14091ab51;
            if (sVar14 < 0x65) goto LAB_14091ab44;
          }
          uVar33 = 0x49;
          goto LAB_14091abaa;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x16);
        if (sVar14 < 0) goto LAB_14091ab0e;
        if (sVar14 < 0x65) goto LAB_14091aad6;
      }
      sVar14 = *(short *)(param_1 + 0x8a);
      if (lVar22 == 0) {
LAB_14091aaf4:
        if (sVar14 < 0x3d) {
LAB_14091ab04:
          uVar33 = 0x9a;
          goto LAB_14091abaa;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 10);
        if (sVar14 < 0) goto LAB_14091ab04;
        if (sVar14 < 0x65) goto LAB_14091aaf4;
      }
      uVar33 = 0x41;
    }
    else {
      sVar14 = *(short *)(param_1 + 0xbe);
      if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_14091ab7e:
        if (sVar14 < 0x3d) {
LAB_14091ab8b:
          iVar16 = FUN_140914d80(param_1,0x10);
          uVar33 = 0x82;
          if (10 < iVar16) {
            uVar33 = 0x34;
          }
          goto LAB_14091abaa;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x3e);
        if (sVar14 < 0) goto LAB_14091ab8b;
        if (sVar14 < 0x65) goto LAB_14091ab7e;
      }
      uVar33 = 0x8f;
    }
LAB_14091abaa:
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 5) || (iVar16 - 0x16U < 2)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140918adf;
  case 0x3b:
    lVar22 = *(longlong *)(param_1 + 0x158);
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x96);
    if (lVar22 == 0) {
LAB_14091ac39:
      sVar13 = (short)piVar20;
    }
    else {
      uVar40 = *(ushort *)(param_1 + 0x96) + *(short *)(lVar22 + 0x16);
      piVar20 = piVar34;
      if (((short)uVar40 < 0) || (piVar20 = (int *)(ulonglong)uVar40, (short)uVar40 < 0x65))
      goto LAB_14091ac39;
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0xb6);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0xb6) + *(short *)(lVar22 + 0x36), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = uVar48;
    if (((0x18 < sVar13) && (iVar16 = FUN_140914d80(param_1,4), -0xb < iVar16)) &&
       (iVar16 = FUN_140914d80(param_1,0), -0xb < iVar16)) {
      if (sVar27 < -10) {
        uVar33 = 0x9e;
      }
      else {
        uVar33 = 0xa4;
        if (sVar27 < sVar13) {
          uVar33 = 0x3e;
        }
      }
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        uVar28 = *(uint *)*plVar26;
        if ((uVar28 < 0x17) && ((0x400420U >> (uVar28 & 0x1f) & 1) != 0)) {
          ((uint *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    if (0 < (int)uVar49) {
      if (*param_2 == 0x5a) {
        uVar49 = (int)uVar49 / 2;
      }
      uVar28 = (int)uVar49 >> 0x1f;
      if ((int)uVar37 < 2) {
        uVar49 = (int)((uVar28 & 0xf) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if ((int)uVar37 < 3) {
        uVar49 = (int)((uVar28 & 7) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if ((int)uVar37 < 6) {
        uVar49 = (int)((uVar28 & 3) + uVar49) >> 2;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else {
        if ((int)uVar37 < 0xb) {
          uVar49 = (int)uVar49 / 2;
        }
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      goto LAB_14091756b;
    }
    goto LAB_14091f096;
  case 0x3c:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x90);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x90) + *(short *)(lVar22 + 0x10), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0xba);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0xba) + *(short *)(lVar22 + 0x3a), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    sVar27 = 100 - sVar27;
    sVar23 = *(short *)(param_1 + 0xb4);
    if (((lVar22 != 0) &&
        (sVar38 = *(short *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34), sVar23 = sVar14,
        -1 < sVar38)) && (sVar23 = sVar38, 100 < sVar38)) {
      sVar23 = 100;
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x82);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0x82) + *(short *)(lVar22 + 2);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    sVar14 = (short)piVar20;
    if ((((sVar27 < sVar13) && (sVar23 < sVar13)) && (sVar14 < sVar13)) && (0x27 < sVar13)) {
      bVar50 = *param_2 == 0x5b;
      uVar33 = 0x8e;
    }
    else if (((sVar23 < sVar27) && (sVar14 < sVar27)) && (0x27 < sVar27)) {
      bVar50 = *param_2 == 0x5b;
      uVar33 = 0x57;
    }
    else if ((sVar14 < sVar23) && (0x27 < sVar23)) {
      bVar50 = *param_2 == 0x5b;
      uVar33 = 0x5a;
    }
    else if (sVar14 < 0x28) {
      uVar33 = 0x2e;
      if (*param_2 == 0x5d) {
        uVar33 = 5;
      }
      bVar50 = *param_2 == 0x5b;
    }
    else {
      bVar50 = *param_2 == 0x5b;
      uVar33 = 0x69;
    }
LAB_140918a21:
    if (!bVar50) goto LAB_14091f096;
LAB_140918a27:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)uVar49 / 2;
    goto LAB_140917563;
  case 0x3d:
    sVar14 = *(short *)(param_1 + 0xbe);
    if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_14091af07:
      if (sVar14 < 0x28) {
LAB_14091af17:
        iVar16 = FUN_140914d80(param_1,0);
        uVar33 = 0x45;
        if (iVar16 < -10) {
          uVar33 = 0x81;
        }
        goto LAB_140918ff0;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x3e);
      if (sVar14 < 0) goto LAB_14091af17;
      if (sVar14 < 0x65) goto LAB_14091af07;
    }
    uVar33 = 0x71;
    goto LAB_140918ff0;
  case 0x3e:
    uVar33 = 0x50;
LAB_14091900f:
    if ((int)uVar49 < 1) break;
    uVar49 = (int)(uVar49 + (uVar8 & 0xf)) >> 4;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409168ed;
  case 0x3f:
    uVar33 = 0x1f;
    if (3 < param_2[2]) {
      uVar33 = 0x24;
    }
    if (*param_2 == 0x61) {
      plVar26 = *(longlong **)(param_1 + 0x138);
      piVar20 = (int *)((ulonglong)
                        ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
      if (*(longlong **)(param_1 + 0x140) < plVar26) {
        piVar20 = piVar34;
      }
      piVar41 = piVar34;
      piVar42 = piVar34;
      if (piVar20 != (int *)0x0) {
        do {
          if (*(int *)*plVar26 == 0x15) {
            ((int *)*plVar26)[2] = 400;
            *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
            if ((int)piVar41 < *(int *)(*plVar26 + 0xc)) {
              piVar41 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
            }
          }
          uVar37 = (uint)piVar41;
          plVar26 = plVar26 + 1;
          piVar42 = (int *)((longlong)piVar42 + 1);
        } while (piVar42 < piVar20);
      }
      if (0 < (int)uVar49) {
        if ((int)uVar37 < 2) {
          uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
        }
        else if ((int)uVar37 < 3) {
          uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
        }
        else if ((int)uVar37 < 6) {
          uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        }
        else if ((int)uVar37 < 0xb) {
          uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
        }
        if ((int)uVar49 < 1) {
          uVar49 = 1;
        }
      }
    }
    if (*param_2 != 0x62) goto LAB_14091f096;
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (plVar26 = *(longlong **)(param_1 + 0x138); uVar37 = (uint)piVar34, plVar26 < plVar6;
        plVar26 = plVar26 + 1) {
      if (*(int *)*plVar26 == 1) {
        ((int *)*plVar26)[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if ((int)uVar37 < *(int *)(*plVar26 + 0xc)) {
          piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
        }
      }
    }
    if ((int)uVar49 < 1) goto LAB_14091f096;
    if (1 < (int)uVar37) {
      if ((int)uVar37 < 3) {
        uVar49 = (int)(((int)uVar49 >> 0x1f & 0xfU) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_14091756b;
      }
      if ((int)uVar37 < 6) {
        uVar49 = (int)(((int)uVar49 >> 0x1f & 7U) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_14091756b;
      }
      iVar16 = uVar37 - 10;
      bVar50 = iVar16 == 0;
      goto LAB_140918b42;
    }
    goto LAB_140918aed;
  case 0x40:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xb4);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x8a);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0x8a) + *(short *)(lVar22 + 10);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    if (sVar13 < 0x3d) {
      sVar14 = *(short *)(param_1 + 0x8c);
      sVar13 = sVar14;
      if (lVar22 == 0) {
LAB_14091b271:
        if (0x4b < sVar13) goto LAB_14091b277;
LAB_14091b281:
        sVar13 = *(short *)(param_1 + 0xd4);
        if (lVar22 != 0) {
          sVar13 = sVar13 + *(short *)(lVar22 + 0x54);
          if (sVar13 < 0) goto LAB_14091b29f;
          if (sVar13 < 0x65) goto LAB_14091b299;
LAB_14091b2c6:
          uVar33 = 0x2d;
          if (0x27 < (short)piVar20) {
            uVar33 = 0x45;
          }
          goto LAB_140918d64;
        }
LAB_14091b299:
        if (0x27 < sVar13) goto LAB_14091b2c6;
LAB_14091b29f:
        if (lVar22 == 0) {
LAB_14091b2b5:
          if (0x3c < sVar14) {
            uVar33 = 0xa2;
            goto LAB_140918d64;
          }
          goto LAB_14091b2c6;
        }
        sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
        if (sVar14 < 0) goto LAB_14091b2c6;
        if (sVar14 < 0x65) goto LAB_14091b2b5;
LAB_14091a538:
        uVar33 = 0xa2;
      }
      else {
        sVar13 = sVar14 + *(short *)(lVar22 + 0xc);
        if (sVar13 < 0) goto LAB_14091b281;
        if (sVar13 < 0x65) goto LAB_14091b271;
LAB_14091b277:
        uVar33 = 0x2c;
      }
    }
    else {
      uVar33 = 0x5f;
      if (0x3c < (short)piVar20) {
        uVar33 = 0x76;
      }
    }
    goto LAB_140918d64;
  case 0x41:
    lVar22 = *(longlong *)(param_1 + 0x158);
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0xb4);
    if (lVar22 == 0) {
LAB_14091b2f8:
      sVar13 = (short)piVar20;
    }
    else {
      uVar40 = *(ushort *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34);
      piVar20 = piVar34;
      if (((short)uVar40 < 0) || (piVar20 = (int *)(ulonglong)uVar40, (short)uVar40 < 0x65))
      goto LAB_14091b2f8;
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8a);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar27 = sVar14, -1 < sVar23
        )) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    if ((sVar27 < sVar13) && (0x3c < sVar13)) {
      uVar33 = 0x5a;
    }
    else if (sVar27 < 0x3d) {
      iVar16 = FUN_140914d80(param_1,1);
      if ((iVar16 < -10) && (iVar16 = FUN_140914d80(param_1,4), iVar16 < -10)) {
        sVar14 = *(short *)(param_1 + 0xd4);
        if (lVar22 == 0) {
LAB_14091b393:
          if (0x27 < sVar14) {
LAB_14091b3a0:
            sVar14 = *(short *)(param_1 + 0x8c);
            if (lVar22 == 0) {
LAB_14091b3b9:
              if (sVar14 < 0x3d) {
LAB_14091b3c6:
                uVar33 = 0;
                goto LAB_14091b3da;
              }
            }
            else {
              sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
              if (sVar14 < 0) goto LAB_14091b3c6;
              if (sVar14 < 0x65) goto LAB_14091b3b9;
            }
            uVar33 = 0xa2;
            goto LAB_14091b3da;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x54);
          if (-1 < sVar14) {
            if (sVar14 < 0x65) goto LAB_14091b393;
            goto LAB_14091b3a0;
          }
        }
        uVar33 = 0x95;
      }
      else {
        uVar33 = 0x28;
        if (0x27 < sVar27) {
          uVar33 = 0x45;
        }
      }
    }
    else {
      uVar33 = 0x76;
    }
    goto LAB_14091b3da;
  case 0x42:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091b421:
      if (sVar14 < 0x3d) {
LAB_14091b46e:
        uVar33 = 0xe;
        goto LAB_14091b473;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (sVar14 < 0) goto LAB_14091b46e;
      if (sVar14 < 0x65) goto LAB_14091b421;
    }
    iVar16 = FUN_140914d80(param_1,9);
    if (iVar16 < 0xb) {
      sVar14 = *(short *)(param_1 + 0xb4);
      if (lVar22 != 0) {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
        if (sVar14 < 0) goto LAB_14091b53d;
        if (100 < sVar14) goto LAB_14091b467;
      }
      if (sVar14 < 0x3d) goto LAB_14091b53d;
LAB_14091b467:
      uVar33 = 0x5a;
    }
    else {
      uVar33 = 0x8f;
    }
    goto LAB_14091b473;
  case 0x43:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xd6);
    if (lVar22 == 0) {
LAB_14091b4b7:
      if (0x3c < sVar14) goto LAB_14091b4bd;
LAB_14091b50c:
      iVar16 = FUN_140914d80(param_1,9);
      if (10 < iVar16) {
        sVar14 = *(short *)(param_1 + 0xbe);
        if (lVar22 != 0) {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
          if (sVar14 < 0) goto LAB_14091b547;
          if (100 < sVar14) goto LAB_14091b53d;
        }
        if (0x3c < sVar14) goto LAB_14091b53d;
      }
LAB_14091b547:
      uVar33 = 0x61;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x56);
      if (sVar14 < 0) goto LAB_14091b50c;
      if (sVar14 < 0x65) goto LAB_14091b4b7;
LAB_14091b4bd:
      sVar14 = *(short *)(param_1 + 0x86);
      if (lVar22 == 0) {
LAB_14091b4d6:
        if (sVar14 < 0x28) {
LAB_14091b4e3:
          sVar14 = *(short *)(param_1 + 0xd2);
          if (lVar22 == 0) {
LAB_14091b4fc:
            if (0x27 < sVar14) goto LAB_14091b547;
          }
          else {
            sVar14 = sVar14 + *(short *)(lVar22 + 0x52);
            if (-1 < sVar14) {
              if (100 < sVar14) goto LAB_14091b547;
              goto LAB_14091b4fc;
            }
          }
          uVar33 = 10;
          goto LAB_14091b473;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 6);
        if (sVar14 < 0) goto LAB_14091b4e3;
        if (sVar14 < 0x65) goto LAB_14091b4d6;
      }
      uVar33 = 100;
    }
    goto LAB_14091b473;
  case 0x44:
    if ((int)uVar28 < 0) {
      sVar14 = *(short *)(param_1 + 0x8a);
      if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_14091b579:
        if (0x3c < sVar14) {
          uVar33 = 0x76;
          goto LAB_140918ff0;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 10);
        if (-1 < sVar14) {
          if (100 < sVar14) goto LAB_14091a45a;
          goto LAB_14091b579;
        }
      }
      uVar33 = 0x34;
    }
    else {
      iVar16 = FUN_140914d80(param_1,0x1b);
      if (iVar16 < 0xb) {
        sVar14 = *(short *)(param_1 + 0xda);
        if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_14091b5c4:
          if (sVar14 < 0x28) goto LAB_14091b5d4;
        }
        else {
          sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x5a);
          if (sVar14 < 0) goto LAB_14091b5d4;
          if (sVar14 < 0x65) goto LAB_14091b5c4;
        }
        uVar33 = 0x1f;
      }
      else {
LAB_14091b5d4:
        uVar33 = 0x19;
      }
    }
    goto LAB_140918ff0;
  case 0x45:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091b602:
      if (sVar14 < 0x3d) goto LAB_14091b46e;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (sVar14 < 0) goto LAB_14091b46e;
      if (sVar14 < 0x65) goto LAB_14091b602;
    }
    iVar16 = FUN_140914d80(param_1,9);
    if (iVar16 < 0xb) {
      sVar14 = *(short *)(param_1 + 0xb4);
      if (lVar22 != 0) {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
        if (sVar14 < 0) goto LAB_14091b53d;
        if (100 < sVar14) goto LAB_14091b467;
      }
      if (sVar14 < 0x3d) goto LAB_14091b53d;
      uVar33 = 0x5a;
    }
    else {
      uVar33 = 0x8f;
    }
    goto LAB_14091b473;
  case 0x46:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091b681:
      if (sVar14 < 0x3d) goto LAB_14091b46e;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (sVar14 < 0) goto LAB_14091b46e;
      if (sVar14 < 0x65) goto LAB_14091b681;
    }
    iVar16 = FUN_140914d80(param_1,9);
    if (iVar16 < 0xb) {
      sVar14 = *(short *)(param_1 + 0xb4);
      if (lVar22 != 0) {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
        if (sVar14 < 0) goto LAB_14091b53d;
        if (sVar14 < 0x65) goto LAB_14091b6c8;
        goto LAB_14091b467;
      }
LAB_14091b6c8:
      if (0x3c < sVar14) {
        uVar33 = 0x5a;
        goto LAB_14091b473;
      }
LAB_14091b53d:
      uVar33 = 0x34;
    }
    else {
      uVar33 = 0x8f;
    }
    goto LAB_14091b473;
  case 0x47:
    uVar33 = 2;
    break;
  case 0x48:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091b70a:
      if (0x3c < sVar14) {
LAB_14091b710:
        sVar14 = *(short *)(param_1 + 0xb4);
        if (lVar22 == 0) {
LAB_14091b728:
          if (0x27 < sVar14) goto LAB_14091b73b;
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
          if (-1 < sVar14) {
            if (100 < sVar14) goto LAB_14091b73b;
            goto LAB_14091b728;
          }
        }
        uVar33 = 0x52;
        break;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_14091b70a;
        goto LAB_14091b710;
      }
    }
LAB_14091b73b:
    sVar14 = *(short *)(param_1 + 0xac);
    if (lVar22 == 0) {
LAB_14091b757:
      if (sVar14 < 0x28) goto LAB_140918724;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x2c);
      if (sVar14 < 0) goto LAB_140918724;
      if (sVar14 < 0x65) goto LAB_14091b757;
    }
    uVar33 = 0x4c;
    break;
  case 0x49:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xcc);
    if (lVar22 == 0) {
LAB_14091b78d:
      if (sVar14 < 10) {
LAB_14091b793:
        sVar14 = *(short *)(param_1 + 0xb4);
        if (lVar22 == 0) {
LAB_14091b7ab:
          if (sVar14 < 0x3d) {
LAB_14091b7b8:
            uVar33 = 0x85;
            goto LAB_14091b7f6;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
          if (sVar14 < 0) goto LAB_14091b7b8;
          if (sVar14 < 0x65) goto LAB_14091b7ab;
        }
        uVar33 = 0x7d;
      }
      else {
        if (0x4b < sVar14) goto LAB_14091b7c5;
        sVar14 = *(short *)(param_1 + 0x8c);
        if (lVar22 == 0) {
LAB_14091b7e4:
          if (sVar14 < 0x3d) {
LAB_14091b7f1:
            uVar33 = 0x96;
            goto LAB_14091b7f6;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 0xc);
          if (sVar14 < 0) goto LAB_14091b7f1;
          if (sVar14 < 0x65) goto LAB_14091b7e4;
        }
        uVar33 = 0x81;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x4c);
      if (sVar14 < 0) goto LAB_14091b793;
      if (sVar14 < 0x65) goto LAB_14091b78d;
LAB_14091b7c5:
      uVar33 = 0x97;
    }
LAB_14091b7f6:
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x1b) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091f096;
  case 0x4a:
    switch(param_2[1]) {
    case 9:
      uVar11 = FUN_140914eb0(param_1,4);
      switch(uVar11) {
      case 5:
      case 6:
      case 0xe:
      case 0xf:
switchD_14091b8ec_caseD_5:
        uVar35 = 0xfffffffd;
        break;
      case 8:
switchD_14091b8ec_caseD_8:
        uVar35 = 0xffffffff;
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
switchD_14091b8ec_caseD_9:
        uVar35 = 0xfffffffe;
        break;
      case 0x10:
switchD_14091b8ec_caseD_10:
        uVar35 = 2;
      }
      break;
    case 0x69:
    case 0xe7:
      uVar11 = FUN_140914eb0(param_1,3);
      switch(uVar11) {
      case 5:
      case 6:
      case 0xe:
      case 0xf:
        goto switchD_14091b8ec_caseD_5;
      case 8:
        goto switchD_14091b8ec_caseD_8;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        goto switchD_14091b8ec_caseD_9;
      case 0x10:
        goto switchD_14091b8ec_caseD_10;
      }
      break;
    case 0x9c:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
      sVar14 = FUN_140914eb0(param_1,3);
      iVar16 = (int)sVar14;
      if ((4 < iVar16) && ((iVar16 < 7 || (iVar16 - 8U < 8)))) goto switchD_14091b8ec_caseD_8;
    }
    if (uVar35 + 3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00014091b931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(switchD_140935618::caseD_26.e_magic +
                (&switchD_14091b931::switchdataD_14091fa78)[(int)(uVar35 + 3)]))
                (switchD_140935618::caseD_26.e_magic +
                 (&switchD_14091b931::switchdataD_14091fa78)[(int)(uVar35 + 3)]);
      return;
    }
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (plVar26 = *(longlong **)(param_1 + 0x138); iVar16 = (int)piVar34, plVar26 < plVar6;
        plVar26 = plVar26 + 1) {
      puVar7 = (undefined4 *)*plVar26;
      switch(*puVar7) {
      case 3:
switchD_14091bd60_caseD_3:
        puVar7[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if (iVar16 < (int)*(uint *)(*plVar26 + 0xc)) {
          piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
        }
        break;
      case 4:
        switch(param_2[1]) {
        case 1:
        case 2:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x6e:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x8d:
        case 0x8e:
        case 0x94:
        case 0xc0:
        case 0xc1:
        case 0xc2:
        case 0xc3:
        case 200:
        case 0xc9:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xda:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xed:
        case 0xee:
        case 0xef:
          goto switchD_14091bd60_caseD_3;
        }
        break;
      case 5:
        switch(param_2[1]) {
        case 0x18:
        case 0x1a:
        case 0x1c:
        case 0x1f:
        case 0x5f:
        case 0x60:
        case 0x8b:
        case 0x8c:
        case 0xdf:
        case 0xf1:
        case 0xf3:
          goto switchD_14091bd60_caseD_3;
        }
        break;
      case 0xd:
        switch(param_2[1]) {
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x6e:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x8d:
        case 0x8e:
        case 0x94:
        case 0xc0:
        case 0xc1:
        case 0xc2:
        case 0xc3:
        case 200:
        case 0xc9:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd7:
        case 0xda:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xed:
        case 0xee:
        case 0xef:
          goto switchD_14091bd60_caseD_3;
        }
        break;
      case 0xf:
        switch(param_2[1]) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0x17:
        case 0x1f:
        case 0x20:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
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
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x8b:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0x94:
        case 0x97:
        case 0x98:
        case 0x99:
        case 0x9a:
        case 0x9b:
        case 0xa7:
        case 0xa8:
        case 0xa9:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xb9:
        case 0xba:
        case 0xbb:
        case 0xbc:
        case 0xbd:
        case 0xbe:
        case 0xbf:
        case 0xc0:
        case 0xc1:
        case 0xc2:
        case 0xc3:
        case 0xc4:
        case 0xc5:
        case 0xc6:
        case 200:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd7:
        case 0xda:
        case 0xdc:
        case 0xdd:
        case 0xe2:
        case 0xe3:
        case 0xe7:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xed:
        case 0xee:
        case 0xef:
          goto switchD_14091bd60_caseD_3;
        }
        break;
      case 0x16:
        if (param_2[1] == 0x1c) goto switchD_14091bd60_caseD_3;
        break;
      case 0x17:
        if (param_2[1] == 0xde) goto switchD_14091bd60_caseD_3;
        break;
      case 0x1a:
        if (((uint)param_2[1] < 0x22) && ((0x203800400U >> ((longlong)param_2[1] & 0x3fU) & 1) != 0)
           ) goto switchD_14091bd60_caseD_3;
        break;
      case 0x1b:
        switch(param_2[1]) {
        case 0xa6:
        case 0xa7:
        case 0xa8:
        case 0xa9:
        case 0xaa:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xb2:
        case 0xb3:
        case 0xb4:
        case 0xb5:
        case 0xd0:
        case 0xd1:
        case 0xd2:
          puVar7[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if (iVar16 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
      }
    }
    if (0 < (int)uVar49) {
      if (iVar16 < 2) {
        uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if (iVar16 < 3) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        uVar33 = uVar32;
      }
      else if (iVar16 < 6) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        uVar33 = uVar32;
      }
      else {
        if (iVar16 < 0xb) {
          uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
        }
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        uVar33 = uVar32;
      }
      goto LAB_14091756b;
    }
    goto LAB_14091f096;
  case 0x4b:
    lVar22 = *(longlong *)(param_1 + 0x158);
    uVar28 = (uint)*(ushort *)(param_1 + 0xb4);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34);
      uVar28 = uVar37;
      if ((-1 < (short)uVar40) && (uVar28 = (uint)uVar40, 100 < (short)uVar40)) {
        uVar28 = 100;
      }
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x90);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0x90) + *(short *)(lVar22 + 0x10);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    sVar13 = *(short *)(param_1 + 0x82);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x82) + *(short *)(lVar22 + 2), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = (short)uVar28;
    sVar14 = (short)piVar20;
    if (((sVar13 < sVar27) && (sVar14 < sVar27)) && (0x27 < sVar27)) {
      uVar33 = 0x87;
    }
    else if ((sVar14 < sVar13) && (0x27 < sVar13)) {
      uVar33 = 0x54;
    }
    else if (sVar14 < 0x28) {
      iVar16 = FUN_140914d80(param_1,0);
      uVar33 = 0xb;
      if (10 < iVar16) {
        uVar33 = uVar48;
      }
    }
    else {
      uVar33 = 0x8e;
    }
LAB_14091952c:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)(uVar49 + (uVar8 & 3)) >> 2;
    goto LAB_140917563;
  case 0x4c:
    iVar16 = FUN_140914d80(param_1,0);
    uVar33 = uVar35;
    if (iVar16 < 0x1a) {
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar14 = *(short *)(param_1 + 0xb4);
      if (lVar22 == 0) {
LAB_14091c05d:
        if (sVar14 < 0x3d) {
LAB_14091c06d:
          sVar14 = *(short *)(param_1 + 0x82);
          if (lVar22 == 0) {
LAB_14091c085:
            if (sVar14 < 0x3d) {
LAB_14091c095:
              uVar33 = 0x2b;
              goto LAB_140918d64;
            }
          }
          else {
            sVar14 = sVar14 + *(short *)(lVar22 + 2);
            if (sVar14 < 0) goto LAB_14091c095;
            if (sVar14 < 0x65) goto LAB_14091c085;
          }
          uVar33 = 0x54;
          goto LAB_140918d64;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
        if (sVar14 < 0) goto LAB_14091c06d;
        if (sVar14 < 0x65) goto LAB_14091c05d;
      }
      uVar33 = 0x87;
    }
    goto LAB_140918d64;
  case 0x4d:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xb4);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = 0x73;
    if (sVar27 < sVar13) {
      uVar33 = 0x5f;
    }
LAB_140918ff0:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)(uVar49 + (uVar8 & 0xf)) >> 4;
    goto LAB_140917563;
  case 0x4e:
    uVar33 = 0x45;
    if ((int)uVar49 < 1) break;
    uVar49 = (int)(uVar49 + (uVar8 & 0x1f)) >> 5;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409168ed;
  case 0x4f:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xb4);
    if (lVar22 == 0) {
LAB_14091c13e:
      if (sVar14 < 0x3d) {
        if (sVar14 < 0x28) goto LAB_14091c151;
LAB_14091c176:
        uVar33 = 0x89;
      }
      else {
LAB_14091c144:
        uVar33 = 0x7d;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_14091c13e;
        goto LAB_14091c144;
      }
LAB_14091c151:
      sVar14 = *(short *)(param_1 + 0x9e);
      if (lVar22 == 0) {
LAB_14091c169:
        if (sVar14 < 0x3d) goto LAB_14091c176;
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x1e);
        if (sVar14 < 0) goto LAB_14091c176;
        if (sVar14 < 0x65) goto LAB_14091c169;
      }
      uVar33 = 0x8d;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 10) || (iVar16 == 0x1b)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140918adf;
  case 0x50:
    sVar14 = *(short *)(param_1 + 0xb4);
    if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_14091c20a:
      if (sVar14 < 0x3d) {
LAB_14091c21a:
        iVar16 = FUN_140914d80(param_1,0);
        if ((-0xb < iVar16) && (iVar16 = FUN_140914d80(param_1,4), -0xb < iVar16)) {
          iVar16 = FUN_140914d80(param_1,0x1c);
          uVar33 = 0x89;
          if (iVar16 < 0x1a) goto LAB_14091b473;
        }
        uVar33 = 9;
        goto LAB_14091b473;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x34);
      if (sVar14 < 0) goto LAB_14091c21a;
      if (sVar14 < 0x65) goto LAB_14091c20a;
    }
    uVar33 = 0x7d;
LAB_14091b473:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)(uVar49 + (uVar8 & 0xf)) >> 4;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_14091756b;
  case 0x51:
    iVar16 = FUN_140914d80(param_1,4);
    iVar29 = FUN_140914d80(param_1,0);
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xce);
    if (lVar22 == 0) {
LAB_14091c298:
      if (0x3c < sVar13) goto LAB_14091c2bc;
LAB_14091c29e:
      if ((10 < iVar16) || (10 < iVar29)) goto LAB_14091c2bc;
      if ((-0xb < iVar16) && (-0xb < iVar29)) goto LAB_14091c2e4;
      uVar33 = 9;
    }
    else {
      sVar13 = sVar13 + *(short *)(lVar22 + 0x4e);
      if (sVar13 < 0) goto LAB_14091c29e;
      if (sVar13 < 0x65) goto LAB_14091c298;
LAB_14091c2bc:
      sVar13 = *(short *)(param_1 + 0xbe);
      if (lVar22 == 0) {
LAB_14091c2d4:
        if (0x27 < sVar13) {
LAB_14091c2da:
          uVar33 = 0x71;
          goto LAB_14091b3da;
        }
      }
      else {
        sVar13 = sVar13 + *(short *)(lVar22 + 0x3e);
        if (-1 < sVar13) {
          if (sVar13 < 0x65) goto LAB_14091c2d4;
          goto LAB_14091c2da;
        }
      }
LAB_14091c2e4:
      sVar13 = *(short *)(param_1 + 0x8c);
      if (lVar22 != 0) {
        uVar40 = sVar13 + *(short *)(lVar22 + 0xc);
        if ((-1 < (short)uVar40) && (piVar34 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
          piVar34 = (int *)0x64;
        }
        sVar13 = (short)piVar34;
      }
      sVar27 = *(short *)(param_1 + 0x88);
      if (((lVar22 != 0) &&
          (sVar23 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar27 = sVar14,
          -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
        sVar27 = 100;
      }
      uVar33 = 0x4a;
      if (sVar27 < sVar13) {
        uVar33 = 0x2c;
      }
    }
LAB_14091b3da:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)(uVar49 + (uVar8 & 3)) >> 2;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_14091756b;
  case 0x52:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xbe);
    if (lVar22 == 0) {
LAB_14091c35d:
      if (0x3c < sVar14) goto LAB_14091c363;
LAB_14091c36d:
      sVar14 = *(short *)(param_1 + 0x8a);
      if (lVar22 == 0) {
LAB_14091c38d:
        if (0x3c < sVar14) {
          uVar33 = 0x76;
          goto LAB_140918d64;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 10);
        if (-1 < sVar14) {
          if (100 < sVar14) goto LAB_14091a3d6;
          goto LAB_14091c38d;
        }
      }
LAB_14091a581:
      uVar33 = 0x45;
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
      if (sVar14 < 0) goto LAB_14091c36d;
      if (sVar14 < 0x65) goto LAB_14091c35d;
LAB_14091c363:
      uVar33 = 0x8f;
    }
LAB_140918d64:
    if (0 < (int)uVar49) {
      uVar49 = (int)(uVar49 + ((int)uVar49 >> 0x1f & 7U)) >> 3;
LAB_140917563:
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
LAB_14091756b:
      if (bVar52 != bVar50) {
        uVar49 = 1;
      }
    }
    goto LAB_14091f096;
  case 0x53:
    psVar18 = *(short **)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x80);
    if (((psVar18 != (short *)0x0) &&
        (sVar27 = *(short *)(param_1 + 0x80) + *psVar18, sVar13 = sVar14, -1 < sVar27)) &&
       (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 200);
    if (((psVar18 != (short *)0x0) &&
        (sVar23 = *(short *)(param_1 + 200) + psVar18[0x24], sVar27 = sVar14, -1 < sVar23)) &&
       (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    if ((sVar13 < 0x3d) || (uVar33 = 2, sVar27 < 0x3d)) {
      uVar33 = 0x42;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if ((*(uint *)*plVar26 & 0xfffffff7) == 0) {
          ((uint *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    if (0 < (int)uVar49) {
      if ((int)uVar37 < 2) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_14091756b;
      }
      if ((int)uVar37 < 3) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_14091756b;
      }
      if ((int)uVar37 < 6) goto LAB_140918cef;
      if ((int)uVar37 < 0xb) {
        uVar49 = (int)uVar49 / 2;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_14091756b;
      }
LAB_140918cfe:
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_14091756b;
    }
    goto LAB_14091f096;
  case 0x54:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x8a);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar13 = sVar14, -1 < sVar27
        )) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x82);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x82) + *(short *)(lVar22 + 2), sVar27 = sVar14, -1 < sVar23)
        ) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    if ((sVar27 < sVar13) && (0x3c < sVar13)) {
      uVar33 = 4;
    }
    else {
      uVar33 = 0x2b;
      if (0x3c < sVar27) {
        uVar33 = 0x54;
      }
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x18) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140916796;
  case 0x55:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xa4);
    if (lVar22 == 0) {
LAB_14091c887:
      if (0x27 < sVar14) {
LAB_14091c894:
        sVar14 = *(short *)(param_1 + 0x82);
        if (lVar22 == 0) {
LAB_14091c8ac:
          if (sVar14 < 0x3d) {
LAB_14091c8b9:
            uVar33 = 0xe;
            goto LAB_14091c8be;
          }
        }
        else {
          sVar14 = sVar14 + *(short *)(lVar22 + 2);
          if (sVar14 < 0) goto LAB_14091c8b9;
          if (sVar14 < 0x65) goto LAB_14091c8ac;
        }
        uVar33 = 0x29;
        goto LAB_14091c8be;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x24);
      if (-1 < sVar14) {
        if (sVar14 < 0x65) goto LAB_14091c887;
        goto LAB_14091c894;
      }
    }
    uVar33 = 0x77;
    goto LAB_14091c8be;
  case 0x56:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar14 = *(short *)(param_1 + 0xbc);
    if (lVar22 == 0) {
LAB_14091c8fc:
      if (0x3c < sVar14) goto LAB_14091c902;
LAB_14091c90b:
      sVar14 = *(short *)(param_1 + 0x86);
      if (lVar22 == 0) {
LAB_14091c923:
        if (0x3c < sVar14) goto LAB_14091c940;
LAB_14091c929:
        iVar16 = FUN_140914d80(param_1,0x1e);
        uVar33 = 0x37;
        if (10 < iVar16) goto LAB_14091c940;
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 6);
        if (sVar14 < 0) goto LAB_14091c929;
        if (sVar14 < 0x65) goto LAB_14091c923;
LAB_14091c940:
        uVar33 = 0x19;
      }
    }
    else {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x3c);
      if (sVar14 < 0) goto LAB_14091c90b;
      if (sVar14 < 0x65) goto LAB_14091c8fc;
LAB_14091c902:
      uVar33 = 0xa1;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    plVar6 = *(longlong **)(param_1 + 0x140);
    local_res18 = 0;
    lVar22 = DAT_141d6dd50;
    for (; plVar26 < plVar6; plVar26 = plVar26 + 1) {
      piVar20 = (int *)*plVar26;
      if (*piVar20 == 0x12) {
        sVar14 = (short)param_2[1];
        if ((((-1 < sVar14) &&
             ((ulonglong)(longlong)sVar14 < (ulonglong)(DAT_141d6dd58 - lVar22 >> 3))) &&
            (lVar21 = *(longlong *)(lVar22 + (longlong)sVar14 * 8), lVar21 != 0)) &&
           ((*(int *)(lVar21 + 0x1b0) < 9 ||
            ((*(byte *)(*(longlong *)(lVar21 + 0x1a8) + 8) & 0x80) == 0)))) {
          piVar20[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
          local_res18 = (uint)piVar34;
          lVar22 = DAT_141d6dd50;
        }
      }
      else if ((((*piVar20 == 0x13) && (sVar14 = (short)param_2[1], -1 < sVar14)) &&
               (((ulonglong)(longlong)sVar14 < (ulonglong)(DAT_141d6dd58 - lVar22 >> 3) &&
                (lVar21 = *(longlong *)(lVar22 + (longlong)sVar14 * 8), lVar21 != 0)))) &&
              ((*(int *)(lVar21 + 0x1b0) < 0xb ||
               ((*(byte *)(*(longlong *)(lVar21 + 0x1a8) + 10) & 0x80) == 0)))) {
        plVar44 = *(longlong **)(lVar21 + 0x178);
        plVar5 = *(longlong **)(lVar21 + 0x180);
        if (plVar44 < plVar5) {
          do {
            lVar4 = *plVar44;
            cVar10 = FUN_14000d840(lVar4 + 0x6a8,0x14);
            if ((cVar10 != '\0') ||
               ((cVar10 = FUN_14000d840((longlong *)(lVar21 + 0x1a8),0x47), cVar10 == '\0' &&
                (6999 < *(int *)(*(longlong *)(lVar4 + 0x15a0) +
                                (longlong)
                                ((int)(*(longlong *)(lVar4 + 0x15a8) - *(longlong *)(lVar4 + 0x15a0)
                                      >> 2) + -1) * 4))))) {
              piVar34 = (int *)(ulonglong)local_res18;
              piVar20[2] = 400;
              *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
              uVar28 = *(uint *)(*plVar26 + 0xc);
              lVar22 = DAT_141d6dd50;
              if ((int)local_res18 < (int)uVar28) {
                piVar34 = (int *)(ulonglong)uVar28;
                local_res18 = uVar28;
              }
              goto LAB_14091ca5c;
            }
            plVar44 = plVar44 + 1;
          } while (plVar44 < plVar5);
          piVar34 = (int *)(ulonglong)local_res18;
        }
      }
LAB_14091ca5c:
      uVar37 = (uint)piVar34;
    }
    if (0 < (int)uVar49) {
      if ((int)uVar37 < 2) {
        uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if ((int)uVar37 < 3) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if ((int)uVar37 < 6) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else {
        if ((int)uVar37 < 0xb) {
          uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
        }
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      goto LAB_1409167fa;
    }
    goto LAB_14091f096;
  case 0x57:
    sVar14 = FUN_14000dcd0(param_1,8);
    if (sVar14 < 0x3d) {
      sVar14 = FUN_14000dcd0();
      uVar33 = 0xe;
      if (0x3c < sVar14) {
        uVar33 = 4;
      }
    }
    else {
      uVar33 = 0x2e;
    }
    if (0 < (int)uVar49) {
      uVar49 = (int)(uVar49 + (uVar8 & 0xf)) >> 4;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_1409167fa;
    }
    goto LAB_14091f096;
  case 0x58:
    uVar33 = 0x7c;
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x14) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
LAB_140918086:
    if ((int)uVar49 < 1) break;
    if (1 < (int)uVar37) {
      if (2 < (int)uVar37) {
        if ((int)uVar37 < 6) {
          uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        }
        else {
          iVar16 = uVar37 - 10;
          bVar50 = iVar16 == 0;
LAB_140916d8c:
          if (bVar50 || SBORROW4(uVar37,10) != iVar16 < 0) {
            uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
          }
        }
        goto LAB_1409168d6;
      }
      goto LAB_140916886;
    }
    uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
    goto LAB_1409168d6;
  case 0x59:
    iVar16 = FUN_140914d80(param_1,0x1e);
    if ((iVar16 < 0xb) && (sVar14 = FUN_14000dcd0(param_1,0), sVar14 < 0x3d)) {
      sVar14 = FUN_14000dcd0();
      uVar33 = 0x53;
      if (0x3c < sVar14) goto LAB_14091d1a5;
    }
    else {
LAB_14091d1a5:
      uVar33 = 2;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    plVar6 = *(longlong **)(param_1 + 0x140);
    local_res18 = 0;
    for (; plVar26 < plVar6; plVar26 = plVar26 + 1) {
      piVar20 = (int *)*plVar26;
      iVar16 = *piVar20;
      if (iVar16 == 0x12) {
LAB_14091d1ee:
        piVar20[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
          piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
        }
        local_res18 = (uint)piVar34;
      }
      else if (iVar16 == 0x13) {
        lVar22 = FUN_140051ee0(&DAT_141d6dd30,(short)param_2[1]);
        if (lVar22 != 0) {
          plVar5 = *(longlong **)(lVar22 + 0x180);
          for (plVar44 = *(longlong **)(lVar22 + 0x178); plVar44 < plVar5; plVar44 = plVar44 + 1) {
            lVar21 = *plVar44;
            cVar10 = FUN_14000d840(lVar21 + 0x6a8,0x14);
            if ((cVar10 != '\0') ||
               ((cVar10 = FUN_14000d840(lVar22 + 0x1a8,0x47), cVar10 == '\0' &&
                (6999 < *(int *)(*(longlong *)(lVar21 + 0x15a0) +
                                (longlong)
                                ((int)(*(longlong *)(lVar21 + 0x15a8) -
                                       *(longlong *)(lVar21 + 0x15a0) >> 2) + -1) * 4))))) {
              piVar34 = (int *)(ulonglong)local_res18;
              piVar20[2] = 400;
              *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
              uVar28 = *(uint *)(*plVar26 + 0xc);
              if ((int)local_res18 < (int)uVar28) {
                piVar34 = (int *)(ulonglong)uVar28;
                local_res18 = uVar28;
              }
              goto LAB_14091d2b2;
            }
          }
        }
        piVar34 = (int *)(ulonglong)local_res18;
      }
      else if (iVar16 == 0x14) goto LAB_14091d1ee;
LAB_14091d2b2:
      uVar37 = (uint)piVar34;
    }
    if (0 < (int)uVar49) {
      if ((int)uVar37 < 2) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
      }
      else if ((int)uVar37 < 3) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
      }
      else {
        if ((int)uVar37 < 6) goto LAB_14091d14f;
        if ((int)uVar37 < 0xb) {
          uVar49 = (int)uVar49 / 2;
        }
      }
LAB_14091d160:
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_1409167fa;
    }
    goto LAB_14091f096;
  case 0x5a:
    sVar14 = FUN_14000dcd0(param_1,6);
    sVar13 = FUN_14000dcd0();
    sVar27 = FUN_14000dcd0();
    sVar23 = FUN_14000dcd0();
    sVar38 = FUN_14000dcd0();
    sVar38 = 100 - sVar38;
    sVar24 = FUN_14000dcd0();
    sVar12 = FUN_14000dcd0();
    iVar16 = FUN_140914d80();
    if (iVar16 < 0xb) {
      if (((sVar38 < sVar23) && (sVar13 < sVar23)) && ((sVar27 < sVar23 && (0x3c < sVar23)))) {
        uVar33 = 0x54;
      }
      else if (((sVar13 < sVar38) && (sVar27 < sVar38)) && (0x3c < sVar38)) {
        uVar33 = 0x57;
      }
      else if ((sVar27 < sVar13) && (0x3c < sVar13)) {
        uVar33 = 0x70;
      }
      else if (sVar27 < 0x3d) {
        if (sVar24 < 0x3d) {
          if (sVar12 < 0x3d) {
            if (sVar14 < 0x3d) {
              sVar14 = FUN_14000dcd0(param_1,0x1a);
              if ((sVar14 < 0x3d) && (-0xb < iVar16)) {
                if (sVar12 < -10) {
                  uVar33 = 7;
                }
                else {
                  sVar14 = FUN_14000dcd0();
                  uVar33 = 0x78;
                  if (0x3c < sVar14) {
                    uVar33 = 0x1a;
                  }
                }
              }
              else {
                uVar33 = 0x85;
              }
            }
            else {
              uVar33 = 0x10;
            }
          }
          else {
            uVar33 = 0x6a;
            if (0x3c < sVar14) {
              uVar33 = 0x62;
            }
          }
        }
        else {
          uVar33 = 0x8b;
        }
      }
      else {
        uVar33 = 0xb;
      }
    }
    else {
      sVar14 = FUN_14000dcd0(param_1,0x26);
      if (sVar14 < 0x3d) {
        sVar14 = FUN_14000dcd0();
        uVar33 = 0x52;
        if (0x3c < sVar14) {
          uVar33 = 0x5a;
        }
      }
      else {
        uVar33 = 0x84;
      }
    }
    if (0 < (int)uVar49) {
      uVar49 = (int)uVar49 / 2;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_1409167fa;
    }
    goto LAB_14091f096;
  case 0x5b:
    sVar14 = FUN_14000dcd0(param_1,0x10);
    if ((((sVar14 < 0x3d) && (sVar14 = FUN_14000dcd0(), sVar14 < 0x3d)) &&
        (sVar14 = FUN_14000dcd0(), sVar14 < 0x3d)) && (sVar14 = FUN_14000dcd0(), sVar14 < 0x3d)) {
      iVar16 = FUN_140914d80();
      uVar33 = 0x1f;
      if (iVar16 < 0xb) goto LAB_14091d711;
    }
LAB_14091d70c:
    uVar33 = 0x19;
    goto LAB_14091d711;
  case 0x5c:
    sVar14 = FUN_14000dcd0(param_1,0x26);
    if (sVar14 < 0x19) {
      sVar14 = FUN_14000dcd0();
      if (sVar14 < 0x3d) {
        sVar14 = FUN_14000dcd0();
        if (sVar14 < 0x28) {
          sVar14 = FUN_14000dcd0();
          uVar33 = 0x82;
          if (0x3c < sVar14) {
            uVar33 = 0x3e;
          }
        }
        else {
          uVar33 = 0x8e;
        }
      }
      else {
        uVar33 = 0x8f;
      }
    }
    else {
      uVar33 = 0x83;
    }
    break;
  case 0x5d:
    sVar14 = FUN_14000dcd0(param_1,0xb);
    if (sVar14 < 0x3d) {
      sVar14 = FUN_14000dcd0();
      if (sVar14 < 0x3d) {
        sVar14 = FUN_14000dcd0();
        sVar13 = FUN_14000dcd0();
        uVar33 = 0x90;
        if (sVar13 < sVar14) {
          uVar33 = 0x77;
        }
      }
      else {
        uVar33 = 0x41;
      }
    }
    else {
      uVar33 = 0x3e;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(undefined8 **)(param_1 + 0x140) + (7 - (longlong)puVar19)) >> 3);
    if (*(undefined8 **)(param_1 + 0x140) < puVar19) {
      piVar20 = piVar34;
    }
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*puVar19;
        if ((iVar16 == 5) || (iVar16 == 0x16)) {
          ((int *)*puVar19)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        }
        puVar19 = puVar19 + 1;
        piVar34 = (int *)((longlong)piVar34 + 1);
      } while (piVar34 < piVar20);
    }
    goto LAB_14091f096;
  case 0x5e:
    uVar33 = 0x58;
    puVar19 = *(undefined8 **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(undefined8 **)(param_1 + 0x140) + (7 - (longlong)puVar19)) >> 3);
    if (*(undefined8 **)(param_1 + 0x140) < puVar19) {
      piVar20 = piVar34;
    }
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*puVar19;
        if ((iVar16 == 5) || (iVar16 == 0x16)) {
          ((int *)*puVar19)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        }
        puVar19 = puVar19 + 1;
        piVar34 = (int *)((longlong)piVar34 + 1);
      } while (piVar34 < piVar20);
    }
    break;
  case 0x5f:
    sVar14 = FUN_14000dcd0(param_1,0x1f);
    if (0x3c < sVar14) {
      sVar14 = FUN_14000dcd0();
      if (0x3c < sVar14) {
LAB_14091d9e9:
        uVar33 = 0x34;
        uVar30 = uVar49;
        goto LAB_14091da21;
      }
      iVar16 = FUN_140914d80();
      if (10 < iVar16) {
        uVar33 = 0x34;
        uVar30 = uVar49;
        goto LAB_14091da21;
      }
    }
    goto LAB_14091da1c;
  case 0x60:
    sVar14 = FUN_14000dcd0(param_1,1);
    uVar33 = 0x9d;
    if (0x3c < sVar14) {
      uVar33 = 0x29;
    }
    goto LAB_14091d711;
  case 0x61:
    uVar33 = 0x34;
LAB_14091928e:
    if ((int)uVar49 < 1) break;
    uVar49 = (int)(uVar49 + (uVar8 & 7)) >> 3;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409168ed;
  case 0x62:
    if (-1 < (int)uVar28) {
      iVar16 = FUN_140914d80(param_1,0x1b);
      if (iVar16 < 0xb) {
        sVar14 = FUN_14000dcd0(param_1,0x2d);
        uVar33 = 0x1f;
        if (0x27 < sVar14) goto LAB_14091d711;
      }
      goto LAB_14091d70c;
    }
LAB_14091d951:
    sVar14 = FUN_14000dcd0(param_1,5);
    uVar33 = 0x34;
    if (0x3c < sVar14) {
      uVar33 = 0x76;
    }
    goto LAB_14091d711;
  case 99:
    iVar16 = *(int *)(param_1 + 300);
    if (iVar16 - 1U < 2) {
      if (iVar16 == 2) {
        uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
      }
      else if (iVar16 == 1) {
        uVar49 = (int)uVar49 / 2;
      }
LAB_14091da18:
      if (uVar49 == 0) {
        uVar49 = 1;
      }
    }
    else {
      sVar14 = FUN_14000dcd0(param_1,0x1f);
      if ((0x3c < sVar14) &&
         ((sVar14 = FUN_14000dcd0(), 0x3c < sVar14 || (iVar16 = FUN_140914d80(), 10 < iVar16))))
      goto LAB_14091d9e9;
    }
LAB_14091da1c:
    uVar33 = 0xe;
    uVar30 = uVar49;
LAB_14091da21:
    uVar49 = uVar30;
    if ((int)uVar30 < 1) goto LAB_14091f096;
LAB_14091da2b:
    uVar49 = (int)(uVar30 + ((int)uVar30 >> 0x1f & 7U)) >> 3;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409167fa;
  case 100:
    if (*(int *)(param_1 + 300) == 2) {
      uVar49 = (int)uVar49 / 2;
      goto LAB_14091da18;
    }
    iVar16 = FUN_140914d80(param_1,9);
    if ((iVar16 < 0xb) && (sVar14 = FUN_14000dcd0(param_1,0x29), sVar14 < 0x3d)) goto LAB_14091da1c;
    sVar14 = FUN_14000dcd0(param_1,0x1f);
    uVar33 = 0x29;
    uVar30 = uVar49;
    if (0x3c < sVar14) {
      uVar33 = 0x5a;
    }
    goto LAB_14091da21;
  case 0x65:
    sVar14 = FUN_14000dcd0(param_1,0x1a);
    sVar13 = FUN_14000dcd0();
    sVar27 = FUN_14000dcd0();
    sVar23 = FUN_14000dcd0();
    sVar23 = 100 - sVar23;
    sVar38 = FUN_14000dcd0();
    if ((sVar23 < 0x3d) || (uVar33 = 5, sVar27 < 0x3d)) {
      if ((sVar14 < 0x3d) || (sVar13 < 0x3d)) {
        if (((sVar23 < sVar38) && (sVar27 < sVar38)) && (0x27 < sVar38)) {
          uVar33 = 0x36;
        }
        else if ((sVar27 < sVar23) && (0x27 < sVar23)) {
          uVar33 = 0x57;
        }
        else {
          uVar33 = 0x4e;
          if (0x27 < sVar27) {
            uVar33 = 0x90;
          }
        }
      }
      else {
        sVar14 = FUN_14000dcd0();
        uVar33 = 0x76;
        if (0x3c < sVar14) {
          uVar33 = 0xa3;
        }
      }
    }
    break;
  case 0x66:
    iVar16 = FUN_140914d80(param_1,0);
    uVar33 = uVar35;
    if (iVar16 < 0x1a) {
      sVar14 = FUN_14000dcd0(param_1,6);
      sVar13 = FUN_14000dcd0();
      sVar27 = FUN_14000dcd0();
      if ((sVar13 < sVar14) && (sVar27 < sVar14)) {
        uVar33 = 0x2c;
      }
      else {
        uVar33 = 3;
        if (sVar27 < sVar13) {
          uVar33 = 0x85;
        }
      }
    }
    break;
  case 0x67:
    sVar14 = FUN_14000dcd0(param_1,0x24);
    puVar19 = *(undefined8 **)(param_1 + 0x138);
    uVar33 = 0x6c;
    if (0x18 < sVar14) {
      uVar33 = uVar30;
    }
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(undefined8 **)(param_1 + 0x140) + (7 - (longlong)puVar19)) >> 3);
    if (*(undefined8 **)(param_1 + 0x140) < puVar19) {
      piVar20 = piVar34;
    }
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*puVar19 == 7) {
          ((int *)*puVar19)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        }
        puVar19 = puVar19 + 1;
        piVar34 = (int *)((longlong)piVar34 + 1);
      } while (piVar34 < piVar20);
    }
    goto LAB_14091f096;
  case 0x68:
    sVar14 = FUN_14000dcd0(param_1,0x24);
    if (param_2[1] == 0xc) {
      uVar33 = 0x6c;
      if (0x18 < sVar14) {
        uVar33 = uVar30;
      }
    }
    else {
      uVar33 = uVar30;
      if (sVar14 < 0x3d) {
        sVar14 = FUN_14000dcd0();
        uVar33 = 2;
        if (0x27 < sVar14) {
          uVar33 = 0x6c;
        }
      }
    }
    puVar19 = *(undefined8 **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(undefined8 **)(param_1 + 0x140) + (7 - (longlong)puVar19)) >> 3);
    if (*(undefined8 **)(param_1 + 0x140) < puVar19) {
      piVar20 = piVar34;
    }
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*puVar19 == 7) {
          ((int *)*puVar19)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        }
        puVar19 = puVar19 + 1;
        piVar34 = (int *)((longlong)piVar34 + 1);
      } while (piVar34 < piVar20);
    }
    goto LAB_14091f096;
  case 0x69:
    sVar14 = FUN_14000dcd0(param_1,0x16);
    uVar33 = 0x89;
    if (0x3c < sVar14) {
      uVar33 = 0x4c;
    }
    goto LAB_14091c8be;
  case 0x6a:
    sVar14 = FUN_14000dcd0(param_1,0x26);
    if (sVar14 < 10) {
      uVar33 = 0x85;
    }
    else {
      uVar33 = 0x96;
      if (0x4b < sVar14) {
        uVar33 = 0x1b;
      }
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x1b) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x6b:
    if ((int)uVar28 < 0) {
      sVar14 = FUN_14000dcd0(param_1,5);
      sVar13 = FUN_14000dcd0();
      if ((sVar13 < sVar14) && (0x3c < sVar14)) {
        uVar33 = 4;
      }
      else {
        uVar33 = 0x2b;
        if (0x3c < sVar13) {
          uVar33 = 0x54;
        }
      }
      goto LAB_14091ed5a;
    }
    sVar14 = FUN_14000dcd0(param_1,0);
    sVar13 = FUN_14000dcd0();
    iVar16 = param_2[1];
    if (iVar16 == 1) {
LAB_14091ecee:
      sVar27 = FUN_14000dcd0(param_1,7);
      if ((sVar14 < 0x4c) || (sVar13 < 0x4c)) {
        if (sVar14 < 0x3d) {
          if (sVar27 < 0x3d) {
            if (sVar14 < 0x28) {
              uVar28 = 0x13;
              sVar14 = sVar27;
              goto LAB_14091ed4b;
            }
            uVar33 = 0x97;
          }
          else {
            uVar33 = 0x6e;
          }
        }
        else {
          uVar33 = 0x6c;
          if (0x3c < sVar27) {
            uVar33 = 0x79;
          }
        }
      }
      else {
        uVar33 = 1;
      }
    }
    else if (iVar16 < 2) {
LAB_14091ecd2:
      if ((sVar14 < 0x3d) || (sVar13 < 0x3d)) {
        uVar33 = 0x42;
      }
      else {
        uVar33 = 2;
      }
    }
    else if (iVar16 < 4) {
      if ((sVar14 < 0x4c) || (sVar13 < 0x4c)) {
        uVar28 = 0x6c;
LAB_14091ed4b:
        uVar33 = 2;
        if (0x27 < sVar14) {
          uVar33 = uVar28;
        }
      }
      else {
        uVar33 = 1;
      }
    }
    else {
      if (iVar16 == 9) goto LAB_14091ecee;
      if (iVar16 != 0xc) goto LAB_14091ecd2;
      if ((sVar14 < 0x4c) || (uVar33 = uVar30, sVar13 < 0x4c)) {
        if (sVar14 < 0x3d) {
          uVar33 = 0x74;
          if (0x27 < sVar14) {
            uVar33 = 0x97;
          }
        }
        else {
          uVar33 = 0x6c;
        }
      }
    }
LAB_14091ed5a:
    iVar16 = 0;
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (plVar26 = *(longlong **)(param_1 + 0x138); plVar26 < plVar6; plVar26 = plVar26 + 1) {
      piVar34 = (int *)*plVar26;
      iVar29 = *piVar34;
      if (iVar29 == 0) {
        piVar34[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if (iVar16 < *(int *)(*plVar26 + 0xc)) {
          iVar16 = *(int *)(*plVar26 + 0xc);
        }
      }
      else if (iVar29 == 7) {
        iVar29 = param_2[1];
        if ((0 < iVar29) && ((iVar29 < 4 || (iVar29 - 0xbU < 2)))) goto LAB_14091edab;
      }
      else if (iVar29 == 8) {
        if (((uint)param_2[1] < 0x34) &&
           ((0x8000000042000U >> ((longlong)param_2[1] & 0x3fU) & 1) != 0)) goto LAB_14091edab;
      }
      else {
        if (iVar29 == 0x11) {
          bVar50 = (param_2[1] - 1U & 0xfffffff7) == 0;
        }
        else {
          if (iVar29 != 0x18) goto LAB_14091ee21;
          bVar50 = param_2[1] == 0xe;
        }
        if (bVar50) {
LAB_14091edab:
          piVar34[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if (iVar16 < *(int *)(*plVar26 + 0xc)) {
            iVar16 = *(int *)(*plVar26 + 0xc);
          }
        }
      }
LAB_14091ee21:
    }
    goto LAB_14091e907;
  case 0x6c:
    if (-1 < (int)uVar28) {
      sVar14 = FUN_14000dcd0(param_1,0x1a);
      uVar33 = 0x89;
      uVar30 = uVar49;
      if (0x3c < sVar14) {
        uVar33 = 0x7d;
      }
      goto LAB_14091da21;
    }
    sVar14 = FUN_14000dcd0(param_1,5);
    uVar33 = 0x34;
    if (0x3c < sVar14) {
      uVar33 = 0x76;
    }
    iVar16 = FUN_140914d80(param_1,9);
    if (-0x29 < iVar16) {
      if (iVar16 < -0x19) {
        uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
      }
      else if (iVar16 < -10) {
        uVar49 = (int)uVar49 / 2;
      }
      else if (iVar16 < 0x29) {
        if (iVar16 < 0x1a) {
          if (10 < iVar16) {
            uVar49 = uVar49 * 2;
          }
        }
        else {
          uVar49 = uVar49 * 5;
        }
      }
      else {
        uVar49 = uVar49 * 10;
      }
      uVar30 = uVar49;
      if (0 < (int)uVar49) goto LAB_14091da21;
      uVar30 = 1;
    }
    goto LAB_14091da2b;
  case 0x6d:
    uVar33 = 0x5a;
LAB_140916c70:
    if (0 < (int)uVar49) {
      uVar49 = (int)(uVar49 + (uVar8 & 3)) >> 2;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
LAB_1409168ed:
      if (bVar52 != bVar50) {
        uVar49 = 1;
      }
    }
    break;
  case 0x6e:
    if ((int)uVar28 < 0) goto LAB_14091d951;
    sVar14 = FUN_14000dcd0(param_1,0x1a);
    uVar33 = 0x1f;
    if (0x3c < sVar14) {
      uVar33 = 0x7d;
    }
    goto LAB_14091d711;
  case 0x6f:
    sVar14 = FUN_14000dcd0(param_1,0x2a);
    sVar14 = 100 - sVar14;
    sVar13 = FUN_14000dcd0();
    if ((sVar13 < sVar14) && (0x3c < sVar14)) {
      uVar33 = 0x73;
    }
    else if (sVar13 < 0x3d) {
      sVar14 = FUN_14000dcd0();
      uVar33 = 0x28;
      if (0x27 < sVar14) {
        uVar33 = 0x34;
      }
    }
    else {
      uVar33 = 0x76;
    }
LAB_14091d711:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)(uVar49 + (uVar8 & 7)) >> 3;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409167fa;
  case 0x70:
    iVar16 = FUN_140914d80(param_1,10);
    uVar33 = uVar30;
    if (iVar16 < 0x1a) {
      if (iVar16 < 0xb) {
        if (iVar16 < -10) {
          sVar14 = FUN_14000dcd0(param_1,1);
          uVar33 = 7;
          if (0x3c < sVar14) {
            uVar33 = 0x69;
          }
        }
        else {
          uVar33 = 0x11;
        }
      }
      else {
        sVar14 = FUN_14000dcd0(param_1,0x1d);
        if (sVar14 < 0x3d) {
          if (sVar14 < 0x28) {
            sVar14 = FUN_14000dcd0();
            uVar33 = 0xa9;
            if (0x27 < sVar14) {
              uVar33 = 0x7d;
            }
          }
          else {
            uVar33 = 0x75;
          }
        }
        else {
          uVar33 = 0x56;
        }
      }
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 10) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x71:
    iVar16 = FUN_140914d80(param_1,0x1e);
    if ((iVar16 < 0xb) && (sVar14 = FUN_14000dcd0(param_1,0), sVar14 < 0x3d)) {
      sVar14 = FUN_14000dcd0();
      uVar33 = 0x42;
      if (0x3c < sVar14) goto LAB_14091cfc1;
    }
    else {
LAB_14091cfc1:
      uVar33 = 2;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    local_res18 = 0;
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (; iVar16 = (int)piVar34, plVar26 < plVar6; plVar26 = plVar26 + 1) {
      piVar20 = (int *)*plVar26;
      if (*piVar20 == 0x12) {
        piVar20[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if (iVar16 < *(int *)(*plVar26 + 0xc)) {
          piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
        }
        local_res18 = (uint)piVar34;
      }
      else if (*piVar20 == 0x13) {
        lVar22 = FUN_140051ee0(&DAT_141d6dd30,(short)param_2[1]);
        if (lVar22 != 0) {
          plVar5 = *(longlong **)(lVar22 + 0x180);
          for (plVar44 = *(longlong **)(lVar22 + 0x178); plVar44 < plVar5; plVar44 = plVar44 + 1) {
            lVar21 = *plVar44;
            cVar10 = FUN_14000d840(lVar21 + 0x6a8,0x14);
            if ((cVar10 != '\0') ||
               ((cVar10 = FUN_14000d840(lVar22 + 0x1a8,0x47), cVar10 == '\0' &&
                (6999 < *(int *)(*(longlong *)(lVar21 + 0x15a0) +
                                (longlong)
                                ((int)(*(longlong *)(lVar21 + 0x15a8) -
                                       *(longlong *)(lVar21 + 0x15a0) >> 2) + -1) * 4))))) {
              piVar20[2] = 400;
              *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
              break;
            }
          }
        }
        piVar34 = (int *)(ulonglong)local_res18;
      }
    }
    if (0 < (int)uVar49) {
      if (iVar16 < 2) {
        uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
      }
      else if (iVar16 < 3) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
      }
      else {
        if (5 < iVar16) goto LAB_14091d14d;
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
      }
      goto LAB_14091d160;
    }
    goto LAB_14091f096;
  case 0x72:
    iVar16 = FUN_140914d80(param_1,0);
    sVar14 = FUN_14000dcd0(param_1,5);
    sVar13 = FUN_14000dcd0();
    if (sVar14 < 0x4c) {
      if (sVar14 < 0x3d) {
        sVar27 = FUN_14000dcd0();
        if (sVar27 < 0x3d) {
          if (sVar13 < 0x3d) {
            if (sVar14 < 0x28) {
              if (iVar16 < -10) {
                uVar33 = 0x11;
                if (0x27 < sVar13) {
                  uVar33 = 0x18;
                }
              }
              else {
                uVar33 = 0x2a;
              }
            }
            else {
              uVar33 = 0x45;
            }
          }
          else {
            uVar33 = 0x29;
          }
        }
        else {
          uVar33 = 0x2c;
          if (-0xb < iVar16) {
            uVar33 = 0x8e;
          }
        }
      }
      else {
        uVar33 = 0xb;
      }
    }
    else {
      uVar33 = 0x76;
    }
    goto LAB_14091c8be;
  case 0x73:
    sVar14 = FUN_14000dcd0(param_1,6);
    uVar33 = 0x89;
    if (0x3c < sVar14) {
      uVar33 = 0x81;
    }
    goto LAB_14091c8be;
  case 0x74:
    iVar16 = FUN_140914d80(param_1,0);
    sVar14 = FUN_14000dcd0(param_1,0x1a);
    sVar13 = FUN_14000dcd0();
    sVar27 = FUN_14000dcd0();
    if ((sVar14 < 0x3d) || (sVar13 < 0x3d)) {
      if (sVar14 < 0x4c) {
        if (sVar13 < 0x3d) {
          sVar23 = FUN_14000dcd0();
          if (sVar23 < 0x3d) {
            if (sVar27 < 0x3d) {
              if (sVar14 < 0x28) {
                if (sVar13 < 0x28) goto LAB_14091e7a8;
                uVar33 = 0x45;
              }
              else if (sVar13 < 0x28) {
LAB_14091e7a8:
                if (iVar16 < -10) {
                  uVar33 = 0x11;
                  if (0x27 < sVar27) {
                    uVar33 = 0x18;
                  }
                }
                else {
                  uVar33 = 0x2a;
                }
              }
              else {
                uVar33 = 0x87;
              }
            }
            else {
              uVar33 = 0x29;
            }
          }
          else {
            uVar33 = 0x2c;
            if (-0xb < iVar16) {
              uVar33 = 0x8e;
            }
          }
        }
        else {
          uVar33 = 0xb;
        }
      }
      else {
        uVar33 = 0x5f;
      }
    }
    else {
      uVar33 = 0x76;
    }
    break;
  case 0x75:
    switch(param_2[1]) {
    case 0:
    case 7:
    case 8:
    case 0xc:
    case 0x11:
      sVar14 = *(short *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_1409190a2:
        if (sVar14 < 0x4c) {
LAB_1409190b5:
          uVar33 = 0x6a;
          break;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 8);
        if (sVar14 < 0) goto LAB_1409190b5;
        if (sVar14 < 0x65) goto LAB_1409190a2;
      }
      uVar33 = 0x8b;
      break;
    case 1:
    case 2:
    case 10:
    case 0xb:
    case 0x10:
    case 0x14:
    case 0x15:
    case 0x19:
    case 0x1b:
    case 0x1d:
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar13 = *(short *)(param_1 + 0x8c);
      if (((lVar22 != 0) &&
          (sVar27 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar13 = sVar14,
          -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
        sVar13 = 100;
      }
      sVar27 = *(short *)(param_1 + 0x8a);
      if (((lVar22 != 0) &&
          (sVar23 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar27 = sVar14,
          -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
        sVar27 = 100;
      }
      piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x88);
      if (lVar22 != 0) {
        uVar40 = *(ushort *)(param_1 + 0x88) + *(short *)(lVar22 + 8);
        piVar20 = piVar34;
        if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
          piVar20 = (int *)0x64;
        }
      }
      sVar14 = (short)piVar20;
      if (((sVar27 < sVar13) && (sVar14 < sVar13)) && (0x3c < sVar13)) {
        uVar33 = 0xa2;
      }
      else if ((sVar27 < sVar14) && (0x3c < sVar14)) {
        uVar33 = 0x23;
      }
      else {
        uVar33 = 0x9d;
        if (0x3c < sVar27) {
          uVar33 = 0x45;
        }
      }
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x12:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1c:
      lVar22 = *(longlong *)(param_1 + 0x158);
      sVar13 = *(short *)(param_1 + 0x8c);
      if (((lVar22 != 0) &&
          (sVar27 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar13 = sVar14,
          -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
        sVar13 = 100;
      }
      sVar27 = *(short *)(param_1 + 0x8a);
      if (((lVar22 != 0) &&
          (sVar23 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar27 = sVar14,
          -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
        sVar27 = 100;
      }
      piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x88);
      if (lVar22 != 0) {
        uVar40 = *(ushort *)(param_1 + 0x88) + *(short *)(lVar22 + 8);
        piVar20 = piVar34;
        if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
          piVar20 = (int *)0x64;
        }
      }
      sVar14 = (short)piVar20;
      if (((sVar27 < sVar13) && (sVar14 < sVar13)) && (0x3c < sVar13)) {
        uVar33 = 0xa8;
      }
      else if ((sVar27 < sVar14) && (0x3c < sVar14)) {
        uVar33 = 0x8b;
      }
      else {
        uVar33 = 0x1a;
        if (0x3c < sVar27) {
          uVar33 = 0x45;
        }
      }
      break;
    default:
      goto switchD_1409166c5_caseD_9b;
    }
    break;
  case 0x76:
    uVar33 = 0x7f;
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        piVar42 = (int *)*plVar26;
        if (((*piVar42 == 2) || (*piVar42 == 0xb)) && (piVar42[1] == param_2[1])) {
          piVar42[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140916878;
  case 0x77:
    puVar45 = puVar17;
    sVar14 = FUN_14000dcd0(param_1,0x1a);
    sVar13 = FUN_14000dcd0();
    sVar27 = FUN_14000dcd0();
    if (sVar27 < 0x28) {
      uVar33 = 0x14;
    }
    else if ((sVar14 < sVar13) && (0x3c < sVar13)) {
      uVar33 = 0x33;
    }
    else if (sVar14 < 0x3d) {
      iVar16 = FUN_140914d80();
      uVar33 = 0x89;
      puVar45 = puVar17;
      if (10 < iVar16) {
        uVar33 = 0x9c;
      }
    }
    else {
      uVar33 = 0x7d;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(undefined8 **)(param_1 + 0x140) + (7 - (longlong)puVar19)) >> 3);
    if (*(undefined8 **)(param_1 + 0x140) < puVar19) {
      piVar20 = piVar34;
    }
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*puVar19;
        if ((iVar16 == 6) || (iVar16 == 0x1c)) {
          ((int *)*puVar19)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        }
        puVar19 = puVar19 + 1;
        piVar34 = (int *)((longlong)piVar34 + 1);
      } while (piVar34 < piVar20);
    }
    for (plVar26 = *(longlong **)(param_1 + 0x48); plVar26 < *(longlong **)(param_1 + 0x50);
        plVar26 = plVar26 + 1) {
      if (*(int *)(*plVar26 + 4) == 0xc) {
        puVar1 = (uint *)(*plVar26 + 0x28);
        *puVar1 = *puVar1 | 1;
        puVar45[6] = puVar45[6] | 2;
        break;
      }
    }
    goto LAB_14091f096;
  case 0x78:
    sVar14 = FUN_14000dcd0(param_1,4);
    sVar13 = FUN_14000dcd0();
    sVar27 = FUN_14000dcd0();
    sVar23 = FUN_14000dcd0();
    if ((sVar14 < 0x3d) || (sVar38 = FUN_14000dcd0(), sVar38 < 0x3d)) {
      sVar38 = FUN_14000dcd0(param_1,0x1a);
      if (sVar38 < 0x3d) {
        if ((((sVar27 < sVar23) && (sVar14 < sVar23)) && (sVar13 < sVar23)) && (0x3c < sVar23)) {
          uVar33 = 0x8b;
        }
        else if (((sVar14 < sVar27) && (sVar13 < sVar27)) && (0x3c < sVar27)) {
          uVar33 = 0x18;
        }
        else if ((sVar13 < sVar14) && (0x3c < sVar14)) {
          uVar33 = 0x4a;
        }
        else if (sVar13 < 0x3d) {
          iVar16 = FUN_140914d80();
          uVar33 = uVar37;
          if (10 < iVar16) {
            uVar33 = 0x22;
          }
        }
        else {
          uVar33 = 0x45;
        }
      }
      else {
        uVar33 = 0x5a;
      }
    }
    else {
      uVar33 = 0xc;
    }
    if (0 < (int)uVar49) {
      uVar49 = (int)(uVar49 + (uVar8 & 3)) >> 2;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
      goto LAB_1409167fa;
    }
    goto LAB_14091f096;
  case 0x79:
    sVar14 = FUN_14000dcd0(param_1,0x1e);
    sVar13 = FUN_14000dcd0();
    sVar27 = FUN_14000dcd0();
    if (sVar27 < 0x4c) {
      if (sVar27 < 0x19) {
        uVar33 = 0x7a;
      }
      else if ((sVar14 < sVar13) && (0x3c < sVar13)) {
        uVar33 = 0x10;
      }
      else if (sVar14 < 0x3d) {
        if (sVar27 < 0x28) {
          uVar33 = 0x2f;
        }
        else if (sVar27 < 0x3d) {
          sVar14 = FUN_14000dcd0();
          uVar33 = 0x1f;
          if (0x3c < sVar14) {
            uVar33 = 0x39;
          }
        }
        else {
          uVar33 = 0x75;
        }
      }
      else {
        uVar33 = 0x60;
      }
    }
    else {
      uVar33 = 0x3f;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x1c) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x7a:
    uVar33 = param_2[2];
    goto LAB_14091f096;
  case 0x7b:
    lVar22 = *(longlong *)(param_2 + 6);
    if (((lVar22 != 0) && (*(int **)(lVar22 + 0x110) != (int *)0x0)) &&
       (**(int **)(lVar22 + 0x110) - 4U < 4)) {
      uVar33 = 0xa4;
      plVar6 = *(longlong **)(param_1 + 0x140);
      for (plVar26 = *(longlong **)(param_1 + 0x138); plVar26 < plVar6; plVar26 = plVar26 + 1) {
        puVar7 = (undefined4 *)*plVar26;
        switch(*puVar7) {
        case 0:
          lVar22 = *(longlong *)(param_2 + 6);
          if (1 < (ulonglong)
                  ((*(longlong *)(*(longlong *)(lVar22 + 0x110) + 0x10) -
                    *(longlong *)(*(longlong *)(lVar22 + 0x110) + 8) >> 3) +
                  (*(longlong *)(lVar22 + 0x10) - *(longlong *)(lVar22 + 8) >> 2)))
          goto switchD_14091712b_caseD_3;
          break;
        case 2:
          piVar20 = *(int **)(*(longlong *)(param_2 + 6) + 0x110);
          if (*piVar20 == 4) {
            if (piVar20[8] == puVar7[1]) {
LAB_140917209:
              puVar7[2] = 400;
              *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
              if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
                piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
              }
            }
          }
          else if (((*piVar20 == 5) &&
                   (lVar22 = FUN_140004650(&DAT_141d7a048,puVar7[1]), lVar22 != 0)) &&
                  ((*(undefined8 **)(lVar22 + 0x130) != (undefined8 *)0x0 &&
                   (puVar19 = (undefined8 *)**(undefined8 **)(lVar22 + 0x130),
                   puVar19 != (undefined8 *)0x0)))) {
            for (psVar18 = (short *)*puVar19; psVar18 < (short *)puVar19[1]; psVar18 = psVar18 + 1)
            {
              if (*psVar18 == (short)piVar20[8]) {
                if ((int)((longlong)psVar18 - (longlong)*puVar19 >> 1) != -1) goto LAB_140917209;
                break;
              }
            }
          }
          break;
        case 3:
        case 4:
        case 9:
        case 10:
        case 0xf:
switchD_14091712b_caseD_3:
          puVar7[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < (int)*(uint *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar35 = (uint)piVar34;
      }
      if (0 < (int)uVar49) {
        if ((int)uVar35 < 2) {
          uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
        }
        else if ((int)uVar35 < 3) {
          uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
        }
        else if ((int)uVar35 < 6) {
          uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        }
        else if ((int)uVar35 < 0xb) {
          uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
        }
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_1409168ed;
      }
      break;
    }
    bVar50 = false;
    if ((lVar22 != 0) && (lVar21 = *(longlong *)(param_2 + 8), lVar21 != 0)) {
      puVar19 = *(undefined8 **)(lVar21 + 0x230);
      bVar52 = false;
      if (puVar19 < *(undefined8 **)(lVar21 + 0x238)) {
        do {
          bVar50 = bVar52;
          psVar18 = (short *)*puVar19;
          if ((*(byte *)(psVar18 + 0xb) & 1) != 0) {
            sVar13 = *psVar18;
            if (sVar13 == 9) {
              if ((*(longlong *)(lVar22 + 0x110) != 0) &&
                 (*(int *)(psVar18 + 2) == *(int *)(*(longlong *)(lVar22 + 0x110) + 0x2c))) {
                bVar50 = true;
              }
            }
            else if (sVar13 == 10) {
              if ((*(longlong *)(lVar22 + 0x110) != 0) &&
                 (*(int *)(psVar18 + 2) == *(int *)(*(longlong *)(lVar22 + 0x110) + 0x30))) {
                bVar50 = true;
              }
            }
            else if (((sVar13 == 0xb) && (*(longlong *)(lVar22 + 0x110) != 0)) &&
                    (*(int *)(psVar18 + 2) == *(int *)(*(longlong *)(lVar22 + 0x110) + 0x34))) {
              bVar50 = true;
            }
          }
          puVar19 = puVar19 + 1;
          bVar52 = bVar50;
        } while (puVar19 < *(undefined8 **)(lVar21 + 0x238));
        if (bVar50) {
          uVar49 = uVar49 * 2;
        }
      }
    }
    lVar21 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xdc);
    if (((lVar21 != 0) &&
        (sVar27 = *(short *)(param_1 + 0xdc) + *(short *)(lVar21 + 0x5c), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x86);
    if (lVar21 != 0) {
      uVar40 = *(ushort *)(param_1 + 0x86) + *(short *)(lVar21 + 6);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    sVar27 = *(short *)(param_1 + 0xe2);
    if (((lVar21 != 0) &&
        (sVar23 = *(short *)(param_1 + 0xe2) + *(short *)(lVar21 + 0x62), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    sVar14 = (short)piVar20;
    if (bVar50) {
      if ((sVar14 < sVar13) && (0x3c < sVar13)) {
        uVar33 = 0x3e;
      }
      else {
        uVar33 = 0x19;
        uVar28 = 0x66;
LAB_140917455:
        if (0x3c < sVar14) {
          uVar33 = uVar28;
        }
      }
    }
    else if ((int)uVar49 < 0x32) {
      if (((sVar14 < sVar27) && (sVar13 < sVar27)) && (0x3c < sVar27)) {
        uVar33 = 0x1f;
      }
      else {
        if ((sVar13 <= sVar14) || (sVar13 < 0x3d)) {
          uVar33 = 0x89;
          uVar28 = 0x53;
          goto LAB_140917455;
        }
        uVar33 = 0x65;
      }
    }
    else if (((sVar14 < sVar27) && (sVar13 < sVar27)) && (0x3c < sVar27)) {
      uVar33 = 0x7c;
    }
    else {
      if ((sVar13 <= sVar14) || (sVar13 < 0x3d)) {
        uVar33 = 0x37;
        uVar28 = 0x47;
        goto LAB_140917455;
      }
      uVar33 = 0x3d;
    }
    if (lVar22 != 0) {
      iVar16 = 0;
      plVar6 = *(longlong **)(param_1 + 0x140);
      for (plVar26 = *(longlong **)(param_1 + 0x138); plVar26 < plVar6; plVar26 = plVar26 + 1) {
        puVar7 = (undefined4 *)*plVar26;
        switch(*puVar7) {
        case 0:
          lVar22 = *(longlong *)(param_2 + 6);
          lVar21 = *(longlong *)(lVar22 + 0x110);
          if ((lVar21 != 0) &&
             (1 < (ulonglong)
                  ((*(longlong *)(lVar22 + 0x10) - *(longlong *)(lVar22 + 8) >> 2) +
                  (*(longlong *)(lVar21 + 0x10) - *(longlong *)(lVar21 + 8) >> 3))))
          goto switchD_1409174b2_caseD_3;
          break;
        case 3:
        case 4:
        case 5:
        case 10:
        case 0xc:
        case 0xf:
        case 0x1d:
switchD_1409174b2_caseD_3:
          puVar7[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if (iVar16 < *(int *)(*plVar26 + 0xc)) {
            iVar16 = *(int *)(*plVar26 + 0xc);
          }
          break;
        case 9:
          if ((*(longlong *)(*(longlong *)(param_2 + 6) + 0x110) != 0) &&
             (*(int *)(*(longlong *)(*(longlong *)(param_2 + 6) + 0x110) + 0x2c) != -1)) {
            puVar7[2] = 400;
            *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
            if (iVar16 < *(int *)(*plVar26 + 0xc)) {
              iVar16 = *(int *)(*plVar26 + 0xc);
            }
          }
        }
      }
      goto LAB_14091e907;
    }
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)(uVar49 + ((int)uVar49 >> 0x1f & 0x1fU)) >> 5;
    goto LAB_140917563;
  case 0x7c:
    lVar22 = *(longlong *)(param_2 + 6);
    if (((lVar22 != 0) && (piVar20 = *(int **)(lVar22 + 0x110), piVar20 != (int *)0x0)) &&
       (iVar16 = *piVar20, iVar16 - 4U < 4)) {
      if (iVar16 == 4) {
        lVar22 = *(longlong *)(param_2 + 10);
        if (lVar22 != 0) {
          plVar6 = *(longlong **)(lVar22 + 0x120);
          for (plVar26 = *(longlong **)(lVar22 + 0x118); plVar26 < plVar6; plVar26 = plVar26 + 1) {
            sVar14 = (*(code *)**(undefined8 **)*plVar26)();
            if ((sVar14 == 4) &&
               (*(int *)(*plVar26 + 8) ==
                *(int *)(*(longlong *)(*(longlong *)(param_2 + 6) + 0x110) + 0x20))) {
              uVar37 = (uint)*(short *)(*plVar26 + 0xc);
              goto LAB_14091779d;
            }
          }
        }
LAB_1409175ee:
        uVar33 = 0x1a;
      }
      else {
        if (iVar16 == 5) {
          lVar22 = *(longlong *)(param_2 + 10);
          if (lVar22 != 0) {
            plVar26 = *(longlong **)(lVar22 + 0x118);
            piVar20 = (int *)((ulonglong)
                              ((longlong)*(longlong **)(lVar22 + 0x120) + (7 - (longlong)plVar26))
                             >> 3);
            if (*(longlong **)(lVar22 + 0x120) < plVar26) {
              piVar20 = piVar34;
            }
            piVar41 = piVar34;
            if (piVar20 != (int *)0x0) {
              do {
                sVar14 = (*(code *)**(undefined8 **)*plVar26)();
                if (sVar14 == 4) {
                  lVar22 = *plVar26;
                  lVar21 = FUN_140004650(&DAT_141d7a048,*(undefined4 *)(lVar22 + 8));
                  if (((lVar21 != 0) && (*(undefined8 **)(lVar21 + 0x130) != (undefined8 *)0x0)) &&
                     (puVar19 = (undefined8 *)**(undefined8 **)(lVar21 + 0x130),
                     puVar19 != (undefined8 *)0x0)) {
                    for (psVar18 = (short *)*puVar19; psVar18 < (short *)puVar19[1];
                        psVar18 = psVar18 + 1) {
                      if (*psVar18 ==
                          *(short *)(*(longlong *)(*(longlong *)(param_2 + 6) + 0x110) + 0x20)) {
                        if (((int)((longlong)psVar18 - (longlong)*puVar19 >> 1) != -1) &&
                           (uVar28 = (uint)*(short *)(lVar22 + 0xc), (int)piVar41 < (int)uVar28)) {
                          piVar41 = (int *)(ulonglong)uVar28;
                        }
                        break;
                      }
                    }
                  }
                }
                uVar37 = (uint)piVar41;
                plVar26 = plVar26 + 1;
                piVar34 = (int *)((longlong)piVar34 + 1);
              } while (piVar34 < piVar20);
LAB_14091779d:
              if ((int)uVar37 < 0x4b) {
                if (9 < (int)uVar37) goto LAB_1409177b1;
                goto LAB_1409177bb;
              }
              goto LAB_1409177a2;
            }
          }
          goto LAB_1409175ee;
        }
        if (iVar16 == 6) {
          iVar16 = FUN_140914d80(param_1,piVar20[8]);
          if (iVar16 < 0x1a) {
            if (iVar16 < 0xb) {
              if (-0xb < iVar16) goto LAB_1409175ee;
              uVar33 = 0x61;
            }
            else {
LAB_1409177b1:
              uVar33 = 0x60;
            }
          }
          else {
LAB_1409177a2:
            uVar33 = 0x7f;
          }
        }
        else {
          if (iVar16 == 7) {
            iVar16 = FUN_140914d80(param_1,piVar20[8]);
            if (iVar16 < -0x19) goto LAB_1409177a2;
            if (iVar16 < -10) goto LAB_1409177b1;
            if (iVar16 < 0xb) goto LAB_1409175ee;
          }
          else {
LAB_1409177bb:
            if (-1 < (int)uVar37) goto LAB_1409175ee;
          }
          uVar33 = 0x61;
        }
      }
      iVar16 = 0;
      plVar6 = *(longlong **)(param_1 + 0x140);
      for (plVar26 = *(longlong **)(param_1 + 0x138); plVar26 < plVar6; plVar26 = plVar26 + 1) {
        puVar7 = (undefined4 *)*plVar26;
        switch(*puVar7) {
        case 0:
          lVar22 = *(longlong *)(param_2 + 6);
          if (1 < (ulonglong)
                  ((*(longlong *)(*(longlong *)(lVar22 + 0x110) + 0x10) -
                    *(longlong *)(*(longlong *)(lVar22 + 0x110) + 8) >> 3) +
                  (*(longlong *)(lVar22 + 0x10) - *(longlong *)(lVar22 + 8) >> 2)))
          goto switchD_14091763a_caseD_3;
          break;
        case 2:
          piVar34 = *(int **)(*(longlong *)(param_2 + 6) + 0x110);
          if (*piVar34 == 4) {
            if (piVar34[8] == puVar7[1]) {
LAB_1409178a9:
              puVar7[2] = 400;
              *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
              if (iVar16 < *(int *)(*plVar26 + 0xc)) {
                iVar16 = *(int *)(*plVar26 + 0xc);
              }
            }
          }
          else if ((((*piVar34 == 5) &&
                    (lVar22 = FUN_140004650(&DAT_141d7a048,puVar7[1]), lVar22 != 0)) &&
                   (*(undefined8 **)(lVar22 + 0x130) != (undefined8 *)0x0)) &&
                  (puVar19 = (undefined8 *)**(undefined8 **)(lVar22 + 0x130),
                  puVar19 != (undefined8 *)0x0)) {
            for (psVar18 = (short *)*puVar19; psVar18 < (short *)puVar19[1]; psVar18 = psVar18 + 1)
            {
              if (*psVar18 == (short)piVar34[8]) {
                if ((int)((longlong)psVar18 - (longlong)*puVar19 >> 1) != -1) goto LAB_1409178a9;
                break;
              }
            }
          }
          break;
        case 3:
        case 4:
        case 9:
        case 10:
        case 0xf:
switchD_14091763a_caseD_3:
          puVar7[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if (iVar16 < *(int *)(*plVar26 + 0xc)) {
            iVar16 = *(int *)(*plVar26 + 0xc);
          }
        }
      }
      if ((int)uVar49 < 1) goto LAB_14091f096;
      if (iVar16 < 2) {
        uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
      }
      else {
        if (iVar16 < 3) {
          uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
          goto LAB_14091d160;
        }
        if (iVar16 < 6) {
          uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
          goto LAB_14091d160;
        }
LAB_14091d14d:
        if (10 < iVar16) goto LAB_14091d160;
LAB_14091d14f:
        uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
      }
      goto LAB_14091d160;
    }
    bVar50 = false;
    if (lVar22 == 0) goto LAB_140917d40;
    lVar21 = *(longlong *)(param_2 + 8);
    if (lVar21 != 0) {
      puVar19 = *(undefined8 **)(lVar21 + 0x230);
      if (*(undefined8 **)(lVar21 + 0x238) <= puVar19) goto LAB_140917a28;
      do {
        psVar18 = (short *)*puVar19;
        if ((*(byte *)(psVar18 + 0xb) & 1) != 0) {
          sVar13 = *psVar18;
          if (sVar13 == 9) {
            if ((*(longlong *)(lVar22 + 0x110) != 0) &&
               (*(int *)(psVar18 + 2) == *(int *)(*(longlong *)(lVar22 + 0x110) + 0x2c))) {
              bVar50 = true;
            }
          }
          else if (sVar13 == 10) {
            if ((*(longlong *)(lVar22 + 0x110) != 0) &&
               (*(int *)(psVar18 + 2) == *(int *)(*(longlong *)(lVar22 + 0x110) + 0x30))) {
              bVar50 = true;
            }
          }
          else if (((sVar13 == 0xb) && (*(longlong *)(lVar22 + 0x110) != 0)) &&
                  (*(int *)(psVar18 + 2) == *(int *)(*(longlong *)(lVar22 + 0x110) + 0x34))) {
            bVar50 = true;
          }
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 < *(undefined8 **)(lVar21 + 0x238));
      if (!bVar50) goto LAB_140917a28;
      uVar49 = uVar49 * 2;
      sVar14 = *(short *)(param_1 + 0x86);
      if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_140917a0e:
        if (0x3c < sVar14) goto LAB_140917a14;
LAB_140917a1e:
        uVar33 = 0x37;
      }
      else {
        sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 6);
        if (sVar14 < 0) goto LAB_140917a1e;
        if (sVar14 < 0x65) goto LAB_140917a0e;
LAB_140917a14:
        uVar33 = 0x47;
      }
      goto LAB_140917d76;
    }
LAB_140917a28:
    if (((lVar22 == 0) || (*(longlong *)(lVar22 + 0x110) == 0)) ||
       (iVar16 = *(int *)(*(longlong *)(lVar22 + 0x110) + 0x2c), iVar16 == -1)) {
LAB_140917d40:
      sVar14 = *(short *)(param_1 + 0xe2);
      if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_140917d60:
        if (0x3c < sVar14) {
LAB_140917d66:
          uVar33 = 0xa9;
          if (0x31 < (int)uVar49) goto LAB_140917d76;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x62);
        if (-1 < sVar14) {
          if (sVar14 < 0x65) goto LAB_140917d60;
          goto LAB_140917d66;
        }
      }
      uVar33 = 0x60;
    }
    else {
      iVar29 = (int)(DAT_141d69348 - DAT_141d69340 >> 3) + -1;
      piVar20 = piVar34;
      piVar41 = piVar34;
      if (-1 < iVar29) {
        do {
          iVar25 = iVar29 + (int)piVar41 >> 1;
          piVar20 = *(int **)(DAT_141d69340 + (longlong)iVar25 * 8);
          iVar15 = *piVar20;
          if (iVar15 == iVar16) break;
          if (iVar16 < iVar15) {
            iVar29 = iVar25 + -1;
          }
          else {
            piVar41 = (int *)(ulonglong)(iVar25 + 1);
          }
          piVar20 = piVar34;
        } while ((int)piVar41 <= iVar29);
      }
      if (piVar20 == (int *)0x0) goto LAB_140917d40;
      iVar16 = piVar20[0x34];
      if (iVar16 == 2) {
        iVar16 = FUN_140914d80(param_1,0xf);
        if (iVar16 < 0xb) {
LAB_140917b3b:
          if (iVar16 < -10) goto LAB_140917b44;
          goto LAB_140917d40;
        }
LAB_140917d39:
        uVar33 = 0x24;
      }
      else {
        if (iVar16 == 3) {
          iVar16 = FUN_140914d80(param_1,6);
          iVar29 = FUN_140914d80(param_1,7);
          iVar15 = FUN_140914d80(param_1,0x20);
          if (((10 < iVar16) || (10 < iVar29)) || (10 < iVar15)) goto LAB_140917d39;
          if ((iVar16 < -10) || (iVar29 < -10)) goto LAB_140917b44;
          if (iVar15 < -10) {
            uVar33 = 0x1a;
            goto LAB_140917d76;
          }
          goto LAB_140917d40;
        }
        if (iVar16 != 4) {
          if (iVar16 == 5) {
            iVar16 = FUN_140914d80(param_1,0x13);
            iVar29 = FUN_140914d80(param_1,0x1b);
            iVar15 = FUN_140914d80(param_1,0x11);
            if (((10 < iVar16) || (10 < iVar29)) || (10 < iVar15)) goto LAB_140917d39;
            if ((iVar16 < -10) || (iVar29 < -10)) goto LAB_140917b44;
            if (iVar15 < -10) {
              uVar33 = 0x1a;
              goto LAB_140917d76;
            }
          }
          else if (iVar16 == 6) {
            iVar29 = FUN_140914d80(param_1,9);
            iVar15 = FUN_140914d80(param_1,0);
            iVar25 = FUN_140914d80(param_1,0xe);
            iVar16 = FUN_140914d80(param_1,0x10);
            if (((10 < iVar29) || (10 < iVar15)) || ((10 < iVar25 || (10 < iVar16))))
            goto LAB_140917d39;
            if (((-0xb < iVar29) && (-0xb < iVar15)) && (-0xb < iVar25)) goto LAB_140917b3b;
LAB_140917b44:
            uVar33 = 0x1a;
            goto LAB_140917d76;
          }
          goto LAB_140917d40;
        }
        iVar16 = FUN_140914d80(param_1,0xe);
        iVar29 = FUN_140914d80(param_1,0x10);
        iVar15 = FUN_140914d80(param_1,0x1d);
        lVar21 = *(longlong *)(param_1 + 0x158);
        piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0xb0);
        if (lVar21 == 0) {
LAB_140917bfc:
          sVar13 = (short)piVar20;
        }
        else {
          uVar40 = *(ushort *)(param_1 + 0xb0) + *(short *)(lVar21 + 0x30);
          piVar20 = piVar34;
          if (((short)uVar40 < 0) || (piVar20 = (int *)(ulonglong)uVar40, (short)uVar40 < 0x65))
          goto LAB_140917bfc;
          sVar13 = 100;
        }
        sVar27 = *(short *)(param_1 + 0xbe);
        if (((lVar21 != 0) &&
            (sVar23 = *(short *)(param_1 + 0xbe) + *(short *)(lVar21 + 0x3e), sVar27 = sVar14,
            -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
          sVar27 = 100;
        }
        piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x8e);
        if (lVar21 != 0) {
          uVar40 = *(ushort *)(param_1 + 0x8e) + *(short *)(lVar21 + 0xe);
          piVar20 = piVar34;
          if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
            piVar20 = (int *)0x64;
          }
        }
        sVar14 = (short)piVar20;
        if (((sVar13 < sVar27) && (sVar14 < sVar27)) && (0x3c < sVar27)) {
          uVar33 = 0x34;
        }
        else if ((sVar14 < sVar13) && (0x3c < sVar13)) {
          uVar33 = 10;
        }
        else if (sVar14 < 0x3d) {
          if (((10 < iVar15) || (iVar16 < -10)) || (iVar29 < -10)) goto LAB_140917d39;
          if (10 < iVar16) goto LAB_140917b44;
          if (iVar29 < 0xb) goto LAB_140917d40;
          uVar33 = 0x1a;
        }
        else {
          uVar33 = 0x13;
        }
      }
    }
LAB_140917d76:
    uVar36 = 0;
    uVar28 = (int)uVar49 >> 0x1f;
    if (lVar22 == 0) {
      if ((0 < (int)uVar49) && (uVar49 = (int)(uVar49 + (uVar28 & 0x1f)) >> 5, (int)uVar49 < 1)) {
        uVar49 = 1;
      }
      goto LAB_14091f096;
    }
    iVar16 = 0;
    plVar26 = *(longlong **)(param_1 + 0x138);
    uVar31 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3;
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      uVar31 = uVar36;
    }
    uVar43 = uVar36;
    if (uVar31 != 0) {
      do {
        puVar45 = (uint *)*plVar26;
        uVar2 = *puVar45;
        if (uVar2 == 0) {
          lVar22 = *(longlong *)(param_2 + 6);
          lVar21 = *(longlong *)(lVar22 + 0x110);
          if ((lVar21 != 0) &&
             (1 < (ulonglong)
                  ((*(longlong *)(lVar21 + 0x10) - *(longlong *)(lVar21 + 8) >> 3) +
                  (*(longlong *)(lVar22 + 0x10) - *(longlong *)(lVar22 + 8) >> 2)))) {
            puVar45[2] = 400;
            *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
            if ((int)uVar36 < *(int *)(*plVar26 + 0xc)) {
              uVar36 = (ulonglong)*(uint *)(*plVar26 + 0xc);
            }
          }
        }
        else if (uVar2 == 9) {
          if ((*(longlong *)(*(longlong *)(param_2 + 6) + 0x110) != 0) &&
             (*(int *)(*(longlong *)(*(longlong *)(param_2 + 6) + 0x110) + 0x2c) != -1))
          goto LAB_140917de1;
        }
        else if ((uVar2 < 0x1e) && ((0x20011000U >> (uVar2 & 0x1f) & 1) != 0)) {
LAB_140917de1:
          puVar45[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)uVar36 < (int)*(uint *)(*plVar26 + 0xc)) {
            uVar36 = (ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        iVar16 = (int)uVar36;
        plVar26 = plVar26 + 1;
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar31);
    }
    if ((int)uVar49 < 1) goto LAB_14091f096;
    if (1 < iVar16) {
      if (iVar16 < 3) {
        uVar49 = (int)((uVar28 & 0xf) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_1409167fa;
      }
      if (iVar16 < 6) {
        uVar49 = (int)((uVar28 & 7) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_1409167fa;
      }
      if (iVar16 < 0xb) {
        uVar49 = (int)((uVar28 & 3) + uVar49) >> 2;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_1409167fa;
      }
      goto LAB_14091d160;
    }
    uVar49 = (int)((uVar28 & 0x1f) + uVar49) >> 5;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409167fa;
  case 0x7d:
    sVar14 = FUN_14000dcd0(param_1,0x1e);
    if (sVar14 < 0x3d) {
      sVar13 = FUN_14000dcd0();
      uVar33 = 0x89;
      if (sVar13 < sVar14) {
        uVar33 = 0x60;
      }
    }
    else {
      uVar33 = 0xa1;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 6) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x7e:
    sVar14 = FUN_14000dcd0(param_1,0x1e);
    if (sVar14 < 0x3d) {
      sVar13 = FUN_14000dcd0();
      uVar33 = 0x89;
      if (sVar13 < sVar14) {
        uVar33 = 0x60;
      }
    }
    else {
      uVar33 = 0xa1;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 6) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x7f:
    sVar14 = FUN_14000dcd0(param_1,0x1e);
    if (sVar14 < 0x3d) {
      sVar13 = FUN_14000dcd0();
      uVar33 = 0x89;
      if (sVar13 < sVar14) {
        uVar33 = 0x60;
      }
    }
    else {
      uVar33 = 0xa1;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 6) || (iVar16 - 0x1cU < 2)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x80:
    sVar14 = FUN_14000dcd0(param_1,0x1e);
    if (sVar14 < 0x3d) {
      sVar13 = FUN_14000dcd0();
      uVar33 = 0x89;
      if (sVar13 < sVar14) {
        uVar33 = 0x60;
      }
    }
    else {
      uVar33 = 0xa1;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 6) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x81:
    sVar14 = FUN_14000dcd0(param_1,0x1e);
    sVar13 = FUN_14000dcd0();
    sVar27 = FUN_14000dcd0();
    if (((sVar27 < 0x3d) && (sVar27 = FUN_14000dcd0(), sVar27 < 0x3d)) || (param_2[2] < 1000)) {
      uVar33 = 0x89;
      if (sVar13 < sVar14) {
        uVar33 = 0x60;
      }
    }
    else {
      uVar33 = 8;
      if (0x3c < sVar14) {
        uVar33 = 0xa1;
      }
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 6) || (iVar16 - 0x1cU < 2)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x82:
    sVar14 = FUN_14000dcd0(param_1,0x1a);
    uVar33 = 0x89;
    if (0x3c < sVar14) {
      uVar33 = 0x7d;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 6) || (iVar16 == 0x1b)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x83:
    sVar14 = FUN_14000dcd0(param_1,0x1e);
    sVar13 = FUN_14000dcd0();
    uVar33 = 0x89;
    if (sVar13 < sVar14) {
      uVar33 = 0x60;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 0xb) || (iVar16 - 0x1cU < 2)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_14091dc86;
  case 0x84:
    sVar14 = FUN_14000dcd0(param_1,0x1a);
    uVar33 = 0x89;
    if (0x3c < sVar14) {
      uVar33 = 0x7d;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        uVar28 = *(uint *)*plVar26;
        if ((uVar28 < 0x1d) && ((0x10000810U >> (uVar28 & 0x1f) & 1) != 0)) {
          ((uint *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
LAB_14091dc86:
    if (0 < (int)uVar49) {
      if ((int)uVar37 < 2) {
        uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
      }
      else if ((int)uVar37 < 3) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
      }
      else if ((int)uVar37 < 6) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
      }
      else if ((int)uVar37 < 0xb) {
        uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
      }
LAB_1409167f4:
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
LAB_1409167fa:
      if (bVar52 != bVar50) {
        uVar49 = 1;
      }
    }
    goto LAB_14091f096;
  case 0x85:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x86);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x86) + *(short *)(lVar22 + 6), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0xac);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0xac) + *(short *)(lVar22 + 0x2c), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    if ((sVar13 < sVar27) && (0x3c < sVar27)) {
      uVar33 = 0x4c;
    }
    else {
      uVar33 = 0x89;
      if (0x3c < sVar13) {
        uVar33 = 0x53;
      }
    }
    break;
  case 0x86:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xb4);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x86);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0x86) + *(short *)(lVar22 + 6);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    sVar27 = *(short *)(param_1 + 0xac);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0xac) + *(short *)(lVar22 + 0x2c), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    sVar14 = (short)piVar20;
    if (((sVar27 < sVar13) && (sVar14 < sVar13)) && (0x3c < sVar13)) {
      uVar33 = 0x7d;
    }
    else if ((sVar14 < sVar27) && (0x3c < sVar27)) {
      uVar33 = 0x4c;
    }
    else {
      uVar33 = 0x89;
      if (0x3c < sVar14) {
        uVar33 = 0x67;
      }
    }
    break;
  case 0x87:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xb4);
    if (lVar22 != 0) {
      sVar13 = sVar13 + *(short *)(lVar22 + 0x34);
      if (sVar13 < 0) {
        sVar13 = 0;
      }
      else if (100 < sVar13) {
        sVar13 = 100;
      }
    }
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x8a);
    if (lVar22 == 0) {
LAB_140919e0b:
      sVar27 = (short)piVar20;
    }
    else {
      uVar40 = *(ushort *)(param_1 + 0x8a) + *(short *)(lVar22 + 10);
      piVar20 = piVar34;
      if (((short)uVar40 < 0) || (piVar20 = (int *)(ulonglong)uVar40, (short)uVar40 < 0x65))
      goto LAB_140919e0b;
      sVar27 = 100;
    }
    sVar23 = *(short *)(param_1 + 0x82);
    if (((lVar22 != 0) &&
        (sVar38 = *(short *)(param_1 + 0x82) + *(short *)(lVar22 + 2), sVar23 = sVar14, -1 < sVar38)
        ) && (sVar23 = sVar38, 100 < sVar38)) {
      sVar23 = 100;
    }
    sVar14 = *(short *)(param_1 + 0x90);
    if (lVar22 != 0) {
      sVar14 = sVar14 + *(short *)(lVar22 + 0x10);
      if (sVar14 < 0) {
        sVar14 = 0;
      }
      else if (100 < sVar14) {
        sVar14 = 100;
      }
    }
    sVar38 = *(short *)(param_1 + 0x88);
    if (lVar22 != 0) {
      sVar38 = sVar38 + *(short *)(lVar22 + 8);
      if (sVar38 < 0) {
        sVar38 = 0;
      }
      else if (100 < sVar38) {
        sVar38 = 100;
      }
    }
    sVar24 = *(short *)(param_1 + 0xba);
    if (lVar22 != 0) {
      sVar24 = sVar24 + *(short *)(lVar22 + 0x3a);
      if (sVar24 < 0) {
        sVar24 = 0;
      }
      else if (100 < sVar24) {
        sVar24 = 100;
      }
    }
    iVar16 = FUN_140914d80(param_1,0);
    if (sVar13 < 0x3d) {
      if ((sVar27 < sVar14) && (0x3c < sVar14)) {
        uVar33 = 0x2c;
      }
      else if (sVar27 < 0x3d) {
        if ((sVar13 < 0x28) || (sVar27 < 0x28)) {
          if ((0x27 < sVar38) && (0x27 < sVar23)) goto LAB_140918808;
          if ((sVar38 < sVar23) && (0x27 < sVar23)) {
            uVar33 = 0x85;
          }
          else if (sVar38 < 0x28) {
            if ((sVar27 < sVar14) && (0x27 < sVar14)) {
              uVar33 = 0x3c;
            }
            else if (sVar27 < 0x28) {
              if (iVar16 < 0xb) {
                if (iVar16 < -10) {
                  sVar14 = *(short *)(param_1 + 0xd6);
                  if (lVar22 == 0) {
LAB_14091a089:
                    if (0x27 < sVar14) {
LAB_14091a0a0:
                      uVar33 = 0xe;
                      break;
                    }
                  }
                  else {
                    sVar14 = sVar14 + *(short *)(lVar22 + 0x56);
                    if (-1 < sVar14) {
                      if (sVar14 < 0x65) goto LAB_14091a089;
                      goto LAB_14091a0a0;
                    }
                  }
                  uVar33 = 7;
                }
                else {
                  uVar33 = 0x2a;
                }
              }
              else if (sVar24 < 0x1a) {
                uVar33 = 0;
                if (10 < sVar24) {
                  uVar33 = 0x28;
                }
              }
              else {
                uVar33 = 0x80;
              }
            }
            else {
              uVar33 = 0x45;
            }
          }
          else {
            uVar33 = 0x4b;
          }
        }
        else {
          uVar33 = 0x87;
        }
      }
      else {
        uVar33 = 0xb;
      }
    }
    else if (sVar27 < 0x3d) {
      sVar14 = *(short *)(param_1 + 0xbe);
      if (lVar22 == 0) {
LAB_140919f00:
        if (sVar14 < 0x3d) {
LAB_140919f17:
          uVar33 = 0x5f;
          if (0x3c < sVar23) {
            uVar33 = 0x1e;
          }
          break;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x3e);
        if (sVar14 < 0) goto LAB_140919f17;
        if (sVar14 < 0x65) goto LAB_140919f00;
      }
      uVar33 = 0x5a;
    }
    else {
      uVar33 = 0x76;
    }
    break;
  case 0x88:
    uVar33 = 0x37;
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        uVar28 = *(uint *)*plVar26;
        if ((uVar28 < 0x1d) && ((0x10011018U >> (uVar28 & 0x1f) & 1) != 0)) {
          ((uint *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    goto LAB_140916878;
  case 0x89:
    uVar33 = 0x37;
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        uVar28 = *(uint *)*plVar26;
        if ((uVar28 < 0x11) && ((0x11018U >> (uVar28 & 0x1f) & 1) != 0)) {
          ((uint *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
LAB_140916878:
    if ((int)uVar49 < 1) break;
    if ((int)uVar37 < 2) {
LAB_140916886:
      uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
    }
    else if ((int)uVar37 < 3) {
      uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
    }
    else if ((int)uVar37 < 6) {
      uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
    }
    else if ((int)uVar37 < 0xb) {
      uVar49 = (int)uVar49 / 2;
    }
LAB_1409168d6:
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409168ed;
  case 0x8a:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x9c);
    if (lVar22 == 0) {
LAB_14091c3c4:
      if (0x3c < sVar13) goto LAB_14091c534;
LAB_14091c3ce:
      sVar13 = *(short *)(param_1 + 0x9e);
      if (lVar22 != 0) {
        sVar13 = sVar13 + *(short *)(lVar22 + 0x1e);
        if (-1 < sVar13) {
          if (sVar13 < 0x65) goto LAB_14091c3ea;
          goto LAB_14091c3f4;
        }
        goto LAB_14091c534;
      }
LAB_14091c3ea:
      if (sVar13 < 0x28) goto LAB_14091c534;
LAB_14091c3f4:
      iVar16 = FUN_140914d80(param_1,0x12);
      if (iVar16 < -10) goto LAB_14091c534;
      sVar13 = *(short *)(param_1 + 0xb4);
      if (((lVar22 != 0) &&
          (sVar27 = *(short *)(param_1 + 0xb4) + *(short *)(lVar22 + 0x34), sVar13 = sVar14,
          -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
        sVar13 = 100;
      }
      sVar27 = *(short *)(param_1 + 0x8a);
      if (((lVar22 != 0) &&
          (sVar23 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar27 = sVar14,
          -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
        sVar27 = 100;
      }
      sVar23 = *(short *)(param_1 + 0x82);
      if (((lVar22 != 0) &&
          (sVar38 = *(short *)(param_1 + 0x82) + *(short *)(lVar22 + 2), sVar23 = sVar14,
          -1 < sVar38)) && (sVar23 = sVar38, 100 < sVar38)) {
        sVar23 = 100;
      }
      sVar38 = *(short *)(param_1 + 0x90);
      if (((lVar22 != 0) &&
          (sVar24 = *(short *)(param_1 + 0x90) + *(short *)(lVar22 + 0x10), sVar38 = sVar14,
          -1 < sVar24)) && (sVar38 = sVar24, 100 < sVar24)) {
        sVar38 = 100;
      }
      sVar24 = *(short *)(param_1 + 0x88);
      if (((lVar22 != 0) &&
          (sVar12 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar24 = sVar14,
          -1 < sVar12)) && (sVar24 = sVar12, 100 < sVar12)) {
        sVar24 = 100;
      }
      if (sVar13 < 0x3d) {
        if (sVar27 < 0x3d) {
          if ((sVar24 < 0x28) || (sVar23 < 0x28)) {
            if ((sVar24 < sVar23) && (0x27 < sVar23)) {
              uVar33 = 0x85;
            }
            else if (sVar24 < 0x28) {
              if ((sVar27 < sVar38) && (0x27 < sVar38)) {
                uVar33 = 0x3c;
              }
              else {
                uVar33 = 0xe;
                if (0x27 < sVar27) {
                  uVar33 = 0x45;
                }
              }
            }
            else {
              uVar33 = 0x4b;
            }
          }
          else {
            uVar33 = 0x18;
          }
        }
        else {
          uVar33 = 0xb;
        }
      }
      else {
        uVar33 = 0x5f;
        if (0x3c < sVar23) {
          uVar33 = 0x1e;
        }
      }
    }
    else {
      sVar13 = sVar13 + *(short *)(lVar22 + 0x1c);
      if (sVar13 < 0) goto LAB_14091c3ce;
      if (sVar13 < 0x65) goto LAB_14091c3c4;
LAB_14091c534:
      sVar14 = *(short *)(param_1 + 0xdc);
      if (lVar22 == 0) {
LAB_14091c54c:
        if (sVar14 < 0x3d) {
LAB_14091c559:
          uVar33 = 0x89;
          goto LAB_14091c55e;
        }
      }
      else {
        sVar14 = sVar14 + *(short *)(lVar22 + 0x5c);
        if (sVar14 < 0) goto LAB_14091c559;
        if (sVar14 < 0x65) goto LAB_14091c54c;
      }
      uVar33 = 0x3e;
    }
LAB_14091c55e:
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 - 0x17U < 2) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    if (0 < (int)uVar49) {
      if ((int)uVar37 < 2) {
        uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if ((int)uVar37 < 3) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if ((int)uVar37 < 6) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else {
        if ((int)uVar37 < 0xb) {
          uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
        }
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      goto LAB_14091756b;
    }
    goto LAB_14091f096;
  case 0x8b:
    iVar16 = FUN_140914d80(param_1,0x15);
    if (iVar16 < 0xb) {
      iVar16 = FUN_140914d80(param_1,0x19);
      uVar33 = 0x89;
      if (10 < iVar16) goto LAB_140918a66;
    }
    else {
LAB_140918a66:
      uVar33 = 0x7c;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if (((iVar16 - 3U & 0xfffffffd) == 0) || (iVar16 - 0xeU < 2)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
LAB_140918adf:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    if ((int)uVar37 < 2) {
LAB_140918aed:
      uVar49 = (int)(((int)uVar49 >> 0x1f & 0x1fU) + uVar49) >> 5;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    else if ((int)uVar37 < 3) {
      uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    else if ((int)uVar37 < 6) {
      uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    else {
      iVar16 = uVar37 - 10;
      bVar50 = uVar37 == 10;
LAB_140918b42:
      if (bVar50 || SBORROW4(uVar37,10) != iVar16 < 0) {
        uVar49 = (int)(((int)uVar49 >> 0x1f & 3U) + uVar49) >> 2;
      }
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    goto LAB_14091756b;
  case 0x8c:
    uVar33 = 0x89;
    bVar50 = false;
    switch(param_2[1]) {
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
      bVar50 = true;
    }
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (plVar26 = *(longlong **)(param_1 + 0x138); uVar37 = (uint)piVar34, plVar26 < plVar6;
        plVar26 = plVar26 + 1) {
      piVar20 = (int *)*plVar26;
      iVar16 = *piVar20;
      if (iVar16 == 6) {
LAB_140916cf7:
        piVar20[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if ((int)uVar37 < *(int *)(*plVar26 + 0xc)) {
          piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
        }
      }
      else if (iVar16 == 0xe) {
        if (bVar50) {
          piVar20[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)uVar37 < (int)*(uint *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
      }
      else if (iVar16 == 0xf) goto LAB_140916cf7;
    }
    if ((int)uVar49 < 1) break;
    if (1 < (int)uVar37) {
      if (2 < (int)uVar37) {
        if ((int)uVar37 < 6) {
          uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
          goto LAB_1409168d6;
        }
        iVar16 = uVar37 - 10;
        bVar50 = uVar37 == 10;
        goto LAB_140916d8c;
      }
      goto LAB_140916886;
    }
    uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
    goto LAB_1409168d6;
  case 0x8d:
    sVar14 = *(short *)(param_1 + 0xae);
    if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_14091af65:
      if (0x27 < sVar14) goto LAB_14091af6b;
LAB_14091af8f:
      uVar33 = 9;
    }
    else {
      sVar14 = sVar14 + *(short *)(*(longlong *)(param_1 + 0x158) + 0x2e);
      if (sVar14 < 0) goto LAB_14091af8f;
      if (sVar14 < 0x65) goto LAB_14091af65;
      sVar14 = 100;
LAB_14091af6b:
      if (param_2[2] < 4) {
        uVar33 = 0x1f;
      }
      else {
        uVar33 = 0x7c;
        if (0x3c < sVar14) {
          uVar33 = 0x24;
        }
      }
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        if (*(int *)*plVar26 == 0x19) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
    if (0 < (int)uVar49) {
      if ((int)uVar37 < 2) {
        uVar49 = (int)((uVar8 & 0x1f) + uVar49) >> 5;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_14091756b;
      }
      if ((int)uVar37 < 3) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_14091756b;
      }
      if ((int)uVar37 < 6) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
        goto LAB_14091756b;
      }
      iVar16 = uVar37 - 10;
      bVar50 = iVar16 == 0;
LAB_140918ced:
      if (bVar50 || SBORROW4(uVar37,10) != iVar16 < 0) {
LAB_140918cef:
        uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
      }
      goto LAB_140918cfe;
    }
    goto LAB_14091f096;
  case 0x8e:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0xbc);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0xbc) + *(short *)(lVar22 + 0x3c), sVar13 = sVar14,
        -1 < sVar27)) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x86);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x86) + *(short *)(lVar22 + 6), sVar27 = sVar14, -1 < sVar23)
        ) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    if (sVar13 < 0x3d) {
      uVar33 = 0x89;
      if (sVar27 < sVar13) {
        uVar33 = 0x60;
      }
    }
    else {
      uVar33 = 0xa1;
    }
    plVar26 = *(longlong **)(param_1 + 0x138);
    piVar20 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3);
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      piVar20 = piVar34;
    }
    piVar41 = piVar34;
    if (piVar20 != (int *)0x0) {
      do {
        iVar16 = *(int *)*plVar26;
        if ((iVar16 == 6) || (iVar16 == 0x1c)) {
          ((int *)*plVar26)[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)piVar34 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        uVar37 = (uint)piVar34;
        plVar26 = plVar26 + 1;
        piVar41 = (int *)((longlong)piVar41 + 1);
      } while (piVar41 < piVar20);
    }
LAB_140916796:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    if ((int)uVar37 < 2) {
      uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
    }
    else if ((int)uVar37 < 3) {
      uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
    }
    else if ((int)uVar37 < 6) {
      uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
    }
    else if ((int)uVar37 < 0xb) {
      uVar49 = (int)uVar49 / 2;
    }
    goto LAB_1409167f4;
  case 0x8f:
    uVar33 = 0x9c;
    break;
  case 0x90:
switchD_1409166c5_caseD_90:
    uVar33 = 0x4f;
    break;
  case 0x91:
    uVar33 = 0x74;
    break;
  case 0x92:
    bVar52 = false;
    bVar50 = false;
    bVar9 = false;
    bVar51 = false;
    lVar22 = *(longlong *)(param_2 + 10);
    if (lVar22 != 0) {
      bVar50 = bVar52;
      bVar51 = bVar9;
      if (((*(longlong *)(lVar22 + 0x130) == 0) ||
          (lVar21 = *(longlong *)(*(longlong *)(lVar22 + 0x130) + 0x60), lVar21 == 0)) ||
         ((lVar21 = FUN_1400511c0(param_2[1],lVar21 + 0x60), lVar21 == 0 ||
          (*(int *)(lVar21 + 0x10) != -1)))) {
        lVar21 = FUN_1400511c0(*(undefined4 *)(lVar22 + 0xc0),&DAT_141d863f8);
        if (((lVar21 == 0) || (lVar21 = FUN_1400511c0(param_2[1],lVar21 + 8), lVar21 == 0)) ||
           (*(int *)(lVar21 + 0x10) != -1)) {
          plVar6 = *(longlong **)(lVar22 + 0xf0);
          for (plVar26 = *(longlong **)(lVar22 + 0xe8); plVar26 < plVar6; plVar26 = plVar26 + 1) {
            sVar14 = (*(code *)**(undefined8 **)*plVar26)();
            if (((sVar14 == 10) || (sVar14 = (*(code *)**(undefined8 **)*plVar26)(), sVar14 == 0xd))
               && ((lVar22 = FUN_1400199b0(&DAT_141c53718,*(undefined4 *)(*plVar26 + 8)),
                   lVar22 != 0 &&
                   ((lVar22 = FUN_1400511c0(param_2[1],lVar22 + 0x1308), lVar22 != 0 &&
                    (*(int *)(lVar22 + 0x14) == -1)))))) {
              bVar51 = true;
              piVar34 = (int *)0x0;
              break;
            }
          }
        }
        else {
          bVar50 = true;
        }
      }
      else {
        piVar34 = (int *)0x1;
      }
      uVar35 = (uint)piVar34;
    }
    sVar14 = FUN_14000dcd0(param_1,0x1a);
    if (sVar14 < 0x3d) {
      if ((!bVar50) && (!bVar51)) goto LAB_14091ce4c;
LAB_14091ce56:
      uVar33 = 0x24;
    }
    else if ((bVar50) || (bVar51)) {
      uVar33 = 0x7d;
    }
    else {
LAB_14091ce4c:
      uVar33 = 0x7c;
      if ((char)uVar35 != '\0') goto LAB_14091ce56;
    }
    uVar31 = 0;
    plVar26 = *(longlong **)(param_1 + 0x138);
    iVar16 = 0;
    uVar36 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x140) + (7 - (longlong)plVar26)) >> 3;
    if (*(longlong **)(param_1 + 0x140) < plVar26) {
      uVar36 = uVar31;
    }
    uVar43 = uVar31;
    if (uVar36 != 0) {
      do {
        piVar34 = (int *)*plVar26;
        if (*piVar34 == 10) {
          if ((bVar51) || (bVar50)) {
            piVar34[2] = 400;
            *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
            if ((int)uVar31 < *(int *)(*plVar26 + 0xc)) {
              uVar31 = (ulonglong)*(uint *)(*plVar26 + 0xc);
            }
          }
        }
        else if (*piVar34 == 0x14) {
          piVar34[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if ((int)uVar31 < (int)*(uint *)(*plVar26 + 0xc)) {
            uVar31 = (ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
        iVar16 = (int)uVar31;
        plVar26 = plVar26 + 1;
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar36);
    }
    if (0 < (int)uVar49) {
      if (iVar16 < 2) {
        uVar49 = (int)((uVar8 & 0xf) + uVar49) >> 4;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if (iVar16 < 3) {
        uVar49 = (int)((uVar8 & 7) + uVar49) >> 3;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else if (iVar16 < 6) {
        uVar49 = (int)((uVar8 & 3) + uVar49) >> 2;
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      else {
        if (iVar16 < 0xb) {
          uVar49 = (int)uVar49 / 2;
        }
        bVar52 = SBORROW4(uVar49,1);
        bVar50 = (int)(uVar49 - 1) < 0;
      }
      goto LAB_1409167fa;
    }
LAB_14091f096:
    if (uVar33 == 0xffffffff) {
switchD_1409166c5_caseD_9b:
      *puVar17 = 0xffffffff;
      puVar17[2] = 0;
      return;
    }
    break;
  case 0x93:
    sVar14 = FUN_14000dcd0(param_1,0x26);
    if (sVar14 < 0x19) {
      uVar33 = 0x11;
    }
    else {
      sVar13 = FUN_14000dcd0();
      sVar27 = FUN_14000dcd0();
      if (sVar13 < 0x4c) {
        if (sVar13 < 0x3d) {
          sVar23 = FUN_14000dcd0();
          if (sVar23 < 0x3d) {
            if (sVar27 < 0x3d) {
              if (sVar13 < 0x28) {
                uVar33 = uVar48;
                if ((sVar14 < 0x28) && (uVar33 = uVar32, 0x27 < sVar27)) {
                  uVar33 = 0x18;
                }
              }
              else {
                uVar33 = 0x45;
              }
            }
            else {
              uVar33 = 0x29;
            }
          }
          else {
            uVar33 = 0x2c;
            if (0x27 < sVar14) {
              uVar33 = 0x8e;
            }
          }
        }
        else {
          uVar33 = 0xb;
        }
      }
      else {
        uVar33 = 0x76;
      }
    }
LAB_14091c8be:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar49 = (int)(uVar49 + (uVar8 & 3)) >> 2;
    bVar52 = SBORROW4(uVar49,1);
    bVar50 = (int)(uVar49 - 1) < 0;
    goto LAB_1409167fa;
  case 0x94:
    lVar22 = *(longlong *)(param_1 + 0x158);
    sVar13 = *(short *)(param_1 + 0x8a);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x8a) + *(short *)(lVar22 + 10), sVar13 = sVar14, -1 < sVar27
        )) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0x8c);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    uVar33 = 0x77;
    if (sVar27 < sVar13) {
      uVar33 = 0x41;
    }
    break;
  case 0x95:
    iVar16 = FUN_140914d80(param_1,0);
    uVar33 = uVar35;
    if (iVar16 < 0x1a) {
      sVar14 = FUN_14000dcd0(param_1,0x1a);
      if (sVar14 < 0x3d) {
        sVar14 = FUN_14000dcd0();
        uVar33 = 0x2b;
        if (0x3c < sVar14) {
          uVar33 = 0x54;
        }
      }
      else {
        uVar33 = 0x87;
      }
    }
    break;
  case 0x96:
    uVar33 = 0x89;
    break;
  case 0x97:
    lVar22 = *(longlong *)(param_1 + 0x158);
    piVar20 = (int *)(ulonglong)*(ushort *)(param_1 + 0x8c);
    if (lVar22 != 0) {
      uVar40 = *(ushort *)(param_1 + 0x8c) + *(short *)(lVar22 + 0xc);
      piVar20 = piVar34;
      if ((-1 < (short)uVar40) && (piVar20 = (int *)(ulonglong)uVar40, 100 < (short)uVar40)) {
        piVar20 = (int *)0x64;
      }
    }
    sVar13 = *(short *)(param_1 + 0x88);
    if (((lVar22 != 0) &&
        (sVar27 = *(short *)(param_1 + 0x88) + *(short *)(lVar22 + 8), sVar13 = sVar14, -1 < sVar27)
        ) && (sVar13 = sVar27, 100 < sVar27)) {
      sVar13 = 100;
    }
    sVar27 = *(short *)(param_1 + 0xba);
    if (((lVar22 != 0) &&
        (sVar23 = *(short *)(param_1 + 0xba) + *(short *)(lVar22 + 0x3a), sVar27 = sVar14,
        -1 < sVar23)) && (sVar27 = sVar23, 100 < sVar23)) {
      sVar27 = 100;
    }
    sVar23 = *(short *)(param_1 + 0xa8);
    if (((lVar22 != 0) &&
        (sVar38 = *(short *)(param_1 + 0xa8) + *(short *)(lVar22 + 0x28), sVar23 = sVar14,
        -1 < sVar38)) && (sVar23 = sVar38, 100 < sVar38)) {
      sVar23 = 100;
    }
    sVar38 = *(short *)(param_1 + 0xd6);
    if (((lVar22 != 0) &&
        (sVar24 = *(short *)(param_1 + 0xd6) + *(short *)(lVar22 + 0x56), sVar38 = sVar14,
        -1 < sVar24)) && (sVar38 = sVar24, 100 < sVar24)) {
      sVar38 = 100;
    }
    if ((sVar13 < (short)(100 - sVar27)) && (0x3c < (short)(100 - sVar27))) {
      uVar33 = 0x57;
    }
    else if (sVar13 < 0x3d) {
      if (sVar23 < 0x3d) {
        if (sVar38 < 0x3d) {
          if ((short)piVar20 < 0x3d) {
            sVar14 = *(short *)(param_1 + 0xb4);
            if (lVar22 == 0) {
LAB_140916bc4:
              uVar33 = uVar35;
              if (0x3c < sVar14) {
LAB_140916bce:
                uVar33 = 0x85;
              }
            }
            else {
              sVar14 = sVar14 + *(short *)(lVar22 + 0x34);
              uVar33 = uVar35;
              if (-1 < sVar14) {
                if (sVar14 < 0x65) goto LAB_140916bc4;
                goto LAB_140916bce;
              }
            }
          }
          else {
            uVar33 = 0x10;
          }
        }
        else {
          uVar33 = 0x6a;
          if (0x3c < (short)piVar20) {
            uVar33 = 0x62;
          }
        }
      }
      else {
        uVar33 = 0x8b;
      }
    }
    else {
      uVar33 = 0x70;
    }
    break;
  case 0x98:
    uVar33 = 0x1a;
    sVar14 = FUN_14000dcd0(param_1,0x30);
    if (sVar14 < 0x4c) {
      if (sVar14 < 0x3d) {
        if (0x27 < sVar14) {
          uVar33 = 0x60;
        }
      }
      else {
        uVar33 = 0x7c;
      }
    }
    else {
      uVar33 = 0x3e;
    }
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (plVar26 = *(longlong **)(param_1 + 0x138); iVar16 = (int)piVar34, plVar26 < plVar6;
        plVar26 = plVar26 + 1) {
      puVar7 = (undefined4 *)*plVar26;
      switch(*puVar7) {
      case 0:
      case 0x1c:
switchD_14091e872_caseD_0:
        puVar7[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if (iVar16 < (int)*(uint *)(*plVar26 + 0xc)) {
          piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
        }
        break;
      case 7:
        iVar29 = param_2[1];
        if ((0 < iVar29) && ((iVar29 < 4 || (iVar29 - 0xbU < 2)))) goto switchD_14091e872_caseD_0;
        break;
      case 8:
        if (((uint)param_2[1] < 0x34) &&
           ((0x8000000042000U >> ((longlong)param_2[1] & 0x3fU) & 1) != 0))
        goto switchD_14091e872_caseD_0;
        break;
      case 0x11:
        if ((param_2[1] - 1U & 0xfffffff7) == 0) goto switchD_14091e872_caseD_0;
        break;
      case 0x18:
        if (param_2[1] == 0xe) {
          puVar7[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if (iVar16 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
      }
    }
    goto LAB_14091e907;
  case 0x99:
    if (puVar17[3] == 0x112) {
LAB_14091e9d9:
      sVar14 = FUN_14000dcd0();
      uVar33 = 0x89;
      if (0x3c < sVar14) {
        uVar33 = 0x81;
      }
    }
    else {
      sVar14 = FUN_14000dcd0(param_1,0x1d);
      if (sVar14 < 0x4c) {
        if (sVar14 < 0x3c) {
          sVar14 = FUN_14000dcd0();
          if (sVar14 < 0x3c) goto LAB_14091e9d9;
          uVar33 = 0x7d;
        }
        else {
          uVar33 = 0x75;
        }
      }
      else {
        uVar33 = 0x56;
      }
    }
    iVar16 = 0;
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (plVar26 = *(longlong **)(param_1 + 0x138); plVar26 < plVar6; plVar26 = plVar26 + 1) {
      puVar7 = (undefined4 *)*plVar26;
      switch(*puVar7) {
      case 0:
      case 0xb:
switchD_14091ea43_caseD_0:
        puVar7[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if (iVar16 < *(int *)(*plVar26 + 0xc)) {
          iVar16 = *(int *)(*plVar26 + 0xc);
        }
        break;
      case 7:
        iVar29 = param_2[1];
        if ((0 < iVar29) && ((iVar29 < 4 || (iVar29 - 0xbU < 2)))) goto switchD_14091ea43_caseD_0;
        break;
      case 8:
        if (((uint)param_2[1] < 0x34) &&
           ((0x8000000042000U >> ((longlong)param_2[1] & 0x3fU) & 1) != 0))
        goto switchD_14091ea43_caseD_0;
        break;
      case 0x11:
        if ((param_2[1] - 1U & 0xfffffff7) == 0) goto switchD_14091ea43_caseD_0;
        break;
      case 0x18:
        if (param_2[1] == 0xe) {
          puVar7[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if (iVar16 < *(int *)(*plVar26 + 0xc)) {
            iVar16 = *(int *)(*plVar26 + 0xc);
          }
        }
      }
    }
    goto LAB_14091e907;
  case 0x9a:
    sVar14 = FUN_14000dcd0(param_1,0x26);
    plVar26 = *(longlong **)(param_1 + 0x138);
    uVar33 = 0x35;
    if (sVar14 < 10) {
      uVar33 = 0x85;
    }
    plVar6 = *(longlong **)(param_1 + 0x140);
    for (; iVar16 = (int)piVar34, plVar26 < plVar6; plVar26 = plVar26 + 1) {
      puVar7 = (undefined4 *)*plVar26;
      switch(*puVar7) {
      case 0:
      case 0x1b:
switchD_14091eb52_caseD_0:
        puVar7[2] = 400;
        *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
        if (iVar16 < (int)*(uint *)(*plVar26 + 0xc)) {
          piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
        }
        break;
      case 7:
        iVar29 = param_2[1];
        if ((0 < iVar29) && ((iVar29 < 4 || (iVar29 - 0xbU < 2)))) goto switchD_14091eb52_caseD_0;
        break;
      case 8:
        if (((uint)param_2[1] < 0x34) &&
           ((0x8000000042000U >> ((longlong)param_2[1] & 0x3fU) & 1) != 0))
        goto switchD_14091eb52_caseD_0;
        break;
      case 0x11:
        if ((param_2[1] - 1U & 0xfffffff7) == 0) goto switchD_14091eb52_caseD_0;
        break;
      case 0x18:
        if (param_2[1] == 0xe) {
          puVar7[2] = 400;
          *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffe;
          if (iVar16 < *(int *)(*plVar26 + 0xc)) {
            piVar34 = (int *)(ulonglong)*(uint *)(*plVar26 + 0xc);
          }
        }
      }
    }
LAB_14091e907:
    if ((int)uVar49 < 1) goto LAB_14091f096;
    uVar28 = (int)uVar49 >> 0x1f;
    if (iVar16 < 2) {
      uVar49 = (int)((uVar28 & 0x1f) + uVar49) >> 5;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    else if (iVar16 < 3) {
      uVar49 = (int)((uVar28 & 0xf) + uVar49) >> 4;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    else if (iVar16 < 6) {
      uVar49 = (int)((uVar28 & 7) + uVar49) >> 3;
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    else {
      if (iVar16 < 0xb) {
        uVar49 = (int)((uVar28 & 3) + uVar49) >> 2;
      }
      bVar52 = SBORROW4(uVar49,1);
      bVar50 = (int)(uVar49 - 1) < 0;
    }
    goto LAB_1409167fa;
  case 0x9b:
    goto switchD_1409166c5_caseD_9b;
  }
  uVar47 = 5;
  pIVar46 = &switchD_140935618::caseD_26;
  cVar10 = '\0';
  *puVar17 = uVar33;
  uVar39 = 0x2a;
  switch(uVar33) {
  case 1:
  case 2:
  case 0x42:
  case 0x6c:
    uVar47 = 0;
    break;
  case 3:
  case 0x10:
  case 0x2c:
  case 0x2e:
  case 0x3c:
  case 0x73:
  case 0x77:
  case 0x8e:
  case 0x90:
  case 0x9d:
  case 0xa2:
    uVar47 = 6;
    break;
  case 4:
  case 0xb:
  case 0x18:
  case 0x41:
  case 0x45:
  case 0x50:
  case 0x61:
  case 0x76:
  case 0x7e:
  case 0xa3:
    break;
  default:
    puVar17[2] = uVar49;
    goto LAB_14091f2a2;
  case 6:
  case 0x44:
  case 0x58:
    uVar39 = 0x12;
    goto switchD_14091f11f_caseD_95;
  case 10:
    uVar47 = 0x18;
    break;
  case 0xc:
  case 0x16:
  case 0x22:
  case 0x23:
  case 0x27:
  case 0x28:
  case 0x36:
  case 0x4a:
  case 0x4b:
  case 0x4e:
  case 0x51:
  case 0x70:
  case 0x80:
  case 0x88:
  case 0x9e:
    uVar47 = 4;
    break;
  case 0x13:
  case 0x6e:
  case 0x79:
    uVar47 = 7;
    break;
  case 0x19:
  case 0x1f:
  case 0x24:
  case 0x33:
  case 0x37:
  case 0x3b:
  case 0x47:
  case 0x49:
  case 0x53:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x7c:
  case 0x7f:
  case 0x89:
    uVar47 = 3;
    break;
  case 0x1a:
  case 0x3d:
  case 0x3e:
  case 0x9a:
    uVar47 = 0x2e;
    break;
  case 0x1b:
  case 0x35:
  case 0x4c:
  case 0x83:
  case 0x84:
  case 0x96:
  case 0x97:
    uVar47 = 0x26;
    break;
  case 0x1e:
  case 0x29:
  case 0x2b:
  case 0x2d:
  case 0x54:
  case 0x69:
  case 0x85:
  case 0x9f:
    uVar47 = 1;
    break;
  case 0x2f:
  case 0x57:
  case 0x7a:
    uVar39 = 0x1d;
    goto switchD_14091f11f_caseD_95;
  case 0x31:
  case 0x39:
  case 0xa8:
    uVar47 = 0x2d;
    break;
  case 0x34:
  case 0x52:
  case 0x5a:
  case 0x71:
  case 0x8f:
    uVar47 = 0x1f;
    break;
  case 0x3f:
  case 0x56:
  case 0x75:
    uVar47 = 0x1d;
    break;
  case 0x5f:
  case 0x7d:
  case 0x87:
  case 0x8d:
    uVar47 = 0x1a;
    break;
  case 0x60:
    uVar47 = 0x1e;
    break;
  case 0x62:
  case 0x6a:
    uVar47 = 0x2b;
    break;
  case 0x8b:
    uVar47 = 0x14;
    break;
  case 0x95:
    goto switchD_14091f11f_caseD_95;
  case 0xa4:
    uVar47 = 0x27;
  }
  cVar10 = '\x01';
  uVar39 = uVar47;
switchD_14091f11f_caseD_95:
  sVar14 = FUN_14000dcd0(param_1,uVar39);
  if (cVar10 == '\0') {
    if (sVar14 < 0x5b) {
      if (0x4b < sVar14) goto LAB_14091f217;
      if (sVar14 < 0x3d) {
        if (sVar14 < 10) {
          if (0 < (int)uVar49) {
            uVar49 = 100;
          }
        }
        else {
          if (sVar14 < 0x19) goto LAB_14091f25a;
          if ((sVar14 < 0x28) && (uVar49 = uVar49 * 2, 100 < (int)uVar49)) {
            uVar49 = 100;
          }
        }
      }
      else {
        uVar49 = (int)uVar49 / 2;
      }
    }
    else {
      uVar49 = 0;
    }
  }
  else if (sVar14 < 10) {
    uVar49 = 0;
  }
  else if (sVar14 < 0x19) {
LAB_14091f217:
    uVar49 = (int)uVar49 / 10;
  }
  else if (sVar14 < 0x28) {
    uVar49 = (int)uVar49 / 2;
  }
  else {
    if (sVar14 < 0x5b) {
      if (sVar14 < 0x4c) {
        if (sVar14 < 0x3d) goto LAB_14091f280;
      }
      else {
LAB_14091f25a:
        uVar49 = uVar49 * 5;
      }
      uVar28 = uVar49 * 2;
      bVar52 = SBORROW4(uVar28,100);
      uVar49 = uVar28 - 100;
      bVar50 = uVar28 == 100;
    }
    else {
      bVar52 = false;
      bVar50 = uVar49 == 0;
      uVar28 = uVar49;
    }
    bVar51 = (int)uVar49 < 0;
    uVar49 = uVar28;
    if (!bVar50 && bVar52 == bVar51) {
      uVar49 = 100;
    }
  }
LAB_14091f280:
  puVar17[2] = puVar17[2] + uVar49;
  if ((int)puVar17[2] < 0x65) {
    if (puVar17[2] == 0) {
      puVar17[6] = puVar17[6] | 8;
    }
  }
  else {
    puVar17[2] = 100;
  }
LAB_14091f2a2:
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    puVar17[2] = (int)puVar17[2] / 2;
    puVar17[1] = (int)puVar17[1] / 2;
  }
  uVar28 = puVar17[2];
  if (0x31 < (int)uVar28) {
    return;
  }
  if (0xa2 < *puVar17 - 1) {
    return;
  }
  switch(pIVar46->e_magic +
         *(uint *)(pIVar46[0x12400].e_program +
                  (ulonglong)(byte)pIVar46[0x12401].e_magic[(int)(*puVar17 - 1)] * 4 + 0x18)) {
  case (char *)0x14091f2f7:
    if ((int)uVar28 < 0xb) {
      *puVar17 = 0x9d;
      goto LAB_14091f303;
    }
    if ((int)uVar28 < 0x15) {
      *puVar17 = 6;
      uVar28 = uVar28 << 2;
    }
    else {
      *puVar17 = 0x2e;
      uVar28 = uVar28 * 2;
    }
    break;
  case (char *)0x14091f30c:
    goto switchD_14091f2f5_caseD_4091f30c;
  case (char *)0x14091f34f:
    if ((int)uVar28 < 0x15) {
      *puVar17 = 0x9d;
      uVar28 = uVar28 << 2;
    }
    else {
      *puVar17 = 6;
      uVar28 = uVar28 * 2;
    }
    break;
  case (char *)0x14091f36d:
    *puVar17 = 0x9d;
    uVar28 = uVar28 * 2;
    break;
  case (char *)0x14091f37a:
    *puVar17 = 0xb;
    uVar28 = uVar28 * 2;
    break;
  case (char *)0x14091f387:
    if ((int)uVar28 < 0x15) {
      *puVar17 = 0x88;
      uVar28 = uVar28 << 2;
    }
    else {
      *puVar17 = 0x4e;
      uVar28 = uVar28 * 2;
    }
    break;
  case (char *)0x14091f3ab:
    *puVar17 = 0x88;
    uVar28 = uVar28 * 2;
    break;
  case (char *)0x14091f3bb:
    *puVar17 = 0x42;
    uVar28 = uVar28 * 2;
    break;
  case (char *)0x14091f3cb:
    *puVar17 = 0x66;
    return;
  case (char *)0x14091f3d8:
    if (10 < (int)uVar28) {
      return;
    }
    *puVar17 = 0xa1;
LAB_14091f303:
    uVar28 = uVar28 << 3;
  }
  puVar17[2] = uVar28;
switchD_14091f2f5_caseD_4091f30c:
  return;
}

