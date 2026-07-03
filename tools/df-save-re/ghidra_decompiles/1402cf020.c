// FUN_1402cf020 @ 1402cf020
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402cf020(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14000c110(param_1,"LAW_MAKING");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_14000c110(param_1,"LAW_ENFORCEMENT");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,"RECEIVE_DIPLOMATS");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"MEET_WORKERS");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"MANAGE_PRODUCTION");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_14000c110(param_1,"TRADE");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"ACCOUNTING");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"ESTABLISH_COLONY_TRADE_AGREEMENTS");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = FUN_14000c110(param_1,"MAKE_INTRODUCTIONS");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_14000c110(param_1,"MAKE_PEACE_AGREEMENTS");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_14000c110(param_1,"MAKE_TOPIC_AGREEMENTS");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_14000c110(param_1,"COLLECT_TAXES");
                        if (iVar1 == 0) {
                          uVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_14000c110(param_1,"ESCORT_TAX_COLLECTOR");
                          if (iVar1 == 0) {
                            uVar2 = 0xc;
                          }
                          else {
                            iVar1 = FUN_14000c110(param_1,"EXECUTIONS");
                            if (iVar1 == 0) {
                              uVar2 = 0xd;
                            }
                            else {
                              iVar1 = FUN_14000c110(param_1,"TAME_EXOTICS");
                              if (iVar1 == 0) {
                                uVar2 = 0xe;
                              }
                              else {
                                iVar1 = FUN_14000c110(param_1,"RELIGION");
                                if (iVar1 == 0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  iVar1 = FUN_14000c110(param_1,"ATTACK_ENEMIES");
                                  if (iVar1 == 0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(param_1,"PATROL_TERRITORY");
                                    if (iVar1 == 0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(param_1,"MILITARY_GOALS");
                                      if (iVar1 == 0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(param_1,"MILITARY_STRATEGY");
                                        if (iVar1 == 0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(param_1,"UPGRADE_SQUAD_EQUIPMENT");
                                          if (iVar1 == 0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(param_1,"EQUIPMENT_MANIFESTS");
                                            if (iVar1 == 0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              iVar1 = FUN_14000c110(param_1,"SORT_AMMUNITION");
                                              if (iVar1 == 0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                iVar1 = FUN_14000c110(param_1,"BUILD_MORALE");
                                                if (iVar1 == 0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  iVar1 = FUN_14000c110(param_1,"HEALTH_MANAGEMENT")
                                                  ;
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"ESPIONAGE");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x19;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"ADVISE_LEADERS"
                                                                           );
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x1a;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "OVERSEE_LEADER_HOUSEHOLD");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MANAGE_ANIMALS");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x1c;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,
                                                  "MANAGE_LEADER_HOUSEHOLD_FOOD");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "MANAGE_LEADER_HOUSEHOLD_DRINKS");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "PREPARE_LEADER_MEALS");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "MANAGE_LEADER_HOUSEHOLD_CLEANLINESS");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MAINTAIN_SEWERS")
                                                    ;
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x21;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"FOOD_SUPPLY");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x22;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"FIRE_SAFETY")
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x23;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"JUDGE");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x24;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "BUILDING_SAFETY");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x25;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "CONSTRUCTION_PERMITS");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MAINTAIN_ROADS");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x27;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,
                                                  "MAINTAIN_BRIDGES");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MAINTAIN_TUNNELS"
                                                                         );
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x29;
                                                    }
                                                    else {
                                                      local_18 = 0xf;
                                                      local_20 = 0;
                                                      local_30 = 0;
                                                      FUN_14000c780(&local_30,
                                                                                                                                        
                                                  "Unrecognized Position Responsibility Token: ",
                                                  0x2c);
                                                  FUN_14000cb40(&local_30,param_1,0,
                                                                0xffffffffffffffff);
                                                  FUN_14014a240(&local_30);
                                                  if (0xf < local_18) {
                                                    FUN_140002020(CONCAT71(uStack_2f,local_30),
                                                                  local_18 + 1,1);
                                                  }
                                                  uVar2 = 0xffff;
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
  return uVar2;
}

