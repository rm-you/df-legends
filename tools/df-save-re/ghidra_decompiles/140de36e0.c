// FUN_140de36e0 @ 140de36e0
// callees:
//   -> 1407c6860 FUN_1407c6860
//   -> 140004650 FUN_140004650
//   -> 14000e080 FUN_14000e080
//   -> 1407653b0 FUN_1407653b0
//   -> 140002020 FUN_140002020
//   -> 1407c6b20 FUN_1407c6b20
//   -> 1407b8ef0 FUN_1407b8ef0
//   -> 1407b8b40 FUN_1407b8b40
//   -> 14000d840 FUN_14000d840
//   -> 1407c6dd0 FUN_1407c6dd0
//   -> 140ce7da0 FUN_140ce7da0
//   -> 1400511c0 FUN_1400511c0
//   -> 14000df00 FUN_14000df00
//   -> 140769060 FUN_140769060
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140de36e0(int *param_1,longlong *param_2)

{
  void *_Src;
  void *_Dst;
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  short sVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  int *piVar20;
  longlong lVar21;
  int iVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  short sVar25;
  undefined4 uVar26;
  int *piVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStack_568 [32];
  ulonglong local_548;
  undefined4 local_540;
  undefined8 *local_538;
  longlong local_528;
  int local_520;
  undefined4 local_518;
  int local_514;
  undefined4 local_510;
  int local_500;
  int local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  int *local_4f0;
  void *local_4e8;
  longlong *local_4e0;
  undefined8 local_4d8;
  undefined8 local_4c8 [51];
  undefined4 local_330;
  undefined8 local_318;
  undefined4 local_2c0;
  int local_2b8 [22];
  int local_260;
  longlong local_198;
  longlong local_188;
  int local_178 [72];
  longlong local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_4d8 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_568;
  lVar21 = *(longlong *)(param_1 + 0x4c);
  if ((lVar21 != 0) && (*(longlong *)(lVar21 + 0x40) != 0)) {
    local_4c8[0] = 0;
    local_330 = 0;
    local_318 = 0;
    local_2c0 = 0;
    local_520 = (int)(*(longlong *)(*(longlong *)(lVar21 + 0x40) + 0x70) -
                      *(longlong *)(*(longlong *)(lVar21 + 0x40) + 0x68) >> 3) + -1;
    if (-1 < local_520) {
      lVar21 = (longlong)local_520;
      local_4e0 = param_2;
LAB_140de3790:
      piVar20 = (int *)0x0;
      plVar18 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x4c) + 0x40) + 0x68);
      local_4e8 = *(void **)(*plVar18 + lVar21 * 8);
      local_528 = lVar21;
      if (*(int *)((longlong)local_4e8 + 0x24) == 2) {
        iVar17 = *(int *)((longlong)local_4e8 + 4);
        iVar22 = (int)(local_4e0[1] - *local_4e0 >> 2);
        if (((iVar22 != 0) && (iVar17 != -1)) &&
           (iVar22 = iVar22 + -1, piVar12 = piVar20, -1 < iVar22)) {
          do {
            iVar14 = iVar22 + (int)piVar12 >> 1;
            iVar15 = *(int *)(*local_4e0 + (longlong)iVar14 * 4);
            if (iVar15 == iVar17) {
              if (iVar14 != -1) {
                iVar22 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
                piVar12 = piVar20;
                if (-1 < iVar22) goto LAB_140de3842;
                goto switchD_140de389b_default;
              }
              break;
            }
            if (iVar17 < iVar15) {
              iVar22 = iVar14 + -1;
            }
            else {
              piVar12 = (int *)(ulonglong)(iVar14 + 1);
            }
          } while ((int)piVar12 <= iVar22);
        }
      }
      if ((*(byte *)((longlong)local_4e8 + 0x20) & 1) != 0) goto switchD_140de389b_default;
      goto LAB_140de49ad;
    }
  }
  return;
  while( true ) {
    if (iVar17 < *piVar27) {
      iVar22 = iVar15 + -1;
    }
    else {
      piVar12 = (int *)(ulonglong)(iVar15 + 1);
    }
    if (iVar22 < (int)piVar12) break;
LAB_140de3842:
    iVar15 = iVar22 + (int)piVar12 >> 1;
    piVar27 = *(int **)(DAT_141d691a8 + (longlong)iVar15 * 8);
    local_4f0 = piVar27;
    if (*piVar27 == iVar17) {
      if (piVar27 == (int *)0x0) break;
      switch(piVar27[1]) {
      case 0:
        iVar22 = -1;
        if (*(longlong *)(piVar27 + 0x12) - *(longlong *)(piVar27 + 0x10) >> 2 != 0) {
          iVar22 = **(int **)(piVar27 + 0x10);
        }
        piVar20 = piVar27 + 0x1c;
        if ((((*piVar20 != param_1[0x38]) && (*piVar20 != -1)) &&
            ((piVar27[0xe] != -1 || (iVar22 != -1)))) &&
           ((lVar10 = FUN_140004650(&DAT_141d7a048), lVar10 != 0 || (iVar22 != -1)))) {
          FUN_1407b8ef0(param_1,local_4c8);
          FUN_14000e080(local_2b8);
          local_538 = local_4c8;
          local_540 = 0;
          local_548 = 0;
          FUN_1407653b0(param_1,local_2b8,lVar10,iVar22);
          if (lVar10 == 0) {
LAB_140de4549:
            uVar26 = 1;
          }
          else {
            local_548 = local_548 & 0xffffffffffff0000;
            iVar22 = FUN_140769060(lVar10,0,0xffffffff);
            if (iVar22 < 25000) {
              if (iVar22 < 15000) {
                if (iVar22 < 3000) {
                  if (iVar22 < 300) goto LAB_140de4549;
                  uVar26 = 10;
                }
                else {
                  uVar26 = 0x19;
                }
              }
              else {
                uVar26 = 0x32;
              }
            }
            else {
              uVar26 = 100;
            }
          }
          if (lVar10 != 0) {
            lVar21 = *(longlong *)(lVar10 + 0x130);
            if (((lVar21 == 0) || (*(longlong *)(lVar21 + 0x48) == 0)) ||
               (*(longlong *)(*(longlong *)(lVar21 + 0x48) + 0x130) == 0)) {
              sVar9 = *(short *)(lVar10 + 4);
              sVar25 = *(short *)(lVar10 + 2);
              if (((sVar25 < 0) ||
                  ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar25))
                 || (sVar9 < 0)) {
LAB_140de4612:
                if ((lVar21 == 0) ||
                   (((lVar21 = *(longlong *)(lVar21 + 0x48), lVar21 == 0 ||
                     ((*(uint *)(lVar21 + 0x4c) & 0x2000000) != 0)) ||
                    ((*(uint *)(lVar21 + 0x48) & 0x2000000) == 0)))) goto LAB_140de463d;
              }
              else {
                lVar11 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar25 * 8);
                if (((ulonglong)(*(longlong *)(lVar11 + 0x180) - *(longlong *)(lVar11 + 0x178) >> 3)
                     <= (ulonglong)(longlong)sVar9) ||
                   (cVar8 = FUN_14000d840(*(longlong *)
                                           (*(longlong *)(lVar11 + 0x178) + (longlong)sVar9 * 8) +
                                          0x6a8,0x3a), cVar8 == '\0')) goto LAB_140de4612;
                if (((lVar21 != 0) && (*(longlong *)(lVar21 + 0x48) != 0)) &&
                   ((*(uint *)(*(longlong *)(lVar21 + 0x48) + 0x4c) & 0x2000000) != 0))
                goto LAB_140de463d;
              }
              uVar23 = 8;
              uVar24 = 1;
            }
            else {
LAB_140de463d:
              uVar23 = 0x19;
              uVar24 = uVar26;
            }
            FUN_1407c6860(param_1,piVar20,uVar23,uVar24);
            lVar11 = DAT_141d6dd58;
            lVar21 = DAT_141d6dd50;
            sVar9 = *(short *)(lVar10 + 4);
            sVar25 = *(short *)(lVar10 + 2);
            if (-1 < sVar25) {
              if (((ulonglong)(longlong)sVar25 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
                 (-1 < sVar9)) {
                lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar25 * 8);
                if (((ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)
                     <= (ulonglong)(longlong)sVar9) ||
                   (cVar8 = FUN_14000d840(*(longlong *)
                                           (*(longlong *)(lVar3 + 0x178) + (longlong)sVar9 * 8) +
                                          0x6a8,0x6e), cVar8 == '\0')) goto LAB_140de46ca;
LAB_140de472b:
                uVar23 = 100;
LAB_140de47ff:
                FUN_1407c6860(param_1,piVar20,0,uVar23);
              }
              else {
LAB_140de46ca:
                if (-1 < sVar25) {
                  if (((ulonglong)(longlong)sVar25 < (ulonglong)(lVar11 - lVar21 >> 3)) &&
                     (-1 < sVar9)) {
                    lVar3 = *(longlong *)(lVar21 + (longlong)sVar25 * 8);
                    if (((ulonglong)(longlong)sVar9 <
                         (ulonglong)
                         (*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
                       (cVar8 = FUN_14000d840(*(longlong *)
                                               (*(longlong *)(lVar3 + 0x178) + (longlong)sVar9 * 8)
                                              + 0x6a8,0x84), cVar8 != '\0')) goto LAB_140de472b;
                  }
                  if (-1 < sVar25) {
                    if (((ulonglong)(longlong)sVar25 < (ulonglong)(lVar11 - lVar21 >> 3)) &&
                       (-1 < sVar9)) {
                      lVar3 = *(longlong *)(lVar21 + (longlong)sVar25 * 8);
                      if (((ulonglong)(longlong)sVar9 <
                           (ulonglong)
                           (*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
                         (cVar8 = FUN_14000d840(*(longlong *)
                                                 (*(longlong *)(lVar3 + 0x178) + (longlong)sVar9 * 8
                                                 ) + 0x6a8,0x6f), cVar8 != '\0')) {
                        uVar23 = 0x19;
                        goto LAB_140de47ff;
                      }
                    }
                    if (((-1 < sVar25) &&
                        ((ulonglong)(longlong)sVar25 < (ulonglong)(lVar11 - lVar21 >> 3))) &&
                       (-1 < sVar9)) {
                      lVar21 = *(longlong *)(lVar21 + (longlong)sVar25 * 8);
                      if (((ulonglong)(longlong)sVar9 <
                           (ulonglong)
                           (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3)) &&
                         (cVar8 = FUN_14000d840(*(longlong *)
                                                 (*(longlong *)(lVar21 + 0x178) +
                                                 (longlong)sVar9 * 8) + 0x6a8,0x8f), cVar8 != '\0'))
                      {
                        uVar23 = 10;
                        goto LAB_140de47ff;
                      }
                    }
                  }
                }
              }
            }
          }
          if (0 < local_2b8[0]) {
            FUN_1407c6860(param_1,piVar20,9,1);
          }
          if (0 < local_260) {
            FUN_1407c6860(param_1,piVar20,0x1a,1);
          }
          if (lVar10 == 0) goto LAB_140de4927;
          plVar18 = *(longlong **)(lVar10 + 0xe8);
          plVar4 = *(longlong **)(lVar10 + 0xf0);
          goto joined_r0x000140de4864;
        }
        break;
      case 1:
        if ((piVar27[0x1c] != param_1[0x38]) && (piVar27[0x1c] != -1)) {
          iVar22 = (int)(DAT_141d691e0 - DAT_141d691d8 >> 3) + -1;
          piVar12 = piVar20;
          if (-1 < iVar22) goto LAB_140de38e0;
          goto LAB_140de3934;
        }
        break;
      case 2:
      case 3:
        piVar12 = piVar27 + 0x1c;
        if ((((*piVar12 != param_1[0x38]) && (*piVar12 != -1)) && (piVar27[0xc] != -1)) &&
           (lVar10 = FUN_140004650(&DAT_141d7a048), lVar10 != 0)) {
          bVar28 = false;
          plVar18 = *(longlong **)(lVar10 + 0xe8);
          piVar27 = (int *)((ulonglong)
                            ((longlong)*(longlong **)(lVar10 + 0xf0) + (7 - (longlong)plVar18)) >> 3
                           );
          if (*(longlong **)(lVar10 + 0xf0) < plVar18) {
            piVar27 = (int *)0x0;
          }
          if (piVar27 != (int *)0x0) goto LAB_140de3c48;
          goto LAB_140de3cd1;
        }
        break;
      case 4:
        if ((piVar27[0x2a] != param_1[0x38]) && (piVar27[0x2a] != -1)) {
          piVar12 = (int *)FUN_140004650(&DAT_141d7a048,piVar27[0x1c]);
          piVar13 = (int *)FUN_140004650(&DAT_141d7a048,piVar27[0xc]);
          if ((param_1 == piVar12) || (param_1 == piVar13)) {
            FUN_1407c6860(param_1,piVar27 + 0x2a,0,100);
            lVar21 = local_528;
          }
          else if ((piVar12 != (int *)0x0) || (lVar21 = local_528, piVar13 != (int *)0x0)) {
            FUN_1407b8ef0(param_1,local_4c8);
            FUN_14000e080(local_178);
            if (piVar27[0x1e] == -1) {
              piVar12 = piVar20;
            }
            iVar22 = -1;
            if (*(longlong *)(piVar27 + 0x22) - *(longlong *)(piVar27 + 0x20) >> 2 != 0) {
              iVar22 = **(int **)(piVar27 + 0x20);
            }
            if ((piVar12 != (int *)0x0) || (iVar22 != -1)) {
              local_538 = local_4c8;
              local_540 = 0;
              local_548 = 0;
              FUN_1407653b0(param_1,local_178,piVar12);
            }
            FUN_14000e080(local_2b8);
            if (piVar27[0x1e] == -1) {
              piVar13 = piVar20;
            }
            iVar22 = -1;
            if (*(longlong *)(piVar27 + 0x22) - *(longlong *)(piVar27 + 0x20) >> 2 != 0) {
              iVar22 = **(int **)(piVar27 + 0x20);
            }
            if ((piVar13 != (int *)0x0) || (iVar22 != -1)) {
              local_538 = local_4c8;
              local_540 = 0;
              local_548 = 0;
              FUN_1407653b0(param_1,local_2b8,piVar13);
            }
            if ((0 < local_178[0]) || (0 < local_2b8[0])) {
              FUN_1407c6860(param_1,piVar27 + 0x2a,0,0x19);
            }
            lVar10 = local_58;
            lVar11 = local_48;
            if (local_198 != 0) {
              FUN_140002020(local_198,local_188 - local_198 >> 2,4);
              lVar10 = local_58;
              lVar11 = local_48;
            }
            goto joined_r0x000140de440c;
          }
        }
        break;
      case 5:
        if (((piVar27[0x1c] != param_1[0x38]) && (piVar27[0x1c] != -1)) && (piVar27[0xc] != -1)) {
          if (piVar27[0xc] == param_1[0x38]) {
            FUN_1407c6860(param_1,piVar27 + 0x1c,0xf,1);
          }
          else {
            lVar10 = FUN_140004650(&DAT_141d7a048,piVar27[0xe]);
            iVar22 = -1;
            if (*(longlong *)(piVar27 + 0x12) - *(longlong *)(piVar27 + 0x10) >> 2 != 0) {
              iVar22 = **(int **)(piVar27 + 0x10);
            }
            if ((lVar10 != 0) || (lVar21 = local_528, iVar22 != -1)) {
              FUN_14000e080(local_2b8);
              local_538 = local_4c8;
              local_540 = 0;
              local_548 = 0;
              FUN_1407653b0(param_1,local_2b8,lVar10,iVar22);
              lVar10 = local_198;
              lVar11 = local_188;
              if (0 < local_2b8[0]) {
                FUN_1407c6860(param_1,piVar27 + 0x1c,0xf,1);
                lVar10 = local_198;
                lVar11 = local_188;
              }
              goto joined_r0x000140de440c;
            }
          }
        }
        break;
      case 6:
        lVar10 = *(longlong *)(piVar27 + 0x44);
        if (lVar10 != 0) {
          puVar19 = *(undefined8 **)(lVar10 + 8);
          puVar1 = *(undefined8 **)(lVar10 + 0x10);
          goto joined_r0x000140de3a58;
        }
        break;
      case 7:
        puVar2 = *(undefined4 **)(piVar27 + 0x44);
        switch(*puVar2) {
        case 0:
        case 2:
        case 4:
          iVar22 = puVar2[4];
          break;
        case 1:
          if (puVar2[0x16] == -1) {
            if (puVar2[0x18] == -1) {
              if (puVar2[0x19] == -1) goto switchD_140de3ef2_default;
              local_4f4 = 0x1b;
              local_514 = puVar2[0x19];
            }
            else {
              local_4f4 = 0x1a;
              local_514 = puVar2[0x18];
            }
            goto LAB_140de3f5f;
          }
          local_4f4 = 0x19;
          local_518 = puVar2[1];
          local_510 = puVar2[0x17];
          local_514 = puVar2[0x16];
          goto LAB_140de3f66;
        case 3:
          iVar22 = puVar2[0xe];
          break;
        case 5:
          local_4f4 = 0x21;
          goto LAB_140de3f5f;
        default:
          goto switchD_140de3ef2_default;
        }
        if (iVar22 != -1) {
          local_4f4 = 0x1c;
          local_514 = iVar22;
LAB_140de3f5f:
          local_518 = puVar2[1];
LAB_140de3f66:
          local_500 = piVar27[8];
          local_4fc = piVar27[9];
          local_4f8 = 0;
          FUN_140ce7da0(plVar18,&local_518,*(undefined4 *)((longlong)local_4e8 + 0x10),
                        *(undefined4 *)((longlong)local_4e8 + 0x14));
        }
switchD_140de3ef2_default:
        lVar10 = *(longlong *)(piVar27 + 0x44);
        lVar21 = local_528;
        if ((*(int *)(lVar10 + 8) != -1) &&
           (lVar11 = FUN_140004650(&DAT_141d7a048), lVar21 = local_528, lVar11 != 0)) {
          bVar28 = false;
          if ((*(longlong *)(param_1 + 0x4c) != 0) &&
             ((*(longlong *)(*(longlong *)(param_1 + 0x4c) + 0x60) != 0 &&
              (lVar21 = FUN_1400511c0(*(undefined4 *)(lVar10 + 4)), lVar21 != 0)))) {
            bVar28 = *(int *)(lVar21 + 0x10) == -1;
          }
          bVar6 = false;
          if ((bVar28) || (iVar22 = param_1[0x30], iVar22 == -1)) goto LAB_140de4094;
          lVar21 = local_528;
          if (*(int *)(lVar11 + 0xc0) != iVar22) {
            iVar15 = 0;
            iVar17 = (int)(DAT_141d86400 - DAT_141d863f8 >> 3) + -1;
            if (iVar17 < 0) goto LAB_140de4094;
            goto LAB_140de4050;
          }
        }
        break;
      case 8:
        if (((*(int *)(*(longlong *)(piVar27 + 0x44) + 8) == -1) ||
            (lVar10 = FUN_140004650(&DAT_141d7a048), lVar10 == 0)) ||
           (lVar10 = FUN_1407c6dd0(param_1), lVar10 == 0)) break;
        piVar20 = *(int **)(piVar27 + 0x44);
        if (*piVar20 == 0) {
          if ((piVar20[0x16] != *(int *)(lVar10 + 0x98)) || (piVar20[0x17] != *(int *)(lVar10 + 8)))
          break;
        }
        else {
          if ((*piVar20 != 1) ||
             (((piVar20[0xc] != param_1[0x38] &&
               ((piVar20[0x16] != *(int *)(lVar10 + 0x98) || (piVar20[0x17] != *(int *)(lVar10 + 8))
                ))) && ((lVar11 = FUN_140004650(&DAT_141d7a048,piVar20[0xc]), lVar11 == 0 ||
                        (lVar11 = FUN_1407c6dd0(lVar11), lVar11 != lVar10)))))) break;
          piVar20 = *(int **)(piVar27 + 0x44);
        }
        FUN_1407c6860(param_1,piVar20 + 2,0x1e);
        break;
      default:
        break;
      }
      break;
    }
  }
  goto switchD_140de389b_default;
  while( true ) {
    if (iVar22 < iVar14) {
      iVar17 = iVar16 + -1;
    }
    else {
      iVar15 = iVar16 + 1;
    }
    if (iVar17 < iVar15) break;
LAB_140de4050:
    iVar16 = iVar17 + iVar15 >> 1;
    iVar14 = **(int **)(DAT_141d863f8 + (longlong)iVar16 * 8);
    if (iVar14 == iVar22) {
      lVar21 = FUN_1400511c0(*(undefined4 *)(lVar10 + 4));
      if (lVar21 != 0) {
        bVar6 = false;
        if (*(int *)(lVar21 + 0x10) == -1) {
          bVar6 = true;
        }
      }
      break;
    }
  }
LAB_140de4094:
  lVar10 = FUN_1407c6dd0(param_1);
  bVar29 = false;
  if (((!bVar6) && (lVar10 != 0)) && (lVar21 = FUN_14000df00(&DAT_141c68010), lVar21 != 0)) {
    cVar8 = (**(code **)(**(longlong **)(lVar21 + 0x90) + 0x768))();
    bVar29 = cVar8 != '\0';
  }
  piVar20 = *(int **)(piVar27 + 0x44);
  iVar22 = *piVar20;
  bVar7 = false;
  if ((iVar22 == 3) && (bVar7 = false, piVar20[0xc] == param_1[0x38])) {
    bVar7 = true;
  }
  lVar21 = local_528;
  if ((bVar28) || ((bVar7 && (!bVar29)))) {
    if (iVar22 != 3) {
      if (iVar22 != 4) goto switchD_140de389b_default;
      bVar28 = piVar20[0xc] == param_1[0x38];
      goto LAB_140de4158;
    }
    bVar28 = piVar20[0xc] == param_1[0x38];
LAB_140de419d:
    lVar21 = local_528;
    if (!bVar28) goto switchD_140de389b_default;
    uVar23 = 0x1b;
  }
  else if (bVar6) {
    if (iVar22 == 3) {
      lVar10 = FUN_140004650(&DAT_141d7a048,piVar20[0xc]);
      lVar21 = local_528;
      if (lVar10 == 0) goto switchD_140de389b_default;
      bVar28 = *(int *)(lVar10 + 0xc0) == param_1[0x30];
      goto LAB_140de419d;
    }
    if ((iVar22 != 4) ||
       (lVar10 = FUN_140004650(&DAT_141d7a048,piVar20[0xc]), lVar21 = local_528, lVar10 == 0))
    goto switchD_140de389b_default;
    bVar28 = *(int *)(lVar10 + 0xc0) == param_1[0x30];
LAB_140de4158:
    lVar21 = local_528;
    if (!bVar28) goto switchD_140de389b_default;
    uVar23 = 0x1c;
  }
  else {
    if (!bVar29) goto switchD_140de389b_default;
    if (iVar22 == 1) {
      if ((piVar20[0x16] != *(int *)(lVar10 + 0x98)) || (piVar20[0x17] != *(int *)(lVar10 + 8)))
      goto switchD_140de389b_default;
      uVar23 = 0x1e;
    }
    else {
      if ((iVar22 != 3) ||
         (((piVar20[0xc] != param_1[0x38] &&
           ((piVar20[0x16] != *(int *)(lVar10 + 0x98) || (piVar20[0x17] != *(int *)(lVar10 + 8)))))
          && ((lVar11 = FUN_140004650(&DAT_141d7a048), lVar21 = local_528, lVar11 == 0 ||
              (lVar11 = FUN_1407c6dd0(lVar11), lVar21 = local_528, lVar11 != lVar10))))))
      goto switchD_140de389b_default;
      piVar20 = *(int **)(piVar27 + 0x44);
      uVar23 = 0x1e;
    }
  }
  FUN_1407c6860(param_1,piVar20 + 2,uVar23,0x32);
  lVar21 = local_528;
  goto switchD_140de389b_default;
joined_r0x000140de3a58:
  lVar21 = local_528;
  if (puVar1 <= puVar19) goto switchD_140de389b_default;
  puVar2 = (undefined4 *)*puVar19;
  if (puVar2[2] != param_1[0x38]) {
    uVar5 = puVar2[0xc] * 2;
    piVar12 = piVar20;
    if ((-1 < (int)uVar5) && (piVar12 = (int *)(ulonglong)uVar5, 100 < (int)uVar5)) {
      piVar12 = (int *)0x64;
    }
    switch(*puVar2) {
    case 0:
      uVar23 = 0x13;
      break;
    case 1:
      uVar23 = 0x14;
      break;
    case 2:
      uVar23 = 0x15;
      break;
    case 3:
      uVar23 = 0x16;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      uVar23 = 0x20;
      break;
    default:
      goto switchD_140de3aa0_default;
    }
    FUN_1407c6b20(param_1,puVar2 + 2,uVar23,piVar12);
  }
switchD_140de3aa0_default:
  puVar19 = puVar19 + 1;
  goto joined_r0x000140de3a58;
LAB_140de3c48:
  do {
    sVar9 = (*(code *)**(undefined8 **)*plVar18)();
    if ((sVar9 == 10) || (sVar9 == 0xd)) {
      FUN_1407b8ef0(param_1,local_4c8);
      iVar22 = FUN_1407b8b40(param_1,*(undefined4 *)(*plVar18 + 8),local_4c8);
      if (5 < iVar22) {
        if (iVar22 < 8) {
          uVar26 = 0xd;
        }
        else {
          if (iVar22 < 9) goto LAB_140de3cbc;
          if (iVar22 < 0xb) {
            uVar26 = 0xe;
          }
          else {
            if (iVar22 != 0x39) goto LAB_140de3cbc;
            uVar26 = 0x1a;
          }
        }
        FUN_1407c6860(param_1,piVar12,uVar26,1);
        bVar28 = true;
      }
    }
LAB_140de3cbc:
    plVar18 = plVar18 + 1;
    piVar20 = (int *)((longlong)piVar20 + 1);
  } while (piVar20 < piVar27);
  lVar21 = local_528;
  if (bVar28) goto switchD_140de389b_default;
LAB_140de3cd1:
  lVar11 = *(longlong *)(lVar10 + 0x130);
  if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x48) != 0)) &&
     (lVar21 = local_528, *(longlong *)(*(longlong *)(lVar11 + 0x48) + 0x130) != 0))
  goto switchD_140de389b_default;
  sVar9 = *(short *)(lVar10 + 4);
  sVar25 = *(short *)(lVar10 + 2);
  if (((sVar25 < 0) ||
      ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar25)) ||
     (sVar9 < 0)) {
LAB_140de3d8f:
    lVar21 = local_528;
    if (((lVar11 == 0) ||
        ((lVar10 = *(longlong *)(lVar11 + 0x48), lVar10 == 0 ||
         ((*(uint *)(lVar10 + 0x4c) & 0x2000000) != 0)))) ||
       ((*(uint *)(lVar10 + 0x48) & 0x2000000) == 0)) goto switchD_140de389b_default;
  }
  else {
    lVar21 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar25 * 8);
    if (((ulonglong)(*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3) <=
         (ulonglong)(longlong)sVar9) ||
       (cVar8 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar21 + 0x178) + (longlong)sVar9 * 8) +
                              0x6a8,0x3a), cVar8 == '\0')) goto LAB_140de3d8f;
    if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x48) != 0)) &&
       (lVar21 = local_528, (*(uint *)(*(longlong *)(lVar11 + 0x48) + 0x4c) & 0x2000000) != 0))
    goto switchD_140de389b_default;
  }
  iVar22 = local_4f0[0x3d];
  lVar21 = local_528;
  if (2 < iVar22) {
    if (iVar22 < 5) {
      uVar23 = 4;
    }
    else {
      if (6 < iVar22) goto switchD_140de389b_default;
      uVar23 = 5;
    }
    FUN_1407c6860(param_1,piVar12,uVar23,1);
    lVar21 = local_528;
  }
  goto switchD_140de389b_default;
  while( true ) {
    if (piVar27[0x34] < *piVar13) {
      iVar22 = iVar17 + -1;
    }
    else {
      piVar12 = (int *)(ulonglong)(iVar17 + 1);
    }
    if (iVar22 < (int)piVar12) break;
LAB_140de38e0:
    iVar17 = iVar22 + (int)piVar12 >> 1;
    piVar13 = *(int **)(DAT_141d691d8 + (longlong)iVar17 * 8);
    if (*piVar13 == piVar27[0x34]) {
      piVar20 = piVar13;
      if ((piVar13 != (int *)0x0) && (piVar13[1] == 10)) {
        FUN_1407c6860(param_1,piVar27 + 0x1c,0x12,1);
      }
      break;
    }
  }
