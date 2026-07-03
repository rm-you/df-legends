// FUN_1402cfa00 @ 1402cfa00
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402cfa00(undefined8 param_1)

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
  iVar1 = FUN_14000c110(param_1,"KILL_ENTITY_MEMBER");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_14000c110(param_1,"KILL_NEUTRAL");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,"KILL_ENEMY");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"KILL_ANIMAL");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"EAT_SAPIENT_OTHER");
          if (iVar1 == 0) {
            uVar2 = 0x11;
          }
          else {
            iVar1 = FUN_14000c110(param_1,"EAT_SAPIENT_KILL");
            if (iVar1 == 0) {
              uVar2 = 0x12;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"MAKE_TROPHY_SAME_RACE");
              if (iVar1 == 0) {
                uVar2 = 0x13;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"MAKE_TROPHY_SAPIENT");
                if (iVar1 == 0) {
                  uVar2 = 0x14;
                }
                else {
                  iVar1 = FUN_14000c110(param_1,"MAKE_TROPHY_ANIMAL");
                  if (iVar1 == 0) {
                    uVar2 = 0x15;
                  }
                  else {
                    iVar1 = FUN_14000c110(param_1,"KILL_PLANT");
                    if (iVar1 == 0) {
                      uVar2 = 4;
                    }
                    else {
                      iVar1 = FUN_14000c110(param_1,"TORTURE_AS_EXAMPLE");
                      if (iVar1 == 0) {
                        uVar2 = 5;
                      }
                      else {
                        iVar1 = FUN_14000c110(param_1,"TORTURE_FOR_INFORMATION");
                        if (iVar1 == 0) {
                          uVar2 = 6;
                        }
                        else {
                          iVar1 = FUN_14000c110(param_1,"TORTURE_FOR_FUN");
                          if (iVar1 == 0) {
                            uVar2 = 7;
                          }
                          else {
                            iVar1 = FUN_14000c110(param_1,"TORTURE_ANIMALS");
                            if (iVar1 == 0) {
                              uVar2 = 8;
                            }
                            else {
                              iVar1 = FUN_14000c110(param_1,"TREASON");
                              if (iVar1 == 0) {
                                uVar2 = 9;
                              }
                              else {
                                iVar1 = FUN_14000c110(param_1,"OATH_BREAKING");
                                if (iVar1 == 0) {
                                  uVar2 = 10;
                                }
                                else {
                                  iVar1 = FUN_14000c110(param_1,"LYING");
                                  if (iVar1 == 0) {
                                    uVar2 = 0xb;
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(param_1,"VANDALISM");
                                    if (iVar1 == 0) {
                                      uVar2 = 0xc;
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(param_1,"TRESPASSING");
                                      if (iVar1 == 0) {
                                        uVar2 = 0xd;
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(param_1,"THEFT");
                                        if (iVar1 == 0) {
                                          uVar2 = 0xe;
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(param_1,"ASSAULT");
                                          if (iVar1 == 0) {
                                            uVar2 = 0xf;
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(param_1,"SLAVERY");
                                            if (iVar1 == 0) {
                                              uVar2 = 0x10;
                                            }
                                            else {
                                              local_18 = 0xf;
                                              local_20 = 0;
                                              local_30 = 0;
                                              FUN_14000c780(&local_30,
                                                            "Unrecognized Ethic Action Token: ",0x21
                                                           );
                                              FUN_14000cb40(&local_30,param_1,0,0xffffffffffffffff);
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
  return uVar2;
}

