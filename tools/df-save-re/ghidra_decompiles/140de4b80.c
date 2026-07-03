// FUN_140de4b80 @ 140de4b80
// callees:
//   -> 140004650 FUN_140004650
//   -> 140561600 FUN_140561600
//   -> 140561460 FUN_140561460
//   -> 140ce7da0 FUN_140ce7da0
//   -> 1400511c0 FUN_1400511c0
//   -> 140050d30 FUN_140050d30
//   -> 14073eb00 FUN_14073eb00
//   -> 140019a10 FUN_140019a10
//   -> 14007e0a0 FUN_14007e0a0
//   -> 14007dd20 FUN_14007dd20
//   -> 140769060 FUN_140769060
//   -> 14000d840 FUN_14000d840
//   -> 1400199b0 FUN_1400199b0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140de4b80(ushort *param_1,longlong *param_2)

{
  void *_Dst;
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  char cVar14;
  short sVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  short *psVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar1 = *param_1;
  iVar21 = (int)(*(longlong *)(param_1 + 0x924) - *(longlong *)(param_1 + 0x920) >> 3) + -1;
  if (iVar21 < 0) {
    return;
  }
  lVar26 = (longlong)iVar21;
LAB_140de4bf1:
  uVar27 = 0;
  pvVar5 = *(void **)(*(longlong *)(param_1 + 0x920) + lVar26 * 8);
  if (*(int *)((longlong)pvVar5 + 0x24) == 2) {
    iVar3 = *(int *)((longlong)pvVar5 + 4);
    iVar29 = (int)(param_2[1] - *param_2 >> 2);
    if ((iVar29 != 0) && (iVar3 != -1)) {
      iVar29 = iVar29 + -1;
      iVar23 = 0;
      if (-1 < iVar29) {
        do {
          iVar22 = iVar29 + iVar23 >> 1;
          iVar4 = *(int *)(*param_2 + (longlong)iVar22 * 4);
          if (iVar4 == iVar3) {
            if (iVar22 != -1) {
              *(uint *)((longlong)pvVar5 + 0x20) = *(uint *)((longlong)pvVar5 + 0x20) | 1;
              iVar29 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
              uVar28 = uVar27;
              if (iVar29 < 0) goto switchD_140de4cea_caseD_1;
              goto LAB_140de4ca0;
            }
            break;
          }
          if (iVar3 < iVar4) {
            iVar29 = iVar22 + -1;
          }
          else {
            iVar23 = iVar22 + 1;
          }
        } while (iVar23 <= iVar29);
      }
    }
  }
  if ((*(byte *)((longlong)pvVar5 + 0x20) & 1) != 0) goto LAB_140de5800;
  goto LAB_140de5844;
  while( true ) {
    if (iVar3 < *piVar6) {
      iVar29 = iVar23 + -1;
    }
    else {
      uVar28 = (ulonglong)(iVar23 + 1);
    }
    if (iVar29 < (int)uVar28) break;
LAB_140de4ca0:
    iVar23 = iVar29 + (int)uVar28 >> 1;
    piVar6 = *(int **)(DAT_141d691a8 + (longlong)iVar23 * 8);
    if (*piVar6 == iVar3) {
      if (piVar6 != (int *)0x0) {
        switch(piVar6[1]) {
        case 0:
          iVar29 = piVar6[0x1c];
          piVar10 = piVar6 + 0x1c;
          if ((iVar29 != -1) && (piVar6[0xc] != -1)) {
            lVar16 = FUN_140004650(&DAT_141d7a048);
            lVar17 = FUN_140004650(&DAT_141d7a048,iVar29);
            if ((lVar17 != 0) && (lVar16 != 0)) {
              iVar29 = FUN_140769060(lVar16,0,0xffffffff,0xffffffff,0);
              if (iVar29 < 25000) {
                if (iVar29 < 15000) {
                  if (iVar29 < 3000) {
                    uVar32 = 1;
                    if (299 < iVar29) {
                      uVar32 = 10;
                    }
                  }
                  else {
                    uVar32 = 0x19;
                  }
                }
                else {
                  uVar32 = 0x32;
                }
              }
              else {
                uVar32 = 100;
              }
              lVar17 = *(longlong *)(lVar16 + 0x130);
              if (((lVar17 == 0) || (*(longlong *)(lVar17 + 0x48) == 0)) ||
                 (*(longlong *)(*(longlong *)(lVar17 + 0x48) + 0x130) == 0)) {
                sVar15 = *(short *)(lVar16 + 2);
                sVar2 = *(short *)(lVar16 + 4);
                if (((sVar15 < 0) ||
                    ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar15)
                    ) || (sVar2 < 0)) {
LAB_140de55bb:
                  if ((lVar17 == 0) ||
                     (((lVar17 = *(longlong *)(lVar17 + 0x48), lVar17 == 0 ||
                       ((*(uint *)(lVar17 + 0x4c) & 0x2000000) != 0)) ||
                      ((*(uint *)(lVar17 + 0x48) & 0x2000000) == 0)))) goto LAB_140de54ba;
                }
                else {
                  lVar18 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar15 * 8);
                  if (((ulonglong)
                       (*(longlong *)(lVar18 + 0x180) - *(longlong *)(lVar18 + 0x178) >> 3) <=
                       (ulonglong)(longlong)sVar2) ||
                     (cVar14 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar18 + 0x178) + (longlong)sVar2 * 8)
                                             + 0x6a8,0x3a), cVar14 == '\0')) goto LAB_140de55bb;
                  if (((lVar17 != 0) && (*(longlong *)(lVar17 + 0x48) != 0)) &&
                     ((*(uint *)(*(longlong *)(lVar17 + 0x48) + 0x4c) & 0x2000000) != 0))
                  goto LAB_140de54ba;
                }
                uVar31 = 1;
                uVar30 = 8;
              }
              else {
LAB_140de54ba:
                uVar30 = 0x19;
                uVar31 = uVar32;
              }
              FUN_140561460(param_1,piVar10,uVar30,uVar31);
              lVar18 = DAT_141d6dd58;
              lVar17 = DAT_141d6dd50;
              sVar15 = *(short *)(lVar16 + 2);
              sVar2 = *(short *)(lVar16 + 4);
              if (-1 < sVar15) {
                if (((ulonglong)(longlong)sVar15 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))
                   && (-1 < sVar2)) {
                  lVar11 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar15 * 8);
                  if (((ulonglong)
                       (*(longlong *)(lVar11 + 0x180) - *(longlong *)(lVar11 + 0x178) >> 3) <=
                       (ulonglong)(longlong)sVar2) ||
                     (cVar14 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar11 + 0x178) + (longlong)sVar2 * 8)
                                             + 0x6a8,0x6e), cVar14 == '\0')) goto LAB_140de5547;
