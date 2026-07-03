// FUN_1402974d0 @ 1402974d0
// callees:
//   -> 14000bd10 FUN_14000bd10
//   -> 1402b7c20 FUN_1402b7c20
//   -> 14000d7e0 FUN_14000d7e0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1400b4450 FUN_1400b4450
//   -> 14014a480 FUN_14014a480
//   -> 140002020 FUN_140002020


void FUN_1402974d0(longlong param_1,short param_2,short param_3,longlong *param_4,longlong *param_5,
                  longlong *param_6,longlong *param_7,int param_8,longlong *param_9)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  undefined8 uVar23;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  if (param_2 < 0) {
    return;
  }
  uVar23 = 0xfffffffffffffffe;
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) <=
      (ulonglong)(longlong)param_2) {
    return;
  }
  if (param_3 < 0) {
    return;
  }
  lVar18 = (longlong)param_2 * 8;
  lVar17 = *(longlong *)(lVar18 + *(longlong *)(param_1 + 0x20));
  if ((ulonglong)(*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3) <=
      (ulonglong)(longlong)param_3) {
    return;
  }
  lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x178) + (longlong)param_3 * 8);
  FUN_14000bd10(param_4,*(longlong *)(lVar17 + 0x15d8) - *(longlong *)(lVar17 + 0x15d0) >> 3);
  FUN_14000bd10(param_5,*(longlong *)(lVar17 + 0x1608) - *(longlong *)(lVar17 + 0x1600) >> 2);
  if (((param_7 != (longlong *)0x0) && (*param_7 == 0)) && (param_7[2] == 0)) {
    FUN_1402b7c20(*(undefined8 *)(lVar18 + *(longlong *)(param_1 + 0x20)),param_7,param_3,0,0xffff,0
                  ,0xffff,param_9,uVar23);
  }
  iVar6 = (int)(param_4[1] - *param_4 >> 2) + -1;
  lVar18 = (longlong)iVar6;
  if (-1 < iVar6) {
LAB_140297620:
    if (param_7 == (longlong *)0x0) {
      if (param_9 != (longlong *)0x0) {
        iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x15d0) + lVar18 * 8) + 0x80);
        iVar6 = (int)(param_9[1] - *param_9 >> 3) + -1;
        iVar12 = 0;
        if (-1 < iVar6) {
          do {
            iVar15 = iVar6 + iVar12 >> 1;
            piVar16 = *(int **)(*param_9 + (longlong)iVar15 * 8);
            if (*piVar16 == iVar11) goto LAB_1402976a9;
            if (iVar11 < *piVar16) {
              iVar6 = iVar15 + -1;
            }
            else {
              iVar12 = iVar15 + 1;
            }
          } while (iVar12 <= iVar6);
        }
      }
LAB_1402977b8:
      uVar7 = FUN_1409fc0c0();
      uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x2bb0d;
    }
    else {
      lVar19 = *(longlong *)(*(longlong *)(lVar17 + 0x15d0) + lVar18 * 8);
      sVar2 = *(short *)(lVar19 + 0x7a);
      if (sVar2 == 0) {
        uVar7 = ((uint)*(byte *)((longlong)*(int *)(lVar19 + 0x7c) + *param_7) * 11999) / 0xff;
      }
      else {
        if (sVar2 == 1) {
          bVar1 = *(byte *)((longlong)*(int *)(lVar19 + 0x7c) + *param_7);
          uVar8 = (uint)*(byte *)((longlong)(*(int *)(lVar19 + 0x7c) + 1) + *param_7);
          uVar7 = (uint)bVar1;
          if (uVar8 < bVar1) {
            uVar7 = uVar8;
          }
        }
        else {
          if (sVar2 != 2) {
            if (param_9 != (longlong *)0x0) {
              iVar6 = (int)(param_9[1] - *param_9 >> 3) + -1;
              iVar12 = 0;
              if (-1 < iVar6) {
                do {
                  iVar11 = iVar6 + iVar12 >> 1;
                  piVar16 = *(int **)(*param_9 + (longlong)iVar11 * 8);
                  if (*piVar16 == *(int *)(lVar19 + 0x80)) goto LAB_1402976a9;
                  if (*(int *)(lVar19 + 0x80) < *piVar16) {
                    iVar6 = iVar11 + -1;
                  }
                  else {
                    iVar12 = iVar11 + 1;
                  }
                } while (iVar12 <= iVar6);
              }
            }
            goto LAB_1402977b8;
          }
          bVar1 = *(byte *)((longlong)*(int *)(lVar19 + 0x7c) + *param_7);
          uVar8 = (uint)*(byte *)((longlong)(*(int *)(lVar19 + 0x7c) + 1) + *param_7);
          uVar7 = (uint)bVar1;
          if (bVar1 < uVar8) {
            uVar7 = uVar8;
          }
        }
        uVar7 = (uVar7 * 11999) / 0xff;
      }
    }
    goto LAB_1402977eb;
  }
