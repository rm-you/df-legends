// FUN_1407653b0 @ 1407653b0
// callees:
//   -> 1407b6cd0 FUN_1407b6cd0
//   -> 140914d80 FUN_140914d80
//   -> 1404cec60 FUN_1404cec60
//   -> 1407b8ef0 FUN_1407b8ef0
//   -> 1407b70f0 FUN_1407b70f0
//   -> 1405409b0 FUN_1405409b0
//   -> 1407b6ae0 FUN_1407b6ae0
//   -> 140050b50 FUN_140050b50
//   -> 140002020 FUN_140002020
//   -> 1407b8b40 FUN_1407b8b40
//   -> 1407b9840 FUN_1407b9840
//   -> 1407ba490 FUN_1407ba490
//   -> 14000d840 FUN_14000d840


void FUN_1407653b0(longlong param_1,int *param_2,longlong param_3,int param_4,longlong param_5,
                  int param_6,longlong *param_7)

{
  short sVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  short sVar16;
  undefined2 uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int *piVar31;
  longlong lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined4 *puVar35;
  longlong *plVar36;
  longlong *plVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  short sVar40;
  short sVar41;
  ulonglong uVar42;
  longlong lVar43;
  ulonglong uVar44;
  uint local_res20;
  char local_f8;
  ulonglong local_f0;
  int *local_e8;
  ulonglong local_d8;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  int *piStack_a0;
  undefined8 local_98;
  int *piStack_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  uVar44 = 0;
  iVar27 = 0;
  param_2[4] = 0;
  local_b0 = 0;
  local_a8 = 0;
  piStack_a0 = (int *)0x0;
  local_98 = 0;
  piStack_90 = (int *)0x0;
  local_88 = 6;
  iVar29 = -1;
  local_80 = -1;
  local_c8 = param_5;
  local_c0 = param_3;
  local_b8 = param_4;
  FUN_1407b6cd0(0,&local_c8);
  param_2[1] = local_80;
  if (local_80 != -1) {
    switch(local_80) {
    case 0:
    case 1:
    case 2:
      iVar27 = 100;
      break;
    case 3:
    case 4:
    case 5:
      iVar27 = 0x96;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
      iVar27 = 200;
      break;
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      iVar27 = 0x3c;
      break;
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3f:
      iVar27 = 0x4b;
      break;
    case 0x3a:
      iVar27 = 0x19;
      break;
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
      iVar27 = 0x32;
    }
    if (((*(longlong *)(param_1 + 0x130) != 0) &&
        (lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18), lVar21 != 0)) &&
       (iVar18 = FUN_140914d80(lVar21,2), 0 < iVar18)) {
      if (iVar18 < 0x29) {
        if (iVar18 < 0x1a) {
          if (10 < iVar18) {
            *param_2 = *param_2 + iVar27;
          }
        }
        else {
          *param_2 = *param_2 + iVar27 * 2;
        }
      }
      else {
        *param_2 = *param_2 + iVar27 * 5;
      }
    }
  }
  lVar21 = local_c0;
  param_2[4] = local_88._4_4_;
  *(undefined8 *)(param_2 + 2) = local_98;
  if (local_b0 != 0) {
    if (0 < *(int *)(local_b0 + 0x60)) {
      *param_2 = *param_2 + *(int *)(local_b0 + 0x60);
    }
    piVar25 = *(int **)(local_b0 + 0x20);
    piVar31 = *(int **)(local_b0 + 0x38);
    uVar42 = (*(longlong *)(local_b0 + 0x28) - (longlong)piVar25) + 3U >> 2;
    if (*(int **)(local_b0 + 0x28) < piVar25) {
      uVar42 = uVar44;
    }
    uVar39 = uVar44;
    if (uVar42 != 0) {
      do {
        param_2[(longlong)*piVar25 + 6] = param_2[(longlong)*piVar25 + 6] + *piVar31;
        piVar31 = piVar31 + 1;
        piVar25 = piVar25 + 1;
        uVar39 = uVar39 + 1;
      } while (uVar39 < uVar42);
    }
  }
  if (local_a8 != 0) {
    if (0 < *(int *)(local_a8 + 0x5c)) {
      *param_2 = *param_2 + *(int *)(local_a8 + 0x5c);
    }
    piVar25 = *(int **)(local_a8 + 0x20);
    piVar31 = *(int **)(local_a8 + 0x38);
    uVar42 = (*(longlong *)(local_a8 + 0x28) - (longlong)piVar25) + 3U >> 2;
    if (*(int **)(local_a8 + 0x28) < piVar25) {
      uVar42 = uVar44;
    }
    uVar39 = uVar44;
    if (uVar42 != 0) {
      do {
        param_2[(longlong)*piVar25 + 6] = param_2[(longlong)*piVar25 + 6] + *piVar31;
        piVar31 = piVar31 + 1;
        piVar25 = piVar25 + 1;
        uVar39 = uVar39 + 1;
      } while (uVar39 < uVar42);
    }
  }
  if (piStack_a0 != (int *)0x0) {
    if (0 < piStack_a0[0x11]) {
      *param_2 = *param_2 + piStack_a0[0x11];
    }
    piVar25 = *(int **)(piStack_a0 + 2);
    piVar31 = *(int **)(piStack_a0 + 8);
    uVar42 = (*(longlong *)(piStack_a0 + 4) - (longlong)piVar25) + 3U >> 2;
    if (*(int **)(piStack_a0 + 4) < piVar25) {
      uVar42 = uVar44;
    }
    uVar39 = uVar44;
    if (uVar42 != 0) {
      do {
        param_2[(longlong)*piVar25 + 6] = param_2[(longlong)*piVar25 + 6] + *piVar31;
        piVar31 = piVar31 + 1;
        piVar25 = piVar25 + 1;
        uVar39 = uVar39 + 1;
      } while (uVar39 < uVar42);
    }
  }
  lVar43 = DAT_141d69178;
  local_60 = local_c0;
  if (local_c8 != 0) {
    local_60 = local_c8;
  }
  lVar19 = local_c0;
  if ((local_88 & 8) != 0) {
    lVar19 = local_60;
  }
  if (local_b8 == -1) {
    local_e8 = (int *)0x0;
  }
  else {
    iVar27 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
    uVar42 = uVar44;
    if (-1 < iVar27) {
      do {
        iVar18 = (int)uVar42 + iVar27 >> 1;
        local_e8 = *(int **)(DAT_141d69178 + (longlong)iVar18 * 8);
        if (*local_e8 == local_b8) goto LAB_14076568b;
        if (local_b8 < *local_e8) {
          iVar27 = iVar18 + -1;
        }
        else {
          uVar42 = (ulonglong)(iVar18 + 1);
        }
      } while ((int)uVar42 <= iVar27);
    }
    local_e8 = (int *)0x0;
  }
