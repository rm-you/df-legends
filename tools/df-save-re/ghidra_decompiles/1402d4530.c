// FUN_1402d4530 @ 1402d4530
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402d4530(undefined8 param_1,char param_2)

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
  uVar2 = FUN_14000c110(param_1,"MINER");
  if ((int)uVar2 != 0) {
    iVar1 = FUN_14000c110(param_1,"WOODWORKER");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,"CARPENTER");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"BOWYER");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"WOODCUTTER");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_14000c110(param_1,"STONEWORKER");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"ENGRAVER");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"MASON");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = FUN_14000c110(param_1,"RANGER");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_14000c110(param_1,"ANIMAL_CARETAKER");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_14000c110(param_1,"ANIMAL_TRAINER");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_14000c110(param_1,"HUNTER");
                        if (iVar1 == 0) {
                          uVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_14000c110(param_1,"TRAPPER");
                          if (iVar1 == 0) {
                            uVar2 = 0xc;
                          }
                          else {
                            iVar1 = FUN_14000c110(param_1,"ANIMAL_DISSECTOR");
                            if (iVar1 == 0) {
                              uVar2 = 0xd;
                            }
                            else {
                              iVar1 = FUN_14000c110(param_1,"METALSMITH");
                              if (iVar1 == 0) {
                                uVar2 = 0xe;
                              }
                              else {
                                iVar1 = FUN_14000c110(param_1,"FURNACE_OPERATOR");
                                if (iVar1 == 0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  iVar1 = FUN_14000c110(param_1,"WEAPONSMITH");
                                  if (iVar1 == 0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(param_1,"ARMORER");
                                    if (iVar1 == 0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(param_1,"BLACKSMITH");
                                      if (iVar1 == 0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(param_1,"METALCRAFTER");
                                        if (iVar1 == 0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(param_1,"JEWELER");
                                          if (iVar1 == 0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(param_1,"GEM_CUTTER");
                                            if (iVar1 == 0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              iVar1 = FUN_14000c110(param_1,"GEM_SETTER");
                                              if (iVar1 == 0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                iVar1 = FUN_14000c110(param_1,"CRAFTSMAN");
                                                if (iVar1 == 0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  iVar1 = FUN_14000c110(param_1,"WOODCRAFTER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"POTTER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x1f;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"GLAZER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x20;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"WAX_WORKER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x21;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "STONECRAFTER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"LEATHERWORKER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x1a;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"BONE_CARVER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x1b;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"WEAVER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x1c;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"CLOTHIER");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x1d;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "GLASSMAKER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"STRAND_EXTRACTOR"
                                                                         );
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x22;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"PAPERMAKER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x7e;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"BOOKBINDER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x7f;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "FISHERY_WORKER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"FISHERMAN");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x24;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"FISH_DISSECTOR"
                                                                           );
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x25;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"FISH_CLEANER"
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x26;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"FARMER");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x27;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "CHEESE_MAKER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MILKER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x29;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"GELDER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x6f;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"SHEARER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x37;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"SPINNER");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x38;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb4734);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"THRESHER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x2b;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"MILLER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x2c;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"BUTCHER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x2d;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"TANNER");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x2e;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb46fc);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"PRESSER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x39;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"BEEKEEPER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x3a;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"PLANTER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x30;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"HERBALIST")
                                                          ;
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x31;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"BREWER");
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x32;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "SOAP_MAKER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x33;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"POTASH_MAKER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x34;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"LYE_MAKER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x35;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"WOOD_BURNER")
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x36;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"ENGINEER");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x3b;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"MECHANIC"
                                                                                 );
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x3c;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "SIEGE_ENGINEER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x3d;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SIEGE_OPERATOR");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x3e;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"PUMP_OPERATOR")
                                                      ;
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x3f;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"CLERK");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x40;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"ARCHITECT")
                                                          ;
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x43;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb4a7c);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x71;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,&DAT_140eb4a9c);
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x72;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"DANCER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x73;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"DOCTOR");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x45;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"DIAGNOSER")
                                                          ;
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x46;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "BONE_SETTER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x47;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SUTURER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x48;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SURGEON");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x49;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "ADMINISTRATOR");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x41;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"TRADER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x42;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"ALCHEMIST");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x44;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"MERCHANT");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x4a;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"HAMMERMAN")
                                                          ;
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x4b;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_HAMMERMAN");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x4c;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SPEARMAN");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x4d;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_SPEARMAN");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x4e;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"CROSSBOWMAN");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x4f;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_CROSSBOWMAN");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x50;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"WRESTLER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x51;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_WRESTLER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x52;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"AXEMAN");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x53;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"MASTER_AXEMAN")
                                                      ;
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x54;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"SWORDSMAN");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x55;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_SWORDSMAN");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x56;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MACEMAN");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x57;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"MASTER_MACEMAN"
                                                                           );
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x58;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"PIKEMAN");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x59;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_PIKEMAN");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x5a;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"BOWMAN");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x5b;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"MASTER_BOWMAN")
                                                      ;
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x5c;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"BLOWGUNMAN");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x5d;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_BLOWGUNMAN");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x5e;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"RECRUIT");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x61;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"TRAINED_HUNTER"
                                                                           );
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x62;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"TRAINED_WAR")
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar2 = 99;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_THIEF");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 100;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"THIEF");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x65;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"STANDARD");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x66;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"CHILD");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x67;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140ea8884);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x68;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"DRUNK");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x69;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"LASHER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x5f;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "MASTER_LASHER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x60;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MONSTER_SLAYER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x6a;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SCOUT");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x6b;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"BEAST_HUNTER"
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x6c;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"SNATCHER");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x6d;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "MERCENARY");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x6e;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,&DAT_140eb4a58);
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x74;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SCHOLAR");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x75;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"PHILOSOPHER")
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x76;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "MATHEMATICIAN");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x77;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"HISTORIAN");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x78;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"ASTRONOMER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x79;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"NATURALIST");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x7a;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"CHEMIST");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x7b;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "GEOGRAPHER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x7c;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"PERFORMER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x70;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SCRIBE");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x7d;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "TAVERN_KEEPER");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x80;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"CRIMINAL");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x81;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"PEDDLER");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x82;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"PROPHET");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x83;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"PILGRIM");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x84;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb4984);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x85;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MESSENGER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x86;
                                                    }
                                                    else {
                                                      if (param_2 != '\0') {
                                                        local_18 = 0xf;
                                                        local_20 = 0;
                                                        local_30 = 0;
                                                        FUN_14000c780(&local_30,
                                                                                                                                            
                                                  "Unrecognized Unit Type Token: ",0x1e);
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

