// FUN_1402d0ed0 @ 1402d0ed0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402d0ed0(undefined8 param_1)

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
  iVar1 = FUN_14000c110(param_1,"AGRICULTURE");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_14000c110(param_1,"ANIMALS");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,&DAT_140eb394c);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"BALANCE");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"BEAUTY");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_14000c110(param_1,"BIRTH");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"BLIGHT");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"BOUNDARIES");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = FUN_14000c110(param_1,"CAVERNS");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = FUN_14000c110(param_1,"CHAOS");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = FUN_14000c110(param_1,"CHARITY");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = FUN_14000c110(param_1,"CHILDREN");
                        if (iVar1 == 0) {
                          uVar2 = 0xb;
                        }
                        else {
                          iVar1 = FUN_14000c110(param_1,"COASTS");
                          if (iVar1 == 0) {
                            uVar2 = 0xc;
                          }
                          else {
                            iVar1 = FUN_14000c110(param_1,"CONSOLATION");
                            if (iVar1 == 0) {
                              uVar2 = 0xd;
                            }
                            else {
                              iVar1 = FUN_14000c110(param_1,"COURAGE");
                              if (iVar1 == 0) {
                                uVar2 = 0xe;
                              }
                              else {
                                iVar1 = FUN_14000c110(param_1,"CRAFTS");
                                if (iVar1 == 0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  iVar1 = FUN_14000c110(param_1,"CREATION");
                                  if (iVar1 == 0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    iVar1 = FUN_14000c110(param_1,"DANCE");
                                    if (iVar1 == 0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      iVar1 = FUN_14000c110(param_1,"DARKNESS");
                                      if (iVar1 == 0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3b44);
                                        if (iVar1 == 0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          iVar1 = FUN_14000c110(param_1,&DAT_140eb3b40);
                                          if (iVar1 == 0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            iVar1 = FUN_14000c110(param_1,"DEATH");
                                            if (iVar1 == 0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              iVar1 = FUN_14000c110(param_1,"DEFORMITY");
                                              if (iVar1 == 0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                iVar1 = FUN_14000c110(param_1,"DEPRAVITY");
                                                if (iVar1 == 0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  iVar1 = FUN_14000c110(param_1,"DISCIPLINE");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"DISEASE");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x19;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"DREAMS");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x1a;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3af4
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x1b;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb3aec);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"EARTH");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x1d;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"FAMILY");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x1e;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3afc
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x1f;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb3acc);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"FERTILITY");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x21;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"FESTIVALS");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x22;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3ad4
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x23;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb3aa0);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"FISHING");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x25;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,&DAT_140eb3ab4);
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x26;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"FORGIVENESS")
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x27;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"FORTRESSES"
                                                                               );
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x28;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"FREEDOM")
                                                            ;
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x29;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "GAMBLING");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"GAMES");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x2b;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"GENEROSITY");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x2c;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"HAPPINESS");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x2d;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"HEALING");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x2e;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "HOSPITALITY");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"HUNTING");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x30;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"INSPIRATION");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x31;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"JEALOUSY");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x32;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"JEWELS");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x33;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"JUSTICE")
                                                            ;
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x34;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,"LABOR")
                                                              ;
                                                              if (iVar1 == 0) {
                                                                uVar2 = 0x35;
                                                              }
                                                              else {
                                                                iVar1 = FUN_14000c110(param_1,
                                                  "LAKES");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x36;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,&DAT_140eb3ca0);
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x37;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,&DAT_140eb3c64);
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x38;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"LIGHT");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x39;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"LIGHTNING")
                                                          ;
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x3a;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,
                                                  "LONGEVITY");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x3b;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,&DAT_140eb3c3c);
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x3c;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"LOYALTY");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x3d;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3c34
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x3e;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb3c54);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x3f;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"MARRIAGE");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x40;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"MERCY");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x41;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"METALS");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x42;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"MINERALS");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x43;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"MISERY");
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x44;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb3bec);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x45;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,&DAT_140eb3be4);
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x46;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"MOUNTAINS");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x47;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3bf4
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x48;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"MURDER");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x49;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"MUSIC");
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x4a;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,"NATURE"
                                                                                   );
                                                              if (iVar1 == 0) {
                                                                uVar2 = 0x4b;
                                                              }
                                                              else {
                                                                iVar1 = FUN_14000c110(param_1,
                                                  "NIGHT");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x4c;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"NIGHTMARES");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x4d;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"OATHS");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x4e;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"OCEANS");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x4f;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"ORDER");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x50;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"PAINTING"
                                                                                 );
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x51;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,"PEACE")
                                                              ;
                                                              if (iVar1 == 0) {
                                                                uVar2 = 0x52;
                                                              }
                                                              else {
                                                                iVar1 = FUN_14000c110(param_1,
                                                  "PERSUASION");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x53;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"PLANTS");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x54;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"POETRY");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x55;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"PREGNANCY");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x56;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb3dcc);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x57;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"RAINBOWS");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x58;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"REBIRTH");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x59;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"REVELRY");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x5a;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"REVENGE");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x5b;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"RIVERS");
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x5c;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "RULERSHIP");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x5d;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"RUMORS");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x5e;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SACRIFICE");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x5f;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3d7c
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x60;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,
                                                  "SCHOLARSHIP");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x61;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SEASONS");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x62;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"SILENCE");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 99;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,&DAT_140eb3d5c
                                                                             );
                                                        if (iVar1 == 0) {
                                                          uVar2 = 100;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb3d54);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x65;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"SPEECH");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x66;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"STARS");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x67;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"STORMS");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x68;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"STRENGTH");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x69;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"SUICIDE")
                                                            ;
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x6a;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb3d34);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x6b;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"THEFT");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x6c;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"THRALLDOM");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x6d;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"THUNDER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x6e;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"TORTURE");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x6f;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"TRADE");
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x70;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,
                                                  "TRAVELERS");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x71;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"TREACHERY");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x72;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"TREES");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x73;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"TRICKERY");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x74;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"TRUTH");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x75;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"TWILIGHT"
                                                                                 );
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x76;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,"VALOR")
                                                              ;
                                                              if (iVar1 == 0) {
                                                                uVar2 = 0x77;
                                                              }
                                                              else {
                                                                iVar1 = FUN_14000c110(param_1,
                                                  "VICTORY");
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x78;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"VOLCANOS");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x79;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,&DAT_140eb3cb0);
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x7a;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"WATER");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x7b;
                                                        }
                                                        else {
                                                          iVar1 = FUN_14000c110(param_1,"WEALTH");
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x7c;
                                                          }
                                                          else {
                                                            iVar1 = FUN_14000c110(param_1,"WEATHER")
                                                            ;
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x7d;
                                                            }
                                                            else {
                                                              iVar1 = FUN_14000c110(param_1,&
                                                  DAT_140eb4044);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x7e;
                                                  }
                                                  else {
                                                    iVar1 = FUN_14000c110(param_1,"WISDOM");
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x7f;
                                                    }
                                                    else {
                                                      iVar1 = FUN_14000c110(param_1,"WRITING");
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x80;
                                                      }
                                                      else {
                                                        iVar1 = FUN_14000c110(param_1,"YOUTH");
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x81;
                                                        }
                                                        else {
                                                          local_18 = 0xf;
                                                          local_20 = 0;
                                                          local_30 = 0;
                                                          FUN_14000c780(&local_30,
                                                                                                                                                
                                                  "Unrecognized Sphere Token: ",0x1b);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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