LAB_14076568b:
  if (param_2[4] == 0) {
    if (lVar19 != 0) {
      iVar29 = *(int *)(lVar19 + 0xb0);
    }
    if (((local_b0 != 0) && (iVar29 == -1)) &&
       (*(longlong *)(local_b0 + 0x10) - *(longlong *)(local_b0 + 8) >> 2 == 1)) {
      iVar27 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
      uVar42 = uVar44;
      if (-1 < iVar27) {
        do {
          iVar18 = iVar27 + (int)uVar42 >> 1;
          piVar31 = *(int **)(DAT_141d69178 + (longlong)iVar18 * 8);
          if (*piVar31 == **(int **)(local_b0 + 8)) {
            if ((piVar31 != (int *)0x0) && (piVar31[0x2c] != -1)) {
              iVar29 = piVar31[0x2c];
            }
            break;
          }
          if (**(int **)(local_b0 + 8) < *piVar31) {
            iVar27 = iVar18 + -1;
          }
          else {
            uVar42 = (ulonglong)(iVar18 + 1);
          }
        } while ((int)uVar42 <= iVar27);
      }
    }
    if (((local_a8 != 0) && (iVar29 == -1)) &&
       (*(longlong *)(local_a8 + 0x10) - *(longlong *)(local_a8 + 8) >> 2 == 1)) {
      iVar27 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
      uVar42 = uVar44;
      if (-1 < iVar27) {
        do {
          iVar18 = iVar27 + (int)uVar42 >> 1;
          piVar31 = *(int **)(DAT_141d69178 + (longlong)iVar18 * 8);
          if (*piVar31 == **(int **)(local_a8 + 8)) {
            if ((piVar31 != (int *)0x0) && (piVar31[0x2c] != -1)) {
              iVar29 = piVar31[0x2c];
            }
            break;
          }
          if (**(int **)(local_a8 + 8) < *piVar31) {
            iVar27 = iVar18 + -1;
          }
          else {
            uVar42 = (ulonglong)(iVar18 + 1);
          }
        } while ((int)uVar42 <= iVar27);
      }
    }
    if ((piStack_a0 != (int *)0x0) && (iVar29 == -1)) {
      iVar27 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
      uVar42 = uVar44;
      if (-1 < iVar27) {
        do {
          iVar18 = iVar27 + (int)uVar42 >> 1;
          piVar31 = *(int **)(DAT_141d69178 + (longlong)iVar18 * 8);
          if (*piVar31 == *piStack_a0) {
            if ((piVar31 != (int *)0x0) && (piVar31[0x2c] != -1)) {
              iVar29 = piVar31[0x2c];
            }
            break;
          }
          if (*piStack_a0 < *piVar31) {
            iVar27 = iVar18 + -1;
          }
          else {
            uVar42 = (ulonglong)(iVar18 + 1);
          }
        } while ((int)uVar42 <= iVar27);
      }
    }
    iVar27 = *(int *)(param_1 + 0xb0);
    if ((iVar27 != -1) && (iVar29 != -1)) {
      lVar32 = DAT_141c53720 - DAT_141c53718 >> 3;
      iVar18 = (int)lVar32;
      uVar42 = uVar44;
      if ((lVar32 != 0) && (iVar28 = iVar18 + -1, uVar39 = uVar44, -1 < iVar28)) {
        do {
          iVar23 = iVar28 + (int)uVar39 >> 1;
          uVar42 = *(ulonglong *)(DAT_141c53718 + (longlong)iVar23 * 8);
          iVar24 = *(int *)(uVar42 + 4);
          if (iVar24 == iVar27) break;
          if (iVar27 < iVar24) {
            iVar28 = iVar23 + -1;
          }
          else {
            uVar39 = (ulonglong)(iVar23 + 1);
          }
          uVar42 = uVar44;
        } while ((int)uVar39 <= iVar28);
      }
      uVar39 = uVar44;
      if ((DAT_141c53720 - DAT_141c53718 >> 3 != 0) &&
         (iVar18 = iVar18 + -1, uVar38 = uVar44, -1 < iVar18)) {
        do {
          iVar28 = iVar18 + (int)uVar38 >> 1;
          uVar39 = *(ulonglong *)(DAT_141c53718 + (longlong)iVar28 * 8);
          iVar27 = *(int *)(uVar39 + 4);
          if (iVar27 == iVar29) break;
          if (iVar29 < iVar27) {
            iVar18 = iVar28 + -1;
          }
          else {
            uVar38 = (ulonglong)(iVar28 + 1);
          }
          uVar39 = uVar44;
        } while ((int)uVar38 <= iVar18);
      }
      if ((uVar42 != 0) && (uVar39 != 0)) {
        lVar32 = FUN_1404cec60(uVar42);
        lVar20 = FUN_1404cec60(uVar39);
        if (lVar32 == lVar20) {
          param_2[4] = 0x21;
          lVar43 = DAT_141d69178;
        }
      }
    }
    iVar29 = *(int *)(param_1 + 0xb0);
    if (((iVar29 != -1) && (local_e8 != (int *)0x0)) && (iVar27 = local_e8[0x2c], iVar27 != -1)) {
      lVar32 = DAT_141c53720 - DAT_141c53718 >> 3;
      uVar42 = uVar44;
      if ((lVar32 != 0) && (iVar18 = (int)lVar32 + -1, uVar39 = uVar44, -1 < iVar18)) {
        do {
          iVar24 = iVar18 + (int)uVar39 >> 1;
          uVar42 = *(ulonglong *)(DAT_141c53718 + (longlong)iVar24 * 8);
          iVar28 = *(int *)(uVar42 + 4);
          if (iVar28 == iVar29) break;
          if (iVar29 < iVar28) {
            iVar18 = iVar24 + -1;
          }
          else {
            uVar39 = (ulonglong)(iVar24 + 1);
          }
          uVar42 = uVar44;
        } while ((int)uVar39 <= iVar18);
      }
      uVar39 = uVar44;
      if (((lVar32 != 0) && (iVar27 != -1)) &&
         (iVar29 = (int)lVar32 + -1, uVar38 = uVar44, -1 < iVar29)) {
        do {
          iVar28 = iVar29 + (int)uVar38 >> 1;
          uVar39 = *(ulonglong *)(DAT_141c53718 + (longlong)iVar28 * 8);
          iVar18 = *(int *)(uVar39 + 4);
          if (iVar18 == iVar27) break;
          if (iVar27 < iVar18) {
            iVar29 = iVar28 + -1;
          }
          else {
            uVar38 = (ulonglong)(iVar28 + 1);
          }
          uVar39 = uVar44;
        } while ((int)uVar38 <= iVar29);
      }
      if ((uVar42 != 0) && (uVar39 != 0)) {
        lVar32 = FUN_1404cec60(uVar42);
        lVar20 = FUN_1404cec60(uVar39);
        if (lVar32 == lVar20) {
          param_2[4] = 0x21;
          lVar43 = DAT_141d69178;
        }
      }
    }
  }
  if (param_6 < 2) {
    FUN_1407b8ef0(param_1,param_7);
    local_res20 = 0;
    plVar22 = param_7;
    if (0 < (int)param_7[0x33]) {
      do {
        puVar2 = (ulonglong *)plVar22[1];
        plVar36 = (longlong *)*puVar2;
        plVar37 = (longlong *)puVar2[1];
        local_f0 = 0;
        uVar42 = (ulonglong)((longlong)plVar37 + (7 - (longlong)plVar36)) >> 3;
        if (plVar37 < plVar36) {
          uVar42 = 0;
        }
        uVar30 = (uint)uVar44;
        if (uVar42 != 0) {
          do {
            iVar29 = 0;
            lVar21 = *plVar36;
            if (((*(byte *)(lVar21 + 0x20) & 1) == 0) &&
               (((*(int *)(lVar21 + 0x10) < DAT_1416b1980 ||
                 ((*(int *)(lVar21 + 0x10) == DAT_1416b1980 &&
                  (*(int *)(lVar21 + 0x14) <= DAT_1416b1974)))) && (*(int *)(lVar21 + 0x24) == 2))))
            {
              iVar27 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
              if (-1 < iVar27) {
LAB_140765af0:
                iVar18 = iVar27 + iVar29 >> 1;
                piVar31 = *(int **)(DAT_141d691a8 + (longlong)iVar18 * 8);
                if (*piVar31 != *(int *)(lVar21 + 4)) goto code_r0x000140765b04;
                if (piVar31 != (int *)0x0) {
                  FUN_1407b70f0(param_1,piVar31,param_2 + 6,param_2 + 0x27,param_6,param_7,&local_c8
                               );
                  iVar29 = 0;
                  if (0 < (int)param_7[0x41]) {
                    plVar37 = param_7 + 0x37;
                    do {
                      FUN_1405409b0(*plVar37,piVar31,param_2 + 6,param_2 + 0x27,&local_c8);
                      iVar29 = iVar29 + 1;
                      plVar37 = plVar37 + 1;
                    } while (iVar29 < (int)param_7[0x41]);
                  }
                  if ((((piVar31[1] == 9) && (param_2[4] == 0)) && (*(int *)(param_1 + 0xb0) != -1))
                     && ((piVar31[0x18] == *(int *)(param_1 + 0xb0) &&
                         (puVar2 = *(ulonglong **)(piVar31 + 0x44), puVar2 != (ulonglong *)0x0)))) {
                    puVar33 = (undefined8 *)*puVar2;
                    puVar34 = (undefined8 *)puVar2[1];
                    if (puVar33 < puVar34) {
                      while (cVar12 = FUN_1407b6ae0(&local_c8,*puVar33), cVar12 == '\0') {
                        puVar33 = puVar33 + 1;
                        if (puVar34 <= puVar33) goto LAB_140765c24;
                      }
                      param_2[4] = 0x21;
                    }
                  }
                }
              }
            }
LAB_140765c24:
            plVar36 = plVar36 + 1;
            local_f0 = local_f0 + 1;
            uVar30 = local_res20;
          } while (local_f0 < uVar42);
        }
        local_res20 = uVar30 + 1;
        uVar44 = (ulonglong)local_res20;
        lVar21 = local_c0;
        plVar22 = plVar22 + 1;
      } while ((int)local_res20 < (int)param_7[0x33]);
    }
    plVar22 = param_7 + 0x34;
    local_res20 = 0;
    lVar43 = DAT_141d69178;
    if (0 < (int)param_7[0x36]) {
      do {
        puVar33 = *(undefined8 **)*plVar22;
        puVar34 = (undefined8 *)((undefined8 *)*plVar22)[1];
        local_d8 = 0;
        uVar44 = (ulonglong)((longlong)puVar34 + (7 - (longlong)puVar33)) >> 3;
        if (puVar34 < puVar33) {
          uVar44 = 0;
        }
        if (uVar44 != 0) {
          do {
            iVar29 = 0;
            piVar31 = (int *)*puVar33;
            if (piVar31[2] == 0) {
              iVar27 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
              if (-1 < iVar27) {
LAB_140765d00:
                iVar18 = iVar27 + iVar29 >> 1;
                piVar25 = *(int **)(DAT_141d691a8 + (longlong)iVar18 * 8);
                if (*piVar25 != *piVar31) goto code_r0x000140765d14;
                if (piVar25 != (int *)0x0) {
                  piStack_90 = piVar31;
                  FUN_1407b70f0(param_1,piVar25,param_2 + 6,param_2 + 0x27,param_6,param_7,&local_c8
                               );
                  iVar29 = 0;
                  if (0 < (int)param_7[0x41]) {
                    plVar36 = param_7 + 0x37;
                    do {
                      FUN_1405409b0(*plVar36,piVar25,param_2 + 6,param_2 + 0x27,&local_c8);
                      iVar29 = iVar29 + 1;
                      plVar36 = plVar36 + 1;
                    } while (iVar29 < (int)param_7[0x41]);
                  }
                  if (((piVar25[1] == 9) && (param_2[4] == 0)) &&
                     ((*(int *)(param_1 + 0xb0) != -1 &&
                      ((piVar25[0x18] == *(int *)(param_1 + 0xb0) &&
                       (puVar2 = *(ulonglong **)(piVar25 + 0x44), puVar2 != (ulonglong *)0x0)))))) {
                    puVar34 = (undefined8 *)*puVar2;
                    puVar3 = (undefined8 *)puVar2[1];
                    if (puVar34 < puVar3) {
                      while (cVar12 = FUN_1407b6ae0(&local_c8,*puVar34), cVar12 == '\0') {
                        puVar34 = puVar34 + 1;
                        if (puVar3 <= puVar34) goto LAB_140765e32;
                      }
                      param_2[4] = 0x21;
                    }
                  }
                }
              }
            }
LAB_140765e32:
            puVar33 = puVar33 + 1;
            local_d8 = local_d8 + 1;
          } while (local_d8 < uVar44);
        }
        local_res20 = local_res20 + 1;
        plVar22 = plVar22 + 1;
        lVar43 = DAT_141d69178;
        lVar21 = local_c0;
      } while ((int)local_res20 < (int)param_7[0x36]);
    }
  }
  uVar44 = 0;
  iVar29 = *(int *)(param_1 + 0xbc);
  if (iVar29 != -1) {
    if (((lVar21 != 0) && (*(longlong *)(lVar21 + 0x130) != 0)) &&
       (lVar32 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + 0x58), lVar32 != 0)) {
      iVar27 = (int)(*(longlong *)(lVar32 + 0x20) - *(longlong *)(lVar32 + 0x18) >> 3) + -1;
      uVar42 = uVar44;
      if (-1 < iVar27) {
        do {
          iVar18 = iVar27 + (int)uVar42 >> 1;
          piVar31 = *(int **)(*(longlong *)(lVar32 + 0x18) + (longlong)iVar18 * 8);
          if (*piVar31 == iVar29) {
            if (piVar31 != (int *)0x0) {
              piVar26 = *(int **)(piVar31 + 2);
              piVar25 = *(int **)(piVar31 + 8);
              uVar42 = (ulonglong)((longlong)*(int **)(piVar31 + 4) + (3 - (longlong)piVar26)) >> 2;
              if (*(int **)(piVar31 + 4) < piVar26) {
                uVar42 = uVar44;
              }
              uVar39 = uVar44;
              if (uVar42 != 0) {
                do {
                  param_2[(longlong)*piVar26 + 6] = param_2[(longlong)*piVar26 + 6] + *piVar25;
                  piVar25 = piVar25 + 1;
                  piVar26 = piVar26 + 1;
                  uVar39 = uVar39 + 1;
                  lVar43 = DAT_141d69178;
                } while (uVar39 < uVar42);
              }
            }
            break;
          }
          if (iVar29 < *piVar31) {
            iVar27 = iVar18 + -1;
          }
          else {
            uVar42 = (ulonglong)(iVar18 + 1);
          }
        } while ((int)uVar42 <= iVar27);
      }
    }
    if (local_e8 != (int *)0x0) {
      iVar29 = (int)(*(longlong *)(local_e8 + 0x36) - *(longlong *)(local_e8 + 0x34) >> 3) + -1;
      uVar42 = uVar44;
      if (-1 < iVar29) {
        do {
          iVar27 = iVar29 + (int)uVar42 >> 1;
          piVar31 = *(int **)(*(longlong *)(local_e8 + 0x34) + (longlong)iVar27 * 8);
          if (*piVar31 == *(int *)(param_1 + 0xbc)) {
            piVar26 = *(int **)(piVar31 + 2);
            piVar25 = *(int **)(piVar31 + 8);
            uVar42 = (ulonglong)((longlong)*(int **)(piVar31 + 4) + (3 - (longlong)piVar26)) >> 2;
            if (*(int **)(piVar31 + 4) < piVar26) {
              uVar42 = uVar44;
            }
            uVar39 = uVar44;
            if (uVar42 != 0) {
              do {
                param_2[(longlong)*piVar26 + 6] = param_2[(longlong)*piVar26 + 6] + *piVar25;
                piVar25 = piVar25 + 1;
                piVar26 = piVar26 + 1;
                uVar39 = uVar39 + 1;
                lVar43 = DAT_141d69178;
              } while (uVar39 < uVar42);
            }
            break;
          }
          if (*(int *)(param_1 + 0xbc) < *piVar31) {
            iVar29 = iVar27 + -1;
          }
          else {
            uVar42 = (ulonglong)(iVar27 + 1);
          }
        } while ((int)uVar42 <= iVar29);
      }
    }
  }
  plVar22 = *(longlong **)(param_1 + 0xf0);
  for (plVar36 = *(longlong **)(param_1 + 0xe8); plVar36 < plVar22; plVar36 = plVar36 + 1) {
    sVar16 = (*(code *)**(undefined8 **)*plVar36)();
    if ((sVar16 == 10) || (sVar16 == 0xd)) {
      if (lVar21 != 0) {
        if ((*(longlong *)(lVar21 + 0x130) != 0) &&
           (plVar37 = *(longlong **)(*(longlong *)(lVar21 + 0x130) + 0x58),
           plVar37 != (longlong *)0x0)) {
          iVar29 = (int)(plVar37[1] - *plVar37 >> 3) + -1;
          uVar42 = uVar44;
          if (-1 < iVar29) {
            do {
              iVar27 = (int)uVar42 + iVar29 >> 1;
              piVar31 = *(int **)(*plVar37 + (longlong)iVar27 * 8);
              if (*piVar31 == *(int *)(*plVar36 + 8)) {
                if (piVar31 != (int *)0x0) {
                  piVar26 = *(int **)(piVar31 + 2);
                  piVar25 = *(int **)(piVar31 + 8);
                  uVar42 = (ulonglong)((longlong)*(int **)(piVar31 + 4) + (3 - (longlong)piVar26))
                           >> 2;
                  if (*(int **)(piVar31 + 4) < piVar26) {
                    uVar42 = uVar44;
                  }
                  uVar39 = uVar44;
                  if (uVar42 != 0) {
                    do {
                      param_2[(longlong)*piVar26 + 6] = param_2[(longlong)*piVar26 + 6] + *piVar25;
                      piVar25 = piVar25 + 1;
                      piVar26 = piVar26 + 1;
                      uVar39 = uVar39 + 1;
                    } while (uVar39 < uVar42);
                  }
                }
                break;
              }
              if (*(int *)(*plVar36 + 8) < *piVar31) {
                iVar29 = iVar27 + -1;
              }
              else {
                uVar42 = (ulonglong)(iVar27 + 1);
              }
            } while ((int)uVar42 <= iVar29);
          }
        }
      }
      if (local_e8 != (int *)0x0) {
        iVar29 = (int)(*(longlong *)(local_e8 + 0x30) - *(longlong *)(local_e8 + 0x2e) >> 3) + -1;
        uVar42 = uVar44;
        if (-1 < iVar29) {
          do {
            iVar27 = iVar29 + (int)uVar42 >> 1;
            piVar31 = *(int **)(*(longlong *)(local_e8 + 0x2e) + (longlong)iVar27 * 8);
            if (*piVar31 == *(int *)(*plVar36 + 8)) {
              piVar26 = *(int **)(piVar31 + 2);
              piVar25 = *(int **)(piVar31 + 8);
              uVar42 = (ulonglong)((longlong)*(int **)(piVar31 + 4) + (3 - (longlong)piVar26)) >> 2;
              if (*(int **)(piVar31 + 4) < piVar26) {
                uVar42 = uVar44;
              }
              uVar39 = uVar44;
              if (uVar42 != 0) {
                do {
                  param_2[(longlong)*piVar26 + 6] = param_2[(longlong)*piVar26 + 6] + *piVar25;
                  piVar25 = piVar25 + 1;
                  piVar26 = piVar26 + 1;
                  uVar39 = uVar39 + 1;
                } while (uVar39 < uVar42);
              }
              break;
            }
            if (*(int *)(*plVar36 + 8) < *piVar31) {
              iVar29 = iVar27 + -1;
            }
            else {
              uVar42 = (ulonglong)(iVar27 + 1);
            }
          } while ((int)uVar42 <= iVar29);
        }
      }
    }
    lVar43 = DAT_141d69178;
  }
  lVar21 = lVar19;
  if (DAT_1410b67dc == 1) {
    lVar21 = local_60;
  }
  if (lVar21 != 0) {
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    iVar27 = *(int *)(lVar21 + 0xd8);
    iVar29 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
    if (((iVar29 != 0) && (iVar27 != -1)) && (iVar29 = iVar29 + -1, uVar42 = uVar44, -1 < iVar29)) {
      do {
        iVar18 = (int)uVar42 + iVar29 >> 1;
        lVar32 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar18 * 8);
        if (*(int *)(lVar32 + 0x130) == iVar27) {
          if (((lVar32 != 0) && (*(longlong *)(lVar32 + 0x11e8) != 0)) &&
             (iVar29 = *(int *)(*(longlong *)(lVar32 + 0x11e8) + 4), iVar29 != -1)) {
            FUN_140050b50(iVar29,&local_78);
            lVar43 = DAT_141d69178;
          }
          break;
        }
        if (iVar27 < *(int *)(lVar32 + 0x130)) {
          iVar29 = iVar18 + -1;
        }
        else {
          uVar42 = (ulonglong)(iVar18 + 1);
        }
      } while ((int)uVar42 <= iVar29);
    }
    plVar22 = *(longlong **)(lVar21 + 0xe8);
    uVar42 = (ulonglong)((longlong)*(longlong **)(lVar21 + 0xf0) + (7 - (longlong)plVar22)) >> 3;
    if (*(longlong **)(lVar21 + 0xf0) < plVar22) {
      uVar42 = uVar44;
    }
    uVar39 = uVar44;
    if (uVar42 != 0) {
      do {
        puVar33 = (undefined8 *)*plVar22;
        sVar16 = (**(code **)*puVar33)(puVar33);
        if (sVar16 == 0) {
          iVar29 = *(int *)(puVar33 + 1);
          lVar21 = DAT_141c53720 - DAT_141c53718 >> 3;
          if (((lVar21 != 0) && (iVar29 != -1)) &&
             (iVar27 = (int)lVar21 + -1, uVar38 = uVar44, -1 < iVar27)) {
            do {
              iVar18 = iVar27 + (int)uVar38 >> 1;
              puVar4 = *(ushort **)(DAT_141c53718 + (longlong)iVar18 * 8);
              if (*(int *)(puVar4 + 2) == iVar29) {
                if ((puVar4 != (ushort *)0x0) && (1 < *puVar4)) goto LAB_140766337;
                break;
              }
              if (iVar29 < *(int *)(puVar4 + 2)) {
                iVar27 = iVar18 + -1;
              }
              else {
                uVar38 = (ulonglong)(iVar18 + 1);
              }
            } while ((int)uVar38 <= iVar27);
          }
        }
        else if ((sVar16 == 10) || (sVar16 == 0xd)) {
          iVar29 = *(int *)(puVar33 + 1);
LAB_140766337:
          FUN_140050b50(iVar29,&local_78);
        }
        plVar22 = plVar22 + 1;
        uVar39 = uVar39 + 1;
        lVar43 = DAT_141d69178;
      } while (uVar39 < uVar42);
    }
    lVar21 = local_78;
    lVar32 = lStack_70 - local_78 >> 2;
    if (lVar32 != 0) {
      plVar22 = *(longlong **)(param_1 + 0xe8);
      uVar42 = (ulonglong)((longlong)*(longlong **)(param_1 + 0xf0) + (7 - (longlong)plVar22)) >> 3;
      if (*(longlong **)(param_1 + 0xf0) < plVar22) {
        uVar42 = 0;
      }
      if (uVar42 != 0) {
        do {
          sVar16 = (*(code *)**(undefined8 **)*plVar22)();
          if ((sVar16 == 10) || (sVar16 == 0xd)) {
            iVar27 = *(int *)(*plVar22 + 8);
            iVar29 = (int)lVar32;
            if ((iVar29 != 0) && (iVar27 != -1)) {
              iVar18 = 0;
              iVar29 = iVar29 + -1;
              if (-1 < iVar29) {
                do {
                  iVar24 = iVar29 + iVar18 >> 1;
                  iVar28 = *(int *)(lVar21 + (longlong)iVar24 * 4);
                  if (iVar28 == iVar27) {
                    if (iVar24 != -1) {
                      FUN_140050b50(iVar27,param_2 + 0x48);
                    }
                    break;
                  }
                  if (iVar27 < iVar28) {
                    iVar29 = iVar24 + -1;
                  }
                  else {
                    iVar18 = iVar24 + 1;
                  }
                } while (iVar18 <= iVar29);
              }
            }
          }
          plVar22 = plVar22 + 1;
          uVar44 = uVar44 + 1;
          lVar43 = DAT_141d69178;
        } while (uVar44 < uVar42);
      }
    }
    if (lVar21 != 0) {
      FUN_140002020(lVar21,local_68 - lVar21 >> 2);
      lVar43 = DAT_141d69178;
    }
  }
  iVar29 = 0;
  if (((local_b0 != 0) &&
      ((*(longlong *)(param_2 + 0x4a) - *(longlong *)(param_2 + 0x48) & 0xfffffffffffffffcU) == 0))
     && ((*(longlong *)(local_b0 + 0x10) - *(longlong *)(local_b0 + 8) & 0xfffffffffffffffcU) == 4))
  {
    iVar27 = (int)(DAT_141d69180 - lVar43 >> 3) + -1;
    iVar18 = iVar29;
    if (-1 < iVar27) {
      do {
        iVar28 = iVar27 + iVar18 >> 1;
        piVar31 = *(int **)(lVar43 + (longlong)iVar28 * 8);
        if (*piVar31 == **(int **)(local_b0 + 8)) {
          if ((piVar31 != (int *)0x0) && (piVar31[0x2c] != -1)) {
            FUN_140050b50(piVar31[0x2c],param_2 + 0x48);
            lVar43 = DAT_141d69178;
          }
          break;
        }
        if (**(int **)(local_b0 + 8) < *piVar31) {
          iVar27 = iVar28 + -1;
        }
        else {
          iVar18 = iVar28 + 1;
        }
      } while (iVar18 <= iVar27);
    }
  }
  if (((local_a8 != 0) &&
      ((*(longlong *)(param_2 + 0x4a) - *(longlong *)(param_2 + 0x48) & 0xfffffffffffffffcU) == 0))
     && ((*(longlong *)(local_a8 + 0x10) - *(longlong *)(local_a8 + 8) & 0xfffffffffffffffcU) == 4))
  {
    iVar27 = (int)(DAT_141d69180 - lVar43 >> 3) + -1;
    iVar18 = iVar29;
    if (-1 < iVar27) {
      do {
        iVar28 = iVar27 + iVar18 >> 1;
        piVar31 = *(int **)(lVar43 + (longlong)iVar28 * 8);
        if (*piVar31 == **(int **)(local_a8 + 8)) {
          if ((piVar31 != (int *)0x0) && (piVar31[0x2c] != -1)) {
            FUN_140050b50(piVar31[0x2c],param_2 + 0x48);
            lVar43 = DAT_141d69178;
          }
          break;
        }
        if (**(int **)(local_a8 + 8) < *piVar31) {
          iVar27 = iVar28 + -1;
        }
        else {
          iVar18 = iVar28 + 1;
        }
      } while (iVar18 <= iVar27);
    }
  }
  if ((piStack_a0 != (int *)0x0) &&
     ((*(longlong *)(param_2 + 0x4a) - *(longlong *)(param_2 + 0x48) & 0xfffffffffffffffcU) == 0)) {
    iVar27 = (int)(DAT_141d69180 - lVar43 >> 3) + -1;
    iVar18 = iVar29;
    if (-1 < iVar27) {
      do {
        iVar28 = iVar27 + iVar18 >> 1;
        piVar31 = *(int **)(lVar43 + (longlong)iVar28 * 8);
        if (*piVar31 == *piStack_a0) {
          if ((piVar31 != (int *)0x0) && (piVar31[0x2c] != -1)) {
            FUN_140050b50(piVar31[0x2c],param_2 + 0x48);
          }
          break;
        }
        if (*piStack_a0 < *piVar31) {
          iVar27 = iVar28 + -1;
        }
        else {
          iVar18 = iVar28 + 1;
        }
      } while (iVar18 <= iVar27);
    }
  }
  if (((local_e8 != (int *)0x0) &&
      ((*(longlong *)(param_2 + 0x4a) - *(longlong *)(param_2 + 0x48) & 0xfffffffffffffffcU) == 0))
     && (local_e8[0x2c] != -1)) {
    FUN_140050b50();
  }
  bVar6 = false;
  puVar5 = *(undefined4 **)(param_2 + 0x4a);
  for (puVar35 = *(undefined4 **)(param_2 + 0x48); puVar35 < puVar5; puVar35 = puVar35 + 1) {
    iVar27 = FUN_1407b8b40(param_1,*puVar35);
    if (iVar27 == 6) {
      param_2[0x10] = param_2[0x10] + 1;
    }
    else if (iVar27 == 7) {
      param_2[0x11] = param_2[0x11] + 1;
    }
    else {
      if (iVar27 != 9) {
        if (iVar27 != 10) {
          if (iVar27 == 0x39) {
            param_2[0x16] = param_2[0x16] + 1;
          }
          goto LAB_1407666e0;
        }
        bVar6 = true;
      }
      param_2[0x12] = param_2[0x12] + 1;
    }
LAB_1407666e0:
  }
  if ((((local_88 & 8) != 0) && (lVar21 = *(longlong *)(param_1 + 0x130), lVar21 != 0)) &&
     (*(longlong *)(lVar21 + 8) != 0)) {
    switch(*(undefined2 *)(*(longlong *)(lVar21 + 8) + 0x60)) {
    case 0x3b:
    case 0x45:
    case 0x4a:
    case 0x65:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      if (((*(longlong *)(lVar21 + 0x28) != 0) && (lVar19 != 0)) &&
         ((iVar27 = *(int *)(*(longlong *)(lVar21 + 0x28) + 4), iVar27 != -1 &&
          ((*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) &
           0xfffffffffffffff8U) != 0)))) {
        iVar18 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168)
                      >> 3) + -1;
        if (-1 < iVar18) {
          do {
            iVar28 = iVar18 + iVar29 >> 1;
            lVar21 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + (longlong)iVar28 * 8);
            if (*(int *)(lVar21 + 0x88) == iVar27) {
              if (lVar21 != 0) {
                plVar22 = *(longlong **)(lVar21 + 0x428);
                goto LAB_1407667df;
              }
              break;
            }
            if (iVar27 < *(int *)(lVar21 + 0x88)) {
              iVar18 = iVar28 + -1;
            }
            else {
              iVar29 = iVar28 + 1;
            }
          } while (iVar29 <= iVar18);
        }
      }
    }
  }
