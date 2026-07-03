// FUN_140d7efa0 @ 140d7efa0
// callees:
//   -> 140004830 FUN_140004830
//   -> 1408dea60 FUN_1408dea60
//   -> 140d9e600 FUN_140d9e600
//   -> 140d9d490 FUN_140d9d490
//   -> 14013c040 FUN_14013c040
//   -> 140002460 FUN_140002460
//   -> 1400c0380 FUN_1400c0380
//   -> 14014e120 FUN_14014e120
//   -> 1400c0400 FUN_1400c0400
//   -> 1400c0480 FUN_1400c0480
//   -> 1400c05e0 FUN_1400c05e0
//   -> 1400c5d30 FUN_1400c5d30
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d7efa0(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  longlong lVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  ushort local_88;
  undefined1 local_80;
  short local_78;
  short local_76;
  short local_74;
  int local_70;
  char acStack_68 [5];
  char local_63;
  char local_61;
  ulonglong local_58;
  
  if (param_2 < 0) {
    return;
  }
  local_58 = DAT_1410b5008 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x1160e4) <= (int)param_2) {
    return;
  }
  if (param_3 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1160e8) <= (int)param_3) {
    return;
  }
  if (param_4 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1160ec) <= (int)param_4) {
    return;
  }
  uVar3 = FUN_140004830();
  cVar2 = FUN_1408dea60(uVar3);
  if (cVar2 != '\0') {
    return;
  }
  local_78 = -1;
  do {
    sVar7 = -1;
    local_70 = (int)local_78 + (int)param_2;
    lVar1 = (longlong)(local_78 + 1) * 3;
    sVar6 = local_78;
    iVar5 = local_70;
    do {
      if ((iVar5 < 0) || (*(int *)(param_1 + 0x1160e4) <= iVar5)) {
LAB_140d7f146:
        lVar4 = (longlong)(sVar7 + 1);
LAB_140d7f149:
        acStack_68[lVar4 + lVar1] = '\x01';
      }
      else {
        iVar8 = (int)sVar7;
        if ((param_3 + iVar8 < 0) || (*(int *)(param_1 + 0x1160e8) <= param_3 + iVar8))
        goto LAB_140d7f146;
        local_74 = sVar6 + param_2;
        local_88 = CONCAT11(local_88._1_1_,1);
        local_76 = sVar7 + param_3;
        cVar2 = FUN_140d9e600(param_1,local_74,local_76,param_4);
        if (cVar2 == '\0') {
          local_80 = 0;
          local_88 = local_88 & 0xff00;
          cVar2 = FUN_140d9d490(param_1,local_74,local_76,param_4);
          sVar6 = local_78;
          iVar5 = local_70;
          if (cVar2 != '\0') goto LAB_140d7f146;
          cVar2 = FUN_14013c040(param_1,local_74,local_76,param_4);
          lVar4 = (longlong)(iVar8 + 1);
          sVar6 = local_78;
          iVar5 = local_70;
          if (cVar2 == '\0') {
            acStack_68[lVar4 + lVar1] = '\0';
            goto LAB_140d7f151;
          }
          goto LAB_140d7f149;
        }
        acStack_68[(iVar8 + 1) + lVar1] = '\x02';
        sVar6 = local_78;
        iVar5 = local_70;
      }
LAB_140d7f151:
      sVar7 = sVar7 + 1;
    } while (sVar7 < 2);
    local_78 = sVar6 + 1;
  } while (local_78 < 2);
  local_88 = CONCAT11(local_88._1_1_,1);
  cVar2 = FUN_140d9e600(param_1,param_2,param_3,param_4);
  if (cVar2 != '\x01') {
    return;
  }
  uVar3 = FUN_140004830(param_1,param_2,param_3,param_4);
  cVar2 = FUN_140002460(uVar3);
  if (cVar2 == '\0') {
    uVar3 = FUN_140004830(param_1,param_2,param_3,param_4);
    cVar2 = FUN_1400c0380(uVar3);
    if (cVar2 == '\0') {
      uVar3 = FUN_140004830(param_1,param_2,param_3,param_4);
      cVar2 = FUN_14014e120(uVar3);
      if (cVar2 == '\0') {
        uVar3 = FUN_140004830(param_1,param_2,param_3,param_4);
        cVar2 = FUN_1400c0400(uVar3);
        if (cVar2 == '\0') {
          uVar3 = FUN_140004830(param_1,param_2,param_3,param_4);
          cVar2 = FUN_1400c0480(uVar3);
          if (cVar2 == '\0') {
            uVar3 = FUN_140004830(param_1,param_2,param_3,param_4);
            cVar2 = FUN_1400c05e0(uVar3);
            if (cVar2 == '\0') {
              return;
            }
            if (acStack_68[1] == '\0') {
              if (((acStack_68[3] != '\x02') && (local_61 == '\x01')) && (local_63 == '\x02')) {
                local_88 = 0x1ec;
                goto LAB_140d7fd94;
              }
LAB_140d7fc0a:
              if (acStack_68[3] == '\0') {
                if ((local_61 == '\x02') && (local_63 == '\x01')) {
                  local_88 = 0x1ed;
                  goto LAB_140d7fd94;
                }
              }
              else if (((acStack_68[3] == '\x01') && (local_61 == '\x02')) && (local_63 == '\0')) {
                local_88 = 0x1ee;
                goto LAB_140d7fd94;
              }
            }
            else if (acStack_68[1] != '\x02') goto LAB_140d7fc0a;
            if (acStack_68[1] == '\0') {
              if ((acStack_68[3] != '\x02') || (local_61 != '\x01')) goto LAB_140d7fcf1;
              if (local_63 != '\x02') {
                local_88 = 0x1ef;
                goto LAB_140d7fd94;
              }
            }
            else {
              if (acStack_68[1] == '\x02') {
                if (acStack_68[3] == '\x01') {
                  if (local_61 != '\x02') {
                    if (local_63 == '\0') {
                      local_88 = 0x1f0;
                      goto LAB_140d7fd94;
                    }
                    goto LAB_140d7fcf1;
                  }
LAB_140d7fd13:
                  if (local_63 == '\x02') {
                    local_88 = 0x1f6;
                    goto LAB_140d7fd94;
                  }
                  if (acStack_68[3] != '\x02') goto LAB_140d7fd3f;
                }
                else {
                  if (acStack_68[3] == '\0') {
                    if (local_61 == '\x02') goto LAB_140d7fd13;
                    if (local_63 == '\x01') {
                      local_88 = 0x1f2;
                      goto LAB_140d7fd94;
                    }
                    goto LAB_140d7fcf1;
                  }
                  if (acStack_68[3] != '\x02') goto LAB_140d7fcf1;
                  if (local_61 != '\x02') {
LAB_140d7fd2f:
                    if (local_63 == '\x02') {
                      local_88 = 0x1f8;
                      goto LAB_140d7fd94;
                    }
                    goto LAB_140d7fd3a;
                  }
                  if (local_63 == '\x02') {
                    local_88 = 500;
                    goto LAB_140d7fd94;
                  }
                }
                local_88 = 0x1f7;
                goto LAB_140d7fd94;
              }
              if (acStack_68[1] == '\x01') {
                if (acStack_68[3] == '\x02') {
                  if (local_61 == '\0') {
                    if (local_63 != '\x02') {
                      local_88 = 0x1f1;
                      goto LAB_140d7fd94;
                    }
                    goto LAB_140d7fd88;
                  }
                  goto LAB_140d7fcf1;
                }
                if (local_61 != '\0') goto LAB_140d7fcf1;
                if (local_63 == '\x02') {
                  local_88 = 499;
                  goto LAB_140d7fd94;
                }
              }
              else {
LAB_140d7fcf1:
                if ((local_61 == '\x02') && ((acStack_68[3] == '\x02' && (local_63 == '\x02')))) {
                  local_88 = 0x1f5;
                  goto LAB_140d7fd94;
                }
                if (acStack_68[1] == '\x02') {
                  if (local_61 == '\x02') goto LAB_140d7fd13;
                  if (acStack_68[3] == '\x02') goto LAB_140d7fd2f;
                }
LAB_140d7fd3a:
                if (local_61 == '\x02') {
LAB_140d7fd3f:
                  if (local_63 == '\x02') {
                    local_88 = 0x1f9;
                    goto LAB_140d7fd94;
                  }
                  if (acStack_68[3] == '\x02') {
                    local_88 = 0x1fa;
                    goto LAB_140d7fd94;
                  }
                }
                if (acStack_68[1] == '\x02') {
                  if (acStack_68[3] == '\x02') {
                    local_88 = 0x1fb;
                    goto LAB_140d7fd94;
                  }
                  if (local_63 == '\x02') {
                    local_88 = 0x1fc;
                    goto LAB_140d7fd94;
                  }
                  if (local_61 == '\x02') {
                    local_88 = 0x1fe;
                    goto LAB_140d7fd94;
                  }
                }
              }
              if ((acStack_68[3] != '\x02') || (local_63 != '\x02')) {
                local_88 = 0x1eb;
                goto LAB_140d7fd94;
              }
            }
LAB_140d7fd88:
            local_88 = 0x1fd;
            goto LAB_140d7fd94;
          }
          if (acStack_68[1] == '\0') {
            if (((acStack_68[3] != '\x02') && (local_61 == '\x01')) && (local_63 == '\x02')) {
              local_88 = 0x19d;
              goto LAB_140d7fd94;
            }
LAB_140d7fa08:
            if (acStack_68[3] == '\0') {
              if ((local_61 == '\x02') && (local_63 == '\x01')) {
                local_88 = 0x19e;
                goto LAB_140d7fd94;
              }
            }
            else if (((acStack_68[3] == '\x01') && (local_61 == '\x02')) && (local_63 == '\0')) {
              local_88 = 0x19f;
              goto LAB_140d7fd94;
            }
          }
          else if (acStack_68[1] != '\x02') goto LAB_140d7fa08;
          if (acStack_68[1] == '\0') {
            if ((acStack_68[3] != '\x02') || (local_61 != '\x01')) goto LAB_140d7faef;
            if (local_63 != '\x02') {
              local_88 = 0x1a0;
              goto LAB_140d7fd94;
            }
          }
          else {
            if (acStack_68[1] == '\x02') {
              if (acStack_68[3] == '\x01') {
                if (local_61 != '\x02') {
                  if (local_63 == '\0') {
                    local_88 = 0x1a1;
                    goto LAB_140d7fd94;
                  }
                  goto LAB_140d7faef;
                }
LAB_140d7fb11:
                if (local_63 == '\x02') {
                  local_88 = 0x1a7;
                  goto LAB_140d7fd94;
                }
                if (acStack_68[3] != '\x02') goto LAB_140d7fb46;
              }
              else {
                if (acStack_68[3] == '\0') {
                  if (local_61 == '\x02') goto LAB_140d7fb11;
                  if (local_63 == '\x01') {
                    local_88 = 0x1a3;
                    goto LAB_140d7fd94;
                  }
                  goto LAB_140d7faef;
                }
                if (acStack_68[3] != '\x02') goto LAB_140d7faef;
                if (local_61 != '\x02') {
LAB_140d7fb33:
                  if (local_63 == '\x02') {
                    local_88 = 0x1a9;
                    goto LAB_140d7fd94;
                  }
                  goto LAB_140d7fb41;
                }
                if (local_63 == '\x02') {
                  local_88 = 0x1a5;
                  goto LAB_140d7fd94;
                }
              }
              local_88 = 0x1a8;
              goto LAB_140d7fd94;
            }
            if (acStack_68[1] == '\x01') {
              if (acStack_68[3] == '\x02') {
                if (local_61 == '\0') {
                  if (local_63 != '\x02') {
                    local_88 = 0x1a2;
                    goto LAB_140d7fd94;
                  }
                  goto LAB_140d7fb9e;
                }
                goto LAB_140d7faef;
              }
              if (local_61 != '\0') goto LAB_140d7faef;
              if (local_63 == '\x02') {
                local_88 = 0x1a4;
                goto LAB_140d7fd94;
              }
            }
            else {
LAB_140d7faef:
              if ((local_61 == '\x02') && ((acStack_68[3] == '\x02' && (local_63 == '\x02')))) {
                local_88 = 0x1a6;
                goto LAB_140d7fd94;
              }
              if (acStack_68[1] == '\x02') {
                if (local_61 == '\x02') goto LAB_140d7fb11;
                if (acStack_68[3] == '\x02') goto LAB_140d7fb33;
              }
LAB_140d7fb41:
              if (local_61 == '\x02') {
LAB_140d7fb46:
                if (local_63 == '\x02') {
                  local_88 = 0x1aa;
                  goto LAB_140d7fd94;
                }
                if (acStack_68[3] == '\x02') {
                  local_88 = 0x1ab;
                  goto LAB_140d7fd94;
                }
              }
              if (acStack_68[1] == '\x02') {
                if (acStack_68[3] == '\x02') {
                  local_88 = 0x1ac;
                  goto LAB_140d7fd94;
                }
                if (local_63 == '\x02') {
                  local_88 = 0x1ad;
                  goto LAB_140d7fd94;
                }
                if (local_61 == '\x02') {
                  local_88 = 0x1af;
                  goto LAB_140d7fd94;
                }
              }
            }
            if ((acStack_68[3] != '\x02') || (local_63 != '\x02')) {
              local_88 = 0x52;
              goto LAB_140d7fd94;
            }
          }
LAB_140d7fb9e:
          local_88 = 0x1ae;
          goto LAB_140d7fd94;
        }
        if (acStack_68[1] == '\0') {
          if (((acStack_68[3] != '\x02') && (local_61 == '\x01')) && (local_63 == '\x02')) {
            local_88 = 0x11c;
            goto LAB_140d7fd94;
          }
LAB_140d7f806:
          if (acStack_68[3] == '\0') {
            if ((local_61 == '\x02') && (local_63 == '\x01')) {
              local_88 = 0x11d;
              goto LAB_140d7fd94;
            }
          }
          else if (((acStack_68[3] == '\x01') && (local_61 == '\x02')) && (local_63 == '\0')) {
            local_88 = 0x11e;
            goto LAB_140d7fd94;
          }
        }
        else if (acStack_68[1] != '\x02') goto LAB_140d7f806;
        if (acStack_68[1] == '\0') {
          if ((acStack_68[3] != '\x02') || (local_61 != '\x01')) goto LAB_140d7f8ed;
          if (local_63 != '\x02') {
            local_88 = 0x11f;
            goto LAB_140d7fd94;
          }
        }
        else {
          if (acStack_68[1] == '\x02') {
            if (acStack_68[3] == '\x01') {
              if (local_61 != '\x02') {
                if (local_63 == '\0') {
                  local_88 = 0x120;
                  goto LAB_140d7fd94;
                }
                goto LAB_140d7f8ed;
              }
LAB_140d7f90f:
              if (local_63 == '\x02') {
                local_88 = 0x126;
                goto LAB_140d7fd94;
              }
              if (acStack_68[3] != '\x02') goto LAB_140d7f944;
            }
            else {
              if (acStack_68[3] == '\0') {
                if (local_61 == '\x02') goto LAB_140d7f90f;
                if (local_63 == '\x01') {
                  local_88 = 0x122;
                  goto LAB_140d7fd94;
                }
                goto LAB_140d7f8ed;
              }
              if (acStack_68[3] != '\x02') goto LAB_140d7f8ed;
              if (local_61 != '\x02') {
LAB_140d7f931:
                if (local_63 == '\x02') {
                  local_88 = 0x128;
                  goto LAB_140d7fd94;
                }
                goto LAB_140d7f93f;
              }
              if (local_63 == '\x02') {
                local_88 = 0x124;
                goto LAB_140d7fd94;
              }
            }
            local_88 = 0x127;
            goto LAB_140d7fd94;
          }
          if (acStack_68[1] == '\x01') {
            if (acStack_68[3] == '\x02') {
              if (local_61 == '\0') {
                if (local_63 != '\x02') {
                  local_88 = 0x121;
                  goto LAB_140d7fd94;
                }
                goto LAB_140d7f99c;
              }
              goto LAB_140d7f8ed;
            }
            if (local_61 != '\0') goto LAB_140d7f8ed;
            if (local_63 == '\x02') {
              local_88 = 0x123;
              goto LAB_140d7fd94;
            }
          }
          else {
LAB_140d7f8ed:
            if ((local_61 == '\x02') && ((acStack_68[3] == '\x02' && (local_63 == '\x02')))) {
              local_88 = 0x125;
              goto LAB_140d7fd94;
            }
            if (acStack_68[1] == '\x02') {
              if (local_61 == '\x02') goto LAB_140d7f90f;
              if (acStack_68[3] == '\x02') goto LAB_140d7f931;
            }
LAB_140d7f93f:
            if (local_61 == '\x02') {
LAB_140d7f944:
              if (local_63 == '\x02') {
                local_88 = 0x129;
                goto LAB_140d7fd94;
              }
              if (acStack_68[3] == '\x02') {
                local_88 = 0x12a;
                goto LAB_140d7fd94;
              }
            }
            if (acStack_68[1] == '\x02') {
              if (acStack_68[3] == '\x02') {
                local_88 = 299;
                goto LAB_140d7fd94;
              }
              if (local_63 == '\x02') {
                local_88 = 300;
                goto LAB_140d7fd94;
              }
              if (local_61 == '\x02') {
                local_88 = 0x12e;
                goto LAB_140d7fd94;
              }
            }
          }
          if ((acStack_68[3] != '\x02') || (local_63 != '\x02')) {
            local_88 = 0x51;
            goto LAB_140d7fd94;
          }
        }
LAB_140d7f99c:
        local_88 = 0x12d;
        goto LAB_140d7fd94;
      }
      if (acStack_68[1] == '\0') {
        if (((acStack_68[3] != '\x02') && (local_61 == '\x01')) && (local_63 == '\x02')) {
          local_88 = 0x1be;
          goto LAB_140d7fd94;
        }
LAB_140d7f604:
        if (acStack_68[3] == '\0') {
          if ((local_61 == '\x02') && (local_63 == '\x01')) {
            local_88 = 0x1bf;
            goto LAB_140d7fd94;
          }
        }
        else if (((acStack_68[3] == '\x01') && (local_61 == '\x02')) && (local_63 == '\0')) {
          local_88 = 0x1c0;
          goto LAB_140d7fd94;
        }
      }
      else if (acStack_68[1] != '\x02') goto LAB_140d7f604;
      if (acStack_68[1] == '\0') {
        if ((acStack_68[3] != '\x02') || (local_61 != '\x01')) goto LAB_140d7f6eb;
        if (local_63 != '\x02') {
          local_88 = 0x1c1;
          goto LAB_140d7fd94;
        }
      }
      else {
        if (acStack_68[1] == '\x02') {
          if (acStack_68[3] == '\x01') {
            if (local_61 != '\x02') {
              if (local_63 == '\0') {
                local_88 = 0x1c2;
                goto LAB_140d7fd94;
              }
              goto LAB_140d7f6eb;
            }
LAB_140d7f70d:
            if (local_63 == '\x02') {
              local_88 = 0x1c8;
              goto LAB_140d7fd94;
            }
            if (acStack_68[3] != '\x02') goto LAB_140d7f742;
          }
          else {
            if (acStack_68[3] == '\0') {
              if (local_61 == '\x02') goto LAB_140d7f70d;
              if (local_63 == '\x01') {
                local_88 = 0x1c4;
                goto LAB_140d7fd94;
              }
              goto LAB_140d7f6eb;
            }
            if (acStack_68[3] != '\x02') goto LAB_140d7f6eb;
            if (local_61 != '\x02') {
LAB_140d7f72f:
              if (local_63 == '\x02') {
                local_88 = 0x1ca;
                goto LAB_140d7fd94;
              }
              goto LAB_140d7f73d;
            }
            if (local_63 == '\x02') {
              local_88 = 0x1c6;
              goto LAB_140d7fd94;
            }
          }
          local_88 = 0x1c9;
          goto LAB_140d7fd94;
        }
        if (acStack_68[1] == '\x01') {
          if (acStack_68[3] == '\x02') {
            if (local_61 == '\0') {
              if (local_63 != '\x02') {
                local_88 = 0x1c3;
                goto LAB_140d7fd94;
              }
              goto LAB_140d7f79a;
            }
            goto LAB_140d7f6eb;
          }
          if (local_61 != '\0') goto LAB_140d7f6eb;
          if (local_63 == '\x02') {
            local_88 = 0x1c5;
            goto LAB_140d7fd94;
          }
        }
        else {
LAB_140d7f6eb:
          if ((local_61 == '\x02') && ((acStack_68[3] == '\x02' && (local_63 == '\x02')))) {
            local_88 = 0x1c7;
            goto LAB_140d7fd94;
          }
          if (acStack_68[1] == '\x02') {
            if (local_61 == '\x02') goto LAB_140d7f70d;
            if (acStack_68[3] == '\x02') goto LAB_140d7f72f;
          }
LAB_140d7f73d:
          if (local_61 == '\x02') {
LAB_140d7f742:
            if (local_63 == '\x02') {
              local_88 = 0x1cb;
              goto LAB_140d7fd94;
            }
            if (acStack_68[3] == '\x02') {
              local_88 = 0x1cc;
              goto LAB_140d7fd94;
            }
          }
          if (acStack_68[1] == '\x02') {
            if (acStack_68[3] == '\x02') {
              local_88 = 0x1cd;
              goto LAB_140d7fd94;
            }
            if (local_63 == '\x02') {
              local_88 = 0x1ce;
              goto LAB_140d7fd94;
            }
            if (local_61 == '\x02') {
              local_88 = 0x1d0;
              goto LAB_140d7fd94;
            }
          }
        }
        if ((acStack_68[3] != '\x02') || (local_63 != '\x02')) {
          local_88 = 0x53;
          goto LAB_140d7fd94;
        }
      }
LAB_140d7f79a:
      local_88 = 0x1cf;
      goto LAB_140d7fd94;
    }
    if (acStack_68[1] == '\0') {
      if (((acStack_68[3] != '\x02') && (local_61 == '\x01')) && (local_63 == '\x02')) {
        local_88 = 0x109;
        goto LAB_140d7fd94;
      }
LAB_140d7f402:
      if (acStack_68[3] == '\0') {
        if ((local_61 == '\x02') && (local_63 == '\x01')) {
          local_88 = 0x10a;
          goto LAB_140d7fd94;
        }
      }
      else if (((acStack_68[3] == '\x01') && (local_61 == '\x02')) && (local_63 == '\0')) {
        local_88 = 0x10b;
        goto LAB_140d7fd94;
      }
    }
    else if (acStack_68[1] != '\x02') goto LAB_140d7f402;
    if (acStack_68[1] == '\0') {
      if ((acStack_68[3] != '\x02') || (local_61 != '\x01')) goto LAB_140d7f4e9;
      if (local_63 != '\x02') {
        local_88 = 0x10c;
        goto LAB_140d7fd94;
      }
    }
    else {
      if (acStack_68[1] == '\x02') {
        if (acStack_68[3] == '\x01') {
          if (local_61 != '\x02') {
            if (local_63 == '\0') {
              local_88 = 0x10d;
              goto LAB_140d7fd94;
            }
            goto LAB_140d7f4e9;
          }
LAB_140d7f50b:
          if (local_63 == '\x02') {
            local_88 = 0x113;
            goto LAB_140d7fd94;
          }
          if (acStack_68[3] != '\x02') goto LAB_140d7f540;
        }
        else {
          if (acStack_68[3] == '\0') {
            if (local_61 == '\x02') goto LAB_140d7f50b;
            if (local_63 == '\x01') {
              local_88 = 0x10f;
              goto LAB_140d7fd94;
            }
            goto LAB_140d7f4e9;
          }
          if (acStack_68[3] != '\x02') goto LAB_140d7f4e9;
          if (local_61 != '\x02') {
LAB_140d7f52d:
            if (local_63 == '\x02') {
              local_88 = 0x115;
              goto LAB_140d7fd94;
            }
            goto LAB_140d7f53b;
          }
          if (local_63 == '\x02') {
            local_88 = 0x111;
            goto LAB_140d7fd94;
          }
        }
        local_88 = 0x114;
        goto LAB_140d7fd94;
      }
      if (acStack_68[1] == '\x01') {
        if (acStack_68[3] == '\x02') {
          if (local_61 == '\0') {
            if (local_63 != '\x02') {
              local_88 = 0x10e;
              goto LAB_140d7fd94;
            }
            goto LAB_140d7f598;
          }
          goto LAB_140d7f4e9;
        }
        if (local_61 != '\0') goto LAB_140d7f4e9;
        if (local_63 == '\x02') {
          local_88 = 0x110;
          goto LAB_140d7fd94;
        }
      }
      else {
LAB_140d7f4e9:
        if ((local_61 == '\x02') && ((acStack_68[3] == '\x02' && (local_63 == '\x02')))) {
          local_88 = 0x112;
          goto LAB_140d7fd94;
        }
        if (acStack_68[1] == '\x02') {
          if (local_61 == '\x02') goto LAB_140d7f50b;
          if (acStack_68[3] == '\x02') goto LAB_140d7f52d;
        }
LAB_140d7f53b:
        if (local_61 == '\x02') {
LAB_140d7f540:
          if (local_63 == '\x02') {
            local_88 = 0x116;
            goto LAB_140d7fd94;
          }
          if (acStack_68[3] == '\x02') {
            local_88 = 0x117;
            goto LAB_140d7fd94;
          }
        }
        if (acStack_68[1] == '\x02') {
          if (acStack_68[3] == '\x02') {
            local_88 = 0x118;
            goto LAB_140d7fd94;
          }
          if (local_63 == '\x02') {
            local_88 = 0x119;
            goto LAB_140d7fd94;
          }
          if (local_61 == '\x02') {
            local_88 = 0x11b;
            goto LAB_140d7fd94;
          }
        }
      }
      if ((acStack_68[3] != '\x02') || (local_63 != '\x02')) {
        local_88 = 0x50;
        goto LAB_140d7fd94;
      }
    }
LAB_140d7f598:
    local_88 = 0x11a;
    goto LAB_140d7fd94;
  }
  if (acStack_68[1] == '\0') {
    if (((acStack_68[3] != '\x02') && (local_61 == '\x01')) && (local_63 == '\x02')) {
      local_88 = 0x12f;
      goto LAB_140d7fd94;
    }
LAB_140d7f200:
    if (acStack_68[3] == '\0') {
      if ((local_61 == '\x02') && (local_63 == '\x01')) {
        local_88 = 0x130;
        goto LAB_140d7fd94;
      }
    }
    else if (((acStack_68[3] == '\x01') && (local_61 == '\x02')) && (local_63 == '\0')) {
      local_88 = 0x131;
      goto LAB_140d7fd94;
    }
  }
  else if (acStack_68[1] != '\x02') goto LAB_140d7f200;
  if (acStack_68[1] == '\0') {
    if ((acStack_68[3] != '\x02') || (local_61 != '\x01')) goto LAB_140d7f2e7;
    if (local_63 != '\x02') {
      local_88 = 0x132;
      goto LAB_140d7fd94;
    }
  }
  else {
    if (acStack_68[1] == '\x02') {
      if (acStack_68[3] == '\x01') {
        if (local_61 != '\x02') {
          if (local_63 == '\0') {
            local_88 = 0x133;
            goto LAB_140d7fd94;
          }
          goto LAB_140d7f2e7;
        }
LAB_140d7f309:
        if (local_63 == '\x02') {
          local_88 = 0x139;
          goto LAB_140d7fd94;
        }
        if (acStack_68[3] != '\x02') goto LAB_140d7f33e;
      }
      else {
        if (acStack_68[3] == '\0') {
          if (local_61 == '\x02') goto LAB_140d7f309;
          if (local_63 == '\x01') {
            local_88 = 0x135;
            goto LAB_140d7fd94;
          }
          goto LAB_140d7f2e7;
        }
        if (acStack_68[3] != '\x02') goto LAB_140d7f2e7;
        if (local_61 != '\x02') {
LAB_140d7f32b:
          if (local_63 == '\x02') {
            local_88 = 0x13b;
            goto LAB_140d7fd94;
          }
          goto LAB_140d7f339;
        }
        if (local_63 == '\x02') {
          local_88 = 0x137;
          goto LAB_140d7fd94;
        }
      }
      local_88 = 0x13a;
      goto LAB_140d7fd94;
    }
    if (acStack_68[1] == '\x01') {
      if (acStack_68[3] == '\x02') {
        if (local_61 == '\0') {
          if (local_63 != '\x02') {
            local_88 = 0x134;
            goto LAB_140d7fd94;
          }
          goto LAB_140d7f396;
        }
        goto LAB_140d7f2e7;
      }
      if (local_61 != '\0') goto LAB_140d7f2e7;
      if (local_63 == '\x02') {
        local_88 = 0x136;
        goto LAB_140d7fd94;
      }
    }
    else {
LAB_140d7f2e7:
      if ((local_61 == '\x02') && ((acStack_68[3] == '\x02' && (local_63 == '\x02')))) {
        local_88 = 0x138;
        goto LAB_140d7fd94;
      }
      if (acStack_68[1] == '\x02') {
        if (local_61 == '\x02') goto LAB_140d7f309;
        if (acStack_68[3] == '\x02') goto LAB_140d7f32b;
      }
LAB_140d7f339:
      if (local_61 == '\x02') {
LAB_140d7f33e:
        if (local_63 == '\x02') {
          local_88 = 0x13c;
          goto LAB_140d7fd94;
        }
        if (acStack_68[3] == '\x02') {
          local_88 = 0x13d;
          goto LAB_140d7fd94;
        }
      }
      if (acStack_68[1] == '\x02') {
        if (acStack_68[3] == '\x02') {
          local_88 = 0x13e;
          goto LAB_140d7fd94;
        }
        if (local_63 == '\x02') {
          local_88 = 0x13f;
          goto LAB_140d7fd94;
        }
        if (local_61 == '\x02') {
          local_88 = 0x141;
          goto LAB_140d7fd94;
        }
      }
    }
    if ((acStack_68[3] != '\x02') || (local_63 != '\x02')) {
      local_88 = 0x4f;
      goto LAB_140d7fd94;
    }
  }
LAB_140d7f396:
  local_88 = 0x140;
LAB_140d7fd94:
  FUN_1400c5d30(param_1,param_2,param_3,param_4);
  return;
}

