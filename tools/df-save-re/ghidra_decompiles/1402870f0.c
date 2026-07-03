// FUN_1402870f0 @ 1402870f0
// callees:
//   -> 140071310 FUN_140071310
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c780 FUN_14000c780
//   -> 14014a650 FUN_14014a650
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140071430 FUN_140071430
//   -> 14014d540 FUN_14014d540
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1402802d0 FUN_1402802d0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402870f0(longlong param_1,longlong *param_2,int *param_3,longlong *param_4)

{
  void *_Src;
  undefined8 *_Memory;
  bool bVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  int local_110;
  longlong *local_108;
  int *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_f8 = 0xfffffffffffffffe;
  local_50 = DAT_1410b5008 ^ (ulonglong)auStack_148;
  local_110 = (int)(param_2[1] - *param_2 >> 3) + -1;
  local_118 = param_1;
  local_108 = param_2;
  local_100 = param_3;
  if (-1 < local_110) {
    lVar13 = (longlong)local_110 * 8;
    lVar11 = (longlong)local_110 * 8;
    do {
      lVar10 = local_118;
      iVar4 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3) + -1;
      lVar12 = (longlong)iVar4;
      if (-1 < iVar4) {
        do {
          lVar9 = *(longlong *)(lVar10 + 0x98);
          if (((*(int *)(lVar9 + lVar12 * 4) < 0) ||
              ((ulonglong)(param_4[1] - *param_4 >> 3) <=
               (ulonglong)(longlong)*(int *)(lVar9 + lVar12 * 4))) ||
             (iVar4 = FUN_140071310(*(undefined8 *)
                                     (*param_4 + (longlong)*(int *)(lVar9 + lVar12 * 4) * 8),
                                    *(undefined8 *)(*(longlong *)(lVar10 + 0xb0) + lVar12 * 8)),
             iVar4 == 0)) {
            FUN_14007b5f0(&local_b0,*(undefined8 *)(*(longlong *)(lVar10 + 0x80) + lVar12 * 8),
                          &DAT_140e7aaf8);
            FUN_14007b5f0(&local_d0,*(undefined8 *)(*(longlong *)(lVar10 + 0x80) + lVar12 * 8),
                          &DAT_140e7aafc);
            iVar4 = (int)(param_4[1] - *param_4 >> 3);
            lVar9 = (longlong)(iVar4 + -1);
            if (-1 < iVar4 + -1) {
              do {
                local_d8 = 0xf;
                local_e0 = 0;
                local_f0 = 0;
                FUN_14000c780(&local_f0,&DAT_140ea7bf4,4);
                local_78 = 0xf;
                local_80 = 0;
                local_90 = 0;
                FUN_14014a650(iVar4,&local_90);
                FUN_14000cb40(&local_f0,&local_90,0,0xffffffffffffffff);
                if (0xf < local_78) {
                  FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
                }
                while( true ) {
                  puVar8 = &local_f0;
                  if (0xf < local_d8) {
                    puVar8 = (undefined1 *)CONCAT71(uStack_ef,local_f0);
                  }
                  lVar6 = FUN_140071430(&local_b0,puVar8,0,local_e0);
                  if (lVar6 == -1) break;
                  local_120 = 0xffffffffffffffff;
                  local_128 = 0;
                  FUN_14014d540(&local_b0,lVar6,local_e0,*(undefined8 *)(*param_4 + lVar9 * 8));
                }
                while( true ) {
                  puVar8 = &local_f0;
                  if (0xf < local_d8) {
                    puVar8 = (undefined1 *)CONCAT71(uStack_ef,local_f0);
                  }
                  lVar6 = FUN_140071430(&local_d0,puVar8,0);
                  if (lVar6 == -1) break;
                  local_120 = 0xffffffffffffffff;
                  local_128 = 0;
                  FUN_14014d540(&local_d0,lVar6,local_e0,*(undefined8 *)(*param_4 + lVar9 * 8));
                }
                if (0xf < local_d8) {
                  FUN_140002020(CONCAT71(uStack_ef,local_f0),local_d8 + 1,1);
                }
                iVar4 = iVar4 + -1;
                lVar9 = lVar9 + -1;
                param_2 = local_108;
              } while (-1 < lVar9);
            }
            puVar8 = &local_b0;
            if (0xf < local_98) {
              puVar8 = (undefined1 *)CONCAT71(uStack_af,local_b0);
            }
            lVar9 = FUN_140071430(*(undefined8 *)(lVar13 + *param_2),puVar8,0);
            if (lVar9 == 1) {
LAB_1402873e9:
              _Memory = *(undefined8 **)(lVar13 + *param_2);
              if (_Memory != (undefined8 *)0x0) {
                if (0xf < (ulonglong)_Memory[3]) {
                  FUN_140002020(*_Memory,_Memory[3] + 1,1);
                }
                _Memory[3] = 0xf;
                _Memory[2] = 0;
                puVar7 = _Memory;
                if (0xf < (ulonglong)_Memory[3]) {
                  puVar7 = (undefined8 *)*_Memory;
                }
                *(undefined1 *)puVar7 = 0;
                free(_Memory);
              }
              _Src = (void *)(*param_2 + lVar11 + 8);
              memmove((void *)(*param_2 + lVar11),_Src,param_2[1] - (longlong)_Src);
              param_2[1] = param_2[1] + -8;
            }
            else {
              puVar8 = &local_d0;
              if (0xf < local_b8) {
                puVar8 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
              }
              lVar9 = FUN_140071430(*(undefined8 *)(lVar13 + *param_2),puVar8,0);
              if (lVar9 == 1) goto LAB_1402873e9;
            }
            if (0xf < local_b8) {
              FUN_140002020(CONCAT71(uStack_cf,local_d0),local_b8 + 1,1);
            }
            local_b8 = 0xf;
            local_c0 = 0;
            local_d0 = 0;
            if (0xf < local_98) {
              FUN_140002020(CONCAT71(uStack_af,local_b0),local_98 + 1,1);
            }
          }
          lVar12 = lVar12 + -1;
          param_1 = local_118;
        } while (-1 < lVar12);
      }
      local_110 = local_110 + -1;
      lVar11 = lVar11 + -8;
      lVar13 = lVar13 + -8;
    } while (-1 < local_110);
  }
  local_58 = 0xf;
  local_60 = 0;
  local_70 = 0;
  FUN_14000c780(&local_70,"<SWAP>",6);
  iVar4 = (int)(param_2[1] - *param_2 >> 3) + -1;
  lVar13 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      iVar4 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
      lVar11 = (longlong)iVar4;
      if (-1 < iVar4) {
        do {
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar11 * 8);
          iVar4 = *(int *)(lVar10 + 0x60);
          if (((iVar4 < 0) ||
              ((ulonglong)(param_4[1] - *param_4 >> 3) <= (ulonglong)(longlong)iVar4)) ||
             (iVar4 = FUN_140071310(*(undefined8 *)(*param_4 + (longlong)iVar4 * 8),lVar10 + 0x68),
             iVar4 == 0)) {
            bVar1 = false;
            if (*(longlong *)(lVar10 + 0x10) == 0) {
              bVar1 = true;
            }
            else {
              FUN_14007b5f0(&local_b0,lVar10,&DAT_140e7aaf8);
              FUN_14007b5f0(&local_d0,lVar10,&DAT_140e7aafc);
              iVar4 = (int)(param_4[1] - *param_4 >> 3);
              lVar12 = (longlong)(iVar4 + -1);
              if (-1 < iVar4 + -1) {
                do {
                  local_d8 = 0xf;
                  local_e0 = 0;
                  local_f0 = 0;
                  FUN_14000c780(&local_f0,&DAT_140ea7bf4,4);
                  local_78 = 0xf;
                  local_80 = 0;
                  local_90 = 0;
                  FUN_14014a650(iVar4,&local_90);
                  FUN_14000cb40(&local_f0,&local_90,0,0xffffffffffffffff);
                  if (0xf < local_78) {
                    FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
                  }
                  while( true ) {
                    puVar8 = &local_f0;
                    if (0xf < local_d8) {
                      puVar8 = (undefined1 *)CONCAT71(uStack_ef,local_f0);
                    }
                    lVar9 = FUN_140071430(&local_b0,puVar8,0,local_e0);
                    if (lVar9 == -1) break;
                    local_120 = 0xffffffffffffffff;
                    local_128 = 0;
                    FUN_14014d540(&local_b0,lVar9,local_e0,*(undefined8 *)(*param_4 + lVar12 * 8));
                  }
                  while( true ) {
                    puVar8 = &local_f0;
                    if (0xf < local_d8) {
                      puVar8 = (undefined1 *)CONCAT71(uStack_ef,local_f0);
                    }
                    lVar9 = FUN_140071430(&local_d0,puVar8,0);
                    if (lVar9 == -1) break;
                    local_120 = 0xffffffffffffffff;
                    local_128 = 0;
                    FUN_14014d540(&local_d0,lVar9,local_e0,*(undefined8 *)(*param_4 + lVar12 * 8));
                  }
                  if (0xf < local_d8) {
                    FUN_140002020(CONCAT71(uStack_ef,local_f0),local_d8 + 1,1);
                  }
                  iVar4 = iVar4 + -1;
                  lVar12 = lVar12 + -1;
                  param_2 = local_108;
                } while (-1 < lVar12);
              }
              puVar8 = &local_b0;
              if (0xf < local_98) {
                puVar8 = (undefined1 *)CONCAT71(uStack_af,local_b0);
              }
              lVar12 = FUN_140071430(*(undefined8 *)(*param_2 + lVar13 * 8),puVar8,0);
              if (lVar12 == 1) {
LAB_14028777a:
                bVar1 = true;
              }
              else {
                puVar8 = &local_d0;
                if (0xf < local_b8) {
                  puVar8 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
                }
                lVar12 = FUN_140071430(*(undefined8 *)(*param_2 + lVar13 * 8),puVar8,0);
                if (lVar12 == 1) goto LAB_14028777a;
              }
              if (0xf < local_b8) {
                FUN_140002020(CONCAT71(uStack_cf,local_d0),local_b8 + 1,1);
              }
              local_b8 = 0xf;
              local_c0 = 0;
              local_d0 = 0;
              if (0xf < local_98) {
                FUN_140002020(CONCAT71(uStack_af,local_b0),local_98 + 1,1);
              }
            }
            if (bVar1) {
              local_b8 = 0xf;
              local_c0 = 0;
              local_d0 = 0;
              FUN_14000c8b0(&local_d0,lVar10 + 0x20,0,0xffffffffffffffff);
              local_98 = 0xf;
              local_a0 = 0;
              local_b0 = 0;
              FUN_14000c8b0(&local_b0,lVar10 + 0x40,0,0xffffffffffffffff);
              iVar4 = (int)(param_4[1] - *param_4 >> 3);
              lVar10 = (longlong)(iVar4 + -1);
              if (-1 < iVar4 + -1) {
                do {
                  local_d8 = 0xf;
                  local_e0 = 0;
                  local_f0 = 0;
                  FUN_14000c780(&local_f0,&DAT_140ea7bf4);
                  local_78 = 0xf;
                  local_80 = 0;
                  local_90 = 0;
                  FUN_14014a650(iVar4,&local_90);
                  FUN_14000cb40(&local_f0,&local_90,0,0xffffffffffffffff);
                  if (0xf < local_78) {
                    FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1);
                  }
                  while( true ) {
                    puVar8 = &local_f0;
                    if (0xf < local_d8) {
                      puVar8 = (undefined1 *)CONCAT71(uStack_ef,local_f0);
                    }
                    lVar12 = FUN_140071430(&local_d0,puVar8,0,local_e0);
                    if (lVar12 == -1) break;
                    local_120 = 0xffffffffffffffff;
                    local_128 = 0;
                    FUN_14014d540(&local_d0,lVar12,local_e0,*(undefined8 *)(*param_4 + lVar10 * 8));
                  }
                  while( true ) {
                    puVar8 = &local_f0;
                    if (0xf < local_d8) {
                      puVar8 = (undefined1 *)CONCAT71(uStack_ef,local_f0);
                    }
                    lVar12 = FUN_140071430(&local_b0,puVar8);
                    if (lVar12 == -1) break;
                    local_120 = 0xffffffffffffffff;
                    local_128 = 0;
                    FUN_14014d540(&local_b0,lVar12,local_e0,*(undefined8 *)(*param_4 + lVar10 * 8));
                  }
                  if (0xf < local_d8) {
                    FUN_140002020(CONCAT71(uStack_ef,local_f0),local_d8 + 1);
                  }
                  iVar4 = iVar4 + -1;
                  lVar10 = lVar10 + -1;
                  param_2 = local_108;
                } while (-1 < lVar10);
              }
              while( true ) {
                puVar8 = &local_d0;
                if (0xf < local_b8) {
                  puVar8 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
                }
                lVar10 = FUN_140071430(*(undefined8 *)(*param_2 + lVar13 * 8),puVar8,0,local_c0);
                if (lVar10 == -1) break;
                local_120 = 0xffffffffffffffff;
                local_128 = 0;
                FUN_14014d540(*(undefined8 *)(*param_2 + lVar13 * 8),lVar10,local_c0,&local_70);
              }
              while( true ) {
                puVar8 = &local_70;
                if (0xf < local_58) {
                  puVar8 = (undefined1 *)CONCAT71(uStack_6f,local_70);
                }
                lVar10 = FUN_140071430(*(undefined8 *)(*param_2 + lVar13 * 8),puVar8);
                if (lVar10 == -1) break;
                local_120 = 0xffffffffffffffff;
                local_128 = 0;
                FUN_14014d540(*(undefined8 *)(*param_2 + lVar13 * 8),lVar10,local_60,&local_b0);
              }
              if (0xf < local_98) {
                FUN_140002020(CONCAT71(uStack_af,local_b0),local_98 + 1);
              }
              local_98 = 0xf;
              local_a0 = 0;
              local_b0 = 0;
              if (0xf < local_b8) {
                FUN_140002020(CONCAT71(uStack_cf,local_d0),local_b8 + 1);
              }
            }
          }
          lVar11 = lVar11 + -1;
          param_1 = local_118;
        } while (-1 < lVar11);
      }
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  plVar2 = local_108;
  lVar13 = 0;
  iVar4 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3);
  if (0 < iVar4) {
    do {
      lVar11 = *(longlong *)(param_1 + 0x50);
      if (((*(int *)(lVar11 + lVar13 * 4) < 0) ||
          ((ulonglong)(param_4[1] - *param_4 >> 3) <=
           (ulonglong)(longlong)*(int *)(lVar11 + lVar13 * 4))) ||
         (iVar5 = FUN_140071310(*(undefined8 *)
                                 (*param_4 + (longlong)*(int *)(lVar11 + lVar13 * 4) * 8),
                                *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13 * 8)),
         iVar5 == 0)) {
        local_b8 = 0xf;
        local_c0 = 0;
        local_d0 = 0;
        FUN_14000c780(&local_d0,&DAT_140e7aaf4,1);
        FUN_14000cb40(&local_d0,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar13 * 8),0,
                      0xffffffffffffffff);
        FUN_14000c9f0(&local_d0,&DAT_140e7aafc,1);
        iVar5 = (int)(param_4[1] - *param_4 >> 3);
        lVar11 = (longlong)(iVar5 + -1);
        if (-1 < iVar5 + -1) {
          do {
            local_98 = 0xf;
            local_a0 = 0;
            local_b0 = 0;
            FUN_14000c780(&local_b0,&DAT_140ea7bf4,4);
            local_78 = 0xf;
            local_80 = 0;
            local_90 = 0;
            FUN_14014a650(iVar5,&local_90);
            FUN_14000cb40(&local_b0,&local_90,0,0xffffffffffffffff);
            if (0xf < local_78) {
              FUN_140002020(CONCAT71(uStack_8f,local_90),local_78 + 1,1);
            }
            while( true ) {
              puVar8 = &local_b0;
              if (0xf < local_98) {
                puVar8 = (undefined1 *)CONCAT71(uStack_af,local_b0);
              }
              lVar10 = FUN_140071430(&local_d0,puVar8,0);
              if (lVar10 == -1) break;
              local_120 = 0xffffffffffffffff;
              local_128 = 0;
              FUN_14014d540(&local_d0,lVar10,local_a0,*(undefined8 *)(*param_4 + lVar11 * 8));
            }
            if (0xf < local_98) {
              FUN_140002020(CONCAT71(uStack_af,local_b0),local_98 + 1,1);
            }
            iVar5 = iVar5 + -1;
            lVar11 = lVar11 + -1;
          } while (-1 < lVar11);
        }
        piVar3 = local_100;
        FUN_1402802d0(plVar2,*local_100,&local_d0);
        *piVar3 = *piVar3 + 1;
        param_1 = local_118;
        if (0xf < local_b8) {
          FUN_140002020(CONCAT71(uStack_cf,local_d0),local_b8 + 1,1);
          param_1 = local_118;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar4);
  }
  if (0xf < local_58) {
    FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
  }
  return;
}