switchD_14076673d_caseD_3c:
  if (((param_2[4] == 0) || (param_2[4] == 0x21)) &&
     ((0 < param_2[0x10] || ((0 < param_2[0x11] || (0 < param_2[0x14])))))) {
    param_2[4] = 0x16;
  }
  if (!bVar6) {
    if (0 < param_2[0x12]) {
      param_2[4] = 0x1c;
    }
    if (0 < param_2[0x13]) {
      param_2[4] = 0x1d;
    }
    if ((0 < param_2[0xf]) && (sVar16 = FUN_1407ba490(param_1), (int)sVar16 - 3U < 0xe)) {
      param_2[4] = 2;
    }
  }
  if (0 < param_2[0x25]) {
    param_2[4] = 0x22;
  }
  lVar43 = DAT_141d6dd58;
  lVar21 = DAT_141d6dd50;
  if (((param_2[4] == 0) || (param_2[4] == 0x21)) &&
     ((param_5 != 0 || (param_5 = lVar19, lVar19 != 0)))) {
    sVar16 = *(short *)(param_1 + 4);
    sVar41 = *(short *)(param_1 + 2);
    lVar32 = param_5;
    if (sVar41 < 0) {
LAB_140766ad2:
      bVar6 = false;
    }
    else {
      if (((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar41) ||
         (sVar16 < 0)) {
LAB_140766943:
        if (-1 < sVar41) {
          if (((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3)) && (-1 < sVar16)) {
            lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
            if (((ulonglong)(longlong)sVar16 <
                 (ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3)) &&
               (cVar12 = FUN_14000d840(*(longlong *)
                                        (*(longlong *)(lVar20 + 0x178) + (longlong)sVar16 * 8) +
                                       0x6a8,0x84), cVar12 != '\0')) goto LAB_140766acb;
          }
          if (-1 < sVar41) {
            if (((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3)) && (-1 < sVar16))
            {
              lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
              if (((ulonglong)(longlong)sVar16 <
                   (ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3))
                 && (cVar12 = FUN_14000d840(*(longlong *)
                                             (*(longlong *)(lVar20 + 0x178) + (longlong)sVar16 * 8)
                                            + 0x6a8,0x6e), cVar12 != '\0')) goto LAB_140766acb;
            }
            if (-1 < sVar41) {
              if (((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3)) && (-1 < sVar16)
                 ) {
                lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
                if (((ulonglong)(longlong)sVar16 <
                     (ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3)
                    ) && (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar20 + 0x178) +
                                                  (longlong)sVar16 * 8) + 0x6a8,0x6f),
                         cVar12 != '\0')) goto LAB_140766acb;
              }
              if (((-1 < sVar41) &&
                  ((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3))) &&
                 (-1 < sVar16)) {
                lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
                if (((ulonglong)(longlong)sVar16 <
                     (ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3)
                    ) && (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar20 + 0x178) +
                                                  (longlong)sVar16 * 8) + 0x6a8,0x83),
                         cVar12 != '\0')) goto LAB_140766acb;
              }
            }
          }
        }
        goto LAB_140766ad2;
      }
      lVar20 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar41 * 8);
      if (((ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar16) ||
         (cVar12 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar20 + 0x178) + (longlong)sVar16 * 8)
                                 + 0x6a8,0x90), cVar12 == '\0')) goto LAB_140766943;
