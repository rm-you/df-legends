// FUN_14073edb0 @ 14073edb0
// callees:
//   -> 14073fd00 FUN_14073fd00
//   -> 140760ab0 FUN_140760ab0
//   -> 14073d9b0 FUN_14073d9b0
//   -> 1407075a0 FUN_1407075a0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050d90 FUN_140050d90
//   -> 140073930 FUN_140073930
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall


void FUN_14073edb0(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  byte *pbVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  int *piVar7;
  short sVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong *local_res8;
  
  puVar3 = (ulonglong *)(param_1 + 0xe8);
  plVar10 = *(longlong **)(param_1 + 0xf0);
  for (plVar9 = (longlong *)*puVar3; plVar9 < plVar10; plVar9 = plVar9 + 1) {
    puVar4 = (undefined8 *)*plVar9;
    sVar8 = (**(code **)*puVar4)(puVar4);
    if (((sVar8 == 10) && (*(int *)(puVar4 + 1) == param_3)) && (*(int *)(puVar4 + 2) == param_2)) {
      if (99 < *(short *)((longlong)puVar4 + 0xc)) {
        return;
      }
      *(undefined2 *)((longlong)puVar4 + 0xc) = 100;
      return;
    }
  }
  iVar14 = (int)(*(longlong *)(param_1 + 0x108) - *(longlong *)(param_1 + 0x100) >> 3) + -1;
  if (-1 < iVar14) {
    lVar17 = (longlong)iVar14 * 8;
    do {
      sVar8 = (**(code **)**(undefined8 **)(lVar17 + *(longlong *)(param_1 + 0x100)))();
      if (sVar8 == 0) {
        FUN_14073fd00(param_1,iVar14,0);
      }
      lVar17 = lVar17 + -8;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  if (((*(longlong *)(param_1 + 0x130) != 0) &&
      (lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 8), lVar17 != 0)) &&
     (*(short *)(lVar17 + 0x60) != 0x66)) {
    FUN_140760ab0(param_1,0x66,0);
  }
  FUN_14073d9b0(param_1,param_2);
  plVar9 = (longlong *)FUN_1407075a0(10);
  *(int *)(plVar9 + 1) = param_3;
  *(int *)(plVar9 + 2) = param_2;
  *(undefined2 *)((longlong)plVar9 + 0xc) = 100;
  *(undefined4 *)((longlong)plVar9 + 0x14) = DAT_1416b1980;
  pplVar5 = *(longlong ***)(param_1 + 0xf0);
  local_res8 = plVar9;
  if ((&local_res8 < pplVar5) && (pplVar6 = (longlong **)*puVar3, pplVar6 <= &local_res8)) {
    if (pplVar5 == *(longlong ***)(param_1 + 0xf8)) {
      FUN_14000c2d0(puVar3,1);
    }
    if (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xf0) =
           *(undefined8 *)(*puVar3 + ((longlong)&local_res8 - (longlong)pplVar6 >> 3) * 8);
    }
  }
  else {
    if (pplVar5 == *(longlong ***)(param_1 + 0xf8)) {
      FUN_14000c2d0(puVar3,1);
    }
    if (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xf0) = plVar9;
    }
  }
  *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 8;
  lVar17 = DAT_141c53720 - DAT_141c53718 >> 3;
  if ((lVar17 != 0) && (param_3 != -1)) {
    iVar19 = 0;
    iVar14 = (int)lVar17 + -1;
    if (-1 < iVar14) {
      do {
        iVar11 = iVar14 + iVar19 >> 1;
        lVar17 = *(longlong *)(DAT_141c53718 + (longlong)iVar11 * 8);
        if (*(int *)(lVar17 + 4) == param_3) goto LAB_14073efb6;
        if (param_3 < *(int *)(lVar17 + 4)) {
          iVar14 = iVar11 + -1;
        }
        else {
          iVar19 = iVar11 + 1;
        }
      } while (iVar19 <= iVar14);
    }
    lVar17 = 0;
LAB_14073efb6:
    if (lVar17 == 0) goto LAB_14073f4c5;
    iVar19 = 0;
    iVar14 = (int)(*(longlong *)(lVar17 + 0x1108) - *(longlong *)(lVar17 + 0x1100) >> 3) + -1;
    if (-1 < iVar14) {
      do {
        iVar11 = iVar19 + iVar14 >> 1;
        piVar7 = *(int **)(*(longlong *)(lVar17 + 0x1100) + (longlong)iVar11 * 8);
        if (*piVar7 == param_2) {
          iVar19 = 0;
          iVar14 = (int)(*(longlong *)(lVar17 + 0x10b8) - *(longlong *)(lVar17 + 0x10b0) >> 3) + -1;
          if (-1 < iVar14) goto LAB_14073f031;
          goto LAB_14073f1de;
        }
        if (param_2 < *piVar7) {
          iVar14 = iVar11 + -1;
        }
        else {
          iVar19 = iVar11 + 1;
        }
      } while (iVar19 <= iVar14);
    }
    goto LAB_14073f499;
  }
  lVar17 = 0;
  goto LAB_14073f4c5;
  while( true ) {
    if (piVar7[3] < *(int *)(lVar20 + 0x20)) {
      iVar14 = iVar11 + -1;
    }
    else {
      iVar19 = iVar11 + 1;
    }
    if (iVar14 < iVar19) break;
LAB_14073f031:
    iVar11 = iVar14 + iVar19 >> 1;
    lVar20 = *(longlong *)(*(longlong *)(lVar17 + 0x10b0) + (longlong)iVar11 * 8);
    if (*(int *)(lVar20 + 0x20) == piVar7[3]) {
      iVar14 = *(int *)(param_1 + 0xdc);
      if (iVar14 == -1) goto LAB_14073f0b5;
      iVar11 = 0;
      iVar19 = (int)(DAT_141c67098 - DAT_141c67090 >> 3) + -1;
      if (iVar19 < 0) goto LAB_14073f0b5;
      goto LAB_14073f090;
    }
  }
