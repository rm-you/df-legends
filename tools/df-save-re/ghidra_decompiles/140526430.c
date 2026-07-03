// FUN_140526430 @ 140526430
// callees:
//   -> 14053c3c0 FUN_14053c3c0
//   -> 14073d8e0 FUN_14073d8e0
//   -> 140050d90 FUN_140050d90


void FUN_140526430(short *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int local_res18;
  int local_res20;
  
  for (puVar16 = *(undefined8 **)(param_1 + 100); puVar16 < *(undefined8 **)(param_1 + 0x68);
      puVar16 = puVar16 + 1) {
    if ((*(byte *)((int *)*puVar16 + 6) & 1) != 0) {
      local_res20 = *(int *)*puVar16;
      goto LAB_140526482;
    }
  }
  local_res20 = -1;
LAB_140526482:
  plVar15 = *(longlong **)(param_1 + 0xa0c);
  iVar19 = 0;
  plVar20 = *(longlong **)(param_1 + 0xa08);
  local_res18 = 0;
  for (; plVar20 < plVar15; plVar20 = plVar20 + 1) {
    uVar22 = 0;
    lVar9 = *plVar20;
    if (*(int *)(lVar9 + 0x30) == -1) {
      plVar18 = *(longlong **)(lVar9 + 0xe8);
      bVar5 = false;
      bVar6 = false;
      uVar23 = (ulonglong)((longlong)*(longlong **)(lVar9 + 0xf0) + (7 - (longlong)plVar18)) >> 3;
      if (*(longlong **)(lVar9 + 0xf0) < plVar18) {
        uVar23 = uVar22;
      }
      if (uVar23 != 0) {
        do {
          puVar16 = (undefined8 *)*plVar18;
          sVar7 = (**(code **)*puVar16)(puVar16);
          if (sVar7 == 0) {
            if (*(int *)(puVar16 + 1) == *(int *)(param_1 + 2)) {
              bVar5 = true;
            }
          }
          else if (((int)sVar7 - 4U & 0xfffffffd) == 0) {
            bVar6 = true;
          }
          plVar18 = plVar18 + 1;
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar23);
        iVar19 = local_res18;
        if ((bVar5) && (!bVar6)) {
          iVar19 = local_res18 + 1;
          local_res18 = iVar19;
        }
      }
    }
  }
  uVar23 = 0;
  uVar22 = (ulonglong)((longlong)DAT_141c66ff0 + (7 - (longlong)DAT_141c66fe8)) >> 3;
  if (DAT_141c66ff0 < DAT_141c66fe8) {
    uVar22 = uVar23;
  }
  plVar15 = DAT_141c66fe8;
  uVar21 = uVar23;
  if (uVar22 != 0) {
    do {
      lVar9 = *plVar15;
      if (((*(uint *)(lVar9 + 0x110) & 0x502) != 2) && (-1 < (int)*(uint *)(lVar9 + 0x110))) {
        if (*(longlong *)(lVar9 + 0x11e8) == 0) {
          iVar8 = *(int *)(lVar9 + 0x140);
        }
        else {
          iVar8 = *(int *)(*(longlong *)(lVar9 + 0x11e8) + 4);
        }
        if (iVar8 == *(int *)(param_1 + 2)) {
          iVar19 = iVar19 + 1;
        }
      }
      uVar21 = uVar21 + 1;
      plVar15 = plVar15 + 1;
    } while (uVar21 < uVar22);
  }
  bVar5 = false;
  if ((*param_1 == 1) && (lVar9 = FUN_14053c3c0(param_1,1), lVar9 != 0)) {
    bVar5 = false;
    if ((0 < *(int *)(lVar9 + 0x2a8)) && ((**(byte **)(lVar9 + 0x2a0) & 8) != 0)) {
      bVar5 = true;
    }
    puVar16 = *(undefined8 **)(lVar9 + 0xd8);
    uVar22 = (ulonglong)((longlong)*(undefined8 **)(lVar9 + 0xe0) + (7 - (longlong)puVar16)) >> 3;
    if (*(undefined8 **)(lVar9 + 0xe0) < puVar16) {
      uVar22 = uVar23;
    }
    uVar21 = uVar23;
    if (uVar22 != 0) {
      do {
        piVar10 = (int *)*puVar16;
        if ((piVar10[3] == -1) && (piVar10[6] == -1)) {
          iVar19 = iVar19 + *piVar10;
        }
        puVar16 = puVar16 + 1;
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar22);
    }
    puVar16 = *(undefined8 **)(lVar9 + 0x308);
    if (puVar16 != (undefined8 *)0x0) {
      for (plVar15 = (longlong *)*puVar16; plVar15 < (longlong *)puVar16[1]; plVar15 = plVar15 + 1)
      {
        puVar17 = *(undefined8 **)(*plVar15 + 0x20);
        puVar2 = *(undefined8 **)(*plVar15 + 0x28);
        uVar22 = (ulonglong)((longlong)puVar2 + (7 - (longlong)puVar17)) >> 3;
        if (puVar2 < puVar17) {
          uVar22 = uVar23;
        }
        uVar21 = uVar23;
        if (uVar22 != 0) {
          do {
            piVar10 = (int *)*puVar17;
            if (((0 < *piVar10) && (piVar10[6] == -1)) &&
               ((piVar10[3] == *(int *)(param_1 + 2) || (piVar10[3] == -1)))) {
              iVar19 = iVar19 + *piVar10;
            }
            puVar17 = puVar17 + 1;
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar22);
        }
      }
      for (plVar15 = (longlong *)puVar16[0x82e8]; plVar15 < (longlong *)puVar16[0x82e9];
          plVar15 = plVar15 + 1) {
        puVar17 = *(undefined8 **)(*plVar15 + 0xd8);
        puVar2 = *(undefined8 **)(*plVar15 + 0xe0);
        uVar22 = (ulonglong)((longlong)puVar2 + (7 - (longlong)puVar17)) >> 3;
        if (puVar2 < puVar17) {
          uVar22 = uVar23;
        }
        uVar21 = uVar23;
        if (uVar22 != 0) {
          do {
            piVar10 = (int *)*puVar17;
            if (((0 < *piVar10) && (piVar10[6] == -1)) &&
               ((piVar10[3] == *(int *)(param_1 + 2) || (piVar10[3] == -1)))) {
              iVar19 = iVar19 + *piVar10;
            }
            puVar17 = puVar17 + 1;
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar22);
        }
      }
      if (0 < (int)*(uint *)((longlong)puVar16 + 0x40564)) {
        piVar10 = (int *)((longlong)puVar16 + 0x228e4);
        uVar22 = (ulonglong)*(uint *)((longlong)puVar16 + 0x40564);
        do {
          if (((0 < piVar10[-3]) && (piVar10[3] == -1)) &&
             ((*piVar10 == *(int *)(param_1 + 2) || (*piVar10 != -1)))) {
            iVar19 = iVar19 + piVar10[-3];
          }
          piVar10 = piVar10 + 0x3d;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
    }
  }
  iVar8 = (int)(*(longlong *)(param_1 + 0x85c) - *(longlong *)(param_1 + 0x858) >> 3) + -1;
  lVar9 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x858) + lVar9 * 8);
      if (3 < *(int *)(lVar24 + 0x30)) {
        lVar11 = *(longlong *)(lVar24 + 0x28);
        if ((*(byte *)(lVar11 + 3) & 0x40) == 0) {
          if (3 < *(int *)(lVar24 + 0x30)) {
            lVar11 = *(longlong *)(lVar24 + 0x28);
            goto LAB_140526842;
          }
        }
        else if ((bVar5) && (3 < *(int *)(lVar24 + 0x30))) {
LAB_140526842:
          *(byte *)(lVar11 + 3) = *(byte *)(lVar11 + 3) | 0x80;
        }
      }
      if ((*(short *)(lVar24 + 0x2ca) <= iVar19) && (2 < *(int *)(lVar24 + 0x30))) {
        pbVar1 = (byte *)(*(longlong *)(lVar24 + 0x28) + 2);
        *pbVar1 = *pbVar1 | 4;
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  iVar19 = (int)(*(longlong *)(param_1 + 0x85c) - *(longlong *)(param_1 + 0x858) >> 3) + -1;
  lVar9 = (longlong)iVar19;
  if (-1 < iVar19) {
    do {
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x858) + lVar9 * 8);
      if ((*(short *)(lVar24 + 0x2c8) == 0) &&
         (((*(int *)(lVar24 + 0x30) < 3 || ((*(byte *)(*(longlong *)(lVar24 + 0x28) + 2) & 8) == 0))
          && (iVar19 = *(int *)(lVar24 + 0x2d4), iVar19 != -1)))) {
        iVar8 = (int)(*(longlong *)(param_1 + 0x85c) - *(longlong *)(param_1 + 0x858) >> 3) + -1;
        uVar22 = uVar23;
        if (-1 < iVar8) {
          do {
            iVar12 = iVar8 + (int)uVar22 >> 1;
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x858) + (longlong)iVar12 * 8);
            if (*(int *)(lVar11 + 0x20) == iVar19) {
              if (((2 < *(int *)(lVar11 + 0x30)) &&
                  ((*(byte *)(*(longlong *)(lVar11 + 0x28) + 2) & 4) != 0)) &&
                 ((3 < *(int *)(lVar11 + 0x30) &&
                  ((*(byte *)(*(longlong *)(lVar11 + 0x28) + 3) & 0x80) != 0)))) {
                if (2 < *(int *)(lVar24 + 0x30)) {
                  pbVar1 = (byte *)(*(longlong *)(lVar24 + 0x28) + 2);
                  *pbVar1 = *pbVar1 | 8;
                }
                if (3 < *(int *)(lVar24 + 0x30)) {
                  pbVar1 = (byte *)(*(longlong *)(lVar24 + 0x28) + 3);
                  *pbVar1 = *pbVar1 & 0xf7;
                }
              }
              break;
            }
            if (iVar19 < *(int *)(lVar11 + 0x20)) {
              iVar8 = iVar12 + -1;
            }
            else {
              uVar22 = (ulonglong)(iVar12 + 1);
            }
          } while ((int)uVar22 <= iVar8);
        }
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
LAB_140526950:
  puVar16 = *(undefined8 **)(param_1 + 0x880);
  bVar5 = false;
  puVar17 = *(undefined8 **)(param_1 + 0x884);
  bVar6 = false;
  if (puVar17 <= puVar16) {
    return;
  }
LAB_140526980:
  puVar3 = (undefined4 *)*puVar16;
  iVar8 = 0;
  iVar19 = (int)(*(longlong *)(param_1 + 0x85c) - *(longlong *)(param_1 + 0x858) >> 3) + -1;
  if (-1 < iVar19) {
    do {
      iVar12 = iVar19 + iVar8 >> 1;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x858) + (longlong)iVar12 * 8);
      if (*(int *)(lVar9 + 0x20) == puVar3[3]) {
        if (lVar9 != 0) {
          if (((int)puVar3[6] < 1) || ((**(byte **)(puVar3 + 4) & 1) == 0)) {
            if (((2 < *(int *)(lVar9 + 0x30)) &&
                ((((lVar24 = *(longlong *)(lVar9 + 0x28), (*(byte *)(lVar24 + 2) & 4) != 0 &&
                   (3 < *(int *)(lVar9 + 0x30))) && ((*(byte *)(lVar24 + 3) & 0x80) != 0)) &&
                 ((*(int *)(lVar9 + 0x30) < 3 || ((*(byte *)(lVar24 + 2) & 8) == 0)))))) &&
               (*(short *)(lVar9 + 0x2c8) == 0)) {
              if (*(longlong *)(lVar9 + 0x300) - *(longlong *)(lVar9 + 0x2f8) >> 2 == 0)
              goto LAB_140526db9;
              iVar19 = (int)(*(longlong *)(lVar9 + 0x300) - *(longlong *)(lVar9 + 0x2f8) >> 2) + -1;
              lVar24 = (longlong)iVar19;
              if (-1 < iVar19) {
                goto LAB_140526b31;
              }
            }
          }
          else if ((2 < *(int *)(lVar9 + 0x30)) &&
                  ((*(byte *)(*(longlong *)(lVar9 + 0x28) + 2) & 8) != 0)) {
            if (0 < (int)puVar3[6]) {
              **(byte **)(puVar3 + 4) = **(byte **)(puVar3 + 4) & 0xfe;
            }
            iVar19 = puVar3[1];
            if (iVar19 != -1) {
              lVar9 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
              if (lVar9 == 0) goto LAB_140526a89;
              iVar12 = 0;
              iVar8 = (int)lVar9 + -1;
              if (-1 < iVar8) goto LAB_140526a60;
              goto LAB_140526a89;
            }
          }
        }
        break;
      }
      if ((int)puVar3[3] < *(int *)(lVar9 + 0x20)) {
        iVar19 = iVar12 + -1;
      }
      else {
        iVar8 = iVar12 + 1;
      }
    } while (iVar8 <= iVar19);
  }
  goto LAB_140526d8a;
