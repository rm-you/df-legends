// FUN_1402b3410 @ 1402b3410
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 140dfb5c4 operator_new
//   -> 1402831a0 FUN_1402831a0
//   -> 1401069c0 FUN_1401069c0
//   -> 1402832f0 FUN_1402832f0
//   -> 140dfb5b4 free
//   -> 1402b29c0 FUN_1402b29c0
//   -> 140002020 FUN_140002020
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402b3410(ulonglong *param_1,longlong *param_2)

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
  void *local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_b0 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  local_88 = 0xf;
  local_90 = 0;
  local_a0 = 0;
  _Memory = (undefined8 *)0x0;
  local_c0 = 1;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_b8 = 8;
    do {
      if (&local_a0 != *(undefined1 **)(local_b8 + *param_2)) {
        FUN_14000c8b0(&local_a0,*(undefined1 **)(local_b8 + *param_2),0,0xffffffffffffffff);
      }
      iVar8 = 0;
      if (local_90 != 0) {
        do {
          puVar5 = &local_a0;
          if (0xf < local_88) {
            puVar5 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
          }
          if (puVar5[iVar8] == '[') {
            local_68 = 0xf;
            local_70 = 0;
            local_80 = 0;
            uVar11 = 0xf;
            if (local_90 != 0) {
              iVar8 = iVar8 + 1;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar8);
              if ((ulonglong)(longlong)iVar8 <= local_90) {
                puVar5 = &local_a0;
                if (0xf < local_88) {
                  puVar5 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
                }
                pcVar9 = puVar5 + local_90;
                uVar11 = local_68;
                for (pcVar7 = puVar5 + iVar8;
                    ((local_68 = uVar11, pcVar7 < pcVar9 && (*pcVar7 != ':')) && (*pcVar7 != ']'));
                    pcVar7 = pcVar7 + 1) {
                  FUN_140050540(&local_80,1);
                  iVar8 = iVar8 + 1;
                  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar8);
                  uVar11 = local_68;
                }
                if (local_70 != 0) {
                  iVar4 = FUN_14000c110(&local_80,"TISSUE_TEMPLATE");
                  if (iVar4 == 0) {
                    local_a8 = operator_new(0x140);
                    _Memory = (undefined8 *)FUN_1402831a0(local_a8);
                    _Memory[2] = 0;
                    puVar6 = _Memory;
                    if (0xf < (ulonglong)_Memory[3]) {
                      puVar6 = (undefined8 *)*_Memory;
                    }
                    *(undefined1 *)puVar6 = 0;
                    local_c8 = _Memory;
                    if (local_90 != 0) {
                      iVar8 = iVar8 + 1;
                      if ((ulonglong)(longlong)iVar8 <= local_90) {
                        puVar5 = &local_a0;
                        if (0xf < local_88) {
                          puVar5 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
                        }
                        puVar10 = &local_a0;
                        if (0xf < local_88) {
                          puVar10 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
                        }
                        pcVar9 = puVar10 + local_90;
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
                          goto LAB_1402b3777;
                        }
                      }
                    }
                    FUN_1402832f0(_Memory);
                    free(_Memory);
                    _Memory = (undefined8 *)0x0;
                  }
                  else if (_Memory != (undefined8 *)0x0) {
                    cVar3 = FUN_1402b29c0(_Memory,&local_80);
                    if (cVar3 != '\0') {
                      if (0xf < local_68) {
                        FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1);
                      }
                      iVar8 = (int)local_c8;
                      goto LAB_1402b3790;
                    }
                    FUN_14007b5f0(local_60,_Memory,&DAT_140e7aaf8);
                    FUN_14000c9f0(local_60,"Unrecognized Tissue Template Token: ");
                    FUN_14000cb40(local_60,&local_80);
                    FUN_14014a240(local_60);
                    if (0xf < local_48) {
                      FUN_140002020(local_60[0],local_48 + 1);
                    }
                    uVar11 = local_68;
                    iVar8 = (int)local_c8;
                  }
                }
              }
            }
LAB_1402b3777:
            if (0xf < uVar11) {
              FUN_140002020(CONCAT71(uStack_7f,local_80),uVar11 + 1);
            }
          }
LAB_1402b3790:
          iVar8 = iVar8 + 1;
        } while ((ulonglong)(longlong)iVar8 < local_90);
      }
      local_c0 = local_c0 + 1;
      local_b8 = local_b8 + 8;
    } while ((ulonglong)(longlong)local_c0 < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  if (0xf < local_88) {
    FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
  }
  return;
}

