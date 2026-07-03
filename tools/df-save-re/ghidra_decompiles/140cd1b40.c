// FUN_140cd1b40 @ 140cd1b40
// callees:
//   -> 1407ef380 FUN_1407ef380
//   -> 140cbfc60 FUN_140cbfc60
//   -> 140071310 FUN_140071310


undefined8 FUN_140cd1b40(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  short sVar3;
  short sVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  ulonglong uVar29;
  longlong lVar30;
  int local_res20;
  int *local_98;
  int *local_90;
  int local_88;
  int local_84;
  longlong *local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  longlong local_58;
  longlong local_50;
  ulonglong uVar14;
  
  param_2[3] = param_2[3] + 1;
  iVar12 = -1;
  piVar28 = (int *)0x0;
  local_84 = -1;
  lVar23 = *(longlong *)(DAT_141d799b0 + (longlong)*param_2 * 8);
  iVar18 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
  piVar20 = piVar28;
  local_98 = piVar28;
  if (-1 < iVar18) {
    do {
      iVar15 = iVar18 + (int)piVar20 >> 1;
      local_98 = *(int **)(*(longlong *)(param_1 + 0x590) + (longlong)iVar15 * 8);
      iVar13 = *local_98;
      if (iVar13 == param_2[10]) break;
      if (param_2[10] < iVar13) {
        iVar18 = iVar15 + -1;
      }
      else {
        piVar20 = (int *)(ulonglong)(iVar15 + 1);
      }
      local_98 = piVar28;
    } while ((int)piVar20 <= iVar18);
  }
  local_58 = lVar23;
  if (local_98 != (int *)0x0) {
    local_98[0x17] = local_98[0x11];
    local_98[0x16] = local_98[0x10];
    local_98[0xd] = 0;
    local_98[0xe] = 0;
    local_98[0xf] = 0;
    local_98[0x10] = 0;
    local_98[0x11] = 0;
    local_98[0x12] = 0;
    if (*(undefined4 **)(local_98 + 0x14) != (undefined4 *)0x0) {
      **(undefined4 **)(local_98 + 0x14) = 0;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 4) = 0;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 8) = 0;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 0xc) = 0;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 0x10) = 0;
      *(undefined1 *)(*(longlong *)(local_98 + 0x14) + 0x14) = 0;
      *(undefined1 *)(*(longlong *)(local_98 + 0x14) + 0x78) = 0;
      *(undefined1 *)(*(longlong *)(local_98 + 0x14) + 0x7c) = 0;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 0x88) = 0;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 0x8c) = 100;
      if (*(longlong *)(*(longlong *)(local_98 + 0x14) + 0x90) != 0) {
        FUN_1407ef380();
      }
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 0xa0) = 100;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 0xa4) = 0;
      *(int *)(*(longlong *)(local_98 + 0x14) + 0xd8) =
           *(int *)(*(longlong *)(local_98 + 0x14) + 0xd8) + 1;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 0xe0) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(local_98 + 0x14) + 0xe4) = 0xffffffff;
      puVar16 = *(undefined4 **)(*(longlong *)(local_98 + 0x14) + 0xe8);
      puVar5 = *(undefined4 **)(*(longlong *)(local_98 + 0x14) + 0xf0);
      piVar20 = (int *)((ulonglong)((longlong)puVar5 + (3 - (longlong)puVar16)) >> 2);
      if (puVar5 < puVar16) {
        piVar20 = piVar28;
      }
      piVar19 = piVar28;
      if (piVar20 != (int *)0x0) {
        do {
          piVar19 = (int *)((longlong)piVar19 + 1);
          *puVar16 = 100;
          puVar16 = puVar16 + 1;
        } while (piVar19 < piVar20);
      }
      puVar16 = *(undefined4 **)(*(longlong *)(local_98 + 0x14) + 0x100);
      puVar5 = *(undefined4 **)(*(longlong *)(local_98 + 0x14) + 0x108);
      piVar20 = (int *)((ulonglong)((longlong)puVar5 + (3 - (longlong)puVar16)) >> 2);
      if (puVar5 < puVar16) {
        piVar20 = piVar28;
      }
      piVar19 = piVar28;
      if (piVar20 != (int *)0x0) {
        do {
          piVar19 = (int *)((longlong)piVar19 + 1);
          *puVar16 = 100;
          puVar16 = puVar16 + 1;
        } while (piVar19 < piVar20);
      }
    }
    plVar17 = *(longlong **)(local_98 + 2);
    piVar20 = (int *)((ulonglong)((longlong)*(longlong **)(local_98 + 4) + (7 - (longlong)plVar17))
                     >> 3);
    if (*(longlong **)(local_98 + 4) < plVar17) {
      piVar20 = piVar28;
    }
    if (piVar20 != (int *)0x0) {
      do {
        lVar24 = *plVar17;
        piVar28 = (int *)((longlong)piVar28 + 1);
        plVar17 = plVar17 + 1;
        *(undefined4 *)(lVar24 + 0x90) = *(undefined4 *)(lVar24 + 0x80);
        *(undefined4 *)(lVar24 + 0x8c) = *(undefined4 *)(lVar24 + 0x7c);
        *(undefined4 *)(lVar24 + 0x94) = *(undefined4 *)(lVar24 + 0x88);
        *(undefined8 *)(lVar24 + 0x84) = 0;
        *(undefined8 *)(lVar24 + 0x74) = 0;
        *(undefined8 *)(lVar24 + 0x7c) = 0;
      } while (piVar28 < piVar20);
    }
  }
  bVar7 = false;
  uVar11 = (int)(*(longlong *)(lVar23 + 0x28) - *(longlong *)(lVar23 + 0x20) >> 3) - 1;
  uVar14 = (ulonglong)uVar11;
  bVar9 = false;
  local_50 = (longlong)(int)uVar11;
  if (-1 < (int)uVar11) {
    do {
      iVar18 = 0;
      uVar14 = *(ulonglong *)(param_2 + 0xc);
      piVar20 = *(int **)(uVar14 + local_50 * 8);
      if ((*(byte *)(piVar20 + 0x22) & 1) == 0) {
        local_88 = 1;
        plVar17 = *(longlong **)(*(longlong *)(lVar23 + 0x20) + local_50 * 8);
        if (DAT_1410b67dc == 0) {
          local_88 = *(int *)((longlong)plVar17 + 0x1c);
        }
        iVar13 = local_88;
        uVar11 = local_88 * (int)plVar17[2];
        uVar14 = (ulonglong)uVar11;
        if ((int)uVar11 <= param_2[3]) {
          bVar7 = false;
          if ((*(byte *)(plVar17 + 1) & 1) == 0) {
LAB_140cd1fbb:
            local_res20 = 1000;
          }
          else {
            iVar15 = *(int *)(param_1 + 0x68c);
            if (iVar15 < 20000) {
              if (iVar15 < 1000) goto LAB_140cd1fbb;
              switch(iVar15 / 1000) {
              case 1:
                local_res20 = 900;
                break;
              case 2:
                local_res20 = 500;
                break;
              case 3:
                local_res20 = 300;
                break;
              case 4:
                local_res20 = 0x96;
                break;
              case 5:
                local_res20 = 100;
                break;
              case 6:
                local_res20 = 0x46;
                break;
              case 7:
                local_res20 = 0x32;
                break;
              case 8:
                local_res20 = 0x1e;
                break;
              case 9:
                local_res20 = 0x1a;
                break;
              case 10:
                local_res20 = 0x16;
                break;
              case 0xb:
                local_res20 = 0x12;
                break;
              case 0xc:
                local_res20 = 0xf;
                break;
              case 0xd:
                local_res20 = 0xc;
                break;
              case 0xe:
                local_res20 = 9;
                break;
              case 0xf:
                local_res20 = 7;
                break;
              case 0x10:
                local_res20 = 5;
                break;
              case 0x11:
                local_res20 = 3;
                break;
              case 0x12:
                local_res20 = 2;
                break;
              case 0x13:
                goto switchD_140cd1f0e_caseD_13;
              }
            }
            else {
switchD_140cd1f0e_caseD_13:
              local_res20 = 1;
            }
          }
          local_90 = piVar20;
          local_80 = plVar17;
          cVar10 = (**(code **)(*plVar17 + 0x20))(plVar17);
          if ((cVar10 != '\0') &&
             (((int)plVar17[3] == -1 || (piVar20[2] < ((int)plVar17[3] - (int)plVar17[2]) * iVar13))
             )) {
            piVar20[1] = piVar20[1] + local_res20;
            if (999 < piVar20[1]) {
              if (iVar12 == -1) {
                iVar12 = FUN_140cbfc60(param_1,5);
                if (*(longlong *)(local_58 + 0xf0) != 0) {
                  sVar3 = *(short *)(param_1 + 0xa4);
                  sVar4 = *(short *)(param_1 + 300);
                  if (((-1 < sVar3) &&
                      ((ulonglong)(longlong)sVar3 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))
                      ) && (-1 < sVar4)) {
                    lVar23 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar3 * 8);
                    piVar20 = local_90;
                    if ((((ulonglong)(longlong)sVar4 <
                          (ulonglong)
                          (*(longlong *)(lVar23 + 0x180) - *(longlong *)(lVar23 + 0x178) >> 3)) &&
                        (lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0x178) + (longlong)sVar4 * 8)
                        , lVar23 != 0)) &&
                       (*(longlong *)(lVar23 + 0x3e98) - *(longlong *)(lVar23 + 0x3e90) >> 3 != 0))
                    {
                      puVar21 = *(undefined8 **)(lVar23 + 0x3e90);
                      puVar6 = *(undefined8 **)(lVar23 + 0x3e98);
                      piVar28 = *(int **)(lVar23 + 0x3ea8);
                      iVar13 = local_88;
                      if (puVar21 < puVar6) {
                        lVar23 = local_58 + 0xe0;
                        do {
                          iVar15 = FUN_140071310(*puVar21,lVar23);
                          iVar13 = local_88;
                          piVar20 = local_90;
                          plVar17 = local_80;
                          if (iVar15 == 0) {
                            iVar12 = (*piVar28 * iVar12) / 100;
                            break;
                          }
                          puVar21 = puVar21 + 1;
                          piVar28 = piVar28 + 1;
                        } while (puVar21 < puVar6);
                      }
                    }
                  }
                }
                local_68 = *(int *)(param_1 + 0x68c) / 10;
                local_6c = local_68 + iVar12;
                iVar15 = ((short)param_2[0x12] + 10) * 10;
                if (500 < iVar15) {
                  iVar15 = 500;
                }
                local_70 = (iVar15 * iVar12) / 100;
                if (iVar12 < 0) {
                  iVar12 = iVar18;
                }
                local_68 = local_68 + local_70;
                if (local_6c < 0) {
                  local_6c = iVar18;
                }
                if (5000 < iVar12) {
                  iVar12 = 5000;
                }
                if (5000 < local_6c) {
                  local_6c = 5000;
                }
                if (local_70 < 0) {
                  local_70 = iVar18;
                }
                if (local_68 < 0) {
                  local_68 = 0;
                }
                if (5000 < local_70) {
                  local_70 = 5000;
                }
                local_84 = iVar12;
                if (5000 < local_68) {
                  local_68 = 5000;
                }
              }
              local_60 = *(uint *)(plVar17 + 1);
              if ((local_60 & 0x10) == 0) {
                if ((local_60 & 2) != 0) {
                  iVar12 = local_6c;
                }
              }
              else {
                iVar12 = local_70;
                if ((local_60 & 2) != 0) {
                  iVar12 = local_68;
                }
              }
              local_64 = *piVar20 * 2 - (((iVar12 * *piVar20) / 100) * 199) / 5000;
              if (local_64 < 1) {
                local_64 = 1;
              }
              if ((local_60 & 0x40) == 0) {
LAB_140cd2287:
                if ((char)local_60 < '\0') {
                  uVar14 = plVar17[7];
                  bVar7 = false;
                  plVar1 = plVar17 + 10;
                  bVar8 = false;
                  piVar28 = (int *)plVar17[0xd];
                  plVar2 = plVar17 + 0x10;
                  uVar29 = 0;
                  uVar22 = (plVar17[8] - uVar14) + 3 >> 2;
                  if ((ulonglong)plVar17[8] < uVar14) {
                    uVar22 = 0;
                  }
                  piVar20 = local_90;
                  plVar17 = local_80;
                  if (uVar22 != 0) {
                    lVar24 = uVar14 - (longlong)piVar28;
                    lVar23 = *plVar1 - (longlong)piVar28;
                    lVar25 = *plVar2 - (longlong)piVar28;
                    do {
                      for (puVar21 = *(undefined8 **)(param_1 + 0x988);
                          puVar21 < *(undefined8 **)(param_1 + 0x990); puVar21 = puVar21 + 1) {
                        if (*(short *)*puVar21 == *(short *)(lVar24 + (longlong)piVar28)) {
                          piVar19 = (int *)((short *)*puVar21 + 2);
                          if (piVar19 != (int *)0x0) {
                            iVar12 = *piVar19;
                            if ((iVar12 < *(int *)(lVar23 + (longlong)piVar28)) ||
                               (*piVar28 < iVar12)) {
                              if ((*(byte *)(lVar25 + (longlong)piVar28) & 1) != 0) {
                                bVar8 = true;
                              }
                            }
                            else {
                              bVar7 = true;
                            }
                          }
                          break;
                        }
                      }
                      piVar28 = piVar28 + 1;
                      uVar29 = uVar29 + 1;
                    } while (uVar29 < uVar22);
                    if ((bVar7) && (iVar13 = local_88, !bVar8)) goto LAB_140cd236a;
                  }
                  goto LAB_140cd23c6;
                }
LAB_140cd236a:
                iVar12 = (int)plVar17[3];
                iVar18 = piVar20[2];
                iVar27 = (*(int *)((longlong)plVar17 + 0x14) - (int)plVar17[2]) * iVar13;
                iVar26 = (iVar12 - *(int *)((longlong)plVar17 + 0x14)) * iVar13;
                iVar15 = local_64;
                if (iVar27 < iVar18) {
                  if (((((local_60 >> 9 & 1) == 0) && (iVar12 != -1)) && (0 < iVar26)) &&
                     ((iVar15 = (((iVar12 - (int)plVar17[2]) * iVar13 - iVar18) * local_64) / iVar26
                      , iVar15 == 0 && (0 < local_64)))) {
                    iVar15 = 1;
                  }
                }
                else if (((-1 < iVar18) && (0 < iVar27)) &&
                        (((local_60 >> 8 & 1) == 0 &&
                         ((iVar15 = (iVar18 * local_64) / iVar27, iVar15 == 0 && (0 < local_64))))))
                {
                  iVar15 = 1;
                }
                (**(code **)(*plVar17 + 0x18))
                          (plVar17,param_1,param_2,local_58,iVar15,0xffff,0xffff,&local_98);
                piVar20[0x22] = piVar20[0x22] | 2;
              }
              else {
                iVar12 = *(int *)((longlong)plVar17 + 0x2c);
                iVar18 = (int)plVar17[6];
                iVar15 = *(int *)(DAT_141d6cfd0 + 0xac);
                if (iVar18 < iVar12) {
                  if ((iVar12 <= iVar15) || (iVar15 <= iVar18)) goto LAB_140cd2287;
                }
                else if (iVar12 <= iVar15) {
                  if (iVar15 <= iVar18) goto LAB_140cd2287;
                  piVar20[0x22] = piVar20[0x22] & 0xfffffffd;
                  goto LAB_140cd243c;
                }
LAB_140cd23c6:
                piVar20[0x22] = piVar20[0x22] & 0xfffffffd;
              }
LAB_140cd243c:
              piVar20[1] = piVar20[1] - local_res20;
              iVar12 = piVar20[1];
              if (10000000 < piVar20[1]) {
                iVar12 = 10000000;
              }
              piVar20[2] = piVar20[2] + 1;
              piVar20[1] = iVar12;
              iVar12 = local_84;
            }
            bVar7 = true;
          }
          uVar11 = (int)(*(longlong *)(piVar20 + 6) - *(longlong *)(piVar20 + 4) >> 1) - 1;
          uVar14 = (ulonglong)uVar11;
          lVar23 = (longlong)(int)uVar11;
          local_78 = lVar23;
          if (-1 < (int)uVar11) {
            do {
              iVar18 = 0;
              if (((int)plVar17[3] == -1) ||
                 (uVar14 = *(ulonglong *)(piVar20 + 0x1c),
                 *(int *)(uVar14 + lVar23 * 4) < ((int)plVar17[3] - (int)plVar17[2]) * local_88)) {
                piVar28 = (int *)(*(longlong *)(piVar20 + 0x16) + lVar23 * 4);
                *piVar28 = *piVar28 + local_res20;
                uVar14 = *(ulonglong *)(piVar20 + 0x16);
                if (999 < *(int *)(uVar14 + lVar23 * 4)) {
                  local_78 = lVar23;
                  if (iVar12 == -1) {
                    iVar12 = FUN_140cbfc60(param_1,5);
                    if (*(longlong *)(local_58 + 0xf0) != 0) {
                      sVar3 = *(short *)(param_1 + 0xa4);
                      sVar4 = *(short *)(param_1 + 300);
                      if (((-1 < sVar3) &&
                          ((ulonglong)(longlong)sVar3 <
                           (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) && (-1 < sVar4)) {
                        lVar24 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar3 * 8);
                        piVar20 = local_90;
                        if ((((ulonglong)(longlong)sVar4 <
                              (ulonglong)
                              (*(longlong *)(lVar24 + 0x180) - *(longlong *)(lVar24 + 0x178) >> 3))
                            && (lVar24 = *(longlong *)
                                          (*(longlong *)(lVar24 + 0x178) + (longlong)sVar4 * 8),
                               lVar24 != 0)) &&
                           (*(longlong *)(lVar24 + 0x3e98) - *(longlong *)(lVar24 + 0x3e90) >> 3 !=
                            0)) {
                          puVar21 = *(undefined8 **)(lVar24 + 0x3e90);
                          puVar6 = *(undefined8 **)(lVar24 + 0x3e98);
                          piVar28 = *(int **)(lVar24 + 0x3ea8);
                          lVar23 = local_78;
                          if (puVar21 < puVar6) {
                            lVar24 = local_58 + 0xe0;
                            do {
                              iVar13 = FUN_140071310(*puVar21,lVar24);
                              lVar23 = local_78;
                              piVar20 = local_90;
                              plVar17 = local_80;
                              if (iVar13 == 0) {
                                iVar12 = (*piVar28 * iVar12) / 100;
                                break;
                              }
                              puVar21 = puVar21 + 1;
                              piVar28 = piVar28 + 1;
                            } while (puVar21 < puVar6);
                          }
                        }
                      }
                    }
                    local_68 = *(int *)(param_1 + 0x68c) / 10;
                    local_6c = local_68 + iVar12;
                    iVar13 = ((short)param_2[0x12] + 10) * 10;
                    if (500 < iVar13) {
                      iVar13 = 500;
                    }
                    local_70 = (iVar13 * iVar12) / 100;
                    if (iVar12 < 0) {
                      iVar12 = iVar18;
                    }
                    local_68 = local_68 + local_70;
                    if (local_6c < 0) {
                      local_6c = iVar18;
                    }
                    if (5000 < iVar12) {
                      iVar12 = 5000;
                    }
                    if (5000 < local_6c) {
                      local_6c = 5000;
                    }
                    if (local_70 < 0) {
                      local_70 = iVar18;
                    }
                    if (local_68 < 0) {
                      local_68 = 0;
                    }
                    if (5000 < local_70) {
                      local_70 = 5000;
                    }
                    local_84 = iVar12;
                    if (5000 < local_68) {
                      local_68 = 5000;
                    }
                  }
                  local_60 = *(uint *)(plVar17 + 1);
                  iVar18 = *(int *)(*(longlong *)(piVar20 + 0x10) + lVar23 * 4);
                  if ((local_60 & 0x10) == 0) {
                    if ((local_60 & 2) != 0) {
                      iVar12 = local_6c;
                    }
                  }
                  else {
                    iVar12 = local_70;
                    if ((local_60 & 2) != 0) {
                      iVar12 = local_68;
                    }
                  }
                  local_64 = iVar18 * 2 - (((iVar12 * iVar18) / 100) * 199) / 5000;
                  if (local_64 < 1) {
                    local_64 = 1;
                  }
                  if ((local_60 & 0x40) == 0) {
LAB_140cd2739:
                    if ((char)local_60 < '\0') {
                      uVar14 = plVar17[7];
                      bVar7 = false;
                      plVar1 = plVar17 + 10;
                      bVar8 = false;
                      piVar28 = (int *)plVar17[0xd];
                      plVar2 = plVar17 + 0x10;
                      uVar29 = 0;
                      uVar22 = (plVar17[8] - uVar14) + 3 >> 2;
                      if ((ulonglong)plVar17[8] < uVar14) {
                        uVar22 = 0;
                      }
                      lVar23 = local_78;
                      piVar20 = local_90;
                      plVar17 = local_80;
                      if (uVar22 != 0) {
                        lVar25 = uVar14 - (longlong)piVar28;
                        lVar24 = *plVar1 - (longlong)piVar28;
                        lVar30 = *plVar2 - (longlong)piVar28;
                        do {
                          for (puVar21 = *(undefined8 **)(param_1 + 0x988);
                              puVar21 < *(undefined8 **)(param_1 + 0x990); puVar21 = puVar21 + 1) {
                            if (*(short *)*puVar21 == *(short *)(lVar25 + (longlong)piVar28)) {
                              piVar19 = (int *)((short *)*puVar21 + 2);
                              if (piVar19 != (int *)0x0) {
                                iVar12 = *piVar19;
                                if ((iVar12 < *(int *)(lVar24 + (longlong)piVar28)) ||
                                   (*piVar28 < iVar12)) {
                                  if ((*(byte *)(lVar30 + (longlong)piVar28) & 1) != 0) {
                                    bVar8 = true;
                                  }
                                }
                                else {
                                  bVar7 = true;
                                }
                              }
                              break;
                            }
                          }
                          piVar28 = piVar28 + 1;
                          uVar29 = uVar29 + 1;
                        } while (uVar29 < uVar22);
                        if ((bVar7) && (!bVar8)) goto LAB_140cd2819;
                      }
                      goto LAB_140cd2882;
                    }
LAB_140cd2819:
                    iVar12 = (int)plVar17[3];
                    iVar15 = (*(int *)((longlong)plVar17 + 0x14) - (int)plVar17[2]) * local_88;
                    iVar27 = (iVar12 - *(int *)((longlong)plVar17 + 0x14)) * local_88;
                    iVar18 = *(int *)(*(longlong *)(piVar20 + 0x1c) + lVar23 * 4);
                    iVar13 = local_64;
                    if (iVar15 < iVar18) {
                      if (((((local_60 >> 9 & 1) == 0) && (iVar12 != -1)) && (0 < iVar27)) &&
                         ((iVar13 = (((iVar12 - (int)plVar17[2]) * local_88 - iVar18) * local_64) /
                                    iVar27, iVar13 == 0 && (0 < local_64)))) {
                        iVar13 = 1;
                      }
                    }
                    else if (((-1 < iVar18) && (0 < iVar15)) &&
                            (((local_60 >> 8 & 1) == 0 &&
                             ((iVar13 = (iVar18 * local_64) / iVar15, iVar13 == 0 && (0 < local_64))
                             )))) {
                      iVar13 = 1;
                    }
                    (**(code **)(*plVar17 + 0x18))
                              (plVar17,param_1,param_2,local_58,iVar13,
                               *(undefined2 *)(*(longlong *)(piVar20 + 4) + lVar23 * 2),
                               *(undefined2 *)(*(longlong *)(piVar20 + 10) + lVar23 * 2),&local_98);
                    piVar20[0x22] = piVar20[0x22] | 2;
                  }
                  else {
                    iVar12 = *(int *)((longlong)plVar17 + 0x2c);
                    iVar18 = (int)plVar17[6];
                    iVar13 = *(int *)(DAT_141d6cfd0 + 0xac);
                    if (iVar18 < iVar12) {
                      if ((iVar12 <= iVar13) || (iVar13 <= iVar18)) goto LAB_140cd2739;
                    }
                    else if (iVar12 <= iVar13) {
                      if (iVar13 <= iVar18) goto LAB_140cd2739;
                      piVar20[0x22] = piVar20[0x22] & 0xfffffffd;
                      goto LAB_140cd2900;
                    }
LAB_140cd2882:
                    piVar20[0x22] = piVar20[0x22] & 0xfffffffd;
                  }
LAB_140cd2900:
                  piVar28 = (int *)(*(longlong *)(piVar20 + 0x16) + lVar23 * 4);
                  *piVar28 = *piVar28 - local_res20;
                  if (10000000 < *(int *)(*(longlong *)(piVar20 + 0x16) + lVar23 * 4)) {
                    *(undefined4 *)(*(longlong *)(piVar20 + 0x16) + lVar23 * 4) = 10000000;
                  }
                  uVar14 = *(ulonglong *)(piVar20 + 0x1c);
                  piVar28 = (int *)(uVar14 + lVar23 * 4);
                  *piVar28 = *piVar28 + 1;
                }
                bVar7 = true;
              }
              lVar23 = lVar23 + -1;
              iVar12 = local_84;
              local_78 = lVar23;
            } while (-1 < lVar23);
          }
          lVar23 = local_58;
          iVar12 = local_84;
          if (!bVar7) {
            piVar20[0x22] = piVar20[0x22] | 1;
            bVar7 = bVar9;
            goto LAB_140cd297f;
          }
        }
        bVar7 = true;
        bVar9 = true;
      }
LAB_140cd297f:
      local_50 = local_50 + -1;
    } while (-1 < local_50);
  }
  return CONCAT71((int7)(uVar14 >> 8),!bVar7);
}