LAB_140526b31:
  iVar19 = 0;
  iVar12 = *(int *)(*(longlong *)(lVar9 + 0x2f8) + lVar24 * 4);
  iVar8 = 0;
  if (iVar12 == *(int *)(param_1 + 2)) {
    iVar8 = (int)(*(longlong *)(param_1 + 0x85c) - *(longlong *)(param_1 + 0x858) >> 3) + -1;
    iVar12 = *(int *)(*(longlong *)(lVar9 + 0x2e0) + lVar24 * 4);
    if (-1 < iVar8) {
      do {
        iVar13 = iVar8 + iVar19 >> 1;
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x858) + (longlong)iVar13 * 8);
        if (*(int *)(lVar11 + 0x20) == iVar12) goto LAB_140526d41;
        if (iVar12 < *(int *)(lVar11 + 0x20)) {
          iVar8 = iVar13 + -1;
        }
        else {
          iVar19 = iVar13 + 1;
        }
      } while (iVar19 <= iVar8);
    }
  }
  else {
    lVar11 = DAT_141c53720 - DAT_141c53718 >> 3;
    if (((lVar11 != 0) && (iVar12 != -1)) && (iVar13 = (int)lVar11 + -1, -1 < iVar13)) {
      do {
        iVar14 = iVar13 + iVar8 >> 1;
        lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar14 * 8);
        if (*(int *)(lVar4 + 4) == iVar12) {
          if (lVar4 != 0) {
            iVar8 = (int)(*(longlong *)(lVar4 + 0x10b8) - *(longlong *)(lVar4 + 0x10b0) >> 3) + -1;
            iVar12 = *(int *)(*(longlong *)(lVar9 + 0x2e0) + lVar24 * 4);
            if (-1 < iVar8) goto LAB_140526c40;
          }
          break;
        }
        if (iVar12 < *(int *)(lVar4 + 4)) {
          iVar13 = iVar14 + -1;
        }
        else {
          iVar8 = iVar14 + 1;
        }
      } while (iVar8 <= iVar13);
    }
  }
  goto LAB_140526d78;
  while( true ) {
    if (iVar12 < *(int *)(lVar11 + 0x20)) {
      iVar8 = iVar13 + -1;
    }
    else {
      iVar19 = iVar13 + 1;
    }
    if (iVar8 < iVar19) break;
LAB_140526c40:
    iVar13 = iVar8 + iVar19 >> 1;
    lVar11 = *(longlong *)(*(longlong *)(lVar4 + 0x10b0) + (longlong)iVar13 * 8);
    if (*(int *)(lVar11 + 0x20) == iVar12) {
      if (*(short *)(lVar11 + 0x2c8) < 1) goto LAB_140526d41;
      iVar8 = 0;
      iVar19 = (int)(*(longlong *)(lVar4 + 0xd0) - *(longlong *)(lVar4 + 200) >> 3) + -1;
      if (-1 < iVar19) goto LAB_140526cb0;
      break;
    }
  }
  goto LAB_140526d78;
  while( true ) {
    if (local_res20 < *piVar10) {
      iVar19 = iVar12 + -1;
    }
    else {
      iVar8 = iVar12 + 1;
    }
    if (iVar19 < iVar8) break;
LAB_140526cb0:
    iVar12 = iVar19 + iVar8 >> 1;
    piVar10 = *(int **)(*(longlong *)(lVar4 + 200) + (longlong)iVar12 * 8);
    if (*piVar10 == local_res20) {
      if ((piVar10 != (int *)0x0) && (iVar19 = piVar10[2], iVar19 != -1)) {
        iVar12 = 0;
        iVar8 = (int)(*(longlong *)(lVar4 + 0x1108) - *(longlong *)(lVar4 + 0x1100) >> 3) + -1;
        if (-1 < iVar8) goto LAB_140526d10;
      }
      break;
    }
  }
  goto LAB_140526d78;
  while( true ) {
    if (iVar19 < iVar13) {
      iVar8 = iVar14 + -1;
    }
    else {
      iVar12 = iVar14 + 1;
    }
    if (iVar8 < iVar12) break;
LAB_140526d10:
    iVar14 = iVar8 + iVar12 >> 1;
    piVar10 = *(int **)(*(longlong *)(lVar4 + 0x1100) + (longlong)iVar14 * 8);
    iVar13 = *piVar10;
    if (iVar13 == iVar19) {
      if (piVar10[3] == *(int *)(lVar11 + 0x20)) goto LAB_140526d41;
      break;
    }
  }
  goto LAB_140526d78;