LAB_140766acb:
      bVar6 = true;
    }
    if (((sVar41 < 0) || ((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar41)) ||
       (sVar16 < 0)) {
LAB_140766b35:
      cVar12 = '\0';
    }
    else {
      lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
      if ((ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3) <=
          (ulonglong)(longlong)sVar16) goto LAB_140766b35;
      cVar12 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar20 + 0x178) + (longlong)sVar16 * 8) +
                             0x6a8,0x86);
    }
    if (*(int *)(param_1 + 0xb0) != -1) {
      bVar6 = false;
      cVar12 = '\0';
    }
    sVar1 = *(short *)(lVar32 + 4);
    sVar40 = *(short *)(lVar32 + 2);
    if (sVar40 < 0) {
LAB_140766d4a:
      bVar11 = false;
    }
    else {
      if (((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar40) || (sVar1 < 0)) {
LAB_140766bbb:
        if (-1 < sVar40) {
          if (((ulonglong)(longlong)sVar40 < (ulonglong)(lVar43 - lVar21 >> 3)) && (-1 < sVar1)) {
            lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
            if (((ulonglong)(longlong)sVar1 <
                 (ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)) &&
               (cVar13 = FUN_14000d840(*(longlong *)
                                        (*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8) +
                                       0x6a8,0x84), cVar13 != '\0')) goto LAB_140766d43;
          }
          if (-1 < sVar40) {
            if (((ulonglong)(longlong)sVar40 < (ulonglong)(lVar43 - lVar21 >> 3)) && (-1 < sVar1)) {
              lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
              if (((ulonglong)(longlong)sVar1 <
                   (ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3))
                 && (cVar13 = FUN_14000d840(*(longlong *)
                                             (*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8) +
                                            0x6a8,0x6e), cVar13 != '\0')) goto LAB_140766d43;
            }
            if (-1 < sVar40) {
              if (((ulonglong)(longlong)sVar40 < (ulonglong)(lVar43 - lVar21 >> 3)) && (-1 < sVar1))
              {
                lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
                if (((ulonglong)(longlong)sVar1 <
                     (ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)
                    ) && (cVar13 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar32 + 0x178) +
                                                  (longlong)sVar1 * 8) + 0x6a8,0x6f), cVar13 != '\0'
                         )) goto LAB_140766d43;
              }
              if (((-1 < sVar40) &&
                  ((ulonglong)(longlong)sVar40 < (ulonglong)(lVar43 - lVar21 >> 3))) && (-1 < sVar1)
                 ) {
                lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
                if (((ulonglong)(longlong)sVar1 <
                     (ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)
                    ) && (cVar13 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar32 + 0x178) +
                                                  (longlong)sVar1 * 8) + 0x6a8,0x83), cVar13 != '\0'
                         )) goto LAB_140766d43;
              }
            }
          }
        }
        goto LAB_140766d4a;
      }
      lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
      if (((ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar1) ||
         (cVar13 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8)
                                 + 0x6a8,0x90), cVar13 == '\0')) goto LAB_140766bbb;