LAB_140de3934:
  if (((piVar27[0xc] != -1) && (piVar20 != (int *)0x0)) && (piVar20[1] == 9)) {
    if (piVar27[0xc] == param_1[0x38]) {
      FUN_1407c6860(param_1,piVar27 + 0x1c,0x10,1);
    }
    else {
      lVar10 = FUN_140004650(&DAT_141d7a048,piVar27[0xe]);
      iVar22 = -1;
      if (*(longlong *)(piVar27 + 0x12) - *(longlong *)(piVar27 + 0x10) >> 2 != 0) {
        iVar22 = **(int **)(piVar27 + 0x10);
      }
      if ((lVar10 != 0) || (lVar21 = local_528, iVar22 != -1)) {
        FUN_14000e080(local_2b8);
        local_538 = local_4c8;
        local_540 = 0;
        local_548 = 0;
        FUN_1407653b0(param_1,local_2b8,lVar10,iVar22);
        lVar10 = local_198;
        lVar11 = local_188;
        if (0 < local_2b8[0]) {
          FUN_1407c6860(param_1,piVar27 + 0x1c,0x10,1);
          lVar10 = local_198;
          lVar11 = local_188;
        }
joined_r0x000140de440c:
        lVar21 = local_528;
        if (lVar10 != 0) {
          FUN_140002020(lVar10,lVar11 - lVar10 >> 2,4);
          lVar21 = local_528;
        }
      }
    }
  }
