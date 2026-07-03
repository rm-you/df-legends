// FUN_1401b3de0 @ 1401b3de0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 140dfdcc0 memcmp
//   -> 140dfb5c4 operator_new
//   -> 1401b3830 FUN_1401b3830
//   -> 140002020 FUN_140002020
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1401b3de0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  size_t sVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  int local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  ulonglong local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong uVar11;
  
  local_c8 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_118;
  local_78 = 0xf;
  local_80 = 0;
  local_90 = 0;
  puVar4 = (undefined8 *)0x0;
  local_d8 = 0;
  local_e8 = 1;
  local_d0 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_e0 = 1;
    do {
      puVar3 = *(undefined1 **)(*local_d0 + local_e0 * 8);
      if (&local_90 != puVar3) {
        FUN_14000c8b0(&local_90,puVar3,0,0xffffffffffffffff);
      }
      iVar6 = 0;
      if (local_80 != 0) {
        do {
          puVar3 = &local_90;
          if (0xf < local_78) {
            puVar3 = (undefined1 *)CONCAT71(uStack_8f,local_90);
          }
          if (puVar3[iVar6] == '[') {
            local_98 = 0xf;
            uVar11 = 0xf;
            uVar10 = 0xf;
            local_58 = 0xf;
            local_60 = 0;
            local_70[0]._0_1_ = 0;
            local_a0 = 0;
            local_b0 = 0;
            uVar13 = 0xf;
            if (local_80 != 0) {
              iVar6 = iVar6 + 1;
              if ((ulonglong)(longlong)iVar6 <= local_80) {
                puVar3 = &local_90;
                if (0xf < local_78) {
                  puVar3 = (undefined1 *)CONCAT71(uStack_8f,local_90);
                }
                pcVar7 = puVar3 + local_80;
                uVar13 = local_98;
                uVar1 = local_a0;
                for (pcVar5 = puVar3 + iVar6;
                    ((local_a0 = uVar1, local_98 = uVar13, pcVar5 < pcVar7 && (*pcVar5 != ':')) &&
                    (*pcVar5 != ']')); pcVar5 = pcVar5 + 1) {
                  FUN_140050540(&local_b0,1);
                  iVar6 = iVar6 + 1;
                  uVar13 = local_98;
                  uVar1 = local_a0;
                }
                if (uVar1 != 0) {
                  puVar3 = &local_b0;
                  if (0xf < uVar13) {
                    puVar3 = (undefined1 *)CONCAT71(uStack_af,local_b0);
                  }
                  sVar9 = 6;
                  if (uVar1 < 6) {
                    sVar9 = uVar1;
                  }
                  if (((sVar9 != 0) && (iVar2 = memcmp(puVar3,"OBJECT",sVar9), iVar2 != 0)) ||
                     (uVar1 != 6)) {
                    puVar3 = &local_b0;
                    if (0xf < uVar13) {
                      puVar3 = (undefined1 *)CONCAT71(uStack_af,local_b0);
                    }
                    sVar9 = 0x11;
                    if (uVar1 < 0x11) {
                      sVar9 = uVar1;
                    }
                    uVar12 = uVar10;
                    if (((sVar9 == 0) ||
                        (iVar2 = memcmp(puVar3,"BUILDING_WORKSHOP",sVar9), iVar2 == 0)) &&
                       (uVar1 == 0x11)) {
                      local_60 = 0;
                      local_70[0]._0_1_ = 0;
                      uVar12 = uVar11;
                      if (local_80 != 0) {
                        iVar6 = iVar6 + 1;
                        uVar12 = uVar10;
                        if ((ulonglong)(longlong)iVar6 <= local_80) {
                          puVar3 = &local_90;
                          if (0xf < local_78) {
                            puVar3 = (undefined1 *)CONCAT71(uStack_8f,local_90);
                          }
                          puVar8 = &local_90;
                          if (0xf < local_78) {
                            puVar8 = (undefined1 *)CONCAT71(uStack_8f,local_90);
                          }
                          pcVar7 = puVar8 + local_80;
                          for (pcVar5 = puVar3 + iVar6;
                              ((pcVar5 < pcVar7 &&
                               (uVar11 = local_58, uVar13 = local_98, *pcVar5 != ':')) &&
                              (*pcVar5 != ']')); pcVar5 = pcVar5 + 1) {
                            FUN_140050540(local_70,1);
                            iVar6 = iVar6 + 1;
                            uVar11 = local_58;
                            uVar13 = local_98;
                          }
                          uVar12 = uVar11;
                          if (local_60 != 0) {
                            puVar4 = operator_new(0x40a0);
                            local_c0 = puVar4;
                            FUN_1401b3830(puVar4);
                            *puVar4 = building_def_workshopst::vftable;
                            if (puVar4 + 1 != local_70) {
                              FUN_14000c8b0(puVar4 + 1,local_70,0,0xffffffffffffffff);
                              uVar12 = local_58;
                            }
                            *(undefined4 *)(puVar4 + 10) = 0xd;
                            *(undefined4 *)((longlong)puVar4 + 0x54) = 0x17;
                            uVar13 = local_98;
                          }
                        }
                      }
                    }
                    else {
                      puVar3 = &local_b0;
                      if (0xf < uVar13) {
                        puVar3 = (undefined1 *)CONCAT71(uStack_af,local_b0);
                      }
                      sVar9 = 0x10;
                      if (uVar1 < 0x10) {
                        sVar9 = uVar1;
                      }
                      if (((sVar9 != 0) &&
                          (iVar2 = memcmp(puVar3,"BUILDING_FURNACE",sVar9), iVar2 != 0)) ||
                         (uVar1 != 0x10)) {
                        if (puVar4 == (undefined8 *)0x0) {
                          local_38 = 0xf;
                          local_40 = 0;
                          local_50 = 0;
                          FUN_14000c780(&local_50,"Unrecognized Building Definition Type: ",0x27);
                          FUN_14000cb40(&local_50,&local_b0,0,0xffffffffffffffff);
                          FUN_14014a240(&local_50);
                          uVar13 = local_98;
                          if (0xf < local_38) {
                            FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
                            uVar13 = local_98;
                          }
                        }
                        else {
                          local_f8 = &local_d8;
                          (**(code **)*puVar4)(puVar4,&local_90,&local_b0,iVar6);
                          uVar13 = local_98;
                        }
                        goto joined_r0x0001401b42a1;
                      }
                      local_60 = 0;
                      local_70[0]._0_1_ = 0;
                      if (local_80 != 0) {
                        iVar6 = iVar6 + 1;
                        if ((ulonglong)(longlong)iVar6 <= local_80) {
                          puVar3 = &local_90;
                          if (0xf < local_78) {
                            puVar3 = (undefined1 *)CONCAT71(uStack_8f,local_90);
                          }
                          puVar8 = &local_90;
                          if (0xf < local_78) {
                            puVar8 = (undefined1 *)CONCAT71(uStack_8f,local_90);
                          }
                          pcVar7 = puVar8 + local_80;
                          for (pcVar5 = puVar3 + iVar6;
                              ((uVar12 = uVar11, pcVar5 < pcVar7 &&
                               (uVar12 = local_58, uVar13 = local_98, *pcVar5 != ':')) &&
                              (*pcVar5 != ']')); pcVar5 = pcVar5 + 1) {
                            FUN_140050540(local_70,1);
                            iVar6 = iVar6 + 1;
                            uVar11 = local_58;
                            uVar13 = local_98;
                          }
                          if (local_60 != 0) {
                            puVar4 = operator_new(0x40a0);
                            local_b8 = puVar4;
                            FUN_1401b3830(puVar4);
                            *puVar4 = building_def_furnacest::vftable;
                            if (puVar4 + 1 != local_70) {
                              FUN_14000c8b0(puVar4 + 1,local_70,0,0xffffffffffffffff);
                              uVar12 = local_58;
                            }
                            *(undefined4 *)(puVar4 + 10) = 5;
                            *(undefined4 *)((longlong)puVar4 + 0x54) = 7;
                            uVar13 = local_98;
                          }
                        }
                      }
                    }
                    if (0xf < uVar12) {
                      FUN_140002020(CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]),uVar12 + 1,1
                                   );
                      uVar13 = local_98;
                    }
                  }
                }
              }
            }
joined_r0x0001401b42a1:
            if (0xf < uVar13) {
              FUN_140002020(CONCAT71(uStack_af,local_b0),uVar13 + 1,1);
            }
          }
          iVar6 = iVar6 + 1;
        } while ((ulonglong)(longlong)iVar6 < local_80);
      }
      local_e8 = local_e8 + 1;
      local_e0 = local_e0 + 1;
    } while ((ulonglong)(longlong)local_e8 < (ulonglong)(local_d0[1] - *local_d0 >> 3));
  }
  if (0xf < local_78) {
    FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
  }
  return;
}