LAB_1402978d4:
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  FUN_14000bd10(&local_48,*(longlong *)(lVar17 + 0x15f0) - *(longlong *)(lVar17 + 0x15e8) >> 3);
  lVar18 = local_48;
  iVar6 = (int)(lStack_40 - local_48 >> 2) + -1;
  lVar19 = (longlong)iVar6;
  if (-1 < iVar6) {
LAB_140297925:
    if (param_7 != (longlong *)0x0) {
      lVar21 = *(longlong *)(*(longlong *)(lVar17 + 0x15e8) + lVar19 * 8);
      sVar2 = *(short *)(lVar21 + 0x7a);
      if (sVar2 != 0) {
        if (sVar2 == 1) {
          bVar1 = *(byte *)((longlong)*(int *)(lVar21 + 0x7c) + *param_7);
          uVar8 = (uint)*(byte *)((longlong)(*(int *)(lVar21 + 0x7c) + 1) + *param_7);
          uVar7 = (uint)bVar1;
          if (uVar8 < bVar1) {
            uVar7 = uVar8;
          }
          iVar6 = uVar7 * 11999;
        }
        else {
          if (sVar2 != 2) {
            if (param_9 != (longlong *)0x0) {
              iVar6 = (int)(param_9[4] - param_9[3] >> 3) + -1;
              iVar12 = 0;
              if (-1 < iVar6) {
                do {
                  iVar11 = iVar6 + iVar12 >> 1;
                  piVar16 = *(int **)(param_9[3] + (longlong)iVar11 * 8);
                  if (*piVar16 == *(int *)(lVar21 + 0xb0)) goto LAB_1402979b9;
                  if (*(int *)(lVar21 + 0xb0) < *piVar16) {
                    iVar6 = iVar11 + -1;
                  }
                  else {
                    iVar12 = iVar11 + 1;
                  }
                } while (iVar12 <= iVar6);
              }
            }
            goto LAB_140297ab8;
          }
          bVar1 = *(byte *)((longlong)*(int *)(lVar21 + 0x7c) + *param_7);
          uVar8 = (uint)*(byte *)((longlong)(*(int *)(lVar21 + 0x7c) + 1) + *param_7);
          uVar7 = (uint)bVar1;
          if (bVar1 < uVar8) {
            uVar7 = uVar8;
          }
          iVar6 = uVar7 * 11999;
        }
        goto LAB_1402979cf;
      }
      iVar6 = (int)((ulonglong)
                    ((longlong)
                     (int)((uint)*(byte *)((longlong)*(int *)(lVar21 + 0x7c) + *param_7) * 11999) *
                    0x80808081) >> 0x20);
      goto LAB_1402979d8;
    }
    if (param_9 != (longlong *)0x0) {
      iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x15e8) + lVar19 * 8) + 0xb0);
      iVar6 = (int)(param_9[4] - param_9[3] >> 3) + -1;
      iVar12 = 0;
      if (-1 < iVar6) {
        do {
          iVar15 = iVar6 + iVar12 >> 1;
          piVar16 = *(int **)(param_9[3] + (longlong)iVar15 * 8);
          if (*piVar16 == iVar11) goto LAB_1402979b9;
          if (iVar11 < *piVar16) {
            iVar6 = iVar15 + -1;
          }
          else {
            iVar12 = iVar15 + 1;
          }
        } while (iVar12 <= iVar6);
      }
    }