switchD_140de389b_default:
  free(local_4e8);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x4c) + 0x40);
  _Dst = (void *)(*(longlong *)(lVar10 + 0x68) + (longlong)local_520 * 8);
  _Src = (void *)((longlong)_Dst + 8);
  memmove(_Dst,_Src,*(longlong *)(lVar10 + 0x70) - (longlong)_Src);
  *(longlong *)(lVar10 + 0x70) = *(longlong *)(lVar10 + 0x70) + -8;
LAB_140de49ad:
  local_520 = local_520 + -1;
  lVar21 = lVar21 + -1;
  if (local_520 < 0) {
    return;
  }
  goto LAB_140de3790;
joined_r0x000140de4864:
  if (plVar4 <= plVar18) goto LAB_140de4927;
  sVar9 = (*(code *)**(undefined8 **)*plVar18)();
  uVar24 = uVar26;
  if (sVar9 == 8) {
    iVar22 = FUN_1407b8b40(param_1,*(undefined4 *)(*plVar18 + 8),local_4c8);
    if (iVar22 - 6U < 2) {
      uVar23 = 0;
      goto LAB_140de490f;
    }
  }
  else if (sVar9 == 9) {
    iVar22 = FUN_1407b8b40(param_1,*(undefined4 *)(*plVar18 + 8),local_4c8);
    if (iVar22 - 6U < 2) {
      uVar23 = 0x1a;
      goto LAB_140de490f;
    }
  }
  else if (((sVar9 == 10) || (sVar9 == 0xd)) &&
          (iVar22 = FUN_1407b8b40(param_1,*(undefined4 *)(*plVar18 + 8),local_4c8), 5 < iVar22)) {
    if (iVar22 < 8) {
      uVar23 = 0xd;
      uVar24 = 1;
    }
    else {
      if (1 < iVar22 - 9U) goto LAB_140de491a;
      uVar23 = 0xe;
      uVar24 = 1;
    }
LAB_140de490f:
    FUN_1407c6860(param_1,piVar20,uVar23,uVar24);
  }
LAB_140de491a:
  plVar18 = plVar18 + 1;
  goto joined_r0x000140de4864;
LAB_140de4927:
  lVar21 = local_528;
  if (local_198 != 0) {
    FUN_140002020(local_198,local_188 - local_198 >> 2,4);
    lVar21 = local_528;
  }
  goto switchD_140de389b_default;
}

