// FUN_14073d100 @ 14073d100
// callees:
//   -> 140071a80 FUN_140071a80
//   -> EXTERNAL:000000e1 memmove
//   -> 140050d90 FUN_140050d90
//   -> 14000f360 FUN_14000f360
//   -> 140cc1710 FUN_140cc1710
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall
//   -> 1407075a0 FUN_1407075a0
//   -> 14000c2d0 FUN_14000c2d0


void FUN_14073d100(longlong *param_1,int param_2,char param_3,char param_4)

{
  void *pvVar1;
  ulonglong *puVar2;
  void *_Dst;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  longlong **pplVar8;
  longlong **pplVar9;
  short sVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *local_res8;
  
  puVar2 = (ulonglong *)(param_1 + 0x1d);
  lVar3 = (longlong)param_2 * 8;
  puVar4 = *(undefined8 **)(lVar3 + *puVar2);
  iVar17 = *(int *)(puVar4 + 1);
  lVar11 = DAT_141c53720 - DAT_141c53718 >> 3;
  plVar13 = param_1;
  local_res8 = param_1;
  if ((lVar11 == 0) || (iVar17 == -1)) {
    uVar19 = 0;
  }
  else {
    uVar18 = 0;
    iVar16 = (int)lVar11 + -1;
    uVar20 = uVar18;
    uVar19 = uVar18;
    if (-1 < iVar16) {
      do {
        iVar14 = iVar16 + (int)uVar20 >> 1;
        uVar19 = *(ulonglong *)(DAT_141c53718 + (longlong)iVar14 * 8);
        iVar15 = *(int *)(uVar19 + 4);
        if (iVar15 == iVar17) break;
        if (iVar17 < iVar15) {
          iVar16 = iVar14 + -1;
        }
        else {
          uVar20 = (ulonglong)(iVar14 + 1);
        }
        uVar19 = uVar18;
      } while ((int)uVar20 <= iVar16);
    }
    if (uVar19 != 0) {
      iVar17 = (int)(*(longlong *)(uVar19 + 0x1108) - *(longlong *)(uVar19 + 0x1100) >> 3) + -1;
      uVar20 = uVar18;
      if (-1 < iVar17) {
LAB_14073d1f0:
        iVar16 = iVar17 + (int)uVar20 >> 1;
        piVar5 = *(int **)(*(longlong *)(uVar19 + 0x1100) + (longlong)iVar16 * 8);
        if (*piVar5 != *(int *)(puVar4 + 2)) goto code_r0x00014073d204;
        lVar11 = FUN_140071a80(piVar5[3],uVar19 + 0x10b0);
        if (lVar11 != 0) {
          plVar13 = (longlong *)(uVar19 + 6000);
          uVar20 = uVar18;
          do {
            if (*(char *)(lVar11 + 0x328 + uVar20) != '\0') {
              lVar6 = *plVar13;
              iVar17 = (int)(plVar13[1] - lVar6 >> 3) + -1;
              uVar21 = uVar18;
              if (-1 < iVar17) {
                do {
                  iVar16 = iVar17 + (int)uVar21 >> 1;
                  piVar7 = *(int **)(lVar6 + (longlong)iVar16 * 8);
                  if (piVar7 == piVar5) {
                    _Dst = (void *)(lVar6 + (longlong)iVar16 * 8);
                    pvVar1 = (void *)((longlong)_Dst + 8);
                    memmove(_Dst,pvVar1,plVar13[1] - (longlong)pvVar1);
                    plVar13[1] = plVar13[1] + -8;
                    break;
                  }
                  if (*piVar5 < *piVar7) {
                    iVar17 = iVar16 + -1;
                  }
                  else {
                    uVar21 = (ulonglong)(iVar16 + 1);
                  }
                } while ((int)uVar21 <= iVar17);
              }
            }
            uVar20 = uVar20 + 1;
            plVar13 = plVar13 + 3;
          } while ((longlong)uVar20 < 0x2a);
          plVar13 = local_res8;
          if ((0 < piVar5[6]) && ((**(byte **)(piVar5 + 4) & 1) != 0)) {
            FUN_140050d90(piVar5,uVar19 + 0x1120);
            *(uint *)(uVar19 + 0x94) = *(uint *)(uVar19 + 0x94) | 0x40;
            plVar13 = local_res8;
            if (0 < DAT_141d79b50) {
              *DAT_141d79b48 = *DAT_141d79b48 | 4;
            }
          }
        }
        piVar5[1] = -1;
        if ((((param_4 != '\0') && (iVar17 = piVar5[8], iVar17 != -1)) &&
            (lVar11 = DAT_141d64d40 - DAT_141d64d38 >> 3, lVar11 != 0)) &&
           (iVar16 = (int)lVar11 + -1, -1 < iVar16)) {
          do {
            iVar15 = (int)uVar18 + iVar16 >> 1;
            piVar5 = *(int **)(DAT_141d64d38 + (longlong)iVar15 * 8);
            if (*piVar5 == iVar17) {
              if (piVar5 != (int *)0x0) {
                *(undefined4 *)**(undefined8 **)(piVar5 + 0x28) = 0xffffffff;
                lVar11 = FUN_14000f360(&DAT_141c66fd0,(int)plVar13[0x1b]);
                if (lVar11 != 0) {
                  FUN_140cc1710(lVar11);
                }
              }
              break;
            }
            if (iVar17 < *piVar5) {
              iVar16 = iVar15 + -1;
            }
            else {
              uVar18 = (ulonglong)(iVar15 + 1);
            }
          } while ((int)uVar18 <= iVar16);
        }
        *(uint *)(uVar19 + 0x94) = *(uint *)(uVar19 + 0x94) | 0x800;
        if (0 < DAT_141d79b50) {
          *DAT_141d79b48 = *DAT_141d79b48 | 0x40;
        }
      }
    }
  }
LAB_14073d3ef:
  iVar17 = 0;
  if (param_3 != '\0') {
    plVar12 = operator_new(0x38);
    local_res8 = plVar12;
    FUN_140709240(plVar12,0);
    *plVar12 = (longlong)history_event_remove_hf_entity_linkst::vftable;
    plVar12[5] = -1;
    plVar12[6] = -1;
    *(undefined4 *)(plVar12 + 5) = *(undefined4 *)(puVar4 + 1);
    *(int *)((longlong)plVar12 + 0x2c) = (int)plVar13[0x1c];
    sVar10 = (**(code **)*puVar4)(puVar4);
    *(int *)(plVar12 + 6) = (int)sVar10;
    if (uVar19 != 0) {
      iVar16 = (int)(*(longlong *)(uVar19 + 0x1108) - *(longlong *)(uVar19 + 0x1100) >> 3) + -1;
      if (-1 < iVar16) {
        do {
          iVar14 = iVar16 + iVar17 >> 1;
          piVar5 = *(int **)(*(longlong *)(uVar19 + 0x1100) + (longlong)iVar14 * 8);
          iVar15 = *piVar5;
          if (iVar15 == *(int *)(puVar4 + 2)) {
            *(int *)((longlong)plVar12 + 0x34) = piVar5[3];
            break;
          }
          if (*(int *)(puVar4 + 2) < iVar15) {
            iVar16 = iVar14 + -1;
          }
          else {
            iVar17 = iVar14 + 1;
          }
        } while (iVar17 <= iVar16);
      }
    }
    *(undefined4 *)(plVar12 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar12 + 0xc) = DAT_1416b1974;
    (**(code **)(*plVar12 + 0x128))(plVar12);
  }
  plVar13 = (longlong *)FUN_1407075a0(0xb);
  *(undefined4 *)(plVar13 + 1) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(puVar4 + 2);
  *(undefined2 *)((longlong)plVar13 + 0xc) = *(undefined2 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)((longlong)plVar13 + 0x14) = *(undefined4 *)((longlong)puVar4 + 0x14);
  *(undefined4 *)(plVar13 + 3) = DAT_1416b1980;
  pplVar8 = (longlong **)param_1[0x1e];
  local_res8 = plVar13;
  if ((&local_res8 < pplVar8) && (pplVar9 = (longlong **)*puVar2, pplVar9 <= &local_res8)) {
    if (pplVar8 == (longlong **)param_1[0x1f]) {
      FUN_14000c2d0(puVar2,1);
    }
    if ((undefined8 *)param_1[0x1e] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[0x1e] =
           *(undefined8 *)(*puVar2 + ((longlong)&local_res8 - (longlong)pplVar9 >> 3) * 8);
    }
  }
  else {
    if (pplVar8 == (longlong **)param_1[0x1f]) {
      FUN_14000c2d0(puVar2,1);
    }
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      *(longlong *)param_1[0x1e] = (longlong)plVar13;
    }
  }
  param_1[0x1e] = param_1[0x1e] + 8;
  plVar13 = *(longlong **)(lVar3 + *puVar2);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 8))(plVar13,1);
  }
  pvVar1 = (void *)((longlong)(*puVar2 + lVar3) + 8);
  memmove((void *)(*puVar2 + lVar3),pvVar1,param_1[0x1e] - (longlong)pvVar1);
  param_1[0x1e] = param_1[0x1e] + -8;
  return;
code_r0x00014073d204:
  if (*(int *)(puVar4 + 2) < *piVar5) {
    iVar17 = iVar16 + -1;
  }
  else {
    uVar20 = (ulonglong)(iVar16 + 1);
  }
  if (iVar17 < (int)uVar20) goto LAB_14073d3ef;
  goto LAB_14073d1f0;
}

