// FUN_1402cf590 @ 1402cf590
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402cf590(undefined8 param_1)

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
  uVar2 = FUN_14000c110(param_1,&DAT_140eb3210);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_14000c110(param_1,"LOYALTY");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,"FAMILY");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"FRIENDSHIP");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"POWER");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_14000c110(param_1,"TRUTH");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"CUNNING");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"ELOQUENCE");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = FUN_14000c110(param_1,"FAIRNESS");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_14000c110(param_1,"DECORUM");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_14000c110(param_1,"TRADITION");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_14000c110(param_1,"ARTWORK");
                        if (iVar1 == 0) {
                          uVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_14000c110(param_1,"COOPERATION");
                          if (iVar1 == 0) {
                            uVar2 = 0xc;
                          }
                          else {
                            iVar1 = FUN_14000c110(param_1,"INDEPENDENCE");
                            if (iVar1 == 0) {
                              uVar2 = 0xd;
                            }
                            else {
                              iVar1 = FUN_14000c110(param_1,"STOICISM");
                              if (iVar1 == 0) {
                                uVar2 = 0xe;
                              }
                              else {
                                iVar1 = FUN_14000c110(param_1,"KNOWLEDGE");
                                if (iVar1 == 0) {
                                  uVar2 = 0x20;
                                }
                                else {
                                  iVar1 = FUN_14000c110(param_1,"INTROSPECTION");
                                  if (iVar1 == 0) {
                                    uVar2 = 0xf;
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(param_1,"SELF_CONTROL");
                                    if (iVar1 == 0) {
                                      uVar2 = 0x10;
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(param_1,"TRANQUILITY");
                                      if (iVar1 == 0) {
                                        uVar2 = 0x11;
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(param_1,"HARMONY");
                                        if (iVar1 == 0) {
                                          uVar2 = 0x12;
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(param_1,"MERRIMENT");
                                          if (iVar1 == 0) {
                                            uVar2 = 0x13;
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(param_1,"CRAFTSMANSHIP");
                                            if (iVar1 == 0) {
                                              uVar2 = 0x14;
                                            }
                                            else {
                                              iVar1 = FUN_14000c110(param_1,"MARTIAL_PROWESS");
                                              if (iVar1 == 0) {
                                                uVar2 = 0x15;
                                              }
                                              else {
                                                iVar1 = FUN_14000c110(param_1,"SKILL");
                                                if (iVar1 == 0) {
                                                  uVar2 = 0x16;
                                                }
                                                else {
                                                  iVar1 = FUN_14000c110(param_1,"HARD_WORK");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x17;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SACRIFICE");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x18;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"COMPETITION");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x19;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"PERSEVERANCE"
                                                                             );
                                                        if ((iVar1 != 0) &&
                                                           (iVar1 = FUN_14000c110(param_1,
                                                  "PERSEVERENCE"), iVar1 != 0)) {
                                                    iVar1 = FUN_14000c110(param_1,"LEISURE_TIME");
                                                    if (iVar1 == 0) {
                                                      return 0x1b;
                                                    }
                                                    iVar1 = FUN_14000c110(param_1,"COMMERCE");
                                                    if (iVar1 == 0) {
                                                      return 0x1c;
                                                    }
                                                    iVar1 = FUN_14000c110(param_1,"ROMANCE");
                                                    if (iVar1 == 0) {
                                                      return 0x1d;
                                                    }
                                                    iVar1 = FUN_14000c110(param_1,"NATURE");
                                                    if (iVar1 == 0) {
                                                      return 0x1e;
                                                    }
                                                    iVar1 = FUN_14000c110(param_1,"PEACE");
                                                    if (iVar1 == 0) {
                                                      return 0x1f;
                                                    }
                                                    local_18 = 0xf;
                                                    local_20 = 0;
                                                    local_30 = 0;
                                                    FUN_14000c780(&local_30,
                                                                  "Unrecognized Value Token: ",0x1a)
                                                    ;
                                                    FUN_14000cb40(&local_30,param_1,0,
                                                                  0xffffffffffffffff);
                                                    FUN_14014a240(&local_30);
                                                    if (0xf < local_18) {
                                                      FUN_140002020(CONCAT71(uStack_2f,local_30),
                                                                    local_18 + 1,1);
                                                    }
                                                    return 0xffffffff;
                                                  }
                                                  uVar2 = 0x1a;
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