LAB_140526d41:
  if (((lVar11 != 0) &&
      (((*(int *)(lVar11 + 0x30) < 3 || ((*(byte *)(*(longlong *)(lVar11 + 0x28) + 2) & 8) == 0)) &&
       (3 < *(int *)(lVar11 + 0x30))))) &&
     ((((*(byte *)(*(longlong *)(lVar11 + 0x28) + 3) & 4) != 0 && (3 < *(int *)(lVar11 + 0x30))) &&
      ((*(byte *)(*(longlong *)(lVar11 + 0x28) + 3) & 8) != 0)))) goto LAB_140526db9;
LAB_140526d78:
  lVar24 = lVar24 + -1;
  bVar5 = bVar6;
  if (lVar24 < 0) goto LAB_140526d8a;
  goto LAB_140526b31;
LAB_140526db9:
  if (0 < (int)puVar3[6]) {
    **(byte **)(puVar3 + 4) = **(byte **)(puVar3 + 4) | 1;
  }
  if (3 < *(int *)(lVar9 + 0x30)) {
    pbVar1 = (byte *)(*(longlong *)(lVar9 + 0x28) + 3);
    *pbVar1 = *pbVar1 | 8;
  }
  bVar6 = true;
  FUN_140050d90(puVar3,param_1 + 0x890);
  *(uint *)(param_1 + 0x4a) = *(uint *)(param_1 + 0x4a) | 0x40;
  bVar5 = true;
  if (0 < DAT_141d79b50) {
    *DAT_141d79b48 = *DAT_141d79b48 | 4;
  }
  goto LAB_140526d8a;
  while( true ) {
    if (iVar19 < *(int *)(lVar9 + 0xe0)) {
      iVar8 = iVar13 + -1;
    }
    else {
      iVar12 = iVar13 + 1;
    }
    if (iVar8 < iVar12) break;
LAB_140526a60:
    iVar13 = iVar8 + iVar12 >> 1;
    lVar9 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar13 * 8);
    if (*(int *)(lVar9 + 0xe0) == iVar19) goto LAB_140526a8c;
  }
LAB_140526a89:
  lVar9 = 0;
LAB_140526a8c:
  FUN_14073d8e0(lVar9,*puVar3,*(undefined4 *)(param_1 + 2),
                CONCAT71((uint7)(uint3)((uint)iVar19 >> 8),1),1);
LAB_140526d8a:
  puVar16 = puVar16 + 1;
  if (puVar17 <= puVar16) goto code_r0x000140526d97;
  goto LAB_140526980;
code_r0x000140526d97:
  if (!bVar5) {
    return;
  }
  goto LAB_140526950;
}