LAB_140de55b0:
                  uVar30 = 100;
LAB_140de56c3:
                  FUN_140561460(param_1,piVar10,0,uVar30);
                }
                else {
LAB_140de5547:
                  if (-1 < sVar15) {
                    if (((ulonglong)(longlong)sVar15 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                       (-1 < sVar2)) {
                      lVar11 = *(longlong *)(lVar17 + (longlong)sVar15 * 8);
                      if (((ulonglong)(longlong)sVar2 <
                           (ulonglong)
                           (*(longlong *)(lVar11 + 0x180) - *(longlong *)(lVar11 + 0x178) >> 3)) &&
                         (cVar14 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar11 + 0x178) +
                                                  (longlong)sVar2 * 8) + 0x6a8,0x84), cVar14 != '\0'
                         )) goto LAB_140de55b0;
                    }
                    if (-1 < sVar15) {
                      if (((ulonglong)(longlong)sVar15 < (ulonglong)(lVar18 - lVar17 >> 3)) &&
                         (-1 < sVar2)) {
                        lVar11 = *(longlong *)(lVar17 + (longlong)sVar15 * 8);
                        if (((ulonglong)(longlong)sVar2 <
                             (ulonglong)
                             (*(longlong *)(lVar11 + 0x180) - *(longlong *)(lVar11 + 0x178) >> 3))
                           && (cVar14 = FUN_14000d840(*(longlong *)
                                                       (*(longlong *)(lVar11 + 0x178) +
                                                       (longlong)sVar2 * 8) + 0x6a8,0x6f),
                              cVar14 != '\0')) {
                          uVar30 = 0x19;
                          goto LAB_140de56c3;
                        }
                      }
                      if (((-1 < sVar15) &&
                          ((ulonglong)(longlong)sVar15 < (ulonglong)(lVar18 - lVar17 >> 3))) &&
                         (-1 < sVar2)) {
                        lVar17 = *(longlong *)(lVar17 + (longlong)sVar15 * 8);
                        if (((ulonglong)(longlong)sVar2 <
                             (ulonglong)
                             (*(longlong *)(lVar17 + 0x180) - *(longlong *)(lVar17 + 0x178) >> 3))
                           && (cVar14 = FUN_14000d840(*(longlong *)
                                                       (*(longlong *)(lVar17 + 0x178) +
                                                       (longlong)sVar2 * 8) + 0x6a8,0x8f),
                              cVar14 != '\0')) {
                          uVar30 = 10;
                          goto LAB_140de56c3;
                        }
                      }
                    }
                  }
                }
              }
              plVar25 = *(longlong **)(lVar16 + 0xe8);
              plVar12 = *(longlong **)(lVar16 + 0xf0);
              goto joined_r0x000140de56e2;
            }
          }
          break;
        case 2:
        case 3:
          iVar29 = piVar6[0x1c];
          if ((iVar29 != -1) && (piVar6[0xc] != -1)) {
            lVar16 = FUN_140004650(&DAT_141d7a048);
            lVar17 = FUN_140004650(&DAT_141d7a048,iVar29);
            if ((lVar17 != 0) && (lVar16 != 0)) {
              plVar25 = *(longlong **)(lVar16 + 0xe8);
              uVar28 = (ulonglong)
                       ((longlong)*(longlong **)(lVar16 + 0xf0) + (7 - (longlong)plVar25)) >> 3;
              if (*(longlong **)(lVar16 + 0xf0) < plVar25) {
                uVar28 = uVar27;
              }
              if (uVar28 != 0) {
                do {
                  if ((*(int *)((undefined8 *)*plVar25 + 1) == *(int *)(param_1 + 2)) &&
                     ((sVar15 = (*(code *)**(undefined8 **)*plVar25)(), sVar15 == 10 ||
                      (sVar15 == 0xd)))) {
                    FUN_140561460(param_1,piVar6 + 0x1c,0xd,1);
                  }
                  plVar25 = plVar25 + 1;
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar28);
              }
            }
          }
          break;
        case 4:
          if (piVar6[0x2a] != -1) {
            lVar16 = FUN_140004650(&DAT_141d7a048);
            lVar17 = FUN_140004650(&DAT_141d7a048,piVar6[0x1c]);
            lVar18 = FUN_140004650(&DAT_141d7a048,piVar6[0xc]);
            if (lVar16 != 0) {
              if (lVar17 != 0) {
                uVar28 = 0;
                plVar25 = *(longlong **)(lVar17 + 0xe8);
                uVar27 = (ulonglong)
                         ((longlong)*(longlong **)(lVar17 + 0xf0) + (7 - (longlong)plVar25)) >> 3;
                if (*(longlong **)(lVar17 + 0xf0) < plVar25) {
                  uVar27 = uVar28;
                }
                if (uVar27 != 0) {
                  do {
                    if ((*(int *)((undefined8 *)*plVar25 + 1) == *(int *)(param_1 + 2)) &&
                       ((sVar15 = (*(code *)**(undefined8 **)*plVar25)(), sVar15 == 10 ||
                        (sVar15 == 0xd)))) {
                      FUN_140561460(param_1,piVar6 + 0x2a,0,0x19);
                    }
                    plVar25 = plVar25 + 1;
                    uVar28 = uVar28 + 1;
                  } while (uVar28 < uVar27);
                }
              }
              if (lVar18 != 0) {
                plVar25 = *(longlong **)(lVar18 + 0xe8);
                uVar28 = 0;
                uVar27 = (ulonglong)
                         ((longlong)*(longlong **)(lVar18 + 0xf0) + (7 - (longlong)plVar25)) >> 3;
                if (*(longlong **)(lVar18 + 0xf0) < plVar25) {
                  uVar27 = uVar28;
                }
                if (uVar27 != 0) {
                  do {
                    if ((*(int *)((undefined8 *)*plVar25 + 1) == *(int *)(param_1 + 2)) &&
                       (((sVar15 = (*(code *)**(undefined8 **)*plVar25)(), sVar15 == 10 ||
                         (sVar15 == 0xd)) &&
                        (lVar17 = FUN_14007e0a0(lVar16,*(undefined4 *)(param_1 + 2)), lVar17 != 0)))
                       ) {
                      FUN_14007dd20(lVar17 + 8,0,0x19);
                    }
                    plVar25 = plVar25 + 1;
                    uVar28 = uVar28 + 1;
                  } while (uVar28 < uVar27);
                }
              }
            }
          }
          break;
        case 6:
          lVar16 = *(longlong *)(piVar6 + 0x44);
          if (lVar16 != 0) {
            puVar7 = *(undefined8 **)(lVar16 + 0x10);
            for (puVar24 = *(undefined8 **)(lVar16 + 8); puVar24 < puVar7; puVar24 = puVar24 + 1) {
              puVar8 = (undefined4 *)*puVar24;
              puVar9 = puVar8 + 2;
              lVar16 = FUN_140004650(&DAT_141d7a048,puVar8[2]);
              if (lVar16 != 0) {
                uVar13 = puVar8[0xc] * 2;
                uVar28 = uVar27;
                if ((-1 < (int)uVar13) && (uVar28 = (ulonglong)uVar13, 100 < (int)uVar13)) {
                  uVar28 = 100;
                }
                switch(*puVar8) {
                case 0:
                  FUN_140561600(param_1,puVar9,0x13,uVar28);
                  break;
                case 1:
                  FUN_140561600(param_1,puVar9,0x14,uVar28);
                  break;
                case 2:
                  FUN_140561600(param_1,puVar9,0x15,uVar28);
                  break;
                case 3:
                  FUN_140561600(param_1,puVar9,0x16,uVar28);
                  break;
                case 4:
                case 5:
                case 6:
                case 7:
                  FUN_140561600(param_1,puVar9,0x20,uVar28);
                }
              }
            }
          }
          break;
        case 7:
          puVar9 = *(undefined4 **)(piVar6 + 0x44);
          switch(*puVar9) {
          case 0:
          case 2:
          case 4:
            iVar29 = puVar9[4];
            break;
          case 1:
            if (puVar9[0x16] == -1) {
              if (puVar9[0x18] == -1) {
                if (puVar9[0x19] == -1) goto switchD_140de4eb6_default;
                local_4c = 0x1b;
                local_6c = puVar9[0x19];
              }
              else {
                local_4c = 0x1a;
                local_6c = puVar9[0x18];
              }
              goto LAB_140de4f1a;
            }
            local_70 = puVar9[1];
            local_68 = puVar9[0x17];
            local_4c = 0x19;
            local_6c = puVar9[0x16];
            goto LAB_140de4f20;
          case 3:
            iVar29 = puVar9[0xe];
            break;
          case 5:
            local_4c = 0x21;
            goto LAB_140de4f1a;
          default:
            goto switchD_140de4eb6_default;
          }
          if (iVar29 != -1) {
            local_4c = 0x1c;
            local_6c = iVar29;
LAB_140de4f1a:
            local_70 = puVar9[1];
LAB_140de4f20:
            local_58 = piVar6[8];
            local_54 = piVar6[9];
            local_50 = 0;
            FUN_140ce7da0(param_1 + 0x920,&local_70,*(undefined4 *)((longlong)pvVar5 + 0x10),
                          *(undefined4 *)((longlong)pvVar5 + 0x14));
          }
