// FUN_1402b29c0 @ 1402b29c0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14014aad0 FUN_14014aad0
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1402d72b0 FUN_1402d72b0
//   -> EXTERNAL:00000115 atoi
//   -> 1402ec950 FUN_1402ec950
//   -> 14000c1a0 FUN_14000c1a0
//   -> 14000d730 FUN_14000d730
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14000c230 FUN_14000c230
//   -> 14000c260 FUN_14000c260
//   -> 1402cee90 FUN_1402cee90
//   -> 14007bda0 FUN_14007bda0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402b29c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  ulonglong local_88;
  char local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong local_68;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_a8 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_c8;
  iVar5 = FUN_14000c110(param_2,"TISSUE_NAME");
  if (iVar5 == 0) {
    local_88 = 0xf;
    local_90 = 0;
    local_a0 = '\0';
    local_48 = 0xf;
    local_50 = 0;
    local_60 = 0;
    cVar2 = FUN_14014aad0(&local_a0,param_4,param_3,0x3a);
    if (cVar2 != '\0') {
      cVar2 = FUN_14014aad0(&local_60,param_4,param_3,0x3a);
      if (cVar2 == '\0') {
        local_68 = 0xf;
        local_70 = 0;
        local_80 = cVar2;
        FUN_14000c780(&local_80,"Tissue Template ",0x10);
        FUN_14000cb40(&local_80,param_1,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_80,&DAT_140e7aaf8,1);
        FUN_14000cb40(&local_80,&local_a0,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_80," missing plural string",0x16);
        FUN_14014a240(&local_80);
        if (0xf < local_68) {
          FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
        }
      }
      else {
        if ((char *)(param_1 + 0x30) != &local_a0) {
          FUN_14000c8b0((char *)(param_1 + 0x30),&local_a0,0,0xffffffffffffffff);
        }
        if ((byte *)(param_1 + 0x50) != &local_60) {
          FUN_14000c8b0((byte *)(param_1 + 0x50),&local_60,0,0xffffffffffffffff);
        }
      }
    }
    if (0xf < local_48) {
      FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
    }
  }
  else {
    iVar5 = FUN_14000c110(param_2,"TISSUE_MATERIAL");
    if (iVar5 == 0) {
      local_68 = 0xf;
      local_70 = 0;
      local_80 = '\0';
      local_88 = 0xf;
      local_90 = 0;
      local_a0 = '\0';
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      cVar2 = FUN_14014aad0(&local_80,param_4,param_3,0x3a);
      if (((cVar2 != '\0') &&
          ((cVar2 = FUN_1402d72b0(&local_80), cVar2 != '\0' ||
           (cVar2 = FUN_14014aad0(&local_a0,param_4,param_3,0x3a), cVar2 != '\0')))) &&
         (((iVar5 = FUN_14000c110(&local_80,"CREATURE_MAT"), iVar5 != 0 &&
           (iVar5 = FUN_14000c110(&local_80,"PLANT_MAT"), iVar5 != 0)) ||
          (cVar2 = FUN_14014aad0(&local_60,param_4,param_3,0x3a), cVar2 != '\0')))) {
        if ((char *)(param_1 + 0x70) != &local_80) {
          FUN_14000c8b0((char *)(param_1 + 0x70),&local_80,0,0xffffffffffffffff);
        }
        if ((char *)(param_1 + 0x90) != &local_a0) {
          FUN_14000c8b0((char *)(param_1 + 0x90),&local_a0,0,0xffffffffffffffff);
        }
        if ((byte *)(param_1 + 0xb0) != &local_60) {
          FUN_14000c8b0((byte *)(param_1 + 0xb0),&local_60,0,0xffffffffffffffff);
        }
      }
      if (0xf < local_48) {
        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
      }
      if (0xf < local_88) {
        FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
      }
      if (local_68 < 0x10) {
        return 1;
      }
      FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
      return 1;
    }
    iVar5 = FUN_14000c110(param_2,"RELATIVE_THICKNESS");
    if (iVar5 == 0) {
      local_88 = 0xf;
      local_90 = 0;
      local_a0 = '\0';
      cVar2 = FUN_14014aad0(&local_a0,param_4,param_3,0x3a);
      if (cVar2 != '\0') {
        pcVar7 = &local_a0;
        if (0xf < local_88) {
          pcVar7 = (char *)CONCAT71(uStack_9f,local_a0);
        }
        iVar5 = atoi(pcVar7);
        *(int *)(param_1 + 0xd8) = iVar5;
      }
    }
    else {
      iVar5 = FUN_14000c110(param_2,"HEALING_RATE");
      if (iVar5 == 0) {
        local_88 = 0xf;
        local_90 = 0;
        local_a0 = '\0';
        cVar2 = FUN_14014aad0(&local_a0,param_4,param_3,0x3a);
        if (cVar2 != '\0') {
          pcVar7 = &local_a0;
          if (0xf < local_88) {
            pcVar7 = (char *)CONCAT71(uStack_9f,local_a0);
          }
          iVar5 = atoi(pcVar7);
          *(int *)(param_1 + 0xdc) = iVar5;
        }
      }
      else {
        iVar5 = FUN_14000c110(param_2,"VASCULAR");
        if (iVar5 == 0) {
          local_88 = 0xf;
          local_90 = 0;
          local_a0 = '\0';
          cVar2 = FUN_14014aad0(&local_a0,param_4,param_3,0x3a);
          if (cVar2 != '\0') {
            pcVar7 = &local_a0;
            if (0xf < local_88) {
              pcVar7 = (char *)CONCAT71(uStack_9f,local_a0);
            }
            iVar5 = atoi(pcVar7);
            *(int *)(param_1 + 0xe0) = iVar5;
          }
        }
        else {
          iVar5 = FUN_14000c110(param_2,"PAIN_RECEPTORS");
          if (iVar5 == 0) {
            local_88 = 0xf;
            local_90 = 0;
            local_a0 = '\0';
            cVar2 = FUN_14014aad0(&local_a0,param_4,param_3,0x3a);
            if (cVar2 != '\0') {
              pcVar7 = &local_a0;
              if (0xf < local_88) {
                pcVar7 = (char *)CONCAT71(uStack_9f,local_a0);
              }
              iVar5 = atoi(pcVar7);
              *(int *)(param_1 + 0xe4) = iVar5;
            }
          }
          else {
            iVar5 = FUN_14000c110(param_2,"THICKENS_ON_STRENGTH");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 1) {
                return 1;
              }
              **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 1;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"THICKENS_ON_ENERGY_STORAGE");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 1) {
                return 1;
              }
              **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 2;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"ARTERIES");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 1) {
                return 1;
              }
              **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 4;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"SCARS");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 1) {
                return 1;
              }
              **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 8;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"STRUCTURAL");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 1) {
                return 1;
              }
              **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 0x10;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"CONNECTIVE_TISSUE_ANCHOR");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 3) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
              *pbVar1 = *pbVar1 | 8;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"SETTABLE");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 3) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
              *pbVar1 = *pbVar1 | 0x10;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"SPLINTABLE");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 3) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
              *pbVar1 = *pbVar1 | 0x20;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"FUNCTIONAL");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 2) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
              *pbVar1 = *pbVar1 | 0x80;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"NERVOUS");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 1) {
                return 1;
              }
              **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 0x20;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"THOUGHT");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 1) {
                return 1;
              }
              **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 0x40;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"MUSCULAR");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 1) {
                return 1;
              }
              **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 0x80;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"SMELL");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 2) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
              *pbVar1 = *pbVar1 | 1;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,&DAT_140eaa084);
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 2) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
              *pbVar1 = *pbVar1 | 2;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"FLIGHT");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 2) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
              *pbVar1 = *pbVar1 | 4;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"BREATHE");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 2) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
              *pbVar1 = *pbVar1 | 8;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"SIGHT");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 2) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
              *pbVar1 = *pbVar1 | 0x10;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"CONNECTS");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 2) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
              *pbVar1 = *pbVar1 | 0x40;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"MAJOR_ARTERIES");
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x28) < 3) {
                return 1;
              }
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
              *pbVar1 = *pbVar1 | 1;
              return 1;
            }
            iVar5 = FUN_14000c110(param_2,"INSULATION");
            if (iVar5 != 0) {
              iVar5 = FUN_14000c110(param_2,"COSMETIC");
              if (iVar5 == 0) {
                if (*(int *)(param_1 + 0x28) < 2) {
                  return 1;
                }
                pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 1);
                *pbVar1 = *pbVar1 | 0x20;
                return 1;
              }
              iVar5 = FUN_14000c110(param_2,"STYLEABLE");
              if (iVar5 == 0) {
                if (*(int *)(param_1 + 0x28) < 3) {
                  return 1;
                }
                pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 2);
                *pbVar1 = *pbVar1 | 4;
                return 1;
              }
              iVar5 = FUN_14000c110(param_2,"TISSUE_SHAPE");
              if (iVar5 == 0) {
                local_68 = 0xf;
                local_70 = 0;
                local_80 = '\0';
                cVar2 = FUN_14014aad0(&local_80,param_4,param_3,0x3a);
                if (cVar2 != '\0') {
                  sVar3 = FUN_1402ec950(&local_80);
                  *(short *)(param_1 + 0xe8) = sVar3;
                  if (sVar3 == 4) {
                    local_48 = 0xf;
                    local_50 = 0;
                    local_60 = 0;
                    cVar2 = FUN_14014aad0(&local_80,param_4,param_3,0x3a);
                    if (cVar2 == '\0') {
                      *(undefined2 *)(param_1 + 0xe8) = 0;
                    }
                    else {
                      uVar8 = 0xf;
                      if ((byte *)(param_1 + 0x120) != &local_60) {
                        FUN_14000c8b0((byte *)(param_1 + 0x120),&local_60,0,0xffffffffffffffff);
                        uVar8 = local_48;
                      }
                      if (0xf < uVar8) {
                        FUN_140002020(CONCAT71(uStack_5f,local_60),uVar8 + 1,1);
                      }
                    }
                  }
                }
                if (0xf < local_68) {
                  FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
                }
                local_68 = 0xf;
                local_70 = 0;
                puVar6 = (undefined1 *)FUN_14000c1a0(&local_80);
                *puVar6 = 0;
                return 1;
              }
              cVar2 = FUN_14000d730(param_2,"SUBORDINATE_TO_TISSUE");
              if (cVar2 != '\0') {
                FUN_14000c2b0(&local_60);
                cVar2 = FUN_14014aad0(&local_60,param_4,param_3,0x3a);
                if (cVar2 != '\0') {
                  FUN_14000c230(param_1 + 0xf8,&local_60);
                }
                FUN_14000c260(&local_60);
                return 1;
              }
              cVar2 = FUN_14000d730(param_2,"TISSUE_MAT_STATE");
              if (cVar2 != '\0') {
                FUN_14000c2b0(&local_60);
                cVar2 = FUN_14014aad0(&local_60,param_4,param_3,0x3a);
                if (cVar2 != '\0') {
                  uVar4 = FUN_1402cee90(&local_60);
                  *(undefined2 *)(param_1 + 0x118) = uVar4;
                }
                FUN_14000c260(&local_60);
                return 1;
              }
              cVar2 = FUN_14000d730(param_2,"TISSUE_LEAKS");
              if (cVar2 != '\0') {
                FUN_14007bda0(param_1 + 0x20,0x11);
                return 1;
              }
              return 0;
            }
            local_88 = 0xf;
            local_90 = 0;
            local_a0 = '\0';
            cVar2 = FUN_14014aad0(&local_a0,param_4,param_3,0x3a);
            if (cVar2 != '\0') {
              pcVar7 = &local_a0;
              if (0xf < local_88) {
                pcVar7 = (char *)CONCAT71(uStack_9f,local_a0);
              }
              iVar5 = atoi(pcVar7);
              *(short *)(param_1 + 0xf0) = (short)iVar5;
            }
          }
        }
      }
    }
  }
  if (0xf < local_88) {
    FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
  }
  return 1;
}

