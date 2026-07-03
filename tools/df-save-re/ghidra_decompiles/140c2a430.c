// FUN_140c2a430 @ 140c2a430
// callees:
//   -> 140802a10 FUN_140802a10
//   -> 140c840a0 FUN_140c840a0
//   -> 140803010 FUN_140803010
//   -> 140c62080 FUN_140c62080
//   -> 140c745d0 FUN_140c745d0
//   -> 140cec410 FUN_140cec410
//   -> 140cec360 FUN_140cec360


void FUN_140c2a430(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,char param_5)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  int *piVar4;
  char cVar5;
  short sVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  
  FUN_140802a10(param_2);
  puVar3 = *(undefined8 **)(param_1 + 0x7b8);
  for (puVar14 = *(undefined8 **)(param_1 + 0x7b0); puVar14 < puVar3; puVar14 = puVar14 + 1) {
    piVar4 = (int *)*puVar14;
    iVar15 = *piVar4;
    if (iVar15 == 1) {
      if (piVar4[3] == -1) {
        bVar20 = piVar4[9] == *(int *)((longlong)param_2 + 0x1c);
      }
      else {
        bVar20 = piVar4[5] == *(int *)((longlong)param_2 + 0x1c);
      }
LAB_140c2a4a4:
      if (bVar20) {
        *piVar4 = -1;
      }
    }
    else {
      if ((iVar15 == 9) || (iVar15 == 10)) {
        bVar20 = piVar4[4] == *(int *)((longlong)param_2 + 0x1c);
        goto LAB_140c2a4a4;
      }
      if (iVar15 == 0xc) {
        bVar20 = piVar4[3] == *(int *)((longlong)param_2 + 0x1c);
        goto LAB_140c2a4a4;
      }
    }
  }
  iVar15 = (int)(*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3) + -1;
  if (-1 < iVar15) {
    lVar19 = (longlong)iVar15 * 8;
    do {
      piVar4 = *(int **)(lVar19 + *(longlong *)(param_1 + 0xaf8));
      if (piVar4[5] == *(int *)((longlong)param_2 + 0x1c)) {
        iVar12 = *piVar4;
        iVar13 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
        if ((iVar13 != 0) && (iVar12 != -1)) {
          iVar13 = iVar13 + -1;
          iVar17 = 0;
          if (-1 < iVar13) {
            do {
              iVar11 = iVar17 + iVar13 >> 1;
              lVar8 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar11 * 8);
              if (*(int *)(lVar8 + 0x130) == iVar12) {
                if ((lVar8 != 0) &&
                   (iVar13 = (int)(*(longlong *)(lVar8 + 0xb00) - *(longlong *)(lVar8 + 0xaf8) >> 3)
                             + -1, -1 < iVar13)) {
                  lVar10 = (longlong)iVar13 * 8;
                  do {
                    piVar4 = *(int **)(lVar10 + *(longlong *)(lVar8 + 0xaf8));
                    if ((*piVar4 == *(int *)(param_1 + 0x130)) &&
                       (piVar4[6] == *(int *)((longlong)param_2 + 0x1c))) {
                      FUN_140c840a0(lVar8,iVar13);
                    }
                    lVar10 = lVar10 + -8;
                    iVar13 = iVar13 + -1;
                  } while (-1 < iVar13);
                }
                break;
              }
              if (iVar12 < *(int *)(lVar8 + 0x130)) {
                iVar13 = iVar11 + -1;
              }
              else {
                iVar17 = iVar11 + 1;
              }
            } while (iVar17 <= iVar13);
          }
        }
        FUN_140c840a0(param_1,iVar15);
      }
      lVar19 = lVar19 + -8;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  if (param_5 == '\0') {
    return;
  }
  if (DAT_1410b67dc == 0) {
    sVar6 = (**(code **)*param_2)(param_2);
    if ((((sVar6 == 0x11) || (sVar6 = (**(code **)*param_2)(param_2), sVar6 == 0xb)) ||
        (sVar6 = (**(code **)*param_2)(param_2), sVar6 == 0x1e)) ||
       (((sVar6 = (**(code **)*param_2)(param_2), sVar6 == 0x10 ||
         (sVar6 = (**(code **)*param_2)(param_2), sVar6 == 0x1f)) ||
        ((sVar6 = (**(code **)*param_2)(param_2), sVar6 == 0x13 ||
         ((sVar6 = (**(code **)*param_2)(param_2), sVar6 == 0x12 ||
          (sVar6 = (**(code **)*param_2)(param_2), sVar6 == 0x55)))))))) {
      sVar6 = (**(code **)*param_2)(param_2);
      if ((sVar6 == 0x13) &&
         (((*(byte *)(param_2 + 2) & 0x40) != 0 &&
          (iVar15 = (int)(param_2[8] - param_2[7] >> 3) + -1, lVar19 = (longlong)iVar15, -1 < iVar15
          )))) {
        do {
          iVar15 = (**(code **)(**(longlong **)(param_2[7] + lVar19 * 8) + 0x10))();
          if ((iVar15 == 10) &&
             ((plVar7 = (longlong *)(**(code **)(**(longlong **)(param_2[7] + lVar19 * 8) + 0x18))()
              , plVar7 != (longlong *)0x0 &&
              (cVar5 = (**(code **)(*plVar7 + 0x2a8))(plVar7), cVar5 == '\0')))) {
            FUN_140802a10(plVar7);
            sVar6 = *(short *)(param_1 + 0xac);
            sVar1 = *(short *)(param_1 + 0xaa);
            sVar2 = *(short *)(param_1 + 0xa8);
            iVar15 = (int)(plVar7[8] - plVar7[7] >> 3) + -1;
            lVar8 = (longlong)iVar15;
            if (-1 < iVar15) {
              do {
                iVar15 = (**(code **)(**(longlong **)(plVar7[7] + lVar8 * 8) + 0x10))();
                lVar10 = **(longlong **)(plVar7[7] + lVar8 * 8);
                if (iVar15 == 10) {
                  plVar9 = (longlong *)(**(code **)(lVar10 + 0x18))();
                  if (plVar9 != (longlong *)0x0) {
                    FUN_140802a10(plVar9);
                    FUN_140803010(plVar9,sVar2,sVar1,sVar6,1,0);
                    (**(code **)(*plVar9 + 0x310))(plVar9,(int)sVar2,(int)sVar1,(int)sVar6);
                  }
                }
                else {
                  iVar15 = (**(code **)(lVar10 + 0x10))();
                  if ((iVar15 == 9) &&
                     (lVar10 = (**(code **)(**(longlong **)(plVar7[7] + lVar8 * 8) + 0x20))(),
                     lVar10 != 0)) {
                    FUN_140c62080(lVar10);
                    FUN_140c745d0(lVar10,(int)sVar2,(int)sVar1,(int)sVar6);
                  }
                }
                lVar8 = lVar8 + -1;
              } while (-1 < lVar8);
            }
            (**(code **)(*plVar7 + 0x310))
                      (plVar7,(int)*(short *)(param_1 + 0xa8),(int)*(short *)(param_1 + 0xaa),
                       (int)*(short *)(param_1 + 0xac));
          }
          lVar19 = lVar19 + -1;
        } while (-1 < lVar19);
      }
    }
    else {
      sVar6 = *(short *)(param_1 + 0xac);
      sVar1 = *(short *)(param_1 + 0xaa);
      sVar2 = *(short *)(param_1 + 0xa8);
      iVar15 = (int)(param_2[8] - param_2[7] >> 3) + -1;
      lVar19 = (longlong)iVar15;
      if (-1 < iVar15) {
        do {
          iVar15 = (**(code **)(**(longlong **)(param_2[7] + lVar19 * 8) + 0x10))();
          lVar8 = **(longlong **)(param_2[7] + lVar19 * 8);
          if (iVar15 == 10) {
            plVar7 = (longlong *)(**(code **)(lVar8 + 0x18))();
            if (plVar7 != (longlong *)0x0) {
              FUN_140802a10(plVar7);
              FUN_140803010(plVar7,sVar2,sVar1,sVar6,1,0);
              (**(code **)(*plVar7 + 0x310))(plVar7,(int)sVar2,(int)sVar1,(int)sVar6);
            }
          }
          else {
            iVar15 = (**(code **)(lVar8 + 0x10))();
            if ((iVar15 == 9) &&
               (lVar8 = (**(code **)(**(longlong **)(param_2[7] + lVar19 * 8) + 0x20))(), lVar8 != 0
               )) {
              FUN_140c62080(lVar8);
              FUN_140c745d0(lVar8,(int)sVar2,(int)sVar1,(int)sVar6);
            }
          }
          lVar19 = lVar19 + -1;
        } while (-1 < lVar19);
      }
    }
  }
  iVar15 = (**(code **)(*param_2 + 0xa8))(param_2);
  uVar18 = 0;
  if ((iVar15 != -1) &&
     (iVar13 = (int)(DAT_141d69210 - DAT_141d69208 >> 3) + -1, uVar16 = uVar18, -1 < iVar13)) {
    do {
      iVar12 = iVar13 + (int)uVar16 >> 1;
      piVar4 = *(int **)(DAT_141d69208 + (longlong)iVar12 * 8);
      if (*piVar4 == iVar15) {
        if (piVar4 != (int *)0x0) {
          piVar4[2] = 0;
          piVar4[3] = 0;
          piVar4[4] = 0;
          piVar4[5] = 0;
          piVar4[6] = 0;
          piVar4[7] = 0;
          piVar4[8] = 0;
          piVar4[9] = 0;
          piVar4[10] = 0;
        }
        break;
      }
      if (iVar15 < *piVar4) {
        iVar13 = iVar12 + -1;
      }
      else {
        uVar16 = (ulonglong)(iVar12 + 1);
      }
    } while ((int)uVar16 <= iVar13);
  }
  if (param_3 == '\0') {
    return;
  }
  iVar15 = (int)(param_2[8] - param_2[7] >> 3) + -1;
  lVar19 = (longlong)iVar15;
  if (-1 < iVar15) {
    do {
      iVar15 = (**(code **)(**(longlong **)(param_2[7] + lVar19 * 8) + 0x10))();
      if ((iVar15 == 0x12) &&
         (iVar15 = (**(code **)(**(longlong **)(param_2[7] + lVar19 * 8) + 0x60))(),
         iVar15 != *(int *)(param_1 + 0x130))) {
        if (((*(uint *)(param_2 + 2) & 0x40000) == 0) &&
           ((*(byte *)((longlong)param_2 + 0x14) & 0x20) == 0)) {
          return;
        }
        puVar14 = (undefined8 *)param_2[7];
        puVar3 = (undefined8 *)param_2[8];
        uVar16 = uVar18;
        if (puVar3 <= puVar14) {
          return;
        }
        goto LAB_140c2aa52;
      }
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  (**(code **)(*param_2 + 0x310))
            (param_2,(int)*(short *)(param_1 + 0xa8),(int)*(short *)(param_1 + 0xaa),
             (int)*(short *)(param_1 + 0xac));
  return;
  while (puVar14 = puVar14 + 1, puVar14 < puVar3) {
LAB_140c2aa52:
    iVar15 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
    if ((((iVar15 == 0x12) &&
         (iVar15 = (**(code **)(*(longlong *)*puVar14 + 0x60))(),
         iVar15 != *(int *)(param_1 + 0x130))) &&
        (iVar13 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3), uVar16 = uVar18, iVar13 != 0)) &&
       (iVar15 != -1)) {
      iVar13 = iVar13 + -1;
      iVar12 = 0;
      if (-1 < iVar13) {
        do {
          iVar11 = iVar12 + iVar13 >> 1;
          uVar16 = *(ulonglong *)(DAT_141c66fd0 + (longlong)iVar11 * 8);
          iVar17 = *(int *)(uVar16 + 0x130);
          if (iVar17 == iVar15) break;
          if (iVar15 < iVar17) {
            iVar13 = iVar11 + -1;
          }
          else {
            iVar12 = iVar11 + 1;
          }
          uVar16 = uVar18;
        } while (iVar12 <= iVar13);
      }
      if (uVar16 != 0) goto LAB_140c2aaeb;
    }
  }
  if (uVar16 != 0) {
LAB_140c2aaeb:
    if ((*(uint *)(param_2 + 2) & 0x40000) != 0) {
      FUN_140cec410(uVar16,param_2);
    }
    if ((*(byte *)((longlong)param_2 + 0x14) & 0x20) != 0) {
      FUN_140cec360(uVar16,param_2);
    }
  }
  return;
}