LAB_14073f1de:
  lVar20 = 0;
  goto LAB_14073f1e1;
  while( true ) {
    if (iVar19 < *(int *)(lVar18 + 0x130)) {
      iVar14 = iVar12 + -1;
    }
    else {
      iVar11 = iVar12 + 1;
    }
    if (iVar14 < iVar11) break;
LAB_14073f363:
    iVar12 = iVar11 + iVar14 >> 1;
    lVar18 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar12 * 8);
    if (*(int *)(lVar18 + 0x130) == iVar19) {
      if (lVar18 != 0) {
        *(int *)(lVar18 + 0x1d8) = *piVar13;
        *(undefined4 *)(lVar18 + 0x1dc) = 0;
      }
      break;
    }
  }
  goto LAB_14073f3ae;
joined_r0x00014073f43d:
  if (*(longlong **)(lVar20 + 0x298) <= plVar10) goto LAB_14073f458;
  if (*(int *)(*plVar10 + 4) == 0xd) {
    puVar2 = (uint *)(*plVar10 + 0x28);
    *puVar2 = *puVar2 | 1;
    goto LAB_14073f458;
  }
  plVar10 = plVar10 + 1;
  goto joined_r0x00014073f43d;
  while( true ) {
    if (piVar7[3] < iVar11) {
      iVar14 = iVar12 + -1;
    }
    else {
      iVar19 = iVar12 + 1;
    }
    if (iVar14 < iVar19) break;
LAB_14073f5f0:
    iVar12 = iVar14 + iVar19 >> 1;
    lVar20 = *(longlong *)(*(longlong *)(lVar17 + 0x10b0) + (longlong)iVar12 * 8);
    iVar11 = *(int *)(lVar20 + 0x20);
    if (iVar11 == piVar7[3]) {
      if (*(int *)(lVar20 + 0x2d0) == 1) {
        if (*(longlong *)(lVar17 + 0x1300) == 0) {
          local_res8 = operator_new(0x48);
          *local_res8 = 0;
          local_res8[1] = 0;
          local_res8[2] = 0;
          *(undefined4 *)(local_res8 + 3) = 0;
          *(undefined4 *)((longlong)local_res8 + 0x44) = 0;
          *(longlong **)(lVar17 + 0x1300) = local_res8;
        }
        iVar14 = *(int *)(*(longlong *)(lVar17 + 0x1300) + 0x44);
        if (iVar14 < 10) {
          *(int *)(*(longlong *)(lVar17 + 0x1300) + 0x1c + (longlong)iVar14 * 4) = (int)plVar10[4];
          piVar7 = (int *)(*(longlong *)(lVar17 + 0x1300) + 0x44);
          *piVar7 = *piVar7 + 1;
        }
      }
      break;
    }
  }
  goto LAB_14073f692;
  while( true ) {
    if (iVar14 < *piVar13) {
      iVar19 = iVar12 + -1;
    }
    else {
      iVar11 = iVar12 + 1;
    }
    if (iVar19 < iVar11) break;
LAB_14073f090:
    iVar12 = iVar19 + iVar11 >> 1;
    piVar13 = *(int **)(DAT_141c67090 + (longlong)iVar12 * 8);
    if (*piVar13 == iVar14) goto LAB_14073f0b7;
  }
LAB_14073f0b5:
  piVar13 = (int *)0x0;