LAB_140766d43:
      bVar11 = true;
    }
    if (((sVar40 < 0) || ((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar40)) ||
       (sVar1 < 0)) {
LAB_140766dad:
      cVar13 = '\0';
    }
    else {
      lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
      if ((ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3) <=
          (ulonglong)(longlong)sVar1) goto LAB_140766dad;
      cVar13 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8) +
                             0x6a8,0x86);
    }
    if (*(int *)(param_5 + 0xb0) != -1) {
      bVar11 = false;
      cVar13 = '\0';
    }
    if (((sVar41 < 0) || ((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar41)) ||
       (sVar16 < 0)) {
LAB_140766e26:
      local_f8 = '\0';
    }
    else {
      lVar32 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
      if ((ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3) <=
          (ulonglong)(longlong)sVar16) goto LAB_140766e26;
      local_f8 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar32 + 0x178) + (longlong)sVar16 * 8) +
                               0x6a8,0xb);
    }
    if (((sVar40 < 0) || ((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar40)) ||
       (sVar1 < 0)) {
LAB_140766e89:
      cVar14 = '\0';
    }
    else {
      lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
      if ((ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3) <=
          (ulonglong)(longlong)sVar1) goto LAB_140766e89;
      cVar14 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8) +
                             0x6a8,0xb);
    }
    if (((*(int *)(param_1 + 0xd0) < 1) || ((**(byte **)(param_1 + 200) & 0x80) == 0)) &&
       (((*(longlong *)(param_1 + 0x130) == 0 ||
         (lVar32 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x48), lVar32 == 0)) ||
        ((*(longlong *)(lVar32 + 0x130) == 0 &&
         (((*(byte *)(lVar32 + 0x54) & 1) != 0 || ((*(byte *)(lVar32 + 0x50) & 1) == 0)))))))) {
      if (-1 < sVar41) {
        if (((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3)) && (-1 < sVar16)) {
          lVar32 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
          if (((ulonglong)(longlong)sVar16 <
               (ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)) &&
             (cVar15 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar32 + 0x178) + (longlong)sVar16 * 8) + 0x6a8
                                     ,0x9e), cVar15 != '\0')) goto LAB_140766f98;
        }
        if (((-1 < sVar41) && ((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3))) &&
           (-1 < sVar16)) {
          lVar32 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
          if (((ulonglong)(longlong)sVar16 <
               (ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)) &&
             (cVar15 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar32 + 0x178) + (longlong)sVar16 * 8) + 0x6a8
                                     ,0x8f), cVar15 != '\0')) goto LAB_140766f98;
        }
      }
      bVar10 = true;
    }
    else {
LAB_140766f98:
      bVar10 = false;
    }
    if (((*(int *)(param_5 + 0xd0) < 1) || ((**(byte **)(param_5 + 200) & 0x80) == 0)) &&
       (((*(longlong *)(param_5 + 0x130) == 0 ||
         (lVar32 = *(longlong *)(*(longlong *)(param_5 + 0x130) + 0x48), lVar32 == 0)) ||
        ((*(longlong *)(lVar32 + 0x130) == 0 &&
         (((*(byte *)(lVar32 + 0x54) & 1) != 0 || ((*(byte *)(lVar32 + 0x50) & 1) == 0)))))))) {
      if (-1 < sVar40) {
        if (((ulonglong)(longlong)sVar40 < (ulonglong)(lVar43 - lVar21 >> 3)) && (-1 < sVar1)) {
          lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
          if (((ulonglong)(longlong)sVar1 <
               (ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)) &&
             (cVar15 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8) + 0x6a8,
                                     0x9e), cVar15 != '\0')) goto LAB_1407670b2;
        }
        if (((-1 < sVar40) && ((ulonglong)(longlong)sVar40 < (ulonglong)(lVar43 - lVar21 >> 3))) &&
           (-1 < sVar1)) {
          lVar32 = *(longlong *)(lVar21 + (longlong)sVar40 * 8);
          if (((ulonglong)(longlong)sVar1 <
               (ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)) &&
             (cVar15 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8) + 0x6a8,
                                     0x8f), cVar15 != '\0')) goto LAB_1407670b2;
        }
      }
      bVar7 = true;
    }
    else {
LAB_1407670b2:
      bVar7 = false;
    }
    lVar32 = *(longlong *)(param_1 + 0x130);
    if (((sVar41 < 0) || ((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar41)) ||
       (sVar16 < 0)) {
LAB_140767126:
      if ((lVar32 == 0) ||
         ((*(longlong *)(lVar32 + 0x48) == 0 ||
          (*(longlong *)(*(longlong *)(lVar32 + 0x48) + 0x130) == 0)))) {
        if ((-1 < sVar41) &&
           (((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3) && (-1 < sVar16)))) {
          lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
          if (((ulonglong)(longlong)sVar16 <
               (ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3)) &&
             (cVar15 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar20 + 0x178) + (longlong)sVar16 * 8) + 0x6a8
                                     ,0x3a), cVar15 != '\0')) {
            if (((lVar32 == 0) || (*(longlong *)(lVar32 + 0x48) == 0)) ||
               ((*(uint *)(*(longlong *)(lVar32 + 0x48) + 0x4c) & 0x2000000) == 0))
            goto LAB_1407671e0;
            goto LAB_1407671e5;
          }
        }
        if ((((lVar32 != 0) && (lVar32 = *(longlong *)(lVar32 + 0x48), lVar32 != 0)) &&
            ((*(uint *)(lVar32 + 0x4c) & 0x2000000) == 0)) &&
           ((*(uint *)(lVar32 + 0x48) & 0x2000000) != 0)) goto LAB_1407671e0;
      }
