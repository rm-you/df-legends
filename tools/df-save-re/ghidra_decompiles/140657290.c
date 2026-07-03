// FUN_140657290 @ 140657290
// callees:
//   -> 14007b940 FUN_14007b940
//   -> 140050540 FUN_140050540
//   -> 140dfb6d8 operator_new
//   -> 140050410 FUN_140050410
//   -> 14000c780 FUN_14000c780
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140657290(ulonglong *param_1,longlong param_2,int param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_e8 [32];
  char local_c8;
  char *local_c0;
  int local_b8;
  undefined8 local_b0;
  char local_a8;
  undefined7 uStack_a7;
  ulonglong local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  ulonglong local_78;
  ulonglong local_70;
  char local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_b0 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  if (0 < (int)lVar4) {
    local_c8 = '\0';
    local_90 = 0xf;
    uVar13 = 0;
    local_98 = 0;
    local_a8 = '\0';
    local_70 = 0xf;
    local_78 = 0;
    local_88 = 0;
    lVar17 = (longlong)(int)lVar4;
    local_b8 = param_3;
    FUN_14007b940(&local_88,lVar17);
    lVar4 = 0;
    if (0 < lVar17) {
      do {
        FUN_140050540(&local_88,1,*(undefined1 *)(lVar4 + param_2));
        lVar4 = lVar4 + 1;
      } while (lVar4 < lVar17);
    }
    uVar3 = local_70;
    iVar15 = 0;
    puVar14 = (undefined1 *)CONCAT71(uStack_87,local_88);
    if (local_78 != 0) {
      lVar4 = 0;
      cVar10 = '\0';
      do {
        if (cVar10 == '\0') {
LAB_140657375:
          puVar7 = &local_88;
          if (0xf < uVar3) {
            puVar7 = puVar14;
          }
          if (puVar7[lVar4] == '&') {
            iVar15 = iVar15 + 1;
            lVar4 = lVar4 + 1;
            if (iVar15 < (int)local_78) {
              puVar7 = &local_88;
              if (0xf < uVar3) {
                puVar7 = puVar14;
              }
              if (puVar7[lVar4] == 'r') {
                if (uVar13 != 0) {
                  pcVar5 = operator_new((longlong)((int)local_98 + 1));
                  pcVar8 = (char *)CONCAT71(uStack_a7,local_a8);
                  pcVar9 = &local_a8;
                  pcVar6 = pcVar5;
                  if (0xf < local_90) {
                    pcVar9 = pcVar8;
                  }
                  do {
                    cVar10 = *pcVar9;
                    *pcVar6 = cVar10;
                    pcVar9 = pcVar9 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar10 != '\0');
                  ppcVar1 = (char **)param_1[1];
                  local_c0 = pcVar5;
                  if ((&local_c0 < ppcVar1) && (ppcVar2 = (char **)*param_1, ppcVar2 <= &local_c0))
                  {
                    if (ppcVar1 == (char **)param_1[2]) {
                      FUN_140050410(param_1);
                    }
                    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                      *(undefined8 *)param_1[1] =
                           *(undefined8 *)
                            (*param_1 + ((longlong)&local_c0 - (longlong)ppcVar2 >> 3) * 8);
                    }
                  }
                  else {
                    if (ppcVar1 == (char **)param_1[2]) {
                      FUN_140050410(param_1);
                    }
                    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                      *(undefined8 *)param_1[1] = pcVar5;
                    }
                  }
                  param_1[1] = param_1[1] + 8;
                  local_98 = 0;
                  pcVar9 = &local_a8;
                  if (0xf < local_90) {
                    pcVar9 = pcVar8;
                  }
                  *pcVar9 = '\0';
                  uVar13 = local_98;
                }
                local_50 = 0xf;
                local_58 = 0;
                local_68 = '\0';
                FUN_14000c780(&local_68,&DAT_140e59864,1);
                pcVar6 = operator_new((longlong)((int)local_58 + 1));
                pcVar8 = &local_68;
                pcVar9 = pcVar6;
                if (0xf < local_50) {
                  pcVar8 = (char *)CONCAT71(uStack_67,local_68);
                }
                do {
                  cVar10 = *pcVar8;
                  *pcVar9 = cVar10;
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar10 != '\0');
                ppcVar1 = (char **)param_1[1];
                local_c0 = pcVar6;
                if ((&local_c0 < ppcVar1) && (ppcVar2 = (char **)*param_1, ppcVar2 <= &local_c0)) {
                  if (ppcVar1 == (char **)param_1[2]) {
                    FUN_140050410(param_1);
                  }
                  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                    *(undefined8 *)param_1[1] =
                         *(undefined8 *)
                          (*param_1 + ((longlong)&local_c0 - (longlong)ppcVar2 >> 3) * 8);
                  }
                }
                else {
                  if (ppcVar1 == (char **)param_1[2]) {
                    FUN_140050410(param_1);
                  }
                  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                    *(undefined8 *)param_1[1] = pcVar6;
                  }
                }
                param_1[1] = param_1[1] + 8;
                cVar10 = local_c8;
                if (0xf < local_50) {
                  FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
                  cVar10 = local_c8;
                }
              }
              else {
                puVar7 = &local_88;
                if (0xf < uVar3) {
                  puVar7 = puVar14;
                }
                if (puVar7[lVar4] == '&') goto LAB_140657593;
              }
            }
          }
          else {
LAB_140657593:
            puVar7 = &local_88;
            if (0xf < uVar3) {
              puVar7 = puVar14;
            }
            FUN_140050540(&local_a8,1,puVar7[lVar4]);
            uVar13 = local_98;
            cVar10 = local_c8;
            if ((ulonglong)(longlong)local_b8 < local_98) {
              iVar12 = 0;
              lVar11 = 0;
              lVar17 = lVar4;
              iVar16 = iVar15;
              do {
                iVar16 = iVar16 + -1;
                lVar17 = lVar17 + -1;
                iVar12 = iVar12 + 1;
                lVar11 = lVar11 + 1;
                puVar7 = &local_88;
                if (0xf < uVar3) {
                  puVar7 = puVar14;
                }
              } while ((puVar7[lVar17] != ' ') && (0 < lVar17));
              if ((longlong)iVar12 != local_98) {
                uVar13 = local_98 - lVar11;
                if (local_98 < uVar13) {
                  FUN_140050540(&local_a8,uVar13 - local_98,0);
                }
                else {
                  pcVar8 = &local_a8;
                  if (0xf < local_90) {
                    pcVar8 = (char *)CONCAT71(uStack_a7,local_a8);
                  }
                  local_98 = uVar13;
                  pcVar8[uVar13] = '\0';
                }
                pcVar5 = operator_new((longlong)((int)local_98 + 1));
                uVar13 = local_90;
                pcVar8 = (char *)CONCAT71(uStack_a7,local_a8);
                pcVar9 = &local_a8;
                pcVar6 = pcVar5;
                if (0xf < local_90) {
                  pcVar9 = pcVar8;
                }
                do {
                  cVar10 = *pcVar9;
                  *pcVar6 = cVar10;
                  pcVar9 = pcVar9 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar10 != '\0');
                ppcVar1 = (char **)param_1[1];
                local_c0 = pcVar5;
                if ((&local_c0 < ppcVar1) && (ppcVar2 = (char **)*param_1, ppcVar2 <= &local_c0)) {
                  if (ppcVar1 == (char **)param_1[2]) {
                    FUN_140050410(param_1);
                  }
                  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                    *(undefined8 *)param_1[1] =
                         *(undefined8 *)
                          (*param_1 + ((longlong)&local_c0 - (longlong)ppcVar2 >> 3) * 8);
                  }
                }
                else {
                  if (ppcVar1 == (char **)param_1[2]) {
                    FUN_140050410(param_1);
                  }
                  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                    *(undefined8 *)param_1[1] = pcVar5;
                  }
                }
                param_1[1] = param_1[1] + 8;
                local_c8 = '\x01';
                local_98 = 0;
                pcVar9 = &local_a8;
                if (0xf < uVar13) {
                  pcVar9 = pcVar8;
                }
                *pcVar9 = '\0';
                puVar14 = (undefined1 *)CONCAT71(uStack_87,local_88);
                lVar4 = lVar17;
                uVar13 = local_98;
                cVar10 = '\x01';
                iVar15 = iVar16;
              }
            }
          }
        }
        else {
          puVar7 = &local_88;
          if (0xf < uVar3) {
            puVar7 = puVar14;
          }
          if (puVar7[lVar4] != ' ') {
            cVar10 = '\0';
            local_c8 = '\0';
            goto LAB_140657375;
          }
        }
        iVar15 = iVar15 + 1;
        lVar4 = lVar4 + 1;
      } while ((ulonglong)(longlong)iVar15 < local_78);
    }
    pcVar8 = (char *)CONCAT71(uStack_a7,local_a8);
    if (uVar13 != 0) {
      pcVar5 = operator_new((longlong)((int)local_98 + 1));
      pcVar9 = &local_a8;
      pcVar6 = pcVar5;
      if (0xf < local_90) {
        pcVar9 = pcVar8;
      }
      do {
        cVar10 = *pcVar9;
        *pcVar6 = cVar10;
        pcVar9 = pcVar9 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar10 != '\0');
      ppcVar1 = (char **)param_1[1];
      local_c0 = pcVar5;
      if ((&local_c0 < ppcVar1) && (ppcVar2 = (char **)*param_1, ppcVar2 <= &local_c0)) {
        if (ppcVar1 == (char **)param_1[2]) {
          FUN_140050410(param_1);
        }
        if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
          *(undefined8 *)param_1[1] =
               *(undefined8 *)(*param_1 + ((longlong)&local_c0 - (longlong)ppcVar2 >> 3) * 8);
        }
      }
      else {
        if (ppcVar1 == (char **)param_1[2]) {
          FUN_140050410(param_1);
        }
        if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
          *(undefined8 *)param_1[1] = pcVar5;
        }
      }
      param_1[1] = param_1[1] + 8;
    }
    if (0xf < uVar3) {
      FUN_140002020(puVar14,uVar3 + 1,1);
    }
    if (0xf < local_90) {
      FUN_140002020(pcVar8,local_90 + 1,1);
    }
  }
  return;
}