LAB_14073f0b7:
  if (1 < *(int *)(lVar20 + 0x30)) {
    if ((*(byte *)(*(longlong *)(lVar20 + 0x28) + 1) & 1) != 0) {
      if (1 < *(int *)(param_1 + 0xd0)) {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 200) + 1);
        *pbVar1 = *pbVar1 | 0x40;
      }
      if ((piVar13 != (int *)0x0) && (0 < piVar13[0x18])) {
        **(byte **)(piVar13 + 0x16) = **(byte **)(piVar13 + 0x16) | 0x80;
      }
    }
    if (1 < *(int *)(lVar20 + 0x30)) {
      if ((*(byte *)(*(longlong *)(lVar20 + 0x28) + 1) & 0x10) != 0) {
        if (1 < *(int *)(param_1 + 0xd0)) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 200) + 1);
          *pbVar1 = *pbVar1 | 0x10;
        }
        if ((piVar13 != (int *)0x0) && (0 < piVar13[0x18])) {
          **(byte **)(piVar13 + 0x16) = **(byte **)(piVar13 + 0x16) | 0x20;
        }
      }
      if (1 < *(int *)(lVar20 + 0x30)) {
        if ((*(byte *)(*(longlong *)(lVar20 + 0x28) + 1) & 2) != 0) {
          if (1 < *(int *)(param_1 + 0xd0)) {
            pbVar1 = (byte *)(*(longlong *)(param_1 + 200) + 1);
            *pbVar1 = *pbVar1 | 8;
          }
          if ((piVar13 != (int *)0x0) && (0 < piVar13[0x18])) {
            **(byte **)(piVar13 + 0x16) = **(byte **)(piVar13 + 0x16) | 0x10;
          }
        }
        if (1 < *(int *)(lVar20 + 0x30)) {
          if ((*(byte *)(*(longlong *)(lVar20 + 0x28) + 1) & 4) != 0) {
            if (1 < *(int *)(param_1 + 0xd0)) {
              pbVar1 = (byte *)(*(longlong *)(param_1 + 200) + 1);
              *pbVar1 = *pbVar1 | 0x20;
            }
            if ((piVar13 != (int *)0x0) && (0 < piVar13[0x18])) {
              **(byte **)(piVar13 + 0x16) = **(byte **)(piVar13 + 0x16) | 0x40;
            }
          }
          if ((1 < *(int *)(lVar20 + 0x30)) &&
             ((*(byte *)(*(longlong *)(lVar20 + 0x28) + 1) & 8) != 0)) {
            if (1 < *(int *)(param_1 + 0xd0)) {
              pbVar1 = (byte *)(*(longlong *)(param_1 + 200) + 1);
              *pbVar1 = *pbVar1 | 0x80;
            }
            if ((piVar13 != (int *)0x0) && (1 < piVar13[0x18])) {
              *(byte *)(*(longlong *)(piVar13 + 0x16) + 1) =
                   *(byte *)(*(longlong *)(piVar13 + 0x16) + 1) | 1;
            }
          }
        }
      }
    }
  }