LAB_140297ab8:
    uVar7 = FUN_1409fc0c0();
    uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x2bb0d;
    goto LAB_140297ae3;
  }
LAB_140297af9:
  iVar6 = (int)(param_5[1] - *param_5 >> 2) + -1;
  lVar19 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x1600) + lVar19 * 4);
      lVar21 = *(longlong *)(*(longlong *)(lVar17 + 0x15e8) + lVar14 * 8);
      iVar6 = *(int *)(lVar18 + lVar14 * 4);
      if (iVar6 < 10000) {
        if (iVar6 < 8000) {
          if (iVar6 < 6000) {
            if (iVar6 < 4000) {
              if (iVar6 < 2000) {
                iVar12 = (1999 - iVar6) * *(int *)(lVar21 + 8);
                iVar6 = iVar6 * *(int *)(lVar21 + 4);
              }
              else {
                iVar12 = (3999 - iVar6) * *(int *)(lVar21 + 0xc);
                iVar6 = (iVar6 + -2000) * *(int *)(lVar21 + 8);
              }
            }
            else {
              iVar12 = (5999 - iVar6) * *(int *)(lVar21 + 0x10);
              iVar6 = (iVar6 + -4000) * *(int *)(lVar21 + 0xc);
            }
          }
          else {
            iVar12 = (7999 - iVar6) * *(int *)(lVar21 + 0x14);
            iVar6 = (iVar6 + -6000) * *(int *)(lVar21 + 0x10);
          }
        }
        else {
          iVar12 = (9999 - iVar6) * *(int *)(lVar21 + 0x18);
          iVar6 = (iVar6 + -8000) * *(int *)(lVar21 + 0x14);
        }
      }
      else {
        iVar12 = (11999 - iVar6) * *(int *)(lVar21 + 0x1c);
        iVar6 = (iVar6 + -10000) * *(int *)(lVar21 + 0x18);
      }
      *(int *)(*param_5 + lVar19 * 4) = (iVar12 + iVar6) / 1999;
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  iVar6 = (int)(*(longlong *)(lVar17 + 0x16e0) - *(longlong *)(lVar17 + 0x16d8) >> 2) + -1;
  lVar19 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x16d8) + lVar19 * 4);
      lVar21 = *(longlong *)(*(longlong *)(lVar17 + 0x15d0) + lVar14 * 8);
      if (*(int *)(lVar21 + 0x48) <= param_8) {
        iVar6 = *(int *)(lVar21 + 0x4c);
        if ((param_8 <= iVar6) || (iVar6 == -1)) {
          iVar6 = param_8;
        }
        piVar16 = (int *)(*param_4 + lVar14 * 4);
        iVar6 = *(int *)(lVar21 + 0x38) * ((iVar6 - *(int *)(lVar21 + 0x48)) + 1) + *piVar16;
        if (iVar6 < *(int *)(lVar21 + 0x40)) {
          iVar6 = *(int *)(lVar21 + 0x40);
        }
        if (*(int *)(lVar21 + 0x44) < iVar6) {
          iVar6 = *(int *)(lVar21 + 0x44);
        }
        *piVar16 = iVar6;
      }
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  iVar6 = (int)(*(longlong *)(lVar17 + 0x16f8) - *(longlong *)(lVar17 + 0x16f0) >> 2) + -1;
  lVar19 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x16f0) + lVar19 * 4);
      lVar21 = *(longlong *)(*(longlong *)(lVar17 + 0x15d0) + lVar14 * 8);
      if (*(int *)(lVar21 + 0x48) <= param_8) {
        iVar6 = *(int *)(lVar21 + 0x4c);
        if ((param_8 <= iVar6) || (iVar6 == -1)) {
          iVar6 = param_8;
        }
        piVar16 = (int *)(*param_4 + lVar14 * 4);
        iVar6 = *(int *)(lVar21 + 0x38) * ((iVar6 - *(int *)(lVar21 + 0x48)) / 7 + 1) + *piVar16;
        if (iVar6 < *(int *)(lVar21 + 0x40)) {
          iVar6 = *(int *)(lVar21 + 0x40);
        }
        if (*(int *)(lVar21 + 0x44) < iVar6) {
          iVar6 = *(int *)(lVar21 + 0x44);
        }
        *piVar16 = iVar6;
      }
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  iVar6 = (int)(*(longlong *)(lVar17 + 0x1710) - *(longlong *)(lVar17 + 0x1708) >> 2) + -1;
  lVar19 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x1708) + lVar19 * 4);
      lVar21 = *(longlong *)(*(longlong *)(lVar17 + 0x15d0) + lVar14 * 8);
      if (*(int *)(lVar21 + 0x48) <= param_8) {
        iVar6 = *(int *)(lVar21 + 0x4c);
        if ((param_8 <= iVar6) || (iVar6 == -1)) {
          iVar6 = param_8;
        }
        piVar16 = (int *)(*param_4 + lVar14 * 4);
        iVar6 = *(int *)(lVar21 + 0x38) * ((iVar6 - *(int *)(lVar21 + 0x48)) / 0x1c + 1) + *piVar16;
        if (iVar6 < *(int *)(lVar21 + 0x40)) {
          iVar6 = *(int *)(lVar21 + 0x40);
        }
        if (*(int *)(lVar21 + 0x44) < iVar6) {
          iVar6 = *(int *)(lVar21 + 0x44);
        }
        *piVar16 = iVar6;
      }
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  iVar6 = (int)(*(longlong *)(lVar17 + 0x1728) - *(longlong *)(lVar17 + 0x1720) >> 2) + -1;
  lVar19 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x1720) + lVar19 * 4);
      lVar21 = *(longlong *)(*(longlong *)(lVar17 + 0x15d0) + lVar14 * 8);
      if (*(int *)(lVar21 + 0x48) <= param_8) {
        iVar6 = *(int *)(lVar21 + 0x4c);
        if ((param_8 <= iVar6) || (iVar6 == -1)) {
          iVar6 = param_8;
        }
        piVar16 = (int *)(*param_4 + lVar14 * 4);
        iVar6 = *(int *)(lVar21 + 0x38) * ((iVar6 - *(int *)(lVar21 + 0x48)) / 0x150 + 1) + *piVar16
        ;
        if (iVar6 < *(int *)(lVar21 + 0x40)) {
          iVar6 = *(int *)(lVar21 + 0x40);
        }
        if (*(int *)(lVar21 + 0x44) < iVar6) {
          iVar6 = *(int *)(lVar21 + 0x44);
        }
        *piVar16 = iVar6;
      }
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  FUN_14000bd10(&local_60,*(longlong *)(lVar17 + 0x15f0) - *(longlong *)(lVar17 + 0x15e8) >> 3);
  lVar19 = local_60;
  iVar6 = (int)(lStack_58 - local_60 >> 2) + -1;
  lVar21 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar14 = *(longlong *)(*(longlong *)(lVar17 + 0x15e8) + lVar21 * 8);
      if (*(int *)(lVar14 + 0x38) == 0) {
        *(undefined4 *)(local_60 + lVar21 * 4) = 0;
      }
      else {
        sVar2 = *(short *)(lVar14 + 0x3c);
        if (sVar2 == 0) {
          iVar6 = *(int *)(lVar14 + 0x4c);
          if ((param_8 <= iVar6) || (iVar6 == -1)) {
            iVar6 = param_8;
          }
          iVar6 = (iVar6 - *(int *)(lVar14 + 0x48)) + 1;
        }
        else if (sVar2 == 1) {
          iVar6 = *(int *)(lVar14 + 0x4c);
          if ((iVar6 < param_8) && (iVar6 != -1)) {
            iVar6 = (iVar6 - *(int *)(lVar14 + 0x48)) / 7 + 1;
          }
          else {
            iVar6 = (param_8 - *(int *)(lVar14 + 0x48)) / 7 + 1;
          }
        }
        else {
          iVar6 = *(int *)(lVar14 + 0x4c);
          if (sVar2 == 2) {
            if ((iVar6 < param_8) && (iVar6 != -1)) {
              iVar6 = (iVar6 - *(int *)(lVar14 + 0x48)) / 0x1c + 1;
            }
            else {
              iVar6 = (param_8 - *(int *)(lVar14 + 0x48)) / 0x1c + 1;
            }
          }
          else if ((iVar6 < param_8) && (iVar6 != -1)) {
            iVar6 = (iVar6 - *(int *)(lVar14 + 0x48)) / 0x150 + 1;
          }
          else {
            iVar6 = (param_8 - *(int *)(lVar14 + 0x48)) / 0x150 + 1;
          }
        }
        *(int *)(local_60 + lVar21 * 4) = *(int *)(lVar14 + 0x38) * iVar6;
      }
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  iVar6 = (int)(param_5[1] - *param_5 >> 2) + -1;
  lVar21 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x1600) + lVar21 * 4);
      iVar6 = *(int *)(local_60 + lVar14 * 4);
      if (iVar6 != 0) {
        lVar14 = *(longlong *)(*(longlong *)(lVar17 + 0x15e8) + lVar14 * 8);
        piVar16 = (int *)(*param_5 + lVar21 * 4);
        iVar6 = iVar6 + *piVar16;
        if (iVar6 < *(int *)(lVar14 + 0x40)) {
          iVar6 = *(int *)(lVar14 + 0x40);
        }
        if (*(int *)(lVar14 + 0x44) < iVar6) {
          iVar6 = *(int *)(lVar14 + 0x44);
        }
        *piVar16 = iVar6;
      }
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  FUN_14000bd10(param_6,*(longlong *)(lVar17 + 0x1698) - *(longlong *)(lVar17 + 0x1690) >> 3);
  iVar6 = (int)(param_6[1] - *param_6 >> 2) + -1;
  bVar22 = iVar6 < 0;
  lVar21 = (longlong)iVar6;
