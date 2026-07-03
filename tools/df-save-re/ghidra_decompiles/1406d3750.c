// FUN_1406d3750 @ 1406d3750
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 140071310 FUN_140071310
//   -> 140002020 FUN_140002020
//   -> 1407da930 FUN_1407da930
//   -> 140a33c20 FUN_140a33c20
//   -> 140c1e0c0 FUN_140c1e0c0
//   -> 1403615b0 FUN_1403615b0
//   -> 1401b3de0 FUN_1401b3de0
//   -> 1404bd320 FUN_1404bd320
//   -> 1402b42b0 FUN_1402b42b0
//   -> 1402b57e0 FUN_1402b57e0
//   -> 14083ffe0 FUN_14083ffe0
//   -> 1402b3410 FUN_1402b3410
//   -> 1408b09a0 FUN_1408b09a0
//   -> 1402cbe40 FUN_1402cbe40
//   -> 14028cc90 FUN_14028cc90
//   -> 1408da030 FUN_1408da030
//   -> 1408d1d80 FUN_1408d1d80
//   -> 1408a5730 FUN_1408a5730
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406d3750(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined1 *puVar7;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_c8;
  local_50 = 0xf;
  uVar3 = 0;
  local_58 = 0;
  local_68 = 0;
  local_a8 = 1;
  local_98 = param_3;
  if (1 < (ulonglong)(param_1[1] - *param_1 >> 3)) {
    local_a0 = 8;
    do {
      if (&local_68 != *(undefined1 **)(local_a0 + *param_1)) {
        FUN_14000c8b0(&local_68,*(undefined1 **)(local_a0 + *param_1),0,0xffffffffffffffff);
        uVar3 = local_58;
      }
      iVar9 = 0;
      if (uVar3 != 0) {
        do {
          puVar2 = &local_68;
          if (0xf < local_50) {
            puVar2 = (undefined1 *)CONCAT71(uStack_67,local_68);
          }
          if (puVar2[iVar9] == '[') {
            local_70 = 0xf;
            local_78 = 0;
            local_88 = 0;
            iVar9 = iVar9 + 1;
            if ((ulonglong)(longlong)iVar9 < uVar3) {
              local_78 = 0;
              local_88 = 0;
              uVar8 = uVar3;
              if (uVar3 != 0) {
                puVar2 = &local_68;
                if (0xf < local_50) {
                  puVar2 = (undefined1 *)CONCAT71(uStack_67,local_68);
                }
                puVar7 = &local_68;
                if (0xf < local_50) {
                  puVar7 = (undefined1 *)CONCAT71(uStack_67,local_68);
                }
                for (pcVar4 = puVar2 + iVar9;
                    ((pcVar4 < puVar7 + uVar3 && (uVar8 = local_58, *pcVar4 != ':')) &&
                    (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                  FUN_140050540(&local_88,1);
                  uVar8 = local_58;
                }
              }
              uVar5 = local_70;
              iVar9 = iVar9 + (int)local_78;
              iVar1 = FUN_14000c110(&local_88,"OBJECT");
              if (iVar1 == 0) {
                iVar9 = iVar9 + 1;
                uVar3 = (ulonglong)iVar9;
                if (uVar3 < uVar8) {
                  local_78 = 0;
                  puVar2 = &local_88;
                  if (0xf < uVar5) {
                    puVar2 = (undefined1 *)CONCAT71(uStack_87,local_88);
                  }
                  *puVar2 = 0;
                  if ((local_58 != 0) && (uVar3 <= local_58)) {
                    puVar2 = &local_68;
                    if (0xf < local_50) {
                      puVar2 = (undefined1 *)CONCAT71(uStack_67,local_68);
                    }
                    puVar7 = &local_68;
                    if (0xf < local_50) {
                      puVar7 = (undefined1 *)CONCAT71(uStack_67,local_68);
                    }
                    pcVar6 = puVar7 + local_58;
                    for (pcVar4 = puVar2 + uVar3;
                        ((pcVar4 < pcVar6 && (*pcVar4 != ':')) && (*pcVar4 != ']'));
                        pcVar4 = pcVar4 + 1) {
                      FUN_140050540(&local_88,1);
                    }
                  }
                  uVar8 = local_58;
                  iVar9 = iVar9 + (int)local_78;
                  iVar1 = FUN_140071310(&local_88,param_2);
                  uVar5 = local_70;
                  if (iVar1 == 0) {
                    iVar1 = FUN_14000c110(&local_88,"LANGUAGE");
                    if (iVar1 == 0) {
                      FUN_1408a5730();
                    }
                    else {
                      iVar1 = FUN_14000c110(&local_88,"INORGANIC");
                      if (iVar1 == 0) {
                        FUN_1408d1d80();
                      }
                      else {
                        iVar1 = FUN_14000c110(&local_88,"PLANT");
                        if (iVar1 == 0) {
                          FUN_1408da030();
                        }
                        else {
                          iVar1 = FUN_14000c110(&local_88,"CREATURE");
                          if (iVar1 == 0) {
                            FUN_14028cc90(&DAT_141d6dd30,param_1,0);
                          }
                          else {
                            iVar1 = FUN_14000c110(&local_88,&DAT_140ea8780);
                            if (iVar1 == 0) {
                              FUN_1402cbe40(&DAT_141d6dce8,param_1);
                            }
                            else {
                              iVar1 = FUN_14000c110(&local_88,"MATERIAL_TEMPLATE");
                              if (iVar1 == 0) {
                                FUN_1408b09a0(&DAT_141d6dbc8,param_1);
                              }
                              else {
                                iVar1 = FUN_14000c110(&local_88,"TISSUE_TEMPLATE");
                                if (iVar1 == 0) {
                                  FUN_1402b3410(&DAT_141d6dcb8,param_1);
                                }
                                else {
                                  iVar1 = FUN_14000c110(&local_88,&DAT_140eb3e70);
                                  if (iVar1 == 0) {
                                    FUN_14083ffe0();
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(&local_88,"BODY_DETAIL_PLAN");
                                    if (iVar1 == 0) {
                                      FUN_1402b57e0(&DAT_141d6dcd0,param_1);
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(&local_88,"CREATURE_VARIATION");
                                      if (iVar1 == 0) {
                                        FUN_1402b42b0(&DAT_141d6dd18,param_1);
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(&local_88,"ENTITY");
                                        if (iVar1 == 0) {
                                          FUN_1404bd320();
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(&local_88,"BUILDING");
                                          if (iVar1 == 0) {
                                            FUN_1401b3de0();
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(&local_88,"DESCRIPTOR_SHAPE");
                                            if (((iVar1 == 0) ||
                                                (iVar1 = FUN_14000c110(&local_88,
                                                                       "DESCRIPTOR_PATTERN"),
                                                iVar1 == 0)) ||
                                               (iVar1 = FUN_14000c110(&local_88,"DESCRIPTOR_COLOR"),
                                               iVar1 == 0)) {
                                              FUN_1403615b0();
                                            }
                                            else {
                                              iVar1 = FUN_14000c110(&local_88,"GRAPHICS");
                                              if (iVar1 == 0) {
                                                FUN_140c1e0c0();
                                              }
                                              else {
                                                iVar1 = FUN_14000c110(&local_88,"REACTION");
                                                if (iVar1 == 0) {
                                                  FUN_140a33c20(&DAT_141d77940,param_1,0);
                                                }
                                                else {
                                                  iVar1 = FUN_14000c110(&local_88,"INTERACTION");
                                                  uVar5 = local_70;
                                                  if (iVar1 != 0) goto LAB_1406d3b22;
                                                  FUN_1407da930();
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if (0xf < local_70) {
                      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
                    }
                    goto LAB_1406d3ca1;
                  }
                }
              }
LAB_1406d3b22:
              uVar3 = uVar8;
              if (0xf < uVar5) {
                FUN_140002020(CONCAT71(uStack_87,local_88),uVar5 + 1);
                uVar3 = local_58;
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while ((ulonglong)(longlong)iVar9 < uVar3);
      }
      local_a8 = local_a8 + 1;
      local_a0 = local_a0 + 8;
    } while ((ulonglong)(longlong)local_a8 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
LAB_1406d3ca1:
  if (0xf < local_50) {
    FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
  }
  return;
}