LAB_14073f1e1:
  if ((piVar7[1] == -1) && (lVar20 != 0)) {
    pcVar15 = (char *)(lVar20 + 0x328);
    lVar18 = lVar17 + 6000;
    lVar16 = 0x2a;
    do {
      if (*pcVar15 != '\0') {
        FUN_140050d90(piVar7,lVar18);
      }
      lVar18 = lVar18 + 0x18;
      pcVar15 = pcVar15 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  piVar7[1] = *(int *)(param_1 + 0xe0);
  piVar7[2] = *(int *)(param_1 + 0xe0);
  FUN_140073930(piVar7,lVar17 + 0x1120);
  FUN_140073930(piVar7,lVar17 + 0x1138);
  FUN_140073930(piVar7,lVar17 + 0x1150);
  FUN_140073930(piVar7,lVar17 + 0x1168);
  FUN_140073930(piVar7,lVar17 + 0x1180);
  *(uint *)(lVar17 + 0x94) = *(uint *)(lVar17 + 0x94) | 0x800;
  if (0 < DAT_141d79b50) {
    *DAT_141d79b48 = *DAT_141d79b48 | 0x40;
  }
  iVar14 = piVar7[8];
  if ((iVar14 != -1) && (lVar18 = DAT_141d64d40 - DAT_141d64d38 >> 3, lVar18 != 0)) {
    iVar19 = (int)lVar18 + -1;
    iVar11 = 0;
    if (-1 < iVar19) {
      do {
        iVar12 = iVar11 + iVar19 >> 1;
        piVar13 = *(int **)(DAT_141d64d38 + (longlong)iVar12 * 8);
        if (*piVar13 == iVar14) {
          if (piVar13 != (int *)0x0) {
            *(int *)**(undefined8 **)(piVar13 + 0x28) = piVar7[1];
            iVar19 = *(int *)(param_1 + 0xd8);
            iVar14 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
            if ((iVar14 != 0) && (iVar19 != -1)) {
              iVar14 = iVar14 + -1;
              iVar11 = 0;
              if (-1 < iVar14) goto LAB_14073f363;
            }
          }
          break;
        }
        if (iVar14 < *piVar13) {
          iVar19 = iVar12 + -1;
        }
        else {
          iVar11 = iVar12 + 1;
        }
      } while (iVar11 <= iVar19);
    }
  }
LAB_14073f3ae:
  if (*(int *)(lVar20 + 0x2d0) < 0x33) {
    iVar19 = *(int *)(param_1 + 0xd8);
    iVar14 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
    if ((iVar14 != 0) && (iVar19 != -1)) {
      iVar14 = iVar14 + -1;
      iVar11 = 0;
      if (-1 < iVar14) {
        do {
          iVar12 = iVar11 + iVar14 >> 1;
          lVar20 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar12 * 8);
          if (*(int *)(lVar20 + 0x130) == iVar19) {
            if ((lVar20 != 0) && (lVar20 = *(longlong *)(lVar20 + 0xa78), lVar20 != 0)) {
              plVar10 = *(longlong **)(lVar20 + 0x290);
              goto joined_r0x00014073f43d;
            }
            break;
          }
          if (iVar19 < *(int *)(lVar20 + 0x130)) {
            iVar14 = iVar12 + -1;
          }
          else {
            iVar11 = iVar12 + 1;
          }
        } while (iVar11 <= iVar14);
      }
    }
LAB_14073f458:
    if ((*(longlong *)(param_1 + 0x130) != 0) &&
       (lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18), lVar20 != 0)) {
      for (plVar10 = *(longlong **)(lVar20 + 0x48); plVar10 < *(longlong **)(lVar20 + 0x50);
          plVar10 = plVar10 + 1) {
        if (*(int *)(*plVar10 + 4) == 0xd) {
          puVar2 = (uint *)(*plVar10 + 0x28);
          *puVar2 = *puVar2 | 1;
          break;
        }
      }
    }
  }
LAB_14073f499:
  if ((DAT_1410b67dc == 1) &&
     (param_1 == *(longlong *)(*(longlong *)(DAT_141c67090 + (longlong)DAT_141ec9068 * 8) + 0x10)))
  {
    *(uint *)(lVar17 + 0x94) = *(uint *)(lVar17 + 0x94) | 8;
  }
LAB_14073f4c5:
  plVar10 = operator_new(0x40);
  local_res8 = plVar10;
  FUN_140709240(plVar10,0);
  *plVar10 = (longlong)history_event_add_hf_entity_linkst::vftable;
  *(undefined8 *)((longlong)plVar10 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)plVar10 + 0x34) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)plVar10 + 0x3c) = 0xffffffff;
  *(int *)(plVar10 + 5) = param_3;
  *(undefined4 *)((longlong)plVar10 + 0x2c) = *(undefined4 *)(param_1 + 0xe0);
  sVar8 = (**(code **)*plVar9)(plVar9);
  *(int *)(plVar10 + 6) = (int)sVar8;
  *(undefined4 *)(plVar10 + 7) = param_6;
  *(undefined4 *)((longlong)plVar10 + 0x3c) = param_7;
  if ((param_2 != -1) && (lVar17 != 0)) {
    iVar19 = 0;
    iVar14 = (int)(*(longlong *)(lVar17 + 0x1108) - *(longlong *)(lVar17 + 0x1100) >> 3) + -1;
    if (-1 < iVar14) {
      do {
        iVar11 = iVar14 + iVar19 >> 1;
        piVar7 = *(int **)(*(longlong *)(lVar17 + 0x1100) + (longlong)iVar11 * 8);
        if (*piVar7 == param_2) {
          *(int *)((longlong)plVar10 + 0x34) = piVar7[3];
          if (((10 < *(int *)(lVar17 + 0xd38)) || (10 < *(int *)(lVar17 + 0xd20))) ||
             (10 < *(int *)(lVar17 + 0xd10))) {
            iVar19 = 0;
            iVar14 = (int)(*(longlong *)(lVar17 + 0x10b8) - *(longlong *)(lVar17 + 0x10b0) >> 3) +
                     -1;
            if (-1 < iVar14) goto LAB_14073f5f0;
          }
          break;
        }
        if (param_2 < *piVar7) {
          iVar14 = iVar11 + -1;
        }
        else {
          iVar19 = iVar11 + 1;
        }
      } while (iVar19 <= iVar14);
    }
  }
LAB_14073f692:
  *(undefined4 *)(plVar10 + 1) = DAT_1416b1980;
  *(undefined4 *)((longlong)plVar10 + 0xc) = DAT_1416b1974;
  (**(code **)(*plVar10 + 0x128))(plVar10);
  return;
}