switchD_140de4eb6_default:
          piVar10 = *(int **)(piVar6 + 0x44);
          if ((piVar10[2] != -1) && (lVar16 = FUN_140004650(&DAT_141d7a048), lVar16 != 0)) {
            iVar29 = *piVar10;
            if (iVar29 == 1) {
              if ((((piVar10[0x16] != -1) && (lVar17 = FUN_140019a10(DAT_141d6cfd0), lVar17 != 0))
                  && (iVar29 = piVar10[0x20], iVar29 != -1)) &&
                 ((lVar17 = FUN_1400511c0(piVar10[1],param_1 + 0x984), lVar17 != 0 &&
                  (*(int *)(lVar17 + 0x14) == -1)))) {
                if (iVar29 == *(int *)(param_1 + 2)) goto LAB_140de51d8;
                if (*param_1 == 0) {
                  puVar24 = *(undefined8 **)(param_1 + 0x58);
                  goto joined_r0x000140de51b2;
                }
              }
            }
            else if (iVar29 == 2) {
              if (((piVar10[0x16] != -1) && (lVar17 = FUN_140019a10(DAT_141d6cfd0), lVar17 != 0)) &&
                 ((iVar29 = piVar10[0x20], iVar29 != -1 &&
                  ((lVar17 = FUN_1400511c0(piVar10[1],param_1 + 0x984), lVar17 != 0 &&
                   (*(int *)(lVar17 + 0x14) == -1)))))) {
                if (iVar29 == *(int *)(param_1 + 2)) goto LAB_140de5101;
                if (*param_1 == 0) {
                  puVar24 = *(undefined8 **)(param_1 + 0x58);
                  goto joined_r0x000140de50db;
                }
              }
            }
            else if (iVar29 == 3) {
              lVar16 = FUN_1400511c0(piVar10[1],param_1 + 0x984);
              if ((((lVar16 != 0) && (*(int *)(lVar16 + 0x14) == -1)) &&
                  (lVar16 = FUN_140004650(&DAT_141d7a048,piVar10[0xc]), lVar16 != 0)) &&
                 (sVar15 = FUN_14073eb00(lVar16,0,*(undefined4 *)(param_1 + 2)), 0 < sVar15))
              goto LAB_140de503d;
            }
            else if (((iVar29 == 4) &&
                     (lVar16 = FUN_1400511c0(piVar10[1],param_1 + 0x984), lVar16 != 0)) &&
                    ((*(int *)(lVar16 + 0x14) == -1 &&
                     (iVar29 = FUN_140050d30(*(undefined4 *)(param_1 + 2),piVar10 + 0x1a),
                     iVar29 != -1)))) {
              FUN_140561460(param_1,piVar10 + 2,0x1c);
            }
          }
        }
      }
      break;
    }
  }