LAB_1407671e5:
      bVar8 = true;
    }
    else {
      lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
      if (((ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar16) ||
         (cVar15 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar20 + 0x178) + (longlong)sVar16 * 8)
                                 + 0x6a8,0x22), cVar15 == '\0')) goto LAB_140767126;
LAB_1407671e0:
      bVar8 = false;
    }
    if (*(int *)(param_1 + 0xb0) == -1) {
      plVar36 = *(longlong **)(param_1 + 0x120);
      for (plVar22 = *(longlong **)(param_1 + 0x118); plVar22 < plVar36; plVar22 = plVar22 + 1) {
        puVar33 = (undefined8 *)*plVar22;
        sVar16 = (**(code **)*puVar33)();
        lVar21 = DAT_141d6dd50;
        lVar43 = DAT_141d6dd58;
        if (sVar16 == 0xd) {
          if (*(short *)((longlong)puVar33 + 0xc) != 0) {
            bVar8 = false;
          }
          break;
        }
      }
    }
    else {
      bVar8 = false;
    }
    lVar32 = *(longlong *)(param_5 + 0x130);
    sVar16 = *(short *)(param_5 + 4);
    sVar41 = *(short *)(param_5 + 2);
    if (((sVar41 < 0) || ((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar41)) ||
       (sVar16 < 0)) {
LAB_1407672d3:
      if ((lVar32 == 0) ||
         ((*(longlong *)(lVar32 + 0x48) == 0 ||
          (*(longlong *)(*(longlong *)(lVar32 + 0x48) + 0x130) == 0)))) {
        if ((-1 < sVar41) &&
           (((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3) && (-1 < sVar16)))) {
          lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
          if (((ulonglong)(longlong)sVar16 <
               (ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3)) &&
             (cVar15 = FUN_14000d840(*(longlong *)
                                      (*(longlong *)(lVar20 + 0x178) + (longlong)sVar16 * 8) + 0x6a8
                                     ,0x3a), cVar15 != '\0')) {
            if (((lVar32 == 0) || (*(longlong *)(lVar32 + 0x48) == 0)) ||
               ((*(uint *)(*(longlong *)(lVar32 + 0x48) + 0x4c) & 0x2000000) == 0))
            goto LAB_14076738c;
            goto LAB_140767391;
          }
        }
        if ((((lVar32 != 0) && (lVar32 = *(longlong *)(lVar32 + 0x48), lVar32 != 0)) &&
            ((*(uint *)(lVar32 + 0x4c) & 0x2000000) == 0)) &&
           ((*(uint *)(lVar32 + 0x48) & 0x2000000) != 0)) goto LAB_14076738c;
      }
LAB_140767391:
      bVar9 = true;
    }
    else {
      lVar20 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
      if (((ulonglong)(*(longlong *)(lVar20 + 0x180) - *(longlong *)(lVar20 + 0x178) >> 3) <=
           (ulonglong)(longlong)sVar16) ||
         (cVar15 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar20 + 0x178) + (longlong)sVar16 * 8)
                                 + 0x6a8,0x22), cVar15 == '\0')) goto LAB_1407672d3;
