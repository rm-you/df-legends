// FUN_14028cc90 @ 14028cc90
// callees:
//   -> 140dfd210 _alloca_probe
//   -> 140286b00 FUN_140286b00
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 140dfdcc0 memcmp
//   -> 140289920 FUN_140289920
//   -> 140dfb5c4 operator_new
//   -> 1402b6d80 FUN_1402b6d80
//   -> 1402b7220 FUN_1402b7220
//   -> 140050410 FUN_140050410
//   -> 140051e20 FUN_140051e20
//   -> 140283a30 FUN_140283a30
//   -> 140dfb5b4 free
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140288ff0 FUN_140288ff0
//   -> 14000c110 FUN_14000c110
//   -> 140071310 FUN_140071310
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 1402803e0 FUN_1402803e0
//   -> 1402870f0 FUN_1402870f0
//   -> 14000d730 FUN_14000d730
//   -> 1400025a0 FUN_1400025a0
//   -> 140283980 FUN_140283980
//   -> 140051de0 FUN_140051de0
//   -> 14000c260 FUN_14000c260
//   -> 1402b3b00 FUN_1402b3b00
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14014a920 FUN_14014a920
//   -> 140071380 FUN_140071380
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 14014a750 FUN_14014a750
//   -> 1402802d0 FUN_1402802d0
//   -> 1402837a0 FUN_1402837a0
//   -> 14028dd20 FUN_14028dd20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_14028cc90(longlong param_1,longlong *param_2,undefined1 param_3)

