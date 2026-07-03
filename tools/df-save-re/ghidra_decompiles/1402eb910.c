// FUN_1402eb910 @ 1402eb910
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402eb910(undefined8 param_1,char param_2)

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
  uVar2 = FUN_14000c110(param_1,&DAT_140eb1048);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_14000c110(param_1,"UPPERBODY");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,"LOWERBODY");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"SIGHT");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"EMBEDDED");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_14000c110(param_1,"INTERNAL");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"CIRCULATION");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"SKELETON");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = FUN_14000c110(param_1,&DAT_140eb0fdc);
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_14000c110(param_1,"GRASP");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_14000c110(param_1,"STANCE");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_14000c110(param_1,&DAT_140eb0f3c);
                        if (iVar1 == 0) {
                          uVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_14000c110(param_1,"GELDABLE");
                          if (iVar1 == 0) {
                            uVar2 = 0x26;
                          }
                          else {
                            iVar1 = FUN_14000c110(param_1,"BREATHE");
                            if (iVar1 == 0) {
                              uVar2 = 0xc;
                            }
                            else {
                              iVar1 = FUN_14000c110(param_1,"SMALL");
                              if (iVar1 == 0) {
                                uVar2 = 0xd;
                              }
                              else {
                                iVar1 = FUN_14000c110(param_1,"THROAT");
                                if (iVar1 == 0) {
                                  uVar2 = 0xe;
                                }
                                else {
                                  iVar1 = FUN_14000c110(param_1,"JOINT");
                                  if (iVar1 == 0) {
                                    uVar2 = 0xf;
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(param_1,"THOUGHT");
                                    if (iVar1 == 0) {
                                      uVar2 = 0x10;
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(param_1,"NERVOUS");
                                      if (iVar1 == 0) {
                                        uVar2 = 0x11;
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(param_1,"RIGHT");
                                        if (iVar1 == 0) {
                                          uVar2 = 0x12;
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(param_1,&DAT_140eb0f44);
                                          if (iVar1 == 0) {
                                            uVar2 = 0x13;
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(param_1,&DAT_140eaa084);
                                            if (iVar1 == 0) {
                                              uVar2 = 0x14;
                                            }
                                            else {
                                              iVar1 = FUN_14000c110(param_1,"SMELL");
                                              if (iVar1 == 0) {
                                                uVar2 = 0x15;
                                              }
                                              else {
                                                iVar1 = FUN_14000c110(param_1,"FLIER");
                                                if (iVar1 == 0) {
                                                  uVar2 = 0x16;
                                                }
                                                else {
                                                  iVar1 = FUN_14000c110(param_1,"DIGIT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x17;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"CONNECTOR");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x21;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,
                                                  "PREVENTS_PARENT_COLLAPSE");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MOUTH");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x18;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"APERTURE");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x19;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"SOCKET");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x1a;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"TOTEMABLE")
                                                          ;
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x1b;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "UNDER_PRESSURE");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "VERMIN_BUTCHER_ITEM");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    if (param_2 != '\0') {
                                                      local_18 = 0xf;
                                                      local_20 = 0;
                                                      local_30 = 0;
                                                      FUN_14000c780(&local_30,
                                                                                                                                        
                                                  "Unrecognized Body Part Flag Token: ",0x23);
                                                  FUN_14000cb40(&local_30,param_1,0,
                                                                0xffffffffffffffff);
                                                  FUN_14014a240(&local_30);
                                                  if (0xf < local_18) {
                                                    FUN_140002020(CONCAT71(uStack_2f,local_30),
                                                                  local_18 + 1,1);
                                                  }
                                                  }
                                                  uVar2 = 0xffffffff;
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

