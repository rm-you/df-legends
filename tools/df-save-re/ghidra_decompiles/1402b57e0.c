// FUN_1402b57e0 @ 1402b57e0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 140dfb5c4 operator_new
//   -> 140283b50 FUN_140283b50
//   -> 1401069c0 FUN_1401069c0
//   -> 140283d50 FUN_140283d50
//   -> 140dfb5b4 free
//   -> 1402b4780 FUN_1402b4780
//   -> 140002020 FUN_140002020
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402b57e0(ulonglong *param_1,longlong *param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *_Memory;
  undefined8 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  ulonglong local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_b0 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  local_90 = 0xf;
  local_98 = 0;
  local_a8 = 0;
  _Memory = (undefined8 *)0x0;
  local_c0 = 1;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_b8 = 8;
    do {
      if (&local_a8 != *(undefined1 **)(local_b8 + *param_2)) {
        FUN_14000c8b0(&local_a8,*(undefined1 **)(local_b8 + *param_2),0,0xffffffffffffffff);
      }
      iVar8 = 0;
      if (local_98 != 0) {
        do {
          puVar5 = &local_a8;
          if (0xf < local_90) {
            puVar5 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
          }
          if (puVar5[iVar8] == '[') {
            local_70 = 0xf;
            local_78 = 0;
            local_88 = 0;
            uVar11 = 0xf;
            if (local_98 != 0) {
              iVar8 = iVar8 + 1;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar8);
              if ((ulonglong)(longlong)iVar8 <= local_98) {
                puVar5 = &local_a8;
                if (0xf < local_90) {
                  puVar5 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
                }
                pcVar9 = puVar5 + local_98;
                uVar11 = local_70;
                for (pcVar7 = puVar5 + iVar8;
                    ((local_70 = uVar11, pcVar7 < pcVar9 && (*pcVar7 != ':')) && (*pcVar7 != ']'));
                    pcVar7 = pcVar7 + 1) {
                  FUN_140050540(&local_88,1);
                  iVar8 = iVar8 + 1;
                  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar8);
                  uVar11 = local_70;
                }
                if (local_78 != 0) {
                  iVar4 = FUN_14000c110(&local_88,"BODY_DETAIL_PLAN");
                  if (iVar4 == 0) {
                    local_c8 = operator_new(0x278);
                    _Memory = (undefined8 *)FUN_140283b50(local_c8);
                    _Memory[2] = 0;
                    puVar6 = _Memory;
                    if (0xf < (ulonglong)_Memory[3]) {
                      puVar6 = (undefined8 *)*_Memory;
                    }
                    *(undefined1 *)puVar6 = 0;
                    local_c8 = _Memory;
                    if (local_98 != 0) {
                      iVar8 = iVar8 + 1;
                      if ((ulonglong)(longlong)iVar8 <= local_98) {
                        puVar5 = &local_a8;
                        if (0xf < local_90) {
                          puVar5 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
                        }
                        puVar10 = &local_a8;
                        if (0xf < local_90) {
                          puVar10 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
                        }
                        pcVar9 = puVar10 + local_98;
                        for (pcVar7 = puVar5 + iVar8;
                            ((pcVar7 < pcVar9 && (*pcVar7 != ':')) && (*pcVar7 != ']'));
                            pcVar7 = pcVar7 + 1) {
                          FUN_140050540(_Memory,1);
                          iVar8 = iVar8 + 1;
                        }
                        if (_Memory[2] != 0) {
                          ppuVar1 = (undefined8 **)param_1[1];
                          if ((&local_c8 < ppuVar1) &&
                             (ppuVar2 = (undefined8 **)*param_1, ppuVar2 <= &local_c8)) {
                            if (ppuVar1 == (undefined8 **)param_1[2]) {
                              FUN_1401069c0(param_1);
                            }
                            if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                              *(undefined8 *)param_1[1] =
                                   *(undefined8 *)
                                    (*param_1 + ((longlong)&local_c8 - (longlong)ppuVar2 >> 3) * 8);
                            }
                            param_1[1] = param_1[1] + 8;
                          }
                          else {
                            if (ppuVar1 == (undefined8 **)param_1[2]) {
                              FUN_1401069c0(param_1);
                            }
                            if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                              *(undefined8 *)param_1[1] = _Memory;
                            }
                            param_1[1] = param_1[1] + 8;
                          }
                          goto LAB_1402b5b47;
                        }
                      }
                    }
                    FUN_140283d50(_Memory);
                    free(_Memory);
                    _Memory = (undefined8 *)0x0;
                  }
                  else if (_Memory != (undefined8 *)0x0) {
                    cVar3 = FUN_1402b4780(_Memory,&local_88);
                    if (cVar3 != '\0') {
                      if (0xf < local_70) {
                        FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1);
                      }
                      iVar8 = (int)local_c8;
                      goto LAB_1402b5b60;
                    }
                    FUN_14007b5f0(local_68,_Memory,&DAT_140e7aaf8);
                    FUN_14000c9f0(local_68,"Unrecognized Body Detail Plan Token: ");
                    FUN_14000cb40(local_68,&local_88);
                    FUN_14014a240(local_68);
                    if (0xf < local_50) {
                      FUN_140002020(local_68[0],local_50 + 1);
                    }
                    uVar11 = local_70;
                    iVar8 = (int)local_c8;
                  }
                }
              }
            }
LAB_1402b5b47:
            if (0xf < uVar11) {
              FUN_140002020(CONCAT71(uStack_87,local_88),uVar11 + 1);
            }
          }
LAB_1402b5b60:
          iVar8 = iVar8 + 1;
        } while ((ulonglong)(longlong)iVar8 < local_98);
      }
      local_c0 = local_c0 + 1;
      local_b8 = local_b8 + 8;
    } while ((ulonglong)(longlong)local_c0 < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  if (0xf < local_90) {
    FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
  }
  return;
}

