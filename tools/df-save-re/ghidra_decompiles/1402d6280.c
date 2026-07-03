// FUN_1402d6280 @ 1402d6280
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402d6280(undefined8 param_1)

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
  iVar1 = FUN_14000c110(param_1,"MINING");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_14000c110(param_1,"WOODCUTTING");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,"CARPENTRY");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"DETAILSTONE");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"MASONRY");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_14000c110(param_1,"ANIMALTRAIN");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"ANIMALCARE");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"DISSECT_FISH");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = FUN_14000c110(param_1,"DISSECT_VERMIN");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_14000c110(param_1,"PROCESSFISH");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_14000c110(param_1,"BUTCHER");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_14000c110(param_1,"TRAPPING");
                        if (iVar1 == 0) {
                          uVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_14000c110(param_1,"TANNER");
                          if (iVar1 == 0) {
                            uVar2 = 0xc;
                          }
                          else {
                            iVar1 = FUN_14000c110(param_1,&DAT_140eb46fc);
                            if (iVar1 == 0) {
                              uVar2 = 0x45;
                            }
                            else {
                              iVar1 = FUN_14000c110(param_1,"PRESSING");
                              if (iVar1 == 0) {
                                uVar2 = 0x71;
                              }
                              else {
                                iVar1 = FUN_14000c110(param_1,"BEEKEEPING");
                                if (iVar1 == 0) {
                                  uVar2 = 0x72;
                                }
                                else {
                                  iVar1 = FUN_14000c110(param_1,"GLAZING");
                                  if (iVar1 == 0) {
                                    uVar2 = 0x70;
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(param_1,"WEAVING");
                                    if (iVar1 == 0) {
                                      uVar2 = 0xd;
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(param_1,"BREWING");
                                      if (iVar1 == 0) {
                                        uVar2 = 0xe;
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(param_1,"ALCHEMY");
                                        if (iVar1 == 0) {
                                          uVar2 = 0xf;
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(param_1,"CLOTHESMAKING");
                                          if (iVar1 == 0) {
                                            uVar2 = 0x10;
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(param_1,"MILLING");
                                            if (iVar1 == 0) {
                                              uVar2 = 0x11;
                                            }
                                            else {
                                              iVar1 = FUN_14000c110(param_1,"PROCESSPLANTS");
                                              if (iVar1 == 0) {
                                                uVar2 = 0x12;
                                              }
                                              else {
                                                iVar1 = FUN_14000c110(param_1,"CHEESEMAKING");
                                                if (iVar1 == 0) {
                                                  uVar2 = 0x13;
                                                }
                                                else {
                                                  iVar1 = FUN_14000c110(param_1,&DAT_140eb4b48);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x14;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,&DAT_140eb4b6c);
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x75;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SHEARING");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x6d;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"SPINNING");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x6e;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb4734);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x15;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"PLANT");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x16;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"HERBALISM");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x17;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3aa0
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x18;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"SMELT");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x19;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "EXTRACT_STRAND");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"FORGE_WEAPON");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x1b;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"FORGE_ARMOR");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x1c;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "FORGE_FURNITURE");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"CUTGEM");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x1e;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"ENCRUSTGEM");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x1f;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"WOODCRAFT");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x20;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "PAPERMAKING");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x85;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"BOOKBINDING");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x86;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"POTTERY");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x6f;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"WAX_WORKING")
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x73;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"STONECRAFT"
                                                                               );
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x21;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "METALCRAFT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"GLASSMAKER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x23;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"LEATHERWORK");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x24;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"BONECARVE");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x25;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb4f2c);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SWORD");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x27;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"MISC_WEAPON");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x6a;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"DAGGER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x28;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb4efc);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x29;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"HAMMER");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x2a;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SPEAR");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x2b;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"CROSSBOW");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x2c;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"SHIELD");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x2d;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"ARMOR");
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x2e;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "SIEGECRAFT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SIEGEOPERATE");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x30;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"OPERATE_PUMP");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x46;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"BOWYER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x31;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb4ea4);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x32;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,&DAT_140eb4eb8);
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x33;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,&DAT_140eb4eb4);
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x34;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"BLOWGUN");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x35;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"THROW");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x36;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "MECHANICS");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x37;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MAGIC_NATURE");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x38;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SNEAK");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x39;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "DESIGNBUILDING");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x3a;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"DRESS_WOUNDS");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x3b;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"DIAGNOSE");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x3c;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"SURGERY");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x3d;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"SET_BONE");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x3e;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"SUTURE");
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x3f;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "CRUTCH_WALK");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x40;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"WOOD_BURNING");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x41;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"LYE_MAKING");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x42;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "POTASH_MAKING");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x44;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SOAP_MAKING");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x43;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SWIMMING");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x47;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"RIDING");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x88;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"PERSUASION"
                                                                               );
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x48;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "NEGOTIATION");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x49;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"JUDGING_INTENT");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x4a;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"APPRAISAL");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x4b;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"ORGANIZATION"
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x4c;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "RECORD_KEEPING");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x4d;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"LYING");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x4e;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"INTIMIDATION");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x4f;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"CONVERSATION"
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x50;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"COMEDY");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x51;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"FLATTERY"
                                                                                 );
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x52;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "CONSOLE");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x53;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"PACIFY");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x54;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"TRACKING");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x55;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "KNOWLEDGE_ACQUISITION");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x56;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"CONCENTRATION");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x57;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"DISCIPLINE");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x58;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,
                                                  "SITUATIONAL_AWARENESS");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x59;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"WRITING");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x5a;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"PROSE");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x5b;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"POETRY");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x5c;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"READING");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x5d;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"SPEAKING"
                                                                                 );
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x5e;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "COORDINATION");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x5f;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"BALANCE");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x60;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"LEADERSHIP");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x61;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"TEACHING");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x62;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "MELEE_COMBAT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 99;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"RANGED_COMBAT");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 100;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"WRESTLING");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x65;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb53b8
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x66;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "GRASP_STRIKE");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x67;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"STANCE_STRIKE");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x68;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"DODGING");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x69;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"KNAPPING");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x6b;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "MILITARY_TACTICS");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x6c;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"CLIMBING");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x74;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"DANCE");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x76;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"MAKE_MUSIC");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x77;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb533c);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x78;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "PLAY_KEYBOARD_INSTRUMENT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x79;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "PLAY_STRINGED_INSTRUMENT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x7a;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "PLAY_WIND_INSTRUMENT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x7b;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "PLAY_PERCUSSION_INSTRUMENT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x7c;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,
                                                  "CRITICAL_THINKING");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x7d;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"LOGIC");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x7e;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"MATHEMATICS");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x7f;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"ASTRONOMY");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x80;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"CHEMISTRY")
                                                          ;
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x81;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "GEOGRAPHY");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x82;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"OPTICS_ENGINEER")
                                                    ;
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x83;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"FLUID_ENGINEER"
                                                                           );
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x84;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"INTRIGUE");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x87;
                                                        }
                                                        else {
                                                          local_18 = 0xf;
                                                          local_20 = 0;
                                                          local_30 = 0;
                                                          FUN_14000c780(&local_30,
                                                                        "Unrecognized Skill Token: "
                                                                        ,0x1a);
                                                          FUN_14000cb40(&local_30,param_1,0,
                                                                        0xffffffffffffffff);
                                                          FUN_14014a240(&local_30);
                                                          if (0xf < local_18) {
                                                            FUN_140002020(CONCAT71(uStack_2f,
                                                                                   local_30),
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