switchD_140de4cea_caseD_1:
LAB_140de5800:
  free(pvVar5);
  _Dst = (void *)(*(longlong *)(param_1 + 0x920) + (longlong)iVar21 * 8);
  pvVar5 = (void *)((longlong)_Dst + 8);
  memmove(_Dst,pvVar5,*(longlong *)(param_1 + 0x924) - (longlong)pvVar5);
  *(longlong *)(param_1 + 0x924) = *(longlong *)(param_1 + 0x924) + -8;
LAB_140de5844:
  iVar21 = iVar21 + -1;
  lVar26 = lVar26 + -1;
  if (iVar21 < 0) {
    return;
  }
  goto LAB_140de4bf1;
joined_r0x000140de51b2:
  if (*(undefined8 **)(param_1 + 0x5c) <= puVar24) goto switchD_140de4cea_caseD_1;
  if ((*(int *)((short *)*puVar24 + 2) == iVar29) && (*(short *)*puVar24 == 1)) goto LAB_140de51d8;
  puVar24 = puVar24 + 1;
  goto joined_r0x000140de51b2;
LAB_140de51d8:
  sVar15 = FUN_14073eb00(lVar16,0);
  if (sVar15 == 0) {
LAB_140de503d:
    FUN_140561460(param_1,*(longlong *)(piVar6 + 0x44) + 8,0x1b);
  }
  goto switchD_140de4cea_caseD_1;
