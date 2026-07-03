// FUN_1402b1f50 @ 1402b1f50
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14014aad0 FUN_14014aad0
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14014a240 FUN_14014a240
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1402cbb00 FUN_1402cbb00
//   -> 14014cac0 FUN_14014cac0
//   -> 140002020 FUN_140002020
//   -> 1402d72b0 FUN_1402d72b0
//   -> EXTERNAL:00000115 atoi
//   -> 1402ec950 FUN_1402ec950
//   -> 14000c9e0 FUN_14000c9e0
//   -> 14000c260 FUN_14000c260
//   -> 14000d730 FUN_14000d730
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14000c230 FUN_14000c230
//   -> 1402cee90 FUN_1402cee90
//   -> 14007bda0 FUN_14007bda0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402b1f50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  char local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  ulonglong local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_98 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_b8;
  iVar4 = FUN_14000c110(param_2,"TISSUE_NAME");
  if (iVar4 != 0) {
    iVar4 = FUN_14000c110(param_2,"TISSUE_MATERIAL");
    if (iVar4 == 0) {
      local_78 = 0xf;
      local_80 = 0;
      local_90 = '\0';
      local_38 = 0xf;
      local_40 = 0;
      local_50 = 0;
      local_58 = 0xf;
      local_60 = 0;
      local_70 = 0;
      cVar1 = FUN_14014aad0(&local_90,param_4,param_3,0x3a);
      if (((cVar1 != '\0') &&
          ((cVar1 = FUN_1402d72b0(&local_90), cVar1 != '\0' ||
           (cVar1 = FUN_14014aad0(&local_50,param_4,param_3,0x3a), cVar1 != '\0')))) &&
         (((iVar4 = FUN_14000c110(&local_90,"CREATURE_MAT"), iVar4 != 0 &&
           (iVar4 = FUN_14000c110(&local_90,"PLANT_MAT"), iVar4 != 0)) ||
          (cVar1 = FUN_14014aad0(&local_70,param_4,param_3,0x3a), cVar1 != '\0')))) {
        if ((char *)(param_1 + 0x70) != &local_90) {
          FUN_14000c8b0((char *)(param_1 + 0x70),&local_90,0,0xffffffffffffffff);
        }
        if ((byte *)(param_1 + 0x90) != &local_50) {
          FUN_14000c8b0((byte *)(param_1 + 0x90),&local_50,0,0xffffffffffffffff);
        }
        if ((byte *)(param_1 + 0xb0) != &local_70) {
          FUN_14000c8b0((byte *)(param_1 + 0xb0),&local_70,0,0xffffffffffffffff);
        }
      }
      if (0xf < local_58) {
        FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
      }
      if (0xf < local_38) {
        FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
      }
    }
    else {
      iVar4 = FUN_14000c110(param_2,"RELATIVE_THICKNESS");
      if (iVar4 == 0) {
        local_78 = 0xf;
        local_80 = 0;
        local_90 = '\0';
        cVar1 = FUN_14014aad0(&local_90,param_4,param_3,0x3a);
        if (cVar1 != '\0') {
          pcVar6 = &local_90;
          if (0xf < local_78) {
            pcVar6 = (char *)CONCAT71(uStack_8f,local_90);
          }
          iVar4 = atoi(pcVar6);
          *(int *)(param_1 + 0xd8) = iVar4;
        }
      }
      else {
        iVar4 = FUN_14000c110(param_2,"HEALING_RATE");
        if (iVar4 == 0) {
          local_78 = 0xf;
          local_80 = 0;
          local_90 = '\0';
          cVar1 = FUN_14014aad0(&local_90,param_4,param_3,0x3a);
          if (cVar1 != '\0') {
            pcVar6 = &local_90;
            if (0xf < local_78) {
              pcVar6 = (char *)CONCAT71(uStack_8f,local_90);
            }
            iVar4 = atoi(pcVar6);
            *(int *)(param_1 + 0xdc) = iVar4;
          }
        }
        else {
          iVar4 = FUN_14000c110(param_2,"VASCULAR");
          if (iVar4 == 0) {
            local_78 = 0xf;
            local_80 = 0;
            local_90 = '\0';
            cVar1 = FUN_14014aad0(&local_90,param_4,param_3,0x3a);
            if (cVar1 != '\0') {
              pcVar6 = &local_90;
              if (0xf < local_78) {
                pcVar6 = (char *)CONCAT71(uStack_8f,local_90);
              }
              iVar4 = atoi(pcVar6);
              *(int *)(param_1 + 0xe0) = iVar4;
            }
          }
          else {
            iVar4 = FUN_14000c110(param_2,"PAIN_RECEPTORS");
            if (iVar4 == 0) {
              local_78 = 0xf;
              local_80 = 0;
              local_90 = '\0';
              cVar1 = FUN_14014aad0(&local_90,param_4,param_3,0x3a);
              if (cVar1 != '\0') {
                pcVar6 = &local_90;
                if (0xf < local_78) {
                  pcVar6 = (char *)CONCAT71(uStack_8f,local_90);
                }
                iVar4 = atoi(pcVar6);
                *(int *)(param_1 + 0xe4) = iVar4;
              }
            }
            else {
              iVar4 = FUN_14000c110(param_2,"THICKENS_ON_STRENGTH");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 1) {
                  return 1;
                }
                **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 1;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"THICKENS_ON_ENERGY_STORAGE");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 1) {
                  return 1;
                }
                **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 2;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"ARTERIES");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 1) {
                  return 1;
                }
                **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 4;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"SCARS");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 1) {
                  return 1;
                }
                **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 8;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"STRUCTURAL");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 1) {
                  return 1;
                }
                **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 0x10;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"CONNECTIVE_TISSUE_ANCHOR");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 3) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
                *pbVar7 = *pbVar7 | 8;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"SETTABLE");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 3) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
                *pbVar7 = *pbVar7 | 0x10;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"SPLINTABLE");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 3) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
                *pbVar7 = *pbVar7 | 0x20;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"FUNCTIONAL");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 2) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                *pbVar7 = *pbVar7 | 0x80;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"NERVOUS");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 1) {
                  return 1;
                }
                **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 0x20;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"THOUGHT");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 1) {
                  return 1;
                }
                **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 0x40;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"MUSCULAR");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 1) {
                  return 1;
                }
                **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 0x80;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"SMELL");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 2) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                *pbVar7 = *pbVar7 | 1;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,&DAT_140eaa084);
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 2) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                *pbVar7 = *pbVar7 | 2;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"FLIGHT");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 2) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                *pbVar7 = *pbVar7 | 4;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"BREATHE");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 2) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                *pbVar7 = *pbVar7 | 8;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"SIGHT");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 2) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                *pbVar7 = *pbVar7 | 0x10;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"CONNECTS");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 2) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                *pbVar7 = *pbVar7 | 0x40;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"MAJOR_ARTERIES");
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x28) < 3) {
                  return 1;
                }
                pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
                *pbVar7 = *pbVar7 | 1;
                return 1;
              }
              iVar4 = FUN_14000c110(param_2,"INSULATION");
              if (iVar4 != 0) {
                iVar4 = FUN_14000c110(param_2,"COSMETIC");
                if (iVar4 == 0) {
                  if (*(int *)(param_1 + 0x28) < 2) {
                    return 1;
                  }
                  pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                  *pbVar7 = *pbVar7 | 0x20;
                  return 1;
                }
                iVar4 = FUN_14000c110(param_2,"STYLEABLE");
                if (iVar4 == 0) {
                  if (*(int *)(param_1 + 0x28) < 3) {
                    return 1;
                  }
                  pbVar7 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
                  *pbVar7 = *pbVar7 | 4;
                  return 1;
                }
                iVar4 = FUN_14000c110(param_2,"TISSUE_SHAPE");
                if (iVar4 == 0) {
                  local_58 = 0xf;
                  local_60 = 0;
                  local_70 = 0;
                  cVar1 = FUN_14014aad0(&local_70,param_4,param_3,0x3a);
                  if (cVar1 != '\0') {
                    sVar2 = FUN_1402ec950(&local_70);
                    *(short *)(param_1 + 0xe8) = sVar2;
                    if (sVar2 == 4) {
                      local_78 = 0xf;
                      local_80 = 0;
                      local_90 = '\0';
                      cVar1 = FUN_14014aad0(&local_70,param_4,param_3,0x3a);
                      if (cVar1 == '\0') {
                        *(undefined2 *)(param_1 + 0xe8) = 0;
                      }
                      else {
                        if ((char *)(param_1 + 0x130) != &local_90) {
                          FUN_14000c9e0((char *)(param_1 + 0x130),&local_90);
                        }
                        FUN_14000c260(&local_90);
                      }
                    }
                  }
                  FUN_14000c260(&local_70);
                  return 1;
                }
                cVar1 = FUN_14000d730(param_2,"SUBORDINATE_TO_TISSUE");
                if (cVar1 != '\0') {
                  FUN_14000c2b0(&local_70);
                  cVar1 = FUN_14014aad0(&local_70,param_4,param_3,0x3a);
                  if (cVar1 != '\0') {
                    FUN_14000c230(param_1 + 0xf8,&local_70);
                  }
                  FUN_14000c260(&local_70);
                  return 1;
                }
                cVar1 = FUN_14000d730(param_2,"TISSUE_MAT_STATE");
                if (cVar1 != '\0') {
                  FUN_14000c2b0(&local_70);
                  cVar1 = FUN_14014aad0(&local_70,param_4,param_3,0x3a);
                  if (cVar1 != '\0') {
                    uVar3 = FUN_1402cee90(&local_70);
                    *(undefined2 *)(param_1 + 0x11c) = uVar3;
                  }
                  FUN_14000c260(&local_70);
                  return 1;
                }
                cVar1 = FUN_14000d730(param_2,"TISSUE_LEAKS");
                if (cVar1 != '\0') {
                  FUN_14007bda0(param_1 + 0x20,0x11);
                  return 1;
                }
                return 0;
              }
              local_78 = 0xf;
              local_80 = 0;
              local_90 = '\0';
              cVar1 = FUN_14014aad0(&local_90,param_4,param_3,0x3a);
              if (cVar1 != '\0') {
                pcVar6 = &local_90;
                if (0xf < local_78) {
                  pcVar6 = (char *)CONCAT71(uStack_8f,local_90);
                }
                iVar4 = atoi(pcVar6);
                *(short *)(param_1 + 0xf0) = (short)iVar4;
              }
            }
          }
        }
      }
    }
    if (local_78 < 0x10) {
      return 1;
    }
    FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
    return 1;
  }
  local_38 = 0xf;
  local_40 = 0;
  local_50 = 0;
  local_58 = 0xf;
  local_60 = 0;
  local_70 = 0;
  cVar1 = FUN_14014aad0(&local_50,param_4,param_3,0x3a);
  if (cVar1 == '\0') goto LAB_1402b212d;
  cVar1 = FUN_14014aad0(&local_70,param_4,param_3,0x3a);
  if (cVar1 == '\0') {
    local_78 = 0xf;
    local_80 = 0;
    local_90 = cVar1;
    FUN_14000c780(&local_90,"Tissue Definition ",0x12);
    FUN_14000cb40(&local_90,param_1,0,0xffffffffffffffff);
    FUN_14000c9f0(&local_90,&DAT_140e7aaf8,1);
    FUN_14000cb40(&local_90,&local_50,0,0xffffffffffffffff);
    FUN_14000c9f0(&local_90," missing plural string",0x16);
    FUN_14014a240(&local_90);
  }
  else {
    if ((byte *)(param_1 + 0x30) != &local_50) {
      FUN_14000c8b0((byte *)(param_1 + 0x30),&local_50,0,0xffffffffffffffff);
    }
    pbVar7 = (byte *)(param_1 + 0x50);
    if (pbVar7 != &local_70) {
      FUN_14000c8b0(pbVar7,&local_70,0,0xffffffffffffffff);
    }
    iVar4 = FUN_14000c110(pbVar7,&DAT_140eaa1f0);
    if (iVar4 == 0) {
      if (pbVar7 != &local_50) {
        FUN_14000c8b0(pbVar7,&local_50,0,0xffffffffffffffff);
      }
      goto LAB_1402b212d;
    }
    iVar4 = FUN_14000c110(pbVar7,&DAT_140ea7a78);
    if (iVar4 != 0) goto LAB_1402b212d;
    uVar5 = FUN_1402cbb00(&local_90,&local_50,0x73);
    FUN_14014cac0(pbVar7,uVar5);
  }
  if (0xf < local_78) {
    FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
  }
LAB_1402b212d:
  if (0xf < local_58) {
    FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
  }
  if (0xf < local_38) {
    FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
  }
  return 1;
}

