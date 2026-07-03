// FUN_1405409b0 @ 1405409b0
// callees:
//   -> 1407b6ae0 FUN_1407b6ae0
//   -> 140004650 FUN_140004650
//   -> 1400511c0 FUN_1400511c0
//   -> 140050d30 FUN_140050d30
//   -> 14073eb00 FUN_14073eb00
//   -> 140019a10 FUN_140019a10
//   -> 140769060 FUN_140769060
//   -> 14000d840 FUN_14000d840
//   -> 1400199b0 FUN_1400199b0


void FUN_1405409b0(ushort *param_1,int *param_2,int *param_3,int *param_4,longlong param_5)

{
  ushort uVar1;
  short sVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  short *psVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  
  switch(param_2[1]) {
  case 0:
    cVar8 = FUN_1407b6ae0(param_5,param_2 + 0x1c);
    if (((cVar8 != '\0') && (param_2[0xc] != -1)) &&
       (lVar11 = FUN_140004650(&DAT_141d7a048), lVar11 != 0)) {
      uVar1 = *param_1;
      iVar10 = FUN_140769060(lVar11,0,0xffffffff,0xffffffff,0);
      if (iVar10 < 25000) {
        if (iVar10 < 15000) {
          if (iVar10 < 3000) {
            iVar16 = 1;
            if (299 < iVar10) {
              iVar16 = 10;
            }
          }
          else {
            iVar16 = 0x19;
          }
        }
        else {
          iVar16 = 0x32;
        }
      }
      else {
        iVar16 = 100;
      }
      lVar12 = *(longlong *)(lVar11 + 0x130);
      if (((lVar12 == 0) || (*(longlong *)(lVar12 + 0x48) == 0)) ||
         (*(longlong *)(*(longlong *)(lVar12 + 0x48) + 0x130) == 0)) {
        sVar9 = *(short *)(lVar11 + 2);
        sVar2 = *(short *)(lVar11 + 4);
        if (((sVar9 < 0) ||
            ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar9)) ||
           (sVar2 < 0)) {
LAB_1405413eb:
          if (((lVar12 == 0) ||
              ((lVar12 = *(longlong *)(lVar12 + 0x48), lVar12 == 0 ||
               ((*(uint *)(lVar12 + 0x4c) & 0x2000000) != 0)))) ||
             ((*(uint *)(lVar12 + 0x48) & 0x2000000) == 0)) goto LAB_1405412f1;
        }
        else {
          lVar6 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar9 * 8);
          if (((ulonglong)(*(longlong *)(lVar6 + 0x180) - *(longlong *)(lVar6 + 0x178) >> 3) <=
               (ulonglong)(longlong)sVar2) ||
             (cVar8 = FUN_14000d840(*(longlong *)
                                     (*(longlong *)(lVar6 + 0x178) + (longlong)sVar2 * 8) + 0x6a8,
                                    0x3a), cVar8 == '\0')) goto LAB_1405413eb;
          if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0x48) != 0)) &&
             ((*(uint *)(*(longlong *)(lVar12 + 0x48) + 0x4c) & 0x2000000) != 0))
          goto LAB_1405412f1;
        }
        param_3[8] = param_3[8] + 1;
        if (param_4[8] == -1) {
          param_4[8] = *param_2;
        }
      }
      else {
LAB_1405412f1:
        param_3[0x19] = param_3[0x19] + iVar16;
        if (param_4[0x19] == -1) {
          param_4[0x19] = *param_2;
        }
      }
      lVar6 = DAT_141d6dd58;
      lVar12 = DAT_141d6dd50;
      sVar9 = *(short *)(lVar11 + 2);
      sVar2 = *(short *)(lVar11 + 4);
      if (-1 < sVar9) {
        if (((ulonglong)(longlong)sVar9 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
           (-1 < sVar2)) {
          lVar7 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar9 * 8);
          if (((ulonglong)(*(longlong *)(lVar7 + 0x180) - *(longlong *)(lVar7 + 0x178) >> 3) <=
               (ulonglong)(longlong)sVar2) ||
             (cVar8 = FUN_14000d840(*(longlong *)
                                     (*(longlong *)(lVar7 + 0x178) + (longlong)sVar2 * 8) + 0x6a8,
                                    0x6e), cVar8 == '\0')) goto LAB_140541379;
LAB_1405413e2:
          *param_3 = *param_3 + 100;
LAB_1405414f8:
          if (*param_4 == -1) {
            *param_4 = *param_2;
          }
        }
        else {
LAB_140541379:
          if (-1 < sVar9) {
            if (((ulonglong)(longlong)sVar9 < (ulonglong)(lVar6 - lVar12 >> 3)) && (-1 < sVar2)) {
              lVar7 = *(longlong *)(lVar12 + (longlong)sVar9 * 8);
              if (((ulonglong)(longlong)sVar2 <
                   (ulonglong)(*(longlong *)(lVar7 + 0x180) - *(longlong *)(lVar7 + 0x178) >> 3)) &&
                 (cVar8 = FUN_14000d840(*(longlong *)
                                         (*(longlong *)(lVar7 + 0x178) + (longlong)sVar2 * 8) +
                                        0x6a8,0x84), cVar8 != '\0')) goto LAB_1405413e2;
            }
            if (-1 < sVar9) {
              if (((ulonglong)(longlong)sVar9 < (ulonglong)(lVar6 - lVar12 >> 3)) && (-1 < sVar2)) {
                lVar7 = *(longlong *)(lVar12 + (longlong)sVar9 * 8);
                if (((ulonglong)(longlong)sVar2 <
                     (ulonglong)(*(longlong *)(lVar7 + 0x180) - *(longlong *)(lVar7 + 0x178) >> 3))
                   && (cVar8 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar7 + 0x178) + (longlong)sVar2 * 8) +
                                             0x6a8,0x6f), cVar8 != '\0')) {
                  *param_3 = *param_3 + 0x19;
                  goto LAB_1405414f8;
                }
              }
              if (((-1 < sVar9) && ((ulonglong)(longlong)sVar9 < (ulonglong)(lVar6 - lVar12 >> 3)))
                 && (-1 < sVar2)) {
                lVar12 = *(longlong *)(lVar12 + (longlong)sVar9 * 8);
                if (((ulonglong)(longlong)sVar2 <
                     (ulonglong)(*(longlong *)(lVar12 + 0x180) - *(longlong *)(lVar12 + 0x178) >> 3)
                    ) && (cVar8 = FUN_14000d840(*(longlong *)
                                                 (*(longlong *)(lVar12 + 0x178) +
                                                 (longlong)sVar2 * 8) + 0x6a8,0x8f), cVar8 != '\0'))
                {
                  *param_3 = *param_3 + 10;
                  goto LAB_1405414f8;
                }
              }
            }
          }
        }
      }
      plVar3 = *(longlong **)(lVar11 + 0xf0);
      for (plVar15 = *(longlong **)(lVar11 + 0xe8); plVar15 < plVar3; plVar15 = plVar15 + 1) {
        sVar9 = (*(code *)**(undefined8 **)*plVar15)();
        if (sVar9 == 0) {
          if (((uVar1 < 2) &&
              (psVar13 = (short *)FUN_1400199b0(&DAT_141c53718,*(undefined4 *)(*plVar15 + 8)),
              psVar13 != (short *)0x0)) && (((*psVar13 - 3U & 0xfffa) == 0 && (*psVar13 != 8)))) {
            for (plVar17 = *(longlong **)(psVar13 + 100); plVar17 < *(longlong **)(psVar13 + 0x68);
                plVar17 = plVar17 + 1) {
              if ((*(byte *)(*plVar17 + 0x18) & 0x80) != 0) {
                param_3[0x1a] = param_3[0x1a] + 1;
                goto LAB_140541607;
              }
            }
          }
        }
        else if (sVar9 == 8) {
          if ((*(int *)(*plVar15 + 8) == *(int *)(param_1 + 2)) &&
             (*param_3 = *param_3 + iVar16, *param_4 == -1)) {
            *param_4 = *param_2;
          }
        }
        else if (sVar9 == 9) {
          if (*(int *)(*plVar15 + 8) == *(int *)(param_1 + 2)) {
            param_3[0x1a] = param_3[0x1a] + iVar16;
LAB_140541607:
            if (param_4[0x1a] == -1) {
              param_4[0x1a] = *param_2;
            }
          }
        }
        else if ((((sVar9 == 10) || (sVar9 == 0xd)) &&
                 (*(int *)(*plVar15 + 8) == *(int *)(param_1 + 2))) &&
                (param_3[0xd] = param_3[0xd] + 1, param_4[0xd] == -1)) {
          param_4[0xd] = *param_2;
        }
      }
    }
    break;
  case 1:
  case 5:
  case 8:
    break;
  case 2:
  case 3:
    cVar8 = FUN_1407b6ae0(param_5,param_2 + 0x1c);
    if (((cVar8 != '\0') && (param_2[0xc] != -1)) &&
       (lVar11 = FUN_140004650(&DAT_141d7a048), lVar11 != 0)) {
      plVar15 = *(longlong **)(lVar11 + 0xe8);
      uVar19 = 0;
      uVar20 = (ulonglong)((longlong)*(longlong **)(lVar11 + 0xf0) + (7 - (longlong)plVar15)) >> 3;
      if (*(longlong **)(lVar11 + 0xf0) < plVar15) {
        uVar20 = uVar19;
      }
      if (uVar20 != 0) {
        do {
          if ((*(int *)((undefined8 *)*plVar15 + 1) == *(int *)(param_1 + 2)) &&
             (((sVar9 = (*(code *)**(undefined8 **)*plVar15)(), sVar9 == 10 || (sVar9 == 0xd)) &&
              (param_3[0xd] = param_3[0xd] + 1, param_4[0xd] == -1)))) {
            param_4[0xd] = *param_2;
          }
          plVar15 = plVar15 + 1;
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar20);
      }
    }
    break;
  case 4:
    cVar8 = FUN_1407b6ae0(param_5,param_2 + 0x2a);
    if (cVar8 != '\0') {
      lVar11 = FUN_140004650(&DAT_141d7a048,param_2[0x1c]);
      lVar12 = FUN_140004650(&DAT_141d7a048,param_2[0xc]);
      uVar20 = 0;
      if (lVar11 != 0) {
        plVar15 = *(longlong **)(lVar11 + 0xe8);
        uVar19 = (ulonglong)((longlong)*(longlong **)(lVar11 + 0xf0) + (7 - (longlong)plVar15)) >> 3
        ;
        if (*(longlong **)(lVar11 + 0xf0) < plVar15) {
          uVar19 = uVar20;
        }
        uVar22 = uVar20;
        if (uVar19 != 0) {
          do {
            if ((*(int *)((undefined8 *)*plVar15 + 1) == *(int *)(param_1 + 2)) &&
               (((sVar9 = (*(code *)**(undefined8 **)*plVar15)(), sVar9 == 10 || (sVar9 == 0xd)) &&
                (*param_3 = *param_3 + 0x19, *param_4 == -1)))) {
              *param_4 = *param_2;
            }
            plVar15 = plVar15 + 1;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar19);
        }
      }
      if (lVar12 != 0) {
        plVar15 = *(longlong **)(lVar12 + 0xe8);
        uVar19 = (ulonglong)((longlong)*(longlong **)(lVar12 + 0xf0) + (7 - (longlong)plVar15)) >> 3
        ;
        if (*(longlong **)(lVar12 + 0xf0) < plVar15) {
          uVar19 = uVar20;
        }
        if (uVar19 != 0) {
          do {
            if (((*(int *)((undefined8 *)*plVar15 + 1) == *(int *)(param_1 + 2)) &&
                ((sVar9 = (*(code *)**(undefined8 **)*plVar15)(), sVar9 == 10 || (sVar9 == 0xd))))
               && (*param_3 = *param_3 + 0x19, *param_4 == -1)) {
              *param_4 = *param_2;
            }
            plVar15 = plVar15 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar19);
        }
      }
    }
    break;
  case 6:
    lVar11 = *(longlong *)(param_2 + 0x44);
    if (lVar11 != 0) {
      plVar3 = *(longlong **)(lVar11 + 0x10);
      for (plVar15 = *(longlong **)(lVar11 + 8); plVar15 < plVar3; plVar15 = plVar15 + 1) {
        cVar8 = FUN_1407b6ae0(param_5,*plVar15 + 8);
        if (cVar8 != '\0') {
          switch(*(undefined4 *)*plVar15) {
          case 0:
            param_3 = param_3 + 0x13;
            param_4 = param_4 + 0x13;
            break;
          case 1:
            param_3 = param_3 + 0x14;
            param_4 = param_4 + 0x14;
            break;
          case 2:
            param_3 = param_3 + 0x15;
            param_4 = param_4 + 0x15;
            break;
          case 3:
            param_3 = param_3 + 0x16;
            param_4 = param_4 + 0x16;
            break;
          case 4:
          case 5:
          case 6:
          case 7:
            param_3 = param_3 + 0x20;
            param_4 = param_4 + 0x20;
            break;
          default:
            goto switchD_1405409f8_caseD_1;
          }
          if (param_3 != (int *)0x0) {
            iVar10 = ((undefined4 *)*plVar15)[0xc] * 2;
            if (iVar10 < 0) {
              iVar10 = 0;
            }
            else if (100 < iVar10) {
              iVar10 = 100;
            }
            if ((*param_3 < iVar10) && (*param_3 = iVar10, *param_4 == -1)) {
              *param_4 = *param_2;
            }
          }
          break;
        }
      }
    }
    break;
  case 7:
    piVar4 = *(int **)(param_2 + 0x44);
    cVar8 = FUN_1407b6ae0(param_5,piVar4 + 2);
    if (cVar8 != '\0') {
      iVar10 = *piVar4;
      if (iVar10 == 1) {
        if ((((piVar4[0x16] != -1) && (lVar11 = FUN_140019a10(DAT_141d6cfd0), lVar11 != 0)) &&
            (iVar10 = piVar4[0x20], iVar10 != -1)) &&
           ((lVar11 = FUN_1400511c0(piVar4[1],param_1 + 0x984), lVar11 != 0 &&
            (*(int *)(lVar11 + 0x14) == -1)))) {
          if (iVar10 == *(int *)(param_1 + 2)) {
LAB_14054101c:
            if (((*(longlong *)(param_5 + 8) == 0) ||
                (sVar9 = FUN_14073eb00(*(longlong *)(param_5 + 8),0), sVar9 == 0)) &&
               (param_3[0x1b] = param_3[0x1b] + 0x32, param_4[0x1b] == -1)) {
              param_4[0x1b] = *param_2;
            }
          }
          else if (*param_1 == 0) {
            for (puVar18 = *(undefined8 **)(param_1 + 0x58);
                puVar18 < *(undefined8 **)(param_1 + 0x5c); puVar18 = puVar18 + 1) {
              if ((*(int *)((short *)*puVar18 + 2) == iVar10) && (*(short *)*puVar18 == 1))
              goto LAB_14054101c;
            }
          }
        }
      }
      else if (iVar10 == 2) {
        if ((((piVar4[0x16] != -1) && (lVar11 = FUN_140019a10(DAT_141d6cfd0), lVar11 != 0)) &&
            (iVar10 = piVar4[0x20], iVar10 != -1)) &&
           ((lVar11 = FUN_1400511c0(piVar4[1],param_1 + 0x984), lVar11 != 0 &&
            (*(int *)(lVar11 + 0x14) == -1)))) {
          if (iVar10 == *(int *)(param_1 + 2)) {
LAB_140540f4c:
            if (((*(longlong *)(param_5 + 8) == 0) ||
                (sVar9 = FUN_14073eb00(*(longlong *)(param_5 + 8),0), sVar9 == 0)) &&
               (param_3[0x1c] = param_3[0x1c] + 0x32, param_4[0x1c] == -1)) {
              param_4[0x1c] = *param_2;
            }
          }
          else if (*param_1 == 0) {
            for (puVar18 = *(undefined8 **)(param_1 + 0x58);
                puVar18 < *(undefined8 **)(param_1 + 0x5c); puVar18 = puVar18 + 1) {
              if ((*(int *)((short *)*puVar18 + 2) == iVar10) && (*(short *)*puVar18 == 1))
              goto LAB_140540f4c;
            }
          }
        }
      }
      else if (iVar10 == 3) {
        lVar11 = FUN_1400511c0(piVar4[1],param_1 + 0x984);
        if ((((lVar11 != 0) && (*(int *)(lVar11 + 0x14) == -1)) &&
            (lVar11 = FUN_140004650(&DAT_141d7a048,piVar4[0xc]), lVar11 != 0)) &&
           ((sVar9 = FUN_14073eb00(lVar11,0,*(undefined4 *)(param_1 + 2)), 0 < sVar9 &&
            (param_3[0x1b] = param_3[0x1b] + 0x32, param_4[0x1b] == -1)))) {
          param_4[0x1b] = *param_2;
        }
      }
      else if (((iVar10 == 4) && (lVar11 = FUN_1400511c0(piVar4[1],param_1 + 0x984), lVar11 != 0))
              && ((*(int *)(lVar11 + 0x14) == -1 &&
                  ((iVar10 = FUN_140050d30(*(undefined4 *)(param_1 + 2),piVar4 + 0x1a), iVar10 != -1
                   && (param_3[0x1c] = param_3[0x1c] + 0x32, param_4[0x1c] == -1)))))) {
        param_4[0x1c] = *param_2;
      }
    }
    break;
  case 9:
    iVar10 = *(int *)(param_1 + 2);
    if (((param_2[0x18] == iVar10) &&
        (plVar15 = *(longlong **)(param_2 + 0x44), plVar15 != (longlong *)0x0)) &&
       ((plVar15[1] - *plVar15 & 0xfffffffffffffff8U) != 0)) {
      plVar3 = (longlong *)plVar15[1];
      plVar15 = (longlong *)*plVar15;
      for (plVar17 = plVar15; plVar17 < plVar3; plVar17 = plVar17 + 1) {
        cVar8 = FUN_1407b6ae0(param_5,*plVar17);
        if (cVar8 != '\0') {
          lVar11 = *plVar15;
          if (*(int *)(lVar11 + 8) == -1) {
            if (*(longlong *)(lVar11 + 0x18) - *(longlong *)(lVar11 + 0x10) >> 2 == 0)
            goto LAB_140540b8c;
            iVar21 = 0;
            iVar16 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
            if (-1 < iVar16) goto LAB_140540b10;
            goto LAB_140540b8c;
          }
          lVar11 = FUN_140004650(&DAT_141d7a048);
          if (lVar11 == 0) goto LAB_140540b8c;
          plVar15 = *(longlong **)(lVar11 + 0xe8);
          if (*(longlong **)(lVar11 + 0xf0) <= plVar15) goto LAB_140540b8c;
          goto LAB_140540ab0;
        }
      }
    }
    break;
  case 10:
    if ((param_2[0x18] == *(int *)(param_1 + 2)) &&
       (puVar5 = *(ulonglong **)(param_2 + 0x44), puVar5 != (ulonglong *)0x0)) {
      puVar18 = (undefined8 *)*puVar5;
      uVar19 = 0;
      uVar20 = (ulonglong)((longlong)puVar5[1] + (7 - (longlong)puVar18)) >> 3;
      if ((undefined8 *)puVar5[1] < puVar18) {
        uVar20 = uVar19;
      }
      if (uVar20 != 0) {
        do {
          cVar8 = FUN_1407b6ae0(param_5,*puVar18);
          if ((cVar8 != '\0') && (param_3[0x1f] = param_3[0x1f] + 0x19, param_4[0x1f] == -1)) {
            param_4[0x1f] = *param_2;
          }
          puVar18 = puVar18 + 1;
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar20);
      }
    }
    break;
  default:
    goto switchD_1405409f8_default;
  }
  goto switchD_1405409f8_caseD_1;
  while (plVar15 = plVar15 + 1, plVar15 < *(longlong **)(lVar11 + 0xf0)) {
LAB_140540ab0:
    if (*(int *)(*plVar15 + 8) == iVar10) goto switchD_1405409f8_caseD_1;
  }
  goto LAB_140540b8c;
