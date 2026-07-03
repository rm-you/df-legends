// FUN_1402f86f0 @ 1402f86f0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402f86f0(undefined8 param_1)

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
  iVar1 = FUN_14000c110(param_1,"LIQUID_COOKING");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_14000c110(param_1,"LIQUID_SCOOP");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,"GRIND_POWDER_RECEPTACLE");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"GRIND_POWDER_GRINDER");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"MEAT_CARVING");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_14000c110(param_1,"MEAT_BONING");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"MEAT_SLICING");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"MEAT_CLEAVING");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = FUN_14000c110(param_1,"HOLD_MEAT_FOR_CARVING");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_14000c110(param_1,"MEAL_CONTAINER");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_14000c110(param_1,"LIQUID_CONTAINER");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_14000c110(param_1,"FOOD_STORAGE");
                        if (iVar1 == 0) {
                          uVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_14000c110(param_1,&DAT_140ebc8a8);
                          if (iVar1 == 0) {
                            uVar2 = 0xc;
                          }
                          else {
                            iVar1 = FUN_14000c110(param_1,"NEST_BOX");
                            if (iVar1 == 0) {
                              uVar2 = 0xd;
                            }
                            else {
                              iVar1 = FUN_14000c110(param_1,"BOOKCASE");
                              if (iVar1 == 0) {
                                uVar2 = 0x15;
                              }
                              else {
                                iVar1 = FUN_14000c110(param_1,"SMALL_OBJECT_STORAGE");
                                if (iVar1 == 0) {
                                  uVar2 = 0xe;
                                }
                                else {
                                  iVar1 = FUN_14000c110(param_1,"TRACK_CART");
                                  if (iVar1 == 0) {
                                    uVar2 = 0xf;
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(param_1,"HEAVY_OBJECT_HAULING");
                                    if (iVar1 == 0) {
                                      uVar2 = 0x10;
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(param_1,"STAND_AND_WORK_ABOVE");
                                      if (iVar1 == 0) {
                                        uVar2 = 0x11;
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(param_1,"ROLL_UP_SHEET");
                                        if (iVar1 == 0) {
                                          uVar2 = 0x12;
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(param_1,"PROTECT_FOLDED_SHEETS");
                                          if (iVar1 == 0) {
                                            uVar2 = 0x13;
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(param_1,"CONTAIN_WRITING");
                                            if (iVar1 == 0) {
                                              uVar2 = 0x14;
                                            }
                                            else {
                                              iVar1 = FUN_14000c110(param_1,"DISPLAY_OBJECT");
                                              if (iVar1 == 0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                iVar1 = FUN_14000c110(param_1,"PLACE_OFFERING");
                                                if (iVar1 == 0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  iVar1 = FUN_14000c110(param_1,"DIVINATION");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"GAMES_OF_CHANCE")
                                                    ;
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x19;
                                                    }
                                                    else {
                                                      local_18 = 0xf;
                                                      local_20 = 0;
                                                      local_30 = 0;
                                                      FUN_14000c780(&local_30,
                                                                    "Unrecognized Tool Use Token: ",
                                                                    0x1d);
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
  return uVar2;
}

