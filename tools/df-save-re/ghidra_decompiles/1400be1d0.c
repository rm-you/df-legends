// FUN_1400be1d0 @ 1400be1d0
// callees:
//   -> 1400be0f0 FUN_1400be0f0
//   -> EXTERNAL:000000ab unshift
//   -> EXTERNAL:0000010b fwrite
//   -> 14000cfe0 FUN_14000cfe0
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1400be1d0(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  char *pcVar4;
  size_t _Count;
  char *pcVar5;
  undefined1 auStackY_88 [32];
  char *local_58;
  undefined8 local_50;
  char local_48;
  undefined7 uStack_47;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_50 = 0xfffffffffffffffe;
  local_28 = DAT_1410b5008 ^ (ulonglong)auStackY_88;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) == '\0')) {
    uVar2 = CONCAT71((int7)(local_28 >> 8),1);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if ((int)uVar2 == -1) {
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      local_30 = 0xf;
      local_38 = 0;
      local_48 = '\0';
      FUN_1400be0f0(&local_48,8,0);
LAB_1400be251:
      pcVar4 = &local_48;
      if (0xf < local_30) {
        pcVar4 = (char *)CONCAT71(uStack_47,local_48);
      }
      pcVar5 = &local_48;
      if (0xf < local_30) {
        pcVar5 = (char *)CONCAT71(uStack_47,local_48);
      }
      iVar1 = std::codecvt<char,char,_Mbstatet>::unshift
                        ((codecvt<char,char,_Mbstatet> *)param_1[0xd],
                         (_Mbstatet *)((longlong)param_1 + 0x74),pcVar5,pcVar4 + local_38,&local_58)
      ;
      if (iVar1 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 0;
LAB_1400be298:
        pcVar4 = &local_48;
        if (0xf < local_30) {
          pcVar4 = (char *)CONCAT71(uStack_47,local_48);
        }
        _Count = (longlong)local_58 - (longlong)pcVar4;
        if (_Count != 0) {
          pcVar4 = &local_48;
          if (0xf < local_30) {
            pcVar4 = (char *)CONCAT71(uStack_47,local_48);
          }
          sVar3 = fwrite(pcVar4,1,_Count,(FILE *)param_1[0x10]);
          if (_Count != sVar3) goto LAB_1400be38c;
        }
        if (*(char *)((longlong)param_1 + 0x71) == '\0') goto LAB_1400be3ac;
        if (_Count == 0) {
          if (-local_38 - 1 < 9) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("string too long");
          }
          uVar2 = local_38 + 8;
          if (uVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("string too long");
          }
          if (local_30 < uVar2) {
            FUN_14000cfe0(&local_48,uVar2);
            if (uVar2 == 0) goto LAB_1400be251;
          }
          else if (uVar2 == 0) {
            local_38 = 0;
            pcVar4 = &local_48;
            if (0xf < local_30) {
              pcVar4 = (char *)CONCAT71(uStack_47,local_48);
            }
            *pcVar4 = '\0';
            goto LAB_1400be251;
          }
          pcVar4 = &local_48;
          if (0xf < local_30) {
            pcVar4 = (char *)CONCAT71(uStack_47,local_48);
          }
          pcVar4 = pcVar4 + local_38;
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4[4] = '\0';
          pcVar4[5] = '\0';
          pcVar4[6] = '\0';
          pcVar4[7] = '\0';
          pcVar4 = &local_48;
          if (0xf < local_30) {
            pcVar4 = (char *)CONCAT71(uStack_47,local_48);
          }
          local_38 = uVar2;
          pcVar4[uVar2] = '\0';
        }
        goto LAB_1400be251;
      }
      if (iVar1 == 1) goto LAB_1400be298;
      if (iVar1 != 3) {
LAB_1400be38c:
        uVar2 = 0;
        goto LAB_1400be3ae;
      }
LAB_1400be3ac:
      uVar2 = 1;
LAB_1400be3ae:
      if (0xf < local_30) {
        FUN_140002020(CONCAT71(uStack_47,local_48),local_30 + 1,1);
      }
    }
  }
  return uVar2;
}