joined_r0x000140540b69:
  if (*(undefined8 **)(param_1 + 0x5c) <= puVar18) goto LAB_140540b8c;
  if ((*(short *)*puVar18 == 1) && (*(int *)((short *)*puVar18 + 2) == iVar16))
  goto switchD_1405409f8_caseD_1;
  puVar18 = puVar18 + 1;
  goto joined_r0x000140540b69;
  while( true ) {
    if (**(int **)(lVar11 + 0x10) < *piVar4) {
      iVar16 = iVar14 + -1;
    }
    else {
      iVar21 = iVar14 + 1;
    }
    if (iVar16 < iVar21) break;
LAB_140540b10:
    iVar14 = iVar16 + iVar21 >> 1;
    piVar4 = *(int **)(DAT_141d69178 + (longlong)iVar14 * 8);
    if (*piVar4 == **(int **)(lVar11 + 0x10)) {
      if ((piVar4 != (int *)0x0) && (iVar16 = piVar4[0x2c], iVar16 != -1)) {
        if (iVar16 == iVar10) goto switchD_1405409f8_caseD_1;
        puVar18 = *(undefined8 **)(param_1 + 0x58);
        goto joined_r0x000140540b69;
      }
      break;
    }
  }
LAB_140540b8c:
  param_3[0x1f] = param_3[0x1f] + 0x19;
  if (param_4[0x1f] == -1) {
    param_4[0x1f] = *param_2;
  }
switchD_1405409f8_caseD_1:
switchD_1405409f8_default:
  return;
}