LAB_140298023:
  iVar12 = 0;
  iVar11 = 0;
  if (!bVar22) {
    plVar5 = *(longlong **)(*(longlong *)(lVar17 + 0x1690) + lVar21 * 8);
    if (plVar5[1] - *plVar5 >> 2 == 0) {
      *(undefined4 *)(*param_6 + lVar21 * 4) = 0xffffffff;
      goto LAB_14029832f;
    }
    if (param_7 != (longlong *)0x0) {
      sVar2 = *(short *)((longlong)plVar5 + 0x92);
      if (sVar2 == 0) {
        sVar2 = *(short *)(param_7[2] + (longlong)*(int *)((longlong)plVar5 + 0x94) * 2);
        sVar3 = *(short *)(param_7[2] + (longlong)(*(int *)((longlong)plVar5 + 0x94) + 1) * 2);
        uVar7 = FUN_1409fc0c0();
        if (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e
            == 0) {
          *(int *)(*param_6 + lVar21 * 4) = (int)sVar3;
        }
        else {
          *(int *)(*param_6 + lVar21 * 4) = (int)sVar2;
        }
        goto LAB_14029832f;
      }
      if (sVar2 == 1) {
        iVar12 = (int)*(short *)(param_7[2] + (longlong)*(int *)((longlong)plVar5 + 0x94) * 2);
        iVar11 = (int)*(short *)(param_7[2] + (longlong)(*(int *)((longlong)plVar5 + 0x94) + 1) * 2)
        ;
        if (iVar11 < iVar12) {
          iVar12 = iVar11;
        }
        *(int *)(*param_6 + lVar21 * 4) = iVar12;
        goto LAB_14029832f;
      }
      if (sVar2 == 2) {
        iVar12 = (int)*(short *)(param_7[2] + (longlong)*(int *)((longlong)plVar5 + 0x94) * 2);
        iVar11 = (int)*(short *)(param_7[2] + (longlong)(*(int *)((longlong)plVar5 + 0x94) + 1) * 2)
        ;
        if (iVar12 < iVar11) {
          iVar12 = iVar11;
        }
        *(int *)(*param_6 + lVar21 * 4) = iVar12;
        goto LAB_14029832f;
      }
      if (param_9 == (longlong *)0x0) {
        if (plVar5[4] - plVar5[3] >> 2 == 0) goto LAB_140298213;
        uVar9 = FUN_1400b4450(plVar5 + 3);
        iVar12 = FUN_14000d7e0(uVar9);
        piVar16 = (int *)plVar5[3];
        for (piVar10 = piVar16; piVar10 < (int *)plVar5[4]; piVar10 = piVar10 + 1) {
          if (iVar12 < *piVar10) goto LAB_1402981d6;
          iVar12 = iVar12 - *piVar10;
        }
LAB_1402981e5:
        FUN_14014a480("Biased index vector computation error");
        iVar11 = 0;
        goto LAB_1402981f5;
      }
      iVar15 = (int)(param_9[7] - param_9[6] >> 3) + -1;
      if (-1 < iVar15) {
        do {
          iVar13 = iVar15 + iVar12 >> 1;
          piVar16 = *(int **)(param_9[6] + (longlong)iVar13 * 8);
          iVar4 = *piVar16;
          if (iVar4 == (int)plVar5[0x13]) {
            iVar12 = piVar16[1];
            if (-1 < iVar12) {
              iVar15 = (int)(plVar5[4] - plVar5[3] >> 2) + -1;
              lVar14 = (longlong)iVar15;
              if (iVar15 < 0) goto LAB_1402981f5;
              piVar16 = (int *)(plVar5[3] + lVar14 * 4);
              goto LAB_140298110;
            }
            break;
          }
          if ((int)plVar5[0x13] < iVar4) {
            iVar15 = iVar13 + -1;
          }
          else {
            iVar12 = iVar13 + 1;
          }
        } while (iVar12 <= iVar15);
      }
      if (plVar5[4] - plVar5[3] >> 2 != 0) {
        uVar9 = FUN_1400b4450(plVar5 + 3);
        iVar12 = FUN_14000d7e0(uVar9);
        piVar16 = (int *)plVar5[3];
        for (piVar10 = piVar16; piVar10 < (int *)plVar5[4]; piVar10 = piVar10 + 1) {
          if (iVar12 < *piVar10) goto LAB_1402981d6;
          iVar12 = iVar12 - *piVar10;
        }
        goto LAB_1402981e5;
      }
LAB_140298213:
      FUN_14014a480("Empty biased index vector");
      goto LAB_14029821f;
    }
    if (param_9 != (longlong *)0x0) {
      iVar15 = (int)(param_9[7] - param_9[6] >> 3) + -1;
      if (-1 < iVar15) goto LAB_140298370;
      goto LAB_1402983f5;
    }
    if (plVar5[4] - plVar5[3] >> 2 == 0) goto LAB_1402984d1;
    uVar9 = FUN_1400b4450(plVar5 + 3);
    iVar12 = FUN_14000d7e0(uVar9);
    piVar16 = (int *)plVar5[3];
    piVar10 = piVar16;
    goto joined_r0x000140298488;
  }
  goto LAB_140298532;