LAB_14076738c:
      bVar9 = false;
    }
    if (*(int *)(param_5 + 0xb0) == -1) {
      plVar36 = *(longlong **)(param_5 + 0x120);
      for (plVar22 = *(longlong **)(param_5 + 0x118); plVar22 < plVar36; plVar22 = plVar22 + 1) {
        puVar33 = (undefined8 *)*plVar22;
        sVar16 = (**(code **)*puVar33)();
        lVar21 = DAT_141d6dd50;
        lVar43 = DAT_141d6dd58;
        if (sVar16 == 0xd) {
          if (*(short *)((longlong)puVar33 + 0xc) != 0) {
            bVar9 = false;
          }
          break;
        }
      }
    }
    else {
      bVar9 = false;
    }
    iVar29 = 0;
    if (local_f8 == '\0') {
      if (cVar14 == '\0') {
        if (cVar12 == '\0') {
          if (cVar13 == '\0') {
            if ((bVar6) || (bVar11)) {
              iVar29 = 0x15;
              if (*(short *)(param_1 + 2) == *(short *)(param_5 + 2)) {
                iVar29 = 0x12;
              }
              param_2[4] = iVar29;
              goto LAB_1407679db;
            }
            if (!bVar8) {
              if (bVar9) {
                bVar6 = false;
                iVar27 = *(int *)(param_1 + 0xb0);
                if (((iVar27 != -1) && (lVar32 = DAT_141c53720 - DAT_141c53718 >> 3, lVar32 != 0))
                   && (iVar18 = (int)lVar32 + -1, -1 < iVar18)) {
                  do {
                    iVar28 = iVar18 + iVar29 >> 1;
                    lVar32 = *(longlong *)(DAT_141c53718 + (longlong)iVar28 * 8);
                    if (*(int *)(lVar32 + 4) == iVar27) {
                      if ((lVar32 != 0) && (5 < *(int *)(*(longlong *)(lVar32 + 8) + 0x3a8))) {
                        bVar6 = false;
                        if ((*(byte *)(*(longlong *)(*(longlong *)(lVar32 + 8) + 0x3a0) + 5) & 1) !=
                            0) {
                          bVar6 = true;
                        }
                      }
                      break;
                    }
                    if (iVar27 < *(int *)(lVar32 + 4)) {
                      iVar18 = iVar28 + -1;
                    }
                    else {
                      iVar29 = iVar28 + 1;
                    }
                  } while (iVar29 <= iVar18);
                }
                sVar16 = *(short *)(param_5 + 2);
                sVar41 = *(short *)(param_1 + 2);
                if (sVar41 == sVar16) {
                  param_2[4] = 0x12;
                }
                else {
                  sVar1 = *(short *)(param_1 + 4);
                  if (((sVar41 < 0) ||
                      ((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar41)) ||
                     (sVar1 < 0)) {
LAB_14076782b:
                    if (bVar6) goto LAB_140767902;
                    if (-1 < sVar41) {
                      if (((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3)) &&
                         (-1 < sVar1)) {
                        lVar32 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
                        if (((ulonglong)(longlong)sVar1 <
                             (ulonglong)
                             (*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3))
                           && (cVar12 = FUN_14000d840(*(longlong *)
                                                       (*(longlong *)(lVar32 + 0x178) +
                                                       (longlong)sVar1 * 8) + 0x6a8,0x5e),
                              cVar12 != '\0')) goto LAB_140767902;
                      }
                      if (((-1 < sVar41) &&
                          ((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3))) &&
                         (-1 < sVar1)) {
                        lVar32 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
                        if (((ulonglong)(longlong)sVar1 <
                             (ulonglong)
                             (*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3))
                           && (cVar12 = FUN_14000d840(*(longlong *)
                                                       (*(longlong *)(lVar32 + 0x178) +
                                                       (longlong)sVar1 * 8) + 0x6a8,0x5f),
                              cVar12 != '\0')) goto LAB_140767902;
                      }
                    }
                  }
                  else {
                    lVar32 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
                    if (((ulonglong)
                         (*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3) <=
                         (ulonglong)(longlong)sVar1) ||
                       (cVar12 = FUN_14000d840(*(longlong *)
                                                (*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8
                                                ) + 0x6a8,9), cVar12 == '\0')) goto LAB_14076782b;
LAB_140767902:
                    sVar41 = *(short *)(param_5 + 4);
                    if ((-1 < sVar16) &&
                       (((ulonglong)(longlong)sVar16 < (ulonglong)(lVar43 - lVar21 >> 3) &&
                        (-1 < sVar41)))) {
                      lVar21 = *(longlong *)(lVar21 + (longlong)sVar16 * 8);
                      if (((ulonglong)(longlong)sVar41 <
                           (ulonglong)
                           (*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3)) &&
                         (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar21 + 0x178) +
                                                  (longlong)sVar41 * 8) + 0x6a8,0x60),
                         cVar12 != '\0')) {
                        param_2[4] = 0x14;
                        goto LAB_1407679db;
                      }
                    }
                  }
                  param_2[4] = 0x15;
                }
              }
              goto LAB_1407679db;
            }
            bVar6 = false;
            iVar27 = *(int *)(param_5 + 0xb0);
            if (((iVar27 != -1) && (lVar32 = DAT_141c53720 - DAT_141c53718 >> 3, lVar32 != 0)) &&
               (iVar18 = (int)lVar32 + -1, -1 < iVar18)) {
              do {
                iVar28 = iVar18 + iVar29 >> 1;
                lVar32 = *(longlong *)(DAT_141c53718 + (longlong)iVar28 * 8);
                if (*(int *)(lVar32 + 4) == iVar27) {
                  if ((lVar32 != 0) && (5 < *(int *)(*(longlong *)(lVar32 + 8) + 0x3a8))) {
                    bVar6 = false;
                    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar32 + 8) + 0x3a0) + 5) & 1) != 0)
                    {
                      bVar6 = true;
                    }
                  }
                  break;
                }
                if (iVar27 < *(int *)(lVar32 + 4)) {
                  iVar18 = iVar28 + -1;
                }
                else {
                  iVar29 = iVar28 + 1;
                }
              } while (iVar29 <= iVar18);
            }
            sVar16 = *(short *)(param_5 + 2);
            sVar41 = *(short *)(param_1 + 2);
            if (sVar41 == sVar16) {
              param_2[4] = 0x12;
              goto LAB_1407679db;
            }
            sVar1 = *(short *)(param_5 + 4);
            if (((sVar16 < 0) || ((ulonglong)(lVar43 - lVar21 >> 3) <= (ulonglong)(longlong)sVar16))
               || (sVar1 < 0)) {
LAB_1407675ad:
              if (bVar6) goto LAB_140767684;
              if (-1 < sVar16) {
                if (((ulonglong)(longlong)sVar16 < (ulonglong)(lVar43 - lVar21 >> 3)) &&
                   (-1 < sVar1)) {
                  lVar32 = *(longlong *)(lVar21 + (longlong)sVar16 * 8);
                  if (((ulonglong)(longlong)sVar1 <
                       (ulonglong)
                       (*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)) &&
                     (cVar12 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8)
                                             + 0x6a8,0x5e), cVar12 != '\0')) goto LAB_140767684;
                }
                if (((-1 < sVar16) &&
                    ((ulonglong)(longlong)sVar16 < (ulonglong)(lVar43 - lVar21 >> 3))) &&
                   (-1 < sVar1)) {
                  lVar32 = *(longlong *)(lVar21 + (longlong)sVar16 * 8);
                  if (((ulonglong)(longlong)sVar1 <
                       (ulonglong)
                       (*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)) &&
                     (cVar12 = FUN_14000d840(*(longlong *)
                                              (*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8)
                                             + 0x6a8,0x5f), cVar12 != '\0')) goto LAB_140767684;
                }
              }
            }
            else {
              lVar32 = *(longlong *)(lVar21 + (longlong)sVar16 * 8);
              if (((ulonglong)(*(longlong *)(lVar32 + 0x180) - *(longlong *)(lVar32 + 0x178) >> 3)
                   <= (ulonglong)(longlong)sVar1) ||
                 (cVar12 = FUN_14000d840(*(longlong *)
                                          (*(longlong *)(lVar32 + 0x178) + (longlong)sVar1 * 8) +
                                         0x6a8,9), cVar12 == '\0')) goto LAB_1407675ad;
LAB_140767684:
              sVar16 = *(short *)(param_1 + 4);
              if ((-1 < sVar41) &&
                 (((ulonglong)(longlong)sVar41 < (ulonglong)(lVar43 - lVar21 >> 3) && (-1 < sVar16))
                 )) {
                lVar21 = *(longlong *)(lVar21 + (longlong)sVar41 * 8);
                if (((ulonglong)(longlong)sVar16 <
                     (ulonglong)(*(longlong *)(lVar21 + 0x180) - *(longlong *)(lVar21 + 0x178) >> 3)
                    ) && (cVar12 = FUN_14000d840(*(longlong *)
                                                  (*(longlong *)(lVar21 + 0x178) +
                                                  (longlong)sVar16 * 8) + 0x6a8,0x60),
                         cVar12 != '\0')) {
                  param_2[4] = 0x14;
                  goto LAB_1407679db;
                }
              }
            }
            param_2[4] = 0x13;
            goto LAB_1407679db;
          }
        }
        else if (cVar13 != '\0') {
          param_2[4] = 0x12;
          goto LAB_1407679db;
        }
        param_2[4] = 0x15;
      }
      else {
        iVar29 = 0xf;
        if (bVar10) {
          iVar29 = 0x11;
        }
LAB_1407679cf:
        param_2[4] = iVar29;
      }
    }
    else {
      if ((cVar14 != '\0') || (!bVar7)) {
        iVar29 = 0xf;
        goto LAB_1407679cf;
      }
      param_2[4] = 0x10;
    }
  }