joined_r0x000140de50db:
  if (*(undefined8 **)(param_1 + 0x5c) <= puVar24) goto switchD_140de4cea_caseD_1;
  if ((*(int *)((short *)*puVar24 + 2) == iVar29) && (*(short *)*puVar24 == 1)) goto LAB_140de5101;
  puVar24 = puVar24 + 1;
  goto joined_r0x000140de50db;
LAB_140de5101:
  sVar15 = FUN_14073eb00(lVar16,0);
  if (sVar15 == 0) {
    FUN_140561460(param_1,*(longlong *)(piVar6 + 0x44) + 8,0x1c);
  }
  goto switchD_140de4cea_caseD_1;
joined_r0x000140de56e2:
  if (plVar12 <= plVar25) goto switchD_140de4cea_caseD_1;
  sVar15 = (*(code *)**(undefined8 **)*plVar25)();
  if (sVar15 == 0) {
    if (((uVar1 < 2) &&
        (psVar19 = (short *)FUN_1400199b0(&DAT_141c53718,*(undefined4 *)(*plVar25 + 8)),
        psVar19 != (short *)0x0)) && (((*psVar19 - 3U & 0xfffa) == 0 && (*psVar19 != 8)))) {
      for (plVar20 = *(longlong **)(psVar19 + 100); plVar20 < *(longlong **)(psVar19 + 0x68);
          plVar20 = plVar20 + 1) {
        if ((*(byte *)(*plVar20 + 0x18) & 0x80) != 0) {
          uVar30 = 0x1a;
          goto LAB_140de57ca;
        }
      }
    }
  }
  else {
    uVar31 = uVar32;
    if (sVar15 == 8) {
      if (*(int *)(*plVar25 + 8) == *(int *)(param_1 + 2)) {
        uVar30 = 0;
        goto LAB_140de57d0;
      }
    }
    else if (sVar15 == 9) {
      if (*(int *)(*plVar25 + 8) == *(int *)(param_1 + 2)) {
        uVar30 = 0x1a;
        goto LAB_140de57d0;
      }
    }
    else if (((sVar15 == 10) || (sVar15 == 0xd)) &&
            (*(int *)(*plVar25 + 8) == *(int *)(param_1 + 2))) {
      uVar30 = 0xd;
LAB_140de57ca:
      uVar31 = 1;
LAB_140de57d0:
      FUN_140561460(param_1,piVar10,uVar30,uVar31);
    }
  }
  plVar25 = plVar25 + 1;
  goto joined_r0x000140de56e2;
}