LAB_1402976a9:
  iVar6 = FUN_14000d7e0((piVar16[2] - piVar16[1]) + 1);
  uVar7 = ((iVar6 + piVar16[1]) * 11999) / 0xff;
LAB_1402977eb:
  lVar19 = *(longlong *)(*(longlong *)(lVar17 + 0x15d0) + lVar18 * 8);
  if ((int)uVar7 < 10000) {
    if ((int)uVar7 < 8000) {
      if ((int)uVar7 < 6000) {
        if ((int)uVar7 < 4000) {
          if ((int)uVar7 < 2000) {
            iVar12 = (1999 - uVar7) * *(int *)(lVar19 + 8);
            iVar6 = *(int *)(lVar19 + 4) * uVar7;
          }
          else {
            iVar12 = (3999 - uVar7) * *(int *)(lVar19 + 0xc);
            iVar6 = (uVar7 - 2000) * *(int *)(lVar19 + 8);
          }
        }
        else {
          iVar12 = (uVar7 - 4000) * *(int *)(lVar19 + 0xc);
          iVar6 = (5999 - uVar7) * *(int *)(lVar19 + 0x10);
        }
      }
      else {
        iVar12 = (uVar7 - 6000) * *(int *)(lVar19 + 0x10);
        iVar6 = (7999 - uVar7) * *(int *)(lVar19 + 0x14);
      }
    }
    else {
      iVar12 = (uVar7 - 8000) * *(int *)(lVar19 + 0x14);
      iVar6 = (9999 - uVar7) * *(int *)(lVar19 + 0x18);
    }
  }
  else {
    iVar12 = (uVar7 - 10000) * *(int *)(lVar19 + 0x18);
    iVar6 = (11999 - uVar7) * *(int *)(lVar19 + 0x1c);
  }
  *(int *)(*param_4 + lVar18 * 4) = (iVar12 + iVar6) / 1999;
  lVar18 = lVar18 + -1;
  if (lVar18 < 0) goto LAB_1402978d4;
  goto LAB_140297620;