LAB_1407679db:
  if (0 < param_2[0x18]) {
    param_2[4] = 0x1e;
  }
  if (lVar19 != 0) {
    plVar36 = *(longlong **)(param_1 + 0x120);
    for (plVar22 = *(longlong **)(param_1 + 0x118); plVar22 < plVar36; plVar22 = plVar22 + 1) {
      puVar33 = (undefined8 *)*plVar22;
      if (*(int *)(puVar33 + 1) == *(int *)(lVar19 + 0xe0)) {
        uVar17 = (**(code **)*puVar33)(puVar33);
        switch(uVar17) {
        case 5:
          param_2[4] = 0x1b;
          break;
        case 6:
          param_2[4] = 0x17;
          break;
        case 8:
        case 9:
        case 0xb:
        case 0xc:
          if (((uint)param_2[4] < 0x22) &&
             ((0x200400001U >> ((longlong)param_2[4] & 0x3fU) & 1) != 0)) {
            sVar16 = (**(code **)*puVar33)(puVar33);
            if (sVar16 == 8) {
              param_2[4] = 0x18;
            }
            else if (sVar16 == 9) {
              param_2[4] = 0x19;
            }
            else if (sVar16 == 0xb) {
              param_2[4] = 0x1f;
            }
            else if (sVar16 == 0xc) {
              param_2[4] = 0x20;
            }
          }
          break;
        case 10:
          iVar27 = 0;
          iVar29 = (int)(DAT_141d69318 - DAT_141d69310 >> 3) + -1;
          if (-1 < iVar29) {
            do {
              iVar18 = iVar29 + iVar27 >> 1;
              piVar31 = *(int **)(DAT_141d69310 + (longlong)iVar18 * 8);
              if (*piVar31 == *(int *)(puVar33 + 2)) {
                if (((piVar31 != (int *)0x0) &&
                    (*(int *)(**(longlong **)(piVar31 + 10) + 0x18) == 0)) &&
                   (**(int **)(**(longlong **)(piVar31 + 10) + 0x10) == 0x27)) {
                  param_2[4] = 0x18;
                  *param_2 = *param_2 + 15000;
                }
                break;
              }
              if (*(int *)(puVar33 + 2) < *piVar31) {
                iVar29 = iVar18 + -1;
              }
              else {
                iVar27 = iVar18 + 1;
              }
            } while (iVar27 <= iVar29);
          }
          if (((uint)param_2[4] < 0x22) &&
             ((0x200400001U >> ((longlong)param_2[4] & 0x3fU) & 1) != 0)) {
            param_2[4] = 0x1a;
          }
        }
      }
    }
  }
  switch(param_2[4]) {
  case 0x16:
    sVar16 = FUN_1407ba490(param_1);
    if ((int)sVar16 - 3U < 0xe) {
      *param_2 = *param_2 + 5;
    }
    break;
  case 0x18:
  case 0x19:
  case 0x1f:
  case 0x20:
    *param_2 = *param_2 + 0x32;
    break;
  case 0x1a:
    *param_2 = *param_2 + 0x19;
    break;
  case 0x1b:
    *param_2 = *param_2 + 0x96;
  }
  if (0 < param_2[0x16]) {
    *param_2 = *param_2 + -5;
  }
  if (0 < param_2[0x22]) {
    *param_2 = *param_2 + -5;
  }
  iVar29 = param_2[4];
  if ((iVar29 == 2) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar29 == 0x1c) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar29 == 0x1d) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar29 == 0x22) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar29 == 0x1e) && (-0x32 < *param_2)) {
    *param_2 = -0x32;
  }
  if ((iVar29 == 1) || ((0x17 < iVar29 && ((iVar29 < 0x1c || (iVar29 - 0x1fU < 2)))))) {
    param_2[5] = param_2[5] | 1;
  }
  if (iVar29 != 0x16) {
    return;
  }
  if (*(longlong *)(param_1 + 0x130) == 0) {
    return;
  }
  lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18);
  if (lVar21 == 0) {
    return;
  }
  sVar16 = *(short *)(lVar21 + 0xd4);
  if (*(longlong *)(lVar21 + 0x158) != 0) {
    sVar16 = sVar16 + *(short *)(*(longlong *)(lVar21 + 0x158) + 0x54);
    if (sVar16 < 0) {
      return;
    }
    if (100 < sVar16) goto LAB_140767cbe;
  }
  if (sVar16 < 0x3d) {
    return;
  }
LAB_140767cbe:
  param_2[5] = param_2[5] | 1;
  return;
code_r0x000140765b04:
  if (*(int *)(lVar21 + 4) < *piVar31) {
    iVar27 = iVar18 + -1;
  }
  else {
    iVar29 = iVar18 + 1;
  }
  if (iVar27 < iVar29) goto LAB_140765c24;
  goto LAB_140765af0;
code_r0x000140765d14:
  if (*piVar31 < *piVar25) {
    iVar27 = iVar18 + -1;
  }
  else {
    iVar29 = iVar18 + 1;
  }
  if (iVar27 < iVar29) goto LAB_140765e32;
  goto LAB_140765d00;
LAB_1407667df:
  if (*(longlong **)(lVar21 + 0x430) <= plVar22) goto switchD_14076673d_caseD_3c;
  lVar43 = *plVar22;
  if ((((*(byte *)(lVar43 + 0x18) & 1) != 0) && (*(int *)(lVar43 + 0xc) == 0)) &&
     (*(int *)(lVar43 + 0x10) == -1)) {
    if ((*(int *)(lVar43 + 4) != -1) && (cVar12 = FUN_1407b9840(lVar19), cVar12 != '\0')) {
      param_2[0x12] = 0;
    }
    goto switchD_14076673d_caseD_3c;
  }
  plVar22 = plVar22 + 1;
  goto LAB_1407667df;
}

