// FUN_1402e9e70 @ 1402e9e70
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 140071310 FUN_140071310
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 1402d7450 FUN_1402d7450
//   -> 1402d9bb0 FUN_1402d9bb0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402e9e70(short *param_1,int *param_2,short param_3,undefined8 param_4,char *param_5,
                  char *param_6,undefined8 param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStack_a8 [32];
  short local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_1410b5008 ^ (ulonglong)auStack_a8;
  local_88 = param_3;
  iVar5 = FUN_14000c110(param_4,"GET_MATERIAL_FROM_REAGENT");
  if (iVar5 == 0) {
    *param_1 = -1;
    *param_2 = -1;
    return;
  }
  iVar5 = FUN_14000c110(param_4);
  if (iVar5 == 0) {
    *param_1 = -1;
    *param_2 = -1;
    if (param_3 < 0) {
      return;
    }
    if ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)param_3) {
      return;
    }
    lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_3 * 8);
    if (lVar1 == 0) {
      return;
    }
    if (*(longlong *)(param_5 + 0x10) == 8) {
      uVar2 = *(ulonglong *)(param_5 + 0x18);
      pcVar7 = param_5;
      if (0xf < uVar2) {
        pcVar7 = *(char **)param_5;
      }
      if (*pcVar7 == 'I') {
        pcVar7 = param_5;
        if (0xf < uVar2) {
          pcVar7 = *(char **)param_5;
        }
        if (pcVar7[1] == 'N') {
          pcVar7 = param_5;
          if (0xf < uVar2) {
            pcVar7 = *(char **)param_5;
          }
          if (pcVar7[2] == 'D') {
            pcVar7 = param_5;
            if (0xf < uVar2) {
              pcVar7 = *(char **)param_5;
            }
            if (pcVar7[3] == 'E') {
              pcVar7 = param_5;
              if (0xf < uVar2) {
                pcVar7 = *(char **)param_5;
              }
              if (pcVar7[4] == 'X') {
                iVar5 = 0;
                pcVar7 = param_5;
                if (0xf < uVar2) {
                  pcVar7 = *(char **)param_5;
                }
                if (pcVar7[5] != '0') {
                  pcVar7 = param_5;
                  if (0xf < uVar2) {
                    pcVar7 = *(char **)param_5;
                  }
                  iVar5 = (pcVar7[5] + -0x30) * 100;
                }
                pcVar7 = param_5;
                if (0xf < uVar2) {
                  pcVar7 = *(char **)param_5;
                }
                if (pcVar7[6] != '0') {
                  pcVar7 = param_5;
                  if (0xf < uVar2) {
                    pcVar7 = *(char **)param_5;
                  }
                  iVar5 = iVar5 + (pcVar7[6] + -0x30) * 10;
                }
                pcVar7 = param_5;
                if (0xf < uVar2) {
                  pcVar7 = *(char **)param_5;
                }
                if (pcVar7[7] != '0') {
                  pcVar7 = param_5;
                  if (0xf < uVar2) {
                    pcVar7 = *(char **)param_5;
                  }
                  iVar5 = iVar5 + pcVar7[7] + -0x30;
                }
                if ((-1 < iVar5) &&
                   ((ulonglong)(longlong)iVar5 <
                    (ulonglong)(*(longlong *)(lVar1 + 0x24b8) - *(longlong *)(lVar1 + 0x24b0) >> 3))
                   ) {
                  *param_1 = (short)iVar5 + 0x13;
                  *param_2 = (int)local_88;
                  return;
                }
              }
            }
          }
        }
      }
    }
    iVar5 = (int)(*(longlong *)(lVar1 + 0x24b8) - *(longlong *)(lVar1 + 0x24b0) >> 3) + -1;
    if (-1 < iVar5) {
      lVar3 = *(longlong *)(lVar1 + 0x24b0);
      do {
        iVar6 = FUN_140071310(*(undefined8 *)(lVar3 + (longlong)iVar5 * 8),param_5);
        if (iVar6 == 0) {
          *param_1 = (short)iVar5 + 0x13;
          *param_2 = (int)local_88;
          return;
        }
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    local_58 = 0xf;
    local_60 = 0;
    local_70 = 0;
    FUN_14000c780(&local_70,"undefined local creature material set to default: ",0x32);
    FUN_14000cb40(&local_70,lVar1,0,0xffffffffffffffff);
    FUN_14000c9f0(&local_70,&DAT_140e59864,1);
    FUN_14000cb40(&local_70,param_5,0,0xffffffffffffffff);
    FUN_14014a240(&local_70);
    *param_1 = 0x13;
    *param_2 = (int)local_88;
  }
  else {
    iVar5 = FUN_14000c110(param_4,"LOCAL_PLANT_MAT");
    if (iVar5 == 0) {
      *param_1 = -1;
      *param_2 = -1;
      if (param_3 < 0) {
        return;
      }
      if ((ulonglong)(DAT_141d6dc18 - DAT_141d6dc10 >> 3) <= (ulonglong)(longlong)param_3) {
        return;
      }
      lVar1 = *(longlong *)(DAT_141d6dc10 + (longlong)param_3 * 8);
      if (lVar1 == 0) {
        return;
      }
      iVar5 = (int)(*(longlong *)(lVar1 + 600) - *(longlong *)(lVar1 + 0x250) >> 3) + -1;
      if (-1 < iVar5) {
        lVar3 = *(longlong *)(lVar1 + 0x250);
        do {
          iVar6 = FUN_140071310(*(undefined8 *)(lVar3 + (longlong)iVar5 * 8),param_5);
          if (iVar6 == 0) {
            *param_1 = (short)iVar5 + 0x1a3;
            *param_2 = (int)local_88;
            return;
          }
          iVar5 = iVar5 + -1;
          param_3 = local_88;
        } while (-1 < iVar5);
      }
      local_58 = 0xf;
      local_60 = 0;
      local_70 = 0;
      FUN_14000c780(&local_70,"undefined local plant material set to default: ",0x2f);
      FUN_14000cb40(&local_70,lVar1,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_70,&DAT_140e59864,1);
      FUN_14000cb40(&local_70,param_5,0,0xffffffffffffffff);
      FUN_14014a240(&local_70);
      *param_1 = 0x1a3;
      *param_2 = (int)param_3;
    }
    else {
      iVar5 = FUN_14000c110(param_4,"CREATURE_MAT");
      if (iVar5 == 0) {
        *param_1 = -1;
        *param_2 = -1;
        lVar1 = DAT_141d6dd50;
        iVar5 = (int)(DAT_141d6dd58 - DAT_141d6dd50 >> 3);
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) {
            return;
          }
          iVar6 = FUN_140071310(*(undefined8 *)(lVar1 + (longlong)iVar5 * 8));
        } while (iVar6 != 0);
        lVar1 = *(longlong *)(lVar1 + (longlong)iVar5 * 8);
        if (lVar1 == 0) {
          return;
        }
        sVar4 = (short)iVar5;
        if (*(longlong *)(param_6 + 0x10) == 8) {
          uVar2 = *(ulonglong *)(param_6 + 0x18);
          pcVar7 = param_6;
          if (0xf < uVar2) {
            pcVar7 = *(char **)param_6;
          }
          if (*pcVar7 == 'I') {
            pcVar7 = param_6;
            if (0xf < uVar2) {
              pcVar7 = *(char **)param_6;
            }
            if (pcVar7[1] == 'N') {
              pcVar7 = param_6;
              if (0xf < uVar2) {
                pcVar7 = *(char **)param_6;
              }
              if (pcVar7[2] == 'D') {
                pcVar7 = param_6;
                if (0xf < uVar2) {
                  pcVar7 = *(char **)param_6;
                }
                if (pcVar7[3] == 'E') {
                  pcVar7 = param_6;
                  if (0xf < uVar2) {
                    pcVar7 = *(char **)param_6;
                  }
                  if (pcVar7[4] == 'X') {
                    iVar5 = 0;
                    pcVar7 = param_6;
                    if (0xf < uVar2) {
                      pcVar7 = *(char **)param_6;
                    }
                    if (pcVar7[5] != '0') {
                      pcVar7 = param_6;
                      if (0xf < uVar2) {
                        pcVar7 = *(char **)param_6;
                      }
                      iVar5 = (pcVar7[5] + -0x30) * 100;
                    }
                    pcVar7 = param_6;
                    if (0xf < uVar2) {
                      pcVar7 = *(char **)param_6;
                    }
                    if (pcVar7[6] != '0') {
                      pcVar7 = param_6;
                      if (0xf < uVar2) {
                        pcVar7 = *(char **)param_6;
                      }
                      iVar5 = iVar5 + (pcVar7[6] + -0x30) * 10;
                    }
                    pcVar7 = param_6;
                    if (0xf < uVar2) {
                      pcVar7 = *(char **)param_6;
                    }
                    if (pcVar7[7] != '0') {
                      pcVar7 = param_6;
                      if (0xf < uVar2) {
                        pcVar7 = *(char **)param_6;
                      }
                      iVar5 = iVar5 + pcVar7[7] + -0x30;
                    }
                    if ((-1 < iVar5) &&
                       ((ulonglong)(longlong)iVar5 <
                        (ulonglong)
                        (*(longlong *)(lVar1 + 0x24b8) - *(longlong *)(lVar1 + 0x24b0) >> 3))) {
                      *param_1 = (short)iVar5 + 0x13;
                      iVar5 = (int)sVar4;
                      goto LAB_1402ea6b4;
                    }
                  }
                }
              }
            }
          }
        }
        iVar5 = (int)(*(longlong *)(lVar1 + 0x24b8) - *(longlong *)(lVar1 + 0x24b0) >> 3) + -1;
        if (-1 < iVar5) {
          local_80 = *(longlong *)(lVar1 + 0x24b0);
          do {
            iVar6 = FUN_140071310(*(undefined8 *)(local_80 + (longlong)iVar5 * 8),param_6);
            if (iVar6 == 0) {
              *param_1 = (short)iVar5 + 0x13;
              iVar5 = (int)sVar4;
              goto LAB_1402ea6b4;
            }
            iVar5 = iVar5 + -1;
          } while (-1 < iVar5);
        }
        local_58 = 0xf;
        local_60 = 0;
        local_70 = 0;
        FUN_14000c780(&local_70,"undefined creature material set to default: ",0x2c);
        FUN_14000cb40(&local_70,param_5,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_70,&DAT_140e59864,1);
        FUN_14000cb40(&local_70,param_6,0,0xffffffffffffffff);
        FUN_14014a240(&local_70);
        *param_1 = 0x13;
        *param_2 = (int)sVar4;
      }
      else {
        iVar5 = FUN_14000c110(param_4,"PLANT_MAT");
        if (iVar5 != 0) {
          sVar4 = FUN_1402d7450(param_4,param_7);
          *param_1 = sVar4;
          iVar5 = FUN_1402d9bb0(sVar4,param_5);
LAB_1402ea6b4:
          *param_2 = iVar5;
          return;
        }
        *param_1 = -1;
        *param_2 = -1;
        lVar1 = DAT_141d6dc10;
        sVar4 = (short)(DAT_141d6dc18 - DAT_141d6dc10 >> 3);
        do {
          sVar4 = sVar4 + -1;
          if (sVar4 < 0) {
            return;
          }
          iVar5 = FUN_140071310(*(undefined8 *)(lVar1 + (longlong)sVar4 * 8),param_5);
        } while (iVar5 != 0);
        lVar1 = *(longlong *)(lVar1 + (longlong)sVar4 * 8);
        if (lVar1 == 0) {
          return;
        }
        iVar5 = (int)(*(longlong *)(lVar1 + 600) - *(longlong *)(lVar1 + 0x250) >> 3) + -1;
        if (-1 < iVar5) {
          local_80 = *(longlong *)(lVar1 + 0x250);
          do {
            iVar6 = FUN_140071310(*(undefined8 *)(local_80 + (longlong)iVar5 * 8),param_6);
            if (iVar6 == 0) {
              *param_1 = (short)iVar5 + 0x1a3;
              iVar5 = (int)sVar4;
              goto LAB_1402ea6b4;
            }
            iVar5 = iVar5 + -1;
          } while (-1 < iVar5);
        }
        local_58 = 0xf;
        local_60 = 0;
        local_70 = 0;
        FUN_14000c780(&local_70,"undefined plant material set to default: ",0x29);
        FUN_14000cb40(&local_70,param_5,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_70,&DAT_140e59864,1);
        FUN_14000cb40(&local_70,param_5,0,0xffffffffffffffff);
        FUN_14014a240(&local_70);
        *param_1 = 0x1a3;
        *param_2 = (int)sVar4;
      }
    }
  }
  if (0xf < local_58) {
    FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
  }
  return;
}