LAB_1402979b9:
  iVar6 = FUN_14000d7e0((piVar16[2] - piVar16[1]) + 1);
  iVar6 = (iVar6 + piVar16[1]) * 11999;
LAB_1402979cf:
  iVar6 = (int)((ulonglong)((longlong)iVar6 * 0x80808081) >> 0x20);
LAB_1402979d8:
  uVar7 = (iVar6 >> 7) - (iVar6 >> 0x1f);
LAB_140297ae3:
  *(uint *)(lVar18 + lVar19 * 4) = uVar7;
  lVar19 = lVar19 + -1;
  if (lVar19 < 0) goto LAB_140297af9;
  goto LAB_140297925;
  while( true ) {
    iVar12 = iVar12 - *piVar16;
    iVar15 = iVar15 + -1;
    piVar16 = piVar16 + -1;
    lVar14 = lVar14 + -1;
    if (lVar14 < 0) break;
LAB_140298110:
    if (iVar12 < *piVar16) goto LAB_1402981df;
  }
LAB_1402981f5:
  if ((ulonglong)(longlong)iVar11 < (ulonglong)(plVar5[1] - *plVar5 >> 2)) {
    *(int *)(*param_6 + lVar21 * 4) = iVar11;
    goto LAB_14029832f;
  }
  goto LAB_14029821f;
