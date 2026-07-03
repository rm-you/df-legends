// FUN_1402b3b00 @ 1402b3b00
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14014a920 FUN_14014a920
//   -> 140051b70 FUN_140051b70
//   -> 14000bc60 FUN_14000bc60
//   -> 140002020 FUN_140002020
//   -> 14014aad0 FUN_14014aad0
//   -> EXTERNAL:00000115 atoi
//   -> 140dfb5c4 operator_new
//   -> 140050410 FUN_140050410
//   -> 14000c9e0 FUN_14000c9e0
//   -> 14004ffe0 FUN_14004ffe0
//   -> 14000c260 FUN_14000c260
//   -> 14000d730 FUN_14000d730
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14000c230 FUN_14000c230
//   -> 14000c390 FUN_14000c390
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1402b3b00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 **ppuVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0;
  char local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong local_90;
  char local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_b0 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_d8;
  iVar5 = FUN_14000c110(param_2,"CV_NEW_TAG");
  if ((iVar5 == 0) || (iVar5 = FUN_14000c110(param_2,"CV_ADD_TAG"), iVar5 == 0)) {
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = '\0';
    cVar4 = FUN_14014a920(&local_a8,param_4,param_3);
    if (cVar4 != '\0') {
      FUN_140051b70(param_1 + 0x38,&local_a8);
      local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,0xffffffff);
      if ((&local_b8 < *(undefined8 ***)(param_1 + 0x58)) &&
         (ppuVar3 = *(undefined8 ***)(param_1 + 0x50), ppuVar3 <= &local_b8)) {
        if (*(longlong *)(param_1 + 0x58) == *(longlong *)(param_1 + 0x60)) {
          FUN_14000c390(param_1 + 0x50,1);
        }
        if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x58) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x50) + ((longlong)&local_b8 - (longlong)ppuVar3 >> 2) * 4)
          ;
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x58) == *(longlong *)(param_1 + 0x60)) {
          FUN_14000c390(param_1 + 0x50,1);
        }
        if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x58) = 0xffffffff;
        }
      }
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 4;
      local_70 = 0xf;
      local_78 = 0;
      local_88 = '\0';
      FUN_140051b70(param_1 + 0x68,&local_88);
      if (0xf < local_70) {
        FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
      }
    }
  }
  else {
    iVar5 = FUN_14000c110(param_2,"CV_REMOVE_TAG");
    if (iVar5 != 0) {
      iVar5 = FUN_14000c110(param_2,"CV_NEW_CTAG");
      if ((iVar5 == 0) || (iVar5 = FUN_14000c110(param_2,"CV_ADD_CTAG"), iVar5 == 0)) {
        local_70 = 0xf;
        local_78 = 0;
        local_88 = '\0';
        local_90 = 0xf;
        local_98 = 0;
        local_a8 = '\0';
        cVar4 = FUN_14014aad0(&local_88,param_4,param_3,0x3a);
        uVar9 = 0xf;
        if ((cVar4 != '\0') &&
           (cVar4 = FUN_14014aad0(&local_a8,param_4,param_3,0x3a), uVar9 = local_90, cVar4 != '\0'))
        {
          local_50 = 0xf;
          local_58 = 0;
          local_68 = 0;
          cVar4 = FUN_14014a920(&local_68,param_4,param_3);
          if (cVar4 != '\0') {
            FUN_140051b70(param_1 + 0x38,&local_68);
            pcVar7 = &local_88;
            if (0xf < local_70) {
              pcVar7 = (char *)CONCAT71(uStack_87,local_88);
            }
            iVar5 = atoi(pcVar7);
            local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,iVar5 + -1);
            FUN_14000bc60(param_1 + 0x50,&local_b8);
            FUN_140051b70(param_1 + 0x68,&local_a8);
          }
          if (0xf < local_50) {
            FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
          }
          local_50 = 0xf;
          local_58 = 0;
          local_68 = 0;
          uVar9 = local_90;
        }
        if (0xf < uVar9) {
          FUN_140002020(CONCAT71(uStack_a7,local_a8),uVar9 + 1,1);
        }
      }
      else {
        iVar5 = FUN_14000c110(param_2,"CV_REMOVE_CTAG");
        if (iVar5 != 0) {
          iVar5 = FUN_14000c110(param_2,"CV_CONVERT_TAG");
          if (iVar5 == 0) {
            local_b8 = operator_new(0x88);
            local_b8[3] = 0xf;
            local_b8[2] = 0;
            *(undefined1 *)local_b8 = 0;
            local_b8[7] = 0xf;
            local_b8[6] = 0;
            *(undefined1 *)(local_b8 + 4) = 0;
            local_b8[0xb] = 0xf;
            local_b8[10] = 0;
            *(undefined1 *)(local_b8 + 8) = 0;
            local_b8[0x10] = 0xf;
            local_b8[0xf] = 0;
            *(undefined1 *)(local_b8 + 0xd) = 0;
            *(undefined4 *)(local_b8 + 0xc) = 0xffffffff;
            *param_5 = (longlong)local_b8;
            plVar1 = *(longlong **)(param_1 + 0x28);
            if ((param_5 < plVar1) && (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 <= param_5))
            {
              if (plVar1 == *(longlong **)(param_1 + 0x30)) {
                FUN_140050410(param_1 + 0x20);
              }
              if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
                **(undefined8 **)(param_1 + 0x28) =
                     *(undefined8 *)
                      (*(longlong *)(param_1 + 0x20) +
                      ((longlong)param_5 - (longlong)plVar2 >> 3) * 8);
              }
            }
            else {
              if (plVar1 == *(longlong **)(param_1 + 0x30)) {
                FUN_140050410(param_1 + 0x20);
              }
              if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                **(longlong **)(param_1 + 0x28) = *param_5;
              }
            }
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
            return 1;
          }
          iVar5 = FUN_14000c110(param_2,"CV_CONVERT_CTAG");
          if (iVar5 == 0) {
            local_90 = 0xf;
            local_98 = 0;
            local_a8 = '\0';
            local_70 = 0xf;
            local_78 = 0;
            local_88 = '\0';
            cVar4 = FUN_14014aad0(&local_a8,param_4,param_3,0x3a);
            if ((cVar4 != '\0') &&
               (cVar4 = FUN_14014aad0(&local_88,param_4,param_3,0x3a), cVar4 != '\0')) {
              local_b8 = operator_new(0x88);
              local_b8[3] = 0xf;
              local_b8[2] = 0;
              puVar6 = local_b8;
              if (0xf < (ulonglong)local_b8[3]) {
                puVar6 = (undefined8 *)*local_b8;
              }
              *(undefined1 *)puVar6 = 0;
              puVar6 = local_b8 + 4;
              local_b8[7] = 0xf;
              local_b8[6] = 0;
              if (0xf < (ulonglong)local_b8[7]) {
                puVar6 = (undefined8 *)*puVar6;
              }
              *(undefined1 *)puVar6 = 0;
              puVar6 = local_b8 + 8;
              local_b8[0xb] = 0xf;
              local_b8[10] = 0;
              if (0xf < (ulonglong)local_b8[0xb]) {
                puVar6 = (undefined8 *)*puVar6;
              }
              *(undefined1 *)puVar6 = 0;
              puVar6 = local_b8 + 0xd;
              local_b8[0x10] = 0xf;
              local_b8[0xf] = 0;
              if (0xf < (ulonglong)local_b8[0x10]) {
                puVar6 = (undefined8 *)*puVar6;
              }
              *(undefined1 *)puVar6 = 0;
              *(undefined4 *)(local_b8 + 0xc) = 0xffffffff;
              *param_5 = (longlong)local_b8;
              pcVar7 = &local_a8;
              if (0xf < local_90) {
                pcVar7 = (char *)CONCAT71(uStack_a7,local_a8);
              }
              iVar5 = atoi(pcVar7);
              *(int *)(*param_5 + 0x60) = iVar5 + -1;
              if ((char *)(*param_5 + 0x68) != &local_88) {
                FUN_14000c9e0((char *)(*param_5 + 0x68),&local_88);
              }
              FUN_14004ffe0(param_1 + 0x20,param_5);
            }
            FUN_14000c260(&local_88);
            FUN_14000c260(&local_a8);
            return 1;
          }
          cVar4 = FUN_14000d730(param_2,"CVCT_MASTER");
          if (cVar4 != '\0') {
            if (*param_5 == 0) {
              return 1;
            }
            FUN_14000c2b0(&local_a8);
            cVar4 = FUN_14014a920(&local_a8,param_4,param_3);
            if (cVar4 != '\0') {
              FUN_14000c230(*param_5,&local_a8);
            }
            FUN_14000c260(&local_a8);
            return 1;
          }
          cVar4 = FUN_14000d730(param_2,"CVCT_TARGET");
          if (cVar4 != '\0') {
            if (*param_5 == 0) {
              return 1;
            }
            FUN_14000c2b0(&local_a8);
            cVar4 = FUN_14014a920(&local_a8,param_4,param_3);
            if (cVar4 != '\0') {
              FUN_14000c230(*param_5 + 0x20,&local_a8);
            }
            FUN_14000c260(&local_a8);
            return 1;
          }
          cVar4 = FUN_14000d730(param_2,"CVCT_REPLACEMENT");
          if (cVar4 == '\0') {
            return 0;
          }
          if (*param_5 == 0) {
            return 1;
          }
          FUN_14000c2b0(&local_a8);
          cVar4 = FUN_14014a920(&local_a8,param_4,param_3);
          if (cVar4 != '\0') {
            FUN_14000c230(*param_5 + 0x40,&local_a8);
          }
          FUN_14000c260(&local_a8);
          return 1;
        }
        local_70 = 0xf;
        local_78 = 0;
        local_88 = '\0';
        local_90 = 0xf;
        local_98 = 0;
        local_a8 = '\0';
        cVar4 = FUN_14014aad0(&local_88,param_4,param_3,0x3a);
        uVar9 = 0xf;
        if ((cVar4 != '\0') &&
           (cVar4 = FUN_14014aad0(&local_a8,param_4,param_3,0x3a), uVar9 = local_90, cVar4 != '\0'))
        {
          local_50 = 0xf;
          local_58 = 0;
          local_68 = 0;
          cVar4 = FUN_14014a920(&local_68,param_4,param_3);
          if (cVar4 != '\0') {
            FUN_140051b70(param_1 + 0x80,&local_68);
            pcVar7 = &local_88;
            if (0xf < local_70) {
              pcVar7 = (char *)CONCAT71(uStack_87,local_88);
            }
            iVar5 = atoi(pcVar7);
            local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,iVar5 + -1);
            FUN_14000bc60(param_1 + 0x98,&local_b8);
            FUN_140051b70(param_1 + 0xb0,&local_a8);
          }
          if (0xf < local_50) {
            FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
          }
          local_50 = 0xf;
          local_58 = 0;
          local_68 = 0;
          uVar9 = local_90;
        }
        if (0xf < uVar9) {
          FUN_140002020(CONCAT71(uStack_a7,local_a8),uVar9 + 1,1);
        }
      }
      if (local_70 < 0x10) {
        return 1;
      }
      uVar8 = CONCAT71(uStack_87,local_88);
      uVar9 = local_70;
      goto LAB_1402b4280;
    }
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = '\0';
    cVar4 = FUN_14014a920(&local_a8,param_4,param_3);
    if (cVar4 != '\0') {
      FUN_140051b70(param_1 + 0x80,&local_a8);
      local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,0xffffffff);
      FUN_14000bc60(param_1 + 0x98,&local_b8);
      local_70 = 0xf;
      local_78 = 0;
      local_88 = '\0';
      FUN_140051b70(param_1 + 0xb0,&local_88);
      if (0xf < local_70) {
        FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
      }
    }
  }
  if (local_90 < 0x10) {
    return 1;
  }
  uVar8 = CONCAT71(uStack_a7,local_a8);
  uVar9 = local_90;
LAB_1402b4280:
  FUN_140002020(uVar8,uVar9 + 1,1);
  return 1;
}