{
  void *_Memory;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcVar13;
  longlong lVar14;
  undefined1 *puVar15;
  size_t _Size;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_46c8 [32];
  undefined8 *local_46a8;
  undefined1 local_4698;
  int local_4694;
  int local_4690;
  int local_468c;
  undefined8 **local_4688;
  undefined8 **ppuStack_4680;
  undefined8 **local_4678;
  undefined8 *local_4670;
  longlong local_4668;
  undefined8 local_4660;
  longlong local_4658;
  longlong *local_4650;
  undefined8 local_4648;
  void *local_4640;
  undefined8 *local_4638;
  undefined8 local_4630;
  undefined8 local_4628;
  undefined8 local_4618;
  undefined8 local_4610;
  undefined8 local_4600;
  undefined8 local_45f8;
  undefined8 local_45e8;
  undefined8 local_45e0;
  undefined8 local_45d0;
  undefined8 local_45c8;
  undefined8 local_45b8;
  undefined8 local_45b0;
  undefined8 local_4588;
  undefined1 local_4580 [17112];
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_218 [24];
  undefined1 local_200 [24];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined7 uStack_1b7;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 local_198 [2];
  longlong local_188;
  ulonglong local_180;
  undefined1 local_178;
  undefined7 uStack_177;
  longlong local_168;
  ulonglong local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  ulonglong local_148;
  ulonglong local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [32];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14028ccae;
  local_4648 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_46c8;
  local_1a0 = 0xf;
  local_1a8 = 0;
  local_1b8 = 0;
  local_4698 = param_3;
  local_4668 = param_1;
  local_4650 = param_2;
  FUN_140286b00(&local_4638);
  local_120 = 0xf;
  local_128 = 0;
  local_138[0] = 0;
  uVar20 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_4660 = 0;
  local_4694 = 0;
  local_468c = 1;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_4658 = 1;
    do {
      puVar5 = *(undefined1 **)(*param_2 + local_4658 * 8);
      if (&local_1b8 != puVar5) {
        uVar20 = FUN_14000c8b0(&local_1b8,puVar5,0,0xffffffffffffffff);
      }
      iVar19 = 0;
      if (local_1a8 != 0) {
        do {
          puVar5 = &local_1b8;
          if (0xf < local_1a0) {
            puVar5 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
          }
          if (puVar5[iVar19] != '[') goto LAB_14028dc6f;
          local_4670 = (undefined8 *)CONCAT44(local_4670._4_4_,iVar19);
          local_140 = 0xf;
          local_148 = 0;
          local_158 = 0;
          if (local_1a8 == 0) {
LAB_14028dc53:
            if (0xf < local_140) {
              puVar5 = (undefined1 *)CONCAT71(uStack_157,local_158);
              uVar12 = local_140;
LAB_14028dc60:
              uVar20 = FUN_140002020(puVar5,uVar12 + 1,1);
            }
          }
          else {
            iVar19 = iVar19 + 1;
            local_4690 = iVar19;
            if (local_1a8 < (ulonglong)(longlong)iVar19) goto LAB_14028dc53;
            puVar5 = &local_1b8;
            if (0xf < local_1a0) {
              puVar5 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
            }
            pcVar13 = puVar5 + local_1a8;
            uVar12 = local_140;
            uVar11 = local_148;
            for (pcVar10 = puVar5 + iVar19;
                ((local_4690 = iVar19, local_148 = uVar11, local_140 = uVar12, pcVar10 < pcVar13 &&
                 (*pcVar10 != ':')) && (*pcVar10 != ']')); pcVar10 = pcVar10 + 1) {
              uVar20 = FUN_140050540(&local_158,1);
              iVar19 = iVar19 + 1;
              uVar12 = local_140;
              uVar11 = local_148;
            }
            if (uVar11 == 0) goto LAB_14028dc53;
            puVar5 = (undefined1 *)CONCAT71(uStack_157,local_158);
            puVar8 = &local_158;
            if (0xf < uVar12) {
              puVar8 = puVar5;
            }
            _Size = 8;
            if (uVar11 < 8) {
              _Size = uVar11;
            }
            if (((_Size == 0) || (iVar3 = memcmp(puVar8,"CREATURE",_Size), iVar3 == 0)) &&
               (uVar11 == 8)) {
              FUN_140289920();
              local_4640 = operator_new(0x4808);
              local_4638 = (undefined8 *)FUN_1402b6d80(local_4640);
              local_45f8 = local_4600;
              local_45e0 = local_45e8;
              local_45c8 = local_45d0;
              local_45b0 = local_45b8;
              local_4588 = 0;
              local_4628 = local_4630;
              local_4610 = local_4618;
              FUN_1402b7220(local_4580);
              local_2a0 = local_2a8;
              if (local_2a8 == local_298) {
                FUN_140050410(&local_2a8);
              }
              if (local_2a0 != (longlong *)0x0) {
                *local_2a0 = (longlong)local_4580;
              }
              local_2a0 = local_2a0 + 1;
              local_288 = local_290;
              local_270 = local_278;
              local_258 = local_260;
              local_240 = local_248;
              local_228 = local_230;
              FUN_140051e20(local_218);
              FUN_140051e20(local_200);
              lVar9 = local_118;
              local_1e0 = local_1e8;
              local_1c8 = local_1d0;
              iVar3 = (int)(lStack_110 - local_118 >> 3) + -1;
              lVar14 = (longlong)iVar3;
              if (-1 < iVar3) {
                do {
                  _Memory = *(void **)(lVar9 + lVar14 * 8);
                  if (_Memory != (void *)0x0) {
                    FUN_140283a30(_Memory);
                    free(_Memory);
                  }
                  lVar14 = lVar14 + -1;
                } while (-1 < lVar14);
              }
              lStack_110 = lVar9;
              FUN_140051e20(&uStack_100);
              uStack_e0 = local_e8;
              FUN_140051e20(&uStack_d0);
              FUN_140051e20(&local_b8);
              local_98 = uStack_a0;
              uVar20 = FUN_140051e20(&local_88);
              puVar7 = local_4638;
              local_4660 = 0;
              local_4638[2] = 0;
              puVar6 = local_4638;
              if (0xf < (ulonglong)local_4638[3]) {
                puVar6 = (undefined8 *)*local_4638;
              }
              *(undefined1 *)puVar6 = 0;
              if (local_1a8 == 0) {
LAB_14028d227:
                puVar7 = local_4638;
                if (local_4638 != (undefined8 *)0x0) {
                  FUN_140288ff0(local_4638);
                  free(puVar7);
                  uVar20 = extraout_XMM0_Da;
                }
                local_4638 = (undefined8 *)0x0;
              }
              else {
                iVar19 = iVar19 + 1;
                if (local_1a8 < (ulonglong)(longlong)iVar19) goto LAB_14028d227;
                puVar8 = &local_1b8;
                if (0xf < local_1a0) {
                  puVar8 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                }
                puVar15 = &local_1b8;
                if (0xf < local_1a0) {
                  puVar15 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                }
                pcVar13 = puVar15 + local_1a8;
                for (pcVar10 = puVar8 + iVar19;
                    ((pcVar10 < pcVar13 && (*pcVar10 != ':')) && (*pcVar10 != ']'));
                    pcVar10 = pcVar10 + 1) {
                  uVar20 = FUN_140050540(puVar7,1);
                  iVar19 = iVar19 + 1;
                }
                if (puVar7[2] == 0) goto LAB_14028d227;
                if ((&local_4638 < *(undefined8 ***)(param_1 + 0x28)) &&
                   (ppuVar18 = *(undefined8 ***)(param_1 + 0x20), ppuVar18 <= &local_4638)) {
                  if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x30)) {
                    uVar20 = FUN_14000c2d0(param_1 + 0x20,1);
                  }
                  if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
                    **(undefined8 **)(param_1 + 0x28) =
                         *(undefined8 *)
                          (*(longlong *)(param_1 + 0x20) +
                          ((longlong)&local_4638 - (longlong)ppuVar18 >> 3) * 8);
                  }
                }
                else {
                  if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x30)) {
                    uVar20 = FUN_14000c2d0(param_1 + 0x20,1);
                  }
                  if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
                    **(undefined8 **)(param_1 + 0x28) = local_4638;
                  }
                }
                *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
              }
              if (uVar12 < 0x10) goto LAB_14028dc6f;
              goto LAB_14028dc60;
            }
            if (local_4638 == (undefined8 *)0x0) {
LAB_14028dc45:
              uVar20 = FUN_14000c260(&local_158);
            }
            else {
              iVar3 = FUN_14000c110(&local_158,"COPY_TAGS_FROM");
              if (iVar3 == 0) {
                uVar11 = 0xf;
                local_160 = 0xf;
                local_168 = 0;
                local_178 = 0;
                uVar20 = extraout_XMM0_Da_00;
                if (local_1a8 != 0) {
                  iVar19 = iVar19 + 1;
                  if ((ulonglong)(longlong)iVar19 <= local_1a8) {
                    puVar8 = &local_1b8;
                    if (0xf < local_1a0) {
                      puVar8 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                    }
                    puVar15 = &local_1b8;
                    if (0xf < local_1a0) {
                      puVar15 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                    }
                    pcVar13 = puVar15 + local_1a8;
                    uVar11 = local_160;
                    for (pcVar10 = puVar8 + iVar19;
                        ((local_160 = uVar11, pcVar10 < pcVar13 && (*pcVar10 != ':')) &&
                        (*pcVar10 != ']')); pcVar10 = pcVar10 + 1) {
                      uVar20 = FUN_140050540(&local_178);
                      iVar19 = iVar19 + 1;
                      uVar11 = local_160;
                    }
                    if (local_168 != 0) {
                      iVar3 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >>
                                   3) + -1;
                      if (-1 < iVar3) {
                        lVar9 = *(longlong *)(param_1 + 0x20);
                        do {
                          iVar4 = FUN_140071310(*(undefined8 *)(lVar9 + (longlong)iVar3 * 8));
                          if (iVar4 == 0) {
                            lVar9 = *(longlong *)(lVar9 + (longlong)iVar3 * 8);
                            goto LAB_14028d379;
                          }
                          iVar3 = iVar3 + -1;
                        } while (-1 < iVar3);
                      }
                      lVar9 = 0;
LAB_14028d379:
                      if (lVar9 == 0) {
                        FUN_14007b5f0(local_198,local_4638,&DAT_140e7aaf8);
                        FUN_14000c9f0(local_198,"Unrecognized Creature Copy (Order is important!): "
                                      ,0x32);
                        FUN_14000cb40(local_198,&local_178,0);
                        uVar20 = FUN_14014a240(local_198);
                        if (0xf < local_180) {
                          uVar20 = FUN_140002020(CONCAT71(local_198[0]._1_7_,
                                                          (undefined1)local_198[0]),local_180 + 1,1)
                          ;
                        }
                        local_180 = 0xf;
                        local_188 = 0;
                        local_198[0]._0_1_ = 0;
                        if (0xf < local_160) {
                          lVar9 = local_160 + 1;
                          goto LAB_14028d429;
                        }
                        goto LAB_14028d43c;
                      }
                      uVar20 = FUN_1402803e0(local_4638 + 0x8fe,lVar9 + 0x47f0);
                      local_4694 = (int)((longlong)(local_4638[0x8ff] - local_4638[0x8fe]) >> 3);
                    }
                  }
                }
                if (0xf < uVar11) {
                  lVar9 = uVar11 + 1;
LAB_14028d429:
                  uVar20 = FUN_140002020(CONCAT71(uStack_177,local_178),lVar9,1);
                }
              }
              else {
                iVar3 = FUN_14000c110(&local_158,"APPLY_CREATURE_VARIATION");
                if (iVar3 != 0) {
                  cVar2 = FUN_14000d730(&local_158,"APPLY_CURRENT_CREATURE_VARIATION");
                  if (cVar2 == '\0') {
                    local_46a8 = &local_4660;
                    cVar2 = FUN_1402b3b00(local_138,&local_158,&local_4690);
                    if (cVar2 == '\0') {
                      cVar2 = FUN_14000d730(&local_158,"GO_TO_START");
                      if (cVar2 == '\0') {
                        cVar2 = FUN_14000d730(&local_158,"GO_TO_END");
                        if (cVar2 == '\0') {
                          cVar2 = FUN_14000d730(&local_158,"GO_TO_TAG");
                          if (cVar2 == '\0') {
                            FUN_14000c2b0(local_68);
                            cVar2 = FUN_14014a750(local_68,&local_1b8,&local_4670);
                            if (cVar2 != '\0') {
                              FUN_1402802d0(local_4638 + 0x8fe,local_4694,local_68);
                              local_4694 = local_4694 + 1;
                            }
                            iVar19 = (int)local_4670;
                            FUN_14000c260(local_68);
                            goto LAB_14028dc45;
                          }
                          FUN_14000c2b0(&local_178);
                          cVar2 = FUN_14014a920(&local_178,&local_1b8,&local_4690);
                          if (cVar2 != '\0') {
                            local_4694 = (int)((longlong)(local_4638[0x8ff] - local_4638[0x8fe]) >>
                                              3);
                            bVar1 = false;
                            iVar19 = 0;
                            if ((longlong)(local_4638[0x8ff] - local_4638[0x8fe]) >> 3 != 0) {
                              lVar9 = 0;
                              do {
                                lVar14 = FUN_140071380(*(undefined8 *)(lVar9 + local_4638[0x8fe]),
                                                       &local_178);
                                if (lVar14 == 1) {
                                  bVar1 = true;
                                  local_4694 = iVar19;
                                  break;
                                }
                                iVar19 = iVar19 + 1;
                                lVar9 = lVar9 + 8;
                              } while ((ulonglong)(longlong)iVar19 <
                                       (ulonglong)
                                       ((longlong)(local_4638[0x8ff] - local_4638[0x8fe]) >> 3));
                            }
                            if (!bVar1) {
                              FUN_14007b5f0(local_198,local_4638,&DAT_140e7aaf8);
                              FUN_14000c1f0(local_198,
                                            "GO_TO_TAG could not find target, setting to end: ");
                              FUN_140050380(local_198,&local_178);
                              FUN_14014a240(local_198);
                              FUN_14000c260(local_198);
                            }
                          }
                          FUN_14000c260(&local_178);
                          uVar20 = FUN_14000c260(&local_158);
                          iVar19 = local_4690;
                        }
                        else {
                          local_4694 = (int)((longlong)(local_4638[0x8ff] - local_4638[0x8fe]) >> 3)
                          ;
                          uVar20 = FUN_14000c260(&local_158);
                          iVar19 = local_4690;
                        }
                      }
                      else {
                        local_4694 = 0;
                        uVar20 = FUN_14000c260(&local_158);
                        iVar19 = local_4690;
                      }
                    }
                    else {
                      uVar20 = FUN_14000c260(&local_158);
                      iVar19 = local_4690;
                    }
                  }
                  else {
                    FUN_1400025a0(&local_4688);
                    FUN_1402870f0(local_138,local_4638 + 0x8fe,&local_4694);
                    FUN_140283980(local_138);
                    FUN_140051de0(&local_4688);
                    uVar20 = FUN_14000c260(&local_158);
                  }
                  goto LAB_14028dc6f;
                }
                local_160 = 0xf;
                local_168 = 0;
                local_178 = 0;
                uVar20 = extraout_XMM0_Da_01;
                if (local_1a8 != 0) {
                  iVar19 = iVar19 + 1;
                  if ((ulonglong)(longlong)iVar19 <= local_1a8) {
                    puVar8 = &local_1b8;
                    if (0xf < local_1a0) {
                      puVar8 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                    }
                    puVar15 = &local_1b8;
                    if (0xf < local_1a0) {
                      puVar15 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                    }
                    pcVar13 = puVar15 + local_1a8;
                    for (pcVar10 = puVar8 + iVar19;
                        ((pcVar10 < pcVar13 && (*pcVar10 != ':')) && (*pcVar10 != ']'));
                        pcVar10 = pcVar10 + 1) {
                      uVar20 = FUN_140050540(&local_178,1);
                      iVar19 = iVar19 + 1;
                    }
                    if (local_168 != 0) {
                      local_4688 = (undefined8 **)0x0;
                      ppuStack_4680 = (undefined8 **)0x0;
                      ppuVar17 = (undefined8 **)0x0;
                      local_4678 = (undefined8 **)0x0;
                      ppuVar18 = (undefined8 **)0x0;
                      ppuVar16 = (undefined8 **)0x0;
                      while( true ) {
                        if ((ulonglong)(longlong)iVar19 < local_1a8) {
                          puVar5 = &local_1b8;
                          if (0xf < local_1a0) {
                            puVar5 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                          }
                          if (puVar5[iVar19] == ']') goto LAB_14028d7e2;
                        }
                        local_180 = 0xf;
                        local_188 = 0;
                        local_198[0]._0_1_ = 0;
                        if (local_1a8 == 0) break;
                        iVar19 = iVar19 + 1;
                        if (local_1a8 < (ulonglong)(longlong)iVar19) break;
                        puVar5 = &local_1b8;
                        if (0xf < local_1a0) {
                          puVar5 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                        }
                        puVar8 = &local_1b8;
                        if (0xf < local_1a0) {
                          puVar8 = (undefined1 *)CONCAT71(uStack_1b7,local_1b8);
                        }
                        pcVar13 = puVar8 + local_1a8;
                        uVar12 = local_180;
                        for (pcVar10 = puVar5 + iVar19;
                            ((local_180 = uVar12, pcVar10 < pcVar13 && (*pcVar10 != ':')) &&
                            (*pcVar10 != ']')); pcVar10 = pcVar10 + 1) {
                          FUN_140050540(local_198,1);
                          iVar19 = iVar19 + 1;
                          uVar12 = local_180;
                        }
                        if (local_188 == 0) break;
                        lVar9 = 0;
                        lVar14 = (longlong)(int)local_188;
                        puVar5 = (undefined1 *)CONCAT71(local_198[0]._1_7_,(undefined1)local_198[0])
                        ;
                        if (0 < lVar14) {
                          do {
                            puVar8 = (undefined1 *)local_198;
                            if (0xf < uVar12) {
                              puVar8 = puVar5;
                            }
                            if (puVar8[lVar9] == '|') {
                              puVar8 = (undefined1 *)local_198;
                              if (0xf < uVar12) {
                                puVar8 = puVar5;
                              }
                              puVar8[lVar9] = 0x3a;
                              puVar5 = (undefined1 *)
                                       CONCAT71(local_198[0]._1_7_,(undefined1)local_198[0]);
                              uVar12 = local_180;
                            }
                            lVar9 = lVar9 + 1;
                          } while (lVar9 < lVar14);
                        }
                        puVar6 = operator_new(0x20);
                        puVar6[3] = 0xf;
                        puVar6[2] = 0;
                        puVar7 = puVar6;
                        if (0xf < (ulonglong)puVar6[3]) {
                          puVar7 = (undefined8 *)*puVar6;
                        }
                        *(undefined1 *)puVar7 = 0;
                        local_4670 = puVar6;
                        if (puVar6 != local_198) {
                          FUN_14000c8b0(puVar6,local_198,0,0xffffffffffffffff);
                          puVar5 = (undefined1 *)
                                   CONCAT71(local_198[0]._1_7_,(undefined1)local_198[0]);
                          uVar12 = local_180;
                        }
                        if ((&local_4670 < ppuVar18) && (ppuVar16 <= &local_4670)) {
                          lVar9 = (longlong)&local_4670 - (longlong)ppuVar16;
                          if (ppuVar18 == ppuVar17) {
                            FUN_14000c2d0(&local_4688,1);
                            ppuVar16 = local_4688;
                            ppuVar17 = local_4678;
                            ppuVar18 = ppuStack_4680;
                          }
                          if (ppuVar18 != (undefined8 **)0x0) {
                            *ppuVar18 = ppuVar16[lVar9 >> 3];
                          }
                        }
                        else {
                          if (ppuVar18 == ppuVar17) {
                            FUN_14000c2d0(&local_4688,1);
                            ppuVar16 = local_4688;
                            ppuVar17 = local_4678;
                            ppuVar18 = ppuStack_4680;
                          }
                          if (ppuVar18 != (undefined8 **)0x0) {
                            *ppuVar18 = puVar6;
                          }
                        }
                        ppuVar18 = ppuVar18 + 1;
                        ppuStack_4680 = ppuVar18;
                        if (0xf < uVar12) {
                          FUN_140002020(puVar5,uVar12 + 1);
                        }
                      }
                      if (0xf < local_180) {
                        FUN_140002020(CONCAT71(local_198[0]._1_7_,(undefined1)local_198[0]),
                                      local_180 + 1,1);
                      }
LAB_14028d7e2:
                      lVar9 = DAT_141d6dd18;
                      iVar3 = (int)(DAT_141d6dd20 - DAT_141d6dd18 >> 3) + -1;
                      if (-1 < iVar3) {
                        lVar14 = (longlong)iVar3;
                        do {
                          iVar4 = FUN_140071310(*(undefined8 *)(lVar9 + lVar14 * 8),&local_178);
                          if (iVar4 == 0) {
                            lVar9 = *(longlong *)(lVar9 + (longlong)iVar3 * 8);
                            if (lVar9 != 0) {
                              FUN_1402870f0(lVar9,local_4638 + 0x8fe,&local_4694);
                              goto LAB_14028d8e0;
                            }
                            break;
                          }
                          iVar3 = iVar3 + -1;
                          lVar14 = lVar14 + -1;
                        } while (-1 < lVar14);
                      }
                      FUN_14007b5f0(local_198,local_4638,&DAT_140e7aaf8);
                      FUN_14000c9f0(local_198,"Unrecognized Creature Variation: ",0x21);
                      FUN_14000cb40(local_198,&local_178,0);
                      FUN_14014a240(local_198);
                      if (0xf < local_180) {
                        FUN_140002020(CONCAT71(local_198[0]._1_7_,(undefined1)local_198[0]),
                                      local_180 + 1,1);
                      }
                      local_180 = 0xf;
                      local_188 = 0;
                      local_198[0]._0_1_ = 0;
LAB_14028d8e0:
                      uVar20 = FUN_140051e20(&local_4688);
                      if (local_4688 != (undefined8 **)0x0) {
                        uVar20 = FUN_140002020(local_4688,
                                               (longlong)local_4678 - (longlong)local_4688 >> 3,8);
                      }
                      if (0xf < local_160) {
                        uVar20 = FUN_140002020(CONCAT71(uStack_177,local_178),local_160 + 1,1);
                      }
                      param_1 = local_4668;
                      if (0xf < local_140) {
                        uVar20 = FUN_140002020(CONCAT71(uStack_157,local_158),local_140 + 1,1);
                        param_1 = local_4668;
                      }
                      goto LAB_14028dc6f;
                    }
                  }
                }
                if (0xf < local_160) {
                  lVar9 = local_160 + 1;
                  goto LAB_14028d429;
                }
              }
LAB_14028d43c:
              if (0xf < uVar12) goto LAB_14028dc60;
            }
          }
LAB_14028dc6f:
          iVar19 = iVar19 + 1;
          param_2 = local_4650;
        } while ((ulonglong)(longlong)iVar19 < local_1a8);
      }
      local_468c = local_468c + 1;
      local_4658 = local_4658 + 1;
      param_3 = local_4698;
    } while ((ulonglong)(longlong)local_468c < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  if (local_4638 != (undefined8 *)0x0) {
    FUN_140289920(uVar20,&local_4638,param_3);
  }
  FUN_1402837a0(local_138);
  FUN_14028dd20(&local_4638);
  FUN_14000c260(&local_1b8);
  return;
}