LAB_1402981d6:
  iVar15 = (int)((longlong)piVar10 - (longlong)piVar16 >> 2);
LAB_1402981df:
  iVar11 = iVar15;
  if (-1 < iVar11) goto LAB_1402981f5;
LAB_14029821f:
  uVar20 = plVar5[1] - *plVar5 >> 2;
  if ((uint)uVar20 < 2) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1409fc0c0();
    uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar20 & 0xffffffff)) + 1U);
  }
  *(uint *)(*param_6 + lVar21 * 4) = uVar7;
LAB_14029832f:
  iVar6 = iVar6 + -1;
  lVar21 = lVar21 + -1;
  bVar22 = lVar21 < 0;
  goto LAB_140298023;
  while( true ) {
    if ((int)plVar5[0x13] < iVar4) {
      iVar15 = iVar13 + -1;
    }
    else {
      iVar12 = iVar13 + 1;
    }
    if (iVar15 < iVar12) break;
LAB_140298370:
    iVar13 = iVar15 + iVar12 >> 1;
    piVar16 = *(int **)(param_9[6] + (longlong)iVar13 * 8);
    iVar4 = *piVar16;
    if (iVar4 == (int)plVar5[0x13]) {
      iVar12 = piVar16[1];
      if (-1 < iVar12) {
        iVar15 = (int)(plVar5[4] - plVar5[3] >> 2) + -1;
        lVar17 = (longlong)iVar15;
        if (iVar15 < 0) goto LAB_1402984b3;
        piVar16 = (int *)(plVar5[3] + lVar17 * 4);
        goto LAB_1402983d0;
      }
      break;
    }
  }
