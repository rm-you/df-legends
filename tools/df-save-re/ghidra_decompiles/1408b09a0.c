// FUN_1408b09a0 @ 1408b09a0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 140dfb5c4 operator_new
//   -> 1408b0420 FUN_1408b0420
//   -> 1401069c0 FUN_1401069c0
//   -> 14000bae0 FUN_14000bae0
//   -> 1405c7810 FUN_1405c7810
//   -> 140dfb5b4 free
//   -> 1408b3130 FUN_1408b3130
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408b09a0(ulonglong *param_1,longlong *param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *_Memory;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  char *pcVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined8 ***local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  int local_128 [2];
  undefined8 *local_120;
  int local_118;
  undefined8 **local_110;
  undefined8 **ppuStack_108;
  undefined8 **local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
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
  char local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_b0 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_168;
  local_88 = 0xf;
  local_90 = 0;
  local_a0 = 0;
  _Memory = (undefined8 *)0x0;
  local_110 = (undefined8 **)0x0;
  ppuStack_108 = (undefined8 **)0x0;
  local_100 = (undefined8 **)0x0;
  local_e0 = 0;
  lStack_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  local_e8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_118 = 1;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    lVar12 = 8;
    do {
      if (&local_a0 != *(undefined1 **)(*param_2 + lVar12)) {
        FUN_14000c8b0(&local_a0,*(undefined1 **)(*param_2 + lVar12),0,0xffffffffffffffff);
      }
      local_128[0] = 0;
      if (local_90 != 0) {
        do {
          puVar6 = &local_a0;
          if (0xf < local_88) {
            puVar6 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
          }
          if (puVar6[local_128[0]] == '[') {
            local_68 = 0xf;
            local_70 = 0;
            local_80 = 0;
            uVar3 = 0xf;
            if (local_90 != 0) {
              local_128[0] = local_128[0] + 1;
              if ((ulonglong)(longlong)local_128[0] <= local_90) {
                puVar6 = &local_a0;
                if (0xf < local_88) {
                  puVar6 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
                }
                pcVar10 = puVar6 + local_90;
                uVar3 = local_68;
                for (pcVar8 = puVar6 + local_128[0];
                    ((local_68 = uVar3, pcVar8 < pcVar10 && (*pcVar8 != ':')) && (*pcVar8 != ']'));
                    pcVar8 = pcVar8 + 1) {
                  FUN_140050540(&local_80,1);
                  local_128[0] = local_128[0] + 1;
                  uVar3 = local_68;
                }
                if (local_70 != 0) {
                  iVar5 = FUN_14000c110(&local_80);
                  if (iVar5 == 0) {
                    ppuStack_108 = local_110;
                    lStack_d8 = local_e0;
                    lStack_f0 = local_f8;
                    local_a8 = operator_new(0x5e8);
                    _Memory = (undefined8 *)FUN_1408b0420(local_a8);
                    _Memory[2] = 0;
                    puVar7 = _Memory;
                    if (0xf < (ulonglong)_Memory[3]) {
                      puVar7 = (undefined8 *)*_Memory;
                    }
                    *(undefined1 *)puVar7 = 0;
                    local_120 = _Memory;
                    if (local_90 != 0) {
                      local_128[0] = local_128[0] + 1;
                      if ((ulonglong)(longlong)local_128[0] <= local_90) {
                        puVar6 = &local_a0;
                        if (0xf < local_88) {
                          puVar6 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
                        }
                        puVar11 = &local_a0;
                        if (0xf < local_88) {
                          puVar11 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
                        }
                        pcVar10 = puVar11 + local_90;
                        for (pcVar8 = puVar6 + local_128[0];
                            ((pcVar8 < pcVar10 && (*pcVar8 != ':')) && (*pcVar8 != ']'));
                            pcVar8 = pcVar8 + 1) {
                          FUN_140050540(_Memory,1);
                          local_128[0] = local_128[0] + 1;
                        }
                        if (_Memory[2] != 0) {
                          ppuVar1 = (undefined8 **)param_1[1];
                          if ((&local_120 < ppuVar1) &&
                             (ppuVar2 = (undefined8 **)*param_1, ppuVar2 <= &local_120)) {
                            if (ppuVar1 == (undefined8 **)param_1[2]) {
                              FUN_1401069c0(param_1);
                            }
                            if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                              *(undefined8 *)param_1[1] =
                                   *(undefined8 *)
                                    (*param_1 + ((longlong)&local_120 - (longlong)ppuVar2 >> 3) * 8)
                              ;
                            }
                          }
                          else {
                            if (ppuVar1 == (undefined8 **)param_1[2]) {
                              FUN_1401069c0(param_1);
                            }
                            if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                              *(undefined8 *)param_1[1] = _Memory;
                            }
                          }
                          param_1[1] = param_1[1] + 8;
                          puVar7 = _Memory + 0x9a;
                          local_120 = puVar7;
                          if ((&local_120 < ppuStack_108) && (local_110 <= &local_120)) {
                            lVar9 = (longlong)&local_120 - (longlong)local_110;
                            if (ppuStack_108 == local_100) {
                              FUN_1401069c0(&local_110);
                            }
                            if (ppuStack_108 != (undefined8 **)0x0) {
                              *ppuStack_108 = local_110[lVar9 >> 3];
                            }
                          }
                          else {
                            if (ppuStack_108 == local_100) {
                              FUN_1401069c0(&local_110);
                            }
                            if (ppuStack_108 != (undefined8 **)0x0) {
                              *ppuStack_108 = puVar7;
                            }
                          }
                          ppuStack_108 = ppuStack_108 + 1;
                          local_120 = (undefined8 *)0x0;
                          FUN_14000bae0(&local_e0,&local_120);
                          local_120 = (undefined8 *)0x0;
                          FUN_14000bae0(&local_f8);
                          uVar3 = local_68;
                          goto joined_r0x0001408b0e51;
                        }
                      }
                    }
                    FUN_1405c7810(_Memory);
                    free(_Memory);
                    _Memory = (undefined8 *)0x0;
                    uVar3 = local_68;
                  }
                  else if (_Memory != (undefined8 *)0x0) {
                    local_130 = &local_c8;
                    local_138 = &local_f8;
                    local_140 = &local_e0;
                    local_148 = &local_110;
                    cVar4 = FUN_1408b3130(_Memory,&local_80,local_128);
                    uVar3 = local_68;
                    if (cVar4 == '\0') {
                      local_48 = 0xf;
                      local_50 = 0;
                      local_60 = cVar4;
                      FUN_14000c8b0(&local_60,_Memory,0,0xffffffffffffffff);
                      FUN_14000c9f0(&local_60,"Unrecognized Material Template Token: ",0x26);
                      FUN_14000cb40(&local_60,&local_80,0);
                      FUN_14014a240(&local_60);
                      uVar3 = local_68;
                      if (0xf < local_48) {
                        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
                        uVar3 = local_68;
                      }
                    }
                  }
                }
              }
            }
joined_r0x0001408b0e51:
            if (0xf < uVar3) {
              FUN_140002020(CONCAT71(uStack_7f,local_80),uVar3 + 1,1);
            }
          }
          local_128[0] = local_128[0] + 1;
        } while ((ulonglong)(longlong)local_128[0] < local_90);
      }
      local_118 = local_118 + 1;
      lVar12 = lVar12 + 8;
    } while ((ulonglong)(longlong)local_118 < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  if (local_c8 != 0) {
    FUN_140002020(local_c8,local_b8 - local_c8 >> 3,8);
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
  }
  if (local_f8 != 0) {
    FUN_140002020(local_f8,local_e8 - local_f8 >> 3,8);
    local_f8 = 0;
    lStack_f0 = 0;
    local_e8 = 0;
  }
  if (local_e0 != 0) {
    FUN_140002020(local_e0,local_d0 - local_e0 >> 3,8);
    local_e0 = 0;
    lStack_d8 = 0;
    local_d0 = 0;
  }
  if (local_110 != (undefined8 **)0x0) {
    FUN_140002020(local_110,(longlong)local_100 - (longlong)local_110 >> 3,8);
    local_110 = (undefined8 **)0x0;
    ppuStack_108 = (undefined8 **)0x0;
    local_100 = (undefined8 **)0x0;
  }
  if (0xf < local_88) {
    FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
  }
  return;
}