LAB_1402983f5:
  if (plVar5[4] - plVar5[3] >> 2 == 0) {
LAB_1402984d1:
    FUN_14014a480("Empty biased index vector");
    goto LAB_1402984df;
  }
  uVar9 = FUN_1400b4450(plVar5 + 3);
  iVar12 = FUN_14000d7e0(uVar9);
  piVar16 = (int *)plVar5[3];
  for (piVar10 = piVar16; piVar10 < (int *)plVar5[4]; piVar10 = piVar10 + 1) {
    if (iVar12 < *piVar10) goto LAB_1402984a6;
    iVar12 = iVar12 - *piVar10;
  }
LAB_140298444:
  FUN_14014a480("Biased index vector computation error");
  iVar11 = 0;
  goto LAB_1402984b3;
joined_r0x000140298488:
  if ((int *)plVar5[4] <= piVar10) goto LAB_140298444;
  if (iVar12 < *piVar10) goto LAB_1402984a6;
  iVar12 = iVar12 - *piVar10;
  piVar10 = piVar10 + 1;
  goto joined_r0x000140298488;
LAB_1402984a6:
  iVar15 = (int)((longlong)piVar10 - (longlong)piVar16 >> 2);
LAB_1402984ad:
  iVar11 = iVar15;
  if (-1 < iVar11) goto LAB_1402984b3;
  goto LAB_1402984df;
  while( true ) {
    iVar12 = iVar12 - *piVar16;
    iVar15 = iVar15 + -1;
    piVar16 = piVar16 + -1;
    lVar17 = lVar17 + -1;
    if (lVar17 < 0) break;
LAB_1402983d0:
    if (iVar12 < *piVar16) goto LAB_1402984ad;
  }
LAB_1402984b3:
  if ((ulonglong)(longlong)iVar11 < (ulonglong)(plVar5[1] - *plVar5 >> 2)) {
    *(int *)(*param_6 + (longlong)iVar6 * 4) = iVar11;
  }
  else {
LAB_1402984df:
    uVar7 = 0;
    uVar20 = plVar5[1] - *plVar5 >> 2;
    if (1 < (uint)uVar20) {
      uVar7 = FUN_1409fc0c0();
      uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              ((int)(0x7fffffff / (uVar20 & 0xffffffff)) + 1U);
    }
    *(uint *)(*param_6 + (longlong)iVar6 * 4) = uVar7;
  }
LAB_140298532:
  if (lVar19 != 0) {
    FUN_140002020(lVar19,local_50 - lVar19 >> 2,4);
  }
  if (lVar18 != 0) {
    FUN_140002020(lVar18,local_38 - lVar18 >> 2,4);
  }
  return;
}

