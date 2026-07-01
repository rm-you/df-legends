// FUN_140d38b10 @ 140d38b10
// callees:
//   -> 1400be580 FUN_1400be580
//   -> 1400be650 FUN_1400be650
//   -> 140002020 FUN_140002020
//   -> 140d372e0 FUN_140d372e0
//   -> 140071310 FUN_140071310
//   -> 1401069c0 FUN_1401069c0
//   -> EXTERNAL:000000e1 memmove
//   -> EXTERNAL:00000070 MessageBoxA
//   -> EXTERNAL:000000ee exit
//   -> 1405c7730 FUN_1405c7730
//   -> 1401b36e0 FUN_1401b36e0
//   -> 1405c9340 FUN_1405c9340
//   -> 140050410 FUN_140050410
//   -> 1405c9e20 FUN_1405c9e20
//   -> 1405cbed0 FUN_1405cbed0
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 1405ca040 FUN_1405ca040
//   -> 1405cd6c0 FUN_1405cd6c0
//   -> 14004ffe0 FUN_14004ffe0
//   -> 1400030c0 FUN_1400030c0
//   -> 1400025a0 FUN_1400025a0
//   -> 140106910 FUN_140106910
//   -> 140050100 FUN_140050100
//   -> 14000c1a0 FUN_14000c1a0
//   -> 1405cc090 FUN_1405cc090
//   -> 140050390 FUN_140050390
//   -> 140050380 FUN_140050380
//   -> 140d1ed30 FUN_140d1ed30
//   -> 1405cbc10 FUN_1405cbc10
//   -> 1405cbfb0 FUN_1405cbfb0
//   -> 140286c80 FUN_140286c80
//   -> 140050070 FUN_140050070
//   -> 140289880 FUN_140289880
//   -> 140d1f990 FUN_140d1f990
//   -> 1405d2860 FUN_1405d2860
//   -> 140286f40 FUN_140286f40
//   -> 140281b30 FUN_140281b30
//   -> 1401b83c0 FUN_1401b83c0
//   -> 1405c8290 FUN_1405c8290
//   -> 140361540 FUN_140361540
//   -> 1405c84a0 FUN_1405c84a0
//   -> 1405cc2e0 FUN_1405cc2e0
//   -> 1405cc3c0 FUN_1405cc3c0
//   -> 14089ba00 FUN_14089ba00
//   -> 140362e00 FUN_140362e00
//   -> 1408b0fb0 FUN_1408b0fb0
//   -> 1408dac80 FUN_1408dac80
//   -> 1408dac10 FUN_1408dac10
//   -> 1402b3820 FUN_1402b3820
//   -> 140845860 FUN_140845860
//   -> 1401b5700 FUN_1401b5700
//   -> 140295990 FUN_140295990
//   -> 1404c5cb0 FUN_1404c5cb0
//   -> 140a36800 FUN_140a36800
//   -> 1407dae60 FUN_1407dae60
//   -> 1408b94c0 FUN_1408b94c0
//   -> 1402803e0 FUN_1402803e0
//   -> 1408a5730 FUN_1408a5730
//   -> 140051de0 FUN_140051de0
//   -> 1408d1d80 FUN_1408d1d80
//   -> 1408da030 FUN_1408da030
//   -> 14083ffe0 FUN_14083ffe0
//   -> 14028cc90 FUN_14028cc90
//   -> 1404bd320 FUN_1404bd320
//   -> 140a33c20 FUN_140a33c20
//   -> 1407da930 FUN_1407da930
//   -> 140a32af0 FUN_140a32af0
//   -> 140d1fb00 FUN_140d1fb00
//   -> 1400abaf0 FUN_1400abaf0
//   -> 140db7650 FUN_140db7650
//   -> 1406ef7a0 FUN_1406ef7a0
//   -> 14000c260 FUN_14000c260
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d38b10(longlong param_1,ulonglong *param_2)

{
  void *pvVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  LPCSTR pCVar7;
  longlong *plVar8;
  void *pvVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  undefined4 uVar19;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  int local_e8;
  longlong *local_e0;
  longlong *plStack_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  CHAR local_a8;
  undefined7 uStack_a7;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_b0 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_128;
  uVar5 = FUN_1400be580(&local_a8,"data/save/",param_1 + 0x26b7f8);
  FUN_1400be650(local_68,uVar5,"/raw/");
  if (0xf < local_90) {
    FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
  }
  local_90 = 0xf;
  plVar18 = (longlong *)0x0;
  local_98 = 0;
  local_a8 = '\0';
  uVar17 = *(uint *)(param_1 + 0x26b81c);
  if (0x28 < uVar17) goto LAB_140d3b43f;
  switch(uVar17) {
  case 0:
    FUN_140d372e0(param_1,local_68);
    if (*(int *)(param_1 + 0x26b828) != 0x12) break;
    *(undefined4 *)(param_1 + 0x26b81c) = 1;
    goto LAB_140d3b438;
  case 1:
    local_e0 = (longlong *)0x0;
    plStack_d8 = (longlong *)0x0;
    local_c8 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    local_e8 = 0;
    plVar6 = (longlong *)0x0;
    if ((longlong)(param_2[0x49] - param_2[0x48]) >> 3 != 0) {
      local_b8 = 0;
      do {
        local_c0 = *(longlong *)(local_b8 + param_2[0x48]);
        iVar4 = (int)(*(longlong *)(param_1 + 0x11a760) - *(longlong *)(param_1 + 0x11a758) >> 3) +
                -1;
        if (-1 < iVar4) {
          lVar14 = (longlong)iVar4;
          puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x11a758) + lVar14 * 8);
          do {
            iVar3 = FUN_140071310(*puVar11,local_c0);
            if (iVar3 == 0) goto LAB_140d38c87;
            iVar4 = iVar4 + -1;
            puVar11 = puVar11 + -1;
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
        }
        iVar4 = -1;
LAB_140d38c87:
        if (iVar4 == -1) {
          FUN_1400be580(&local_a8,"Missing Material Template: ",
                        *(undefined8 *)(param_2[0x48] + (longlong)local_e8 * 8));
          pCVar7 = &local_a8;
          if (0xf < local_90) {
            pCVar7 = (LPCSTR)CONCAT71(uStack_a7,local_a8);
          }
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x11a758) + (longlong)iVar4 * 8);
        if ((plVar10 < plVar6) && (local_e0 <= plVar10)) {
          lVar14 = (longlong)plVar10 - (longlong)local_e0;
          if (plVar6 == local_c8) {
            FUN_1401069c0(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = local_e0[lVar14 >> 3];
LAB_140d38d0c:
            *plVar6 = lVar14;
          }
        }
        else {
          if (plVar6 == local_c8) {
            FUN_1401069c0(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = *plVar10;
            goto LAB_140d38d0c;
          }
        }
        plVar6 = plVar6 + 1;
        pvVar9 = (void *)(*(longlong *)(param_1 + 0x11a758) + (longlong)iVar4 * 8);
        pvVar1 = (void *)((longlong)pvVar9 + 8);
        plStack_d8 = plVar6;
        memmove(pvVar9,pvVar1,*(longlong *)(param_1 + 0x11a760) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x11a760) = *(longlong *)(param_1 + 0x11a760) + -8;
        local_e8 = local_e8 + 1;
        local_b8 = local_b8 + 8;
      } while ((ulonglong)(longlong)local_e8 <
               (ulonglong)((longlong)(param_2[0x49] - param_2[0x48]) >> 3));
    }
    plVar10 = (longlong *)(param_1 + 0x11a758);
    FUN_1405c7730(plVar10);
    plVar16 = local_e0;
    uVar13 = (longlong)plVar6 - (longlong)local_e0 >> 3;
    plVar6 = local_e0;
    if (uVar13 != 0) {
      do {
        if ((plVar6 < *(longlong **)(param_1 + 0x11a760)) &&
           (plVar15 = (longlong *)*plVar10, plVar15 <= plVar6)) {
          if (*(longlong *)(param_1 + 0x11a760) == *(longlong *)(param_1 + 0x11a768)) {
            FUN_1401069c0(plVar10);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a760);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *(longlong *)(*plVar10 + ((longlong)plVar6 - (longlong)plVar15 >> 3) * 8);
LAB_140d38e4a:
            *plVar8 = lVar14;
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x11a760) == *(longlong *)(param_1 + 0x11a768)) {
            FUN_1401069c0(plVar10);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a760);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *plVar6;
            goto LAB_140d38e4a;
          }
        }
        *(longlong *)(param_1 + 0x11a760) = *(longlong *)(param_1 + 0x11a760) + 8;
        uVar17 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar17;
        plVar6 = plVar6 + 1;
      } while ((ulonglong)(longlong)(int)uVar17 < uVar13);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 2;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    if (plVar16 != (longlong *)0x0) {
      FUN_140002020(plVar16,(longlong)local_c8 - (longlong)plVar16 >> 3,8);
    }
    break;
  case 2:
    local_e0 = (longlong *)0x0;
    plStack_d8 = (longlong *)0x0;
    local_c8 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    local_e8 = 0;
    plVar6 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
    if ((longlong)(param_2[0x1c] - param_2[0x1b]) >> 3 != 0) {
      local_c0 = 0;
      plVar16 = plVar18;
      do {
        iVar4 = FUN_1401b36e0((longlong *)(param_1 + 0x11a770),
                              *(undefined8 *)(local_c0 + param_2[0x1b]));
        if (iVar4 == -1) {
          FUN_1400be580(&local_a8,"Missing Inorganic Gloss: ",
                        *(undefined8 *)(param_2[0x1b] + (longlong)local_e8 * 8));
          pCVar7 = &local_a8;
          if (0xf < local_90) {
            pCVar7 = (LPCSTR)CONCAT71(uStack_a7,local_a8);
          }
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_b8 = (longlong)iVar4 * 8;
        plVar15 = (longlong *)(*(longlong *)(param_1 + 0x11a770) + local_b8);
        if ((plVar15 < plVar6) && (plVar10 <= plVar15)) {
          lVar14 = (longlong)plVar15 - (longlong)plVar10;
          if (plVar6 == plVar16) {
            FUN_1401069c0(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
            plVar10 = local_e0;
            plVar16 = local_d0;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = plVar10[lVar14 >> 3];
LAB_140d38f8c:
            *plVar6 = lVar14;
          }
        }
        else {
          if (plVar6 == plVar16) {
            FUN_1401069c0(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
            plVar10 = local_e0;
            plVar16 = local_d0;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = *plVar15;
            goto LAB_140d38f8c;
          }
        }
        plVar6 = plVar6 + 1;
        pvVar9 = (void *)(local_b8 + *(longlong *)(param_1 + 0x11a770));
        pvVar1 = (void *)((longlong)pvVar9 + 8);
        plStack_d8 = plVar6;
        memmove(pvVar9,pvVar1,*(longlong *)(param_1 + 0x11a778) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x11a778) = *(longlong *)(param_1 + 0x11a778) + -8;
        local_e8 = local_e8 + 1;
        local_c0 = local_c0 + 8;
      } while ((ulonglong)(longlong)local_e8 <
               (ulonglong)((longlong)(param_2[0x1c] - param_2[0x1b]) >> 3));
    }
    plVar16 = (longlong *)(param_1 + 0x11a770);
    FUN_1405c9340(plVar16);
    uVar13 = (longlong)plVar6 - (longlong)plVar10 >> 3;
    plVar6 = plVar10;
    if (uVar13 != 0) {
      do {
        if ((plVar6 < *(longlong **)(param_1 + 0x11a778)) &&
           (plVar15 = (longlong *)*plVar16, plVar15 <= plVar6)) {
          if (*(longlong *)(param_1 + 0x11a778) == *(longlong *)(param_1 + 0x11a780)) {
            FUN_1401069c0(plVar16);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a778);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *(longlong *)(*plVar16 + ((longlong)plVar6 - (longlong)plVar15 >> 3) * 8);
LAB_140d390ba:
            *plVar8 = lVar14;
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x11a778) == *(longlong *)(param_1 + 0x11a780)) {
            FUN_1401069c0(plVar16);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a778);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *plVar6;
            goto LAB_140d390ba;
          }
        }
        *(longlong *)(param_1 + 0x11a778) = *(longlong *)(param_1 + 0x11a778) + 8;
        uVar17 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar17;
        plVar6 = plVar6 + 1;
      } while ((ulonglong)(longlong)(int)uVar17 < uVar13);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 3;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    if (plVar10 != (longlong *)0x0) {
      FUN_140002020(plVar10,(longlong)local_c8 - (longlong)plVar10 >> 3,8);
    }
    break;
  case 3:
    local_e0 = (longlong *)0x0;
    plStack_d8 = (longlong *)0x0;
    local_c8 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    local_e8 = 0;
    plVar6 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
    if ((longlong)(param_2[0x1f] - param_2[0x1e]) >> 3 != 0) {
      local_c0 = 0;
      do {
        local_b8 = *(longlong *)(local_c0 + param_2[0x1e]);
        lVar14 = *(longlong *)(param_1 + 0x11a7a0);
        iVar4 = (int)(*(longlong *)(param_1 + 0x11a7a8) - lVar14 >> 3);
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 < 0) {
            iVar4 = -1;
            break;
          }
          iVar3 = FUN_140071310(*(undefined8 *)(lVar14 + (longlong)iVar4 * 8),local_b8);
        } while (iVar3 != 0);
        if ((short)iVar4 == -1) {
          FUN_1400be580(&local_a8,"Missing Plant Gloss: ",
                        *(undefined8 *)(param_2[0x1e] + (longlong)local_e8 * 8));
          pCVar7 = &local_a8;
          if (0xf < local_90) {
            pCVar7 = (LPCSTR)CONCAT71(uStack_a7,local_a8);
          }
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        lVar14 = (longlong)(short)iVar4 * 8;
        plVar16 = (longlong *)(*(longlong *)(param_1 + 0x11a7a0) + lVar14);
        if ((plVar16 < plVar6) && (plVar10 <= plVar16)) {
          lVar12 = (longlong)plVar16 - (longlong)plVar10;
          if (plVar6 == local_c8) {
            FUN_140050410(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
            plVar10 = local_e0;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar12 = plVar10[lVar12 >> 3];
LAB_140d39223:
            *plVar6 = lVar12;
          }
        }
        else {
          if (plVar6 == local_c8) {
            FUN_140050410(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
            plVar10 = local_e0;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar12 = *plVar16;
            goto LAB_140d39223;
          }
        }
        plVar6 = plVar6 + 1;
        pvVar9 = (void *)(*(longlong *)(param_1 + 0x11a7a0) + lVar14);
        pvVar1 = (void *)((longlong)pvVar9 + 8);
        plStack_d8 = plVar6;
        memmove(pvVar9,pvVar1,*(longlong *)(param_1 + 0x11a7a8) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x11a7a8) = *(longlong *)(param_1 + 0x11a7a8) + -8;
        local_e8 = local_e8 + 1;
        local_c0 = local_c0 + 8;
      } while ((ulonglong)(longlong)local_e8 <
               (ulonglong)((longlong)(param_2[0x1f] - param_2[0x1e]) >> 3));
    }
    plVar16 = (longlong *)(param_1 + 0x11a7a0);
    FUN_1405c9e20(plVar16);
    uVar13 = (longlong)plVar6 - (longlong)plVar10 >> 3;
    plVar6 = plVar10;
    if (uVar13 != 0) {
      do {
        if ((plVar6 < *(longlong **)(param_1 + 0x11a7a8)) &&
           (plVar15 = (longlong *)*plVar16, plVar15 <= plVar6)) {
          if (*(longlong *)(param_1 + 0x11a7a8) == *(longlong *)(param_1 + 0x11a7b0)) {
            FUN_140050410(plVar16);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a7a8);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *(longlong *)(*plVar16 + ((longlong)plVar6 - (longlong)plVar15 >> 3) * 8);
LAB_140d3935a:
            *plVar8 = lVar14;
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x11a7a8) == *(longlong *)(param_1 + 0x11a7b0)) {
            FUN_140050410(plVar16);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a7a8);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *plVar6;
            goto LAB_140d3935a;
          }
        }
        *(longlong *)(param_1 + 0x11a7a8) = *(longlong *)(param_1 + 0x11a7a8) + 8;
        uVar17 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar17;
        plVar6 = plVar6 + 1;
      } while ((ulonglong)(longlong)(int)uVar17 < uVar13);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 4;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    if (plVar10 != (longlong *)0x0) {
      FUN_140002020(plVar10,(longlong)local_c8 - (longlong)plVar10 >> 3,8);
    }
    break;
  case 4:
    local_e0 = (longlong *)0x0;
    plStack_d8 = (longlong *)0x0;
    local_c8 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    local_e8 = 0;
    plVar6 = (longlong *)0x0;
    if ((longlong)(param_2[0x4c] - param_2[0x4b]) >> 3 != 0) {
      local_c0 = 0;
      do {
        local_b8 = *(longlong *)(local_c0 + param_2[0x4b]);
        iVar4 = (int)(*(longlong *)(param_1 + 0x11a850) - *(longlong *)(param_1 + 0x11a848) >> 3) +
                -1;
        if (-1 < iVar4) {
          lVar14 = (longlong)iVar4;
          puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x11a848) + lVar14 * 8);
          do {
            iVar3 = FUN_140071310(*puVar11,local_b8);
            if (iVar3 == 0) goto LAB_140d39446;
            iVar4 = iVar4 + -1;
            puVar11 = puVar11 + -1;
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
        }
        iVar4 = -1;
LAB_140d39446:
        if (iVar4 == -1) {
          FUN_1400be580(&local_a8,"Missing Tissue Template: ",
                        *(undefined8 *)(param_2[0x4b] + (longlong)local_e8 * 8));
          pCVar7 = &local_a8;
          if (0xf < local_90) {
            pCVar7 = (LPCSTR)CONCAT71(uStack_a7,local_a8);
          }
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x11a848) + (longlong)iVar4 * 8);
        if ((plVar10 < plVar6) && (local_e0 <= plVar10)) {
          lVar14 = (longlong)plVar10 - (longlong)local_e0;
          if (plVar6 == local_c8) {
            FUN_1401069c0(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = local_e0[lVar14 >> 3];
LAB_140d394cb:
            *plVar6 = lVar14;
          }
        }
        else {
          if (plVar6 == local_c8) {
            FUN_1401069c0(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = *plVar10;
            goto LAB_140d394cb;
          }
        }
        plVar6 = plVar6 + 1;
        pvVar9 = (void *)(*(longlong *)(param_1 + 0x11a848) + (longlong)iVar4 * 8);
        pvVar1 = (void *)((longlong)pvVar9 + 8);
        plStack_d8 = plVar6;
        memmove(pvVar9,pvVar1,*(longlong *)(param_1 + 0x11a850) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x11a850) = *(longlong *)(param_1 + 0x11a850) + -8;
        local_e8 = local_e8 + 1;
        local_c0 = local_c0 + 8;
      } while ((ulonglong)(longlong)local_e8 <
               (ulonglong)((longlong)(param_2[0x4c] - param_2[0x4b]) >> 3));
    }
    plVar10 = (longlong *)(param_1 + 0x11a848);
    FUN_1405cbed0(plVar10);
    plVar16 = local_e0;
    uVar13 = (longlong)plVar6 - (longlong)local_e0 >> 3;
    plVar6 = local_e0;
    if (uVar13 != 0) {
      do {
        if ((plVar6 < *(longlong **)(param_1 + 0x11a850)) &&
           (plVar15 = (longlong *)*plVar10, plVar15 <= plVar6)) {
          if (*(longlong *)(param_1 + 0x11a850) == *(longlong *)(param_1 + 0x11a858)) {
            FUN_1401069c0(plVar10);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a850);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *(longlong *)(*plVar10 + ((longlong)plVar6 - (longlong)plVar15 >> 3) * 8);
LAB_140d39601:
            *plVar8 = lVar14;
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x11a850) == *(longlong *)(param_1 + 0x11a858)) {
            FUN_1401069c0(plVar10);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a850);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *plVar6;
            goto LAB_140d39601;
          }
        }
        *(longlong *)(param_1 + 0x11a850) = *(longlong *)(param_1 + 0x11a850) + 8;
        uVar17 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar17;
        plVar6 = plVar6 + 1;
      } while ((ulonglong)(longlong)(int)uVar17 < uVar13);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 5;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    if (plVar16 != (longlong *)0x0) {
      FUN_140002020(plVar16,(longlong)local_c8 - (longlong)plVar16 >> 3,8);
    }
    break;
  case 5:
    local_e0 = (longlong *)0x0;
    plStack_d8 = (longlong *)0x0;
    local_c8 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    local_e8 = 0;
    plVar6 = (longlong *)0x0;
    if ((longlong)(param_2[0x2b] - param_2[0x2a]) >> 3 != 0) {
      local_c0 = 0;
      do {
        local_b8 = *(longlong *)(local_c0 + param_2[0x2a]);
        iVar4 = (int)(*(longlong *)(param_1 + 0x11a950) - *(longlong *)(param_1 + 0x11a948) >> 3) +
                -1;
        if (-1 < iVar4) {
          lVar14 = (longlong)iVar4;
          plVar10 = (longlong *)(*(longlong *)(param_1 + 0x11a948) + lVar14 * 8);
          do {
            iVar3 = FUN_140071310(*plVar10 + 8,local_b8);
            if (iVar3 == 0) goto LAB_140d39702;
            iVar4 = iVar4 + -1;
            plVar10 = plVar10 + -1;
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
        }
        iVar4 = -1;
LAB_140d39702:
        if (iVar4 == -1) {
          local_90 = 0xf;
          local_98 = 0;
          local_a8 = '\0';
          FUN_14000c780(&local_a8,"Missing Item Definition: ",0x19);
          FUN_14000cb40(&local_a8,*(undefined8 *)(param_2[0x2a] + (longlong)local_e8 * 8),0,
                        0xffffffffffffffff);
          FUN_14014a240();
          pCVar7 = &local_a8;
          if (0xf < local_90) {
            pCVar7 = (LPCSTR)CONCAT71(uStack_a7,local_a8);
          }
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x11a948) + (longlong)iVar4 * 8);
        if ((plVar10 < plVar6) && (local_e0 <= plVar10)) {
          lVar14 = (longlong)plVar10 - (longlong)local_e0;
          if (plVar6 == local_c8) {
            FUN_140050410(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = local_e0[lVar14 >> 3];
LAB_140d39787:
            *plVar6 = lVar14;
          }
        }
        else {
          if (plVar6 == local_c8) {
            FUN_140050410(&local_e0);
            local_c8 = local_d0;
            plVar6 = plStack_d8;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = *plVar10;
            goto LAB_140d39787;
          }
        }
        plVar6 = plVar6 + 1;
        pvVar9 = (void *)(*(longlong *)(param_1 + 0x11a948) + (longlong)iVar4 * 8);
        pvVar1 = (void *)((longlong)pvVar9 + 8);
        plStack_d8 = plVar6;
        memmove(pvVar9,pvVar1,*(longlong *)(param_1 + 0x11a950) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x11a950) = *(longlong *)(param_1 + 0x11a950) + -8;
        local_e8 = local_e8 + 1;
        local_c0 = local_c0 + 8;
      } while ((ulonglong)(longlong)local_e8 <
               (ulonglong)((longlong)(param_2[0x2b] - param_2[0x2a]) >> 3));
    }
    plVar10 = (longlong *)(param_1 + 0x11a948);
    FUN_1405ca040(plVar10);
    plVar16 = local_e0;
    *(undefined8 *)(param_1 + 0x11a968) = *(undefined8 *)(param_1 + 0x11a960);
    *(undefined8 *)(param_1 + 0x11a980) = *(undefined8 *)(param_1 + 0x11a978);
    *(undefined8 *)(param_1 + 0x11a998) = *(undefined8 *)(param_1 + 0x11a990);
    *(undefined8 *)(param_1 + 0x11ac38) = *(undefined8 *)(param_1 + 0x11ac30);
    *(undefined8 *)(param_1 + 0x11ac50) = *(undefined8 *)(param_1 + 0x11ac48);
    *(undefined8 *)(param_1 + 0x11ac68) = *(undefined8 *)(param_1 + 0x11ac60);
    *(undefined8 *)(param_1 + 0x11ac80) = *(undefined8 *)(param_1 + 0x11ac78);
    *(undefined8 *)(param_1 + 0x11ac98) = *(undefined8 *)(param_1 + 0x11ac90);
    *(undefined8 *)(param_1 + 0x11acb0) = *(undefined8 *)(param_1 + 0x11aca8);
    *(undefined8 *)(param_1 + 0x11acc8) = *(undefined8 *)(param_1 + 0x11acc0);
    *(undefined8 *)(param_1 + 0x11ace0) = *(undefined8 *)(param_1 + 0x11acd8);
    *(undefined8 *)(param_1 + 0x11acf8) = *(undefined8 *)(param_1 + 0x11acf0);
    *(undefined8 *)(param_1 + 0x11ad10) = *(undefined8 *)(param_1 + 0x11ad08);
    *(undefined8 *)(param_1 + 0x11a9b0) = *(undefined8 *)(param_1 + 0x11a9a8);
    uVar13 = (longlong)plVar6 - (longlong)local_e0 >> 3;
    plVar6 = local_e0;
    if (uVar13 != 0) {
      do {
        if ((plVar6 < *(longlong **)(param_1 + 0x11a950)) &&
           (plVar15 = (longlong *)*plVar10, plVar15 <= plVar6)) {
          if (*(longlong *)(param_1 + 0x11a950) == *(longlong *)(param_1 + 0x11a958)) {
            FUN_140050410(plVar10);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a950);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *(longlong *)(*plVar10 + ((longlong)plVar6 - (longlong)plVar15 >> 3) * 8);
LAB_140d399ba:
            *plVar8 = lVar14;
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x11a950) == *(longlong *)(param_1 + 0x11a958)) {
            FUN_140050410(plVar10);
          }
          plVar8 = *(longlong **)(param_1 + 0x11a950);
          if (plVar8 != (longlong *)0x0) {
            lVar14 = *plVar6;
            goto LAB_140d399ba;
          }
        }
        *(longlong *)(param_1 + 0x11a950) = *(longlong *)(param_1 + 0x11a950) + 8;
        (**(code **)(*(longlong *)*plVar6 + 0x10))();
        uVar17 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar17;
        plVar6 = plVar6 + 1;
      } while ((ulonglong)(longlong)(int)uVar17 < uVar13);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 6;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    if (plVar16 != (longlong *)0x0) {
      FUN_140002020(plVar16,(longlong)local_c8 - (longlong)plVar16 >> 3,8);
    }
    break;
  case 6:
    local_e0 = (longlong *)0x0;
    plStack_d8 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    local_e8 = 0;
    plVar6 = (longlong *)0x0;
    if ((longlong)(param_2[0x2e] - param_2[0x2d]) >> 3 != 0) {
      local_c0 = 0;
      do {
        local_b8 = *(longlong *)(local_c0 + param_2[0x2d]);
        iVar4 = (int)(*(longlong *)(param_1 + 0x124508) - *(longlong *)(param_1 + 0x124500) >> 3) +
                -1;
        if (-1 < iVar4) {
          lVar14 = (longlong)iVar4;
          plVar10 = (longlong *)(*(longlong *)(param_1 + 0x124500) + lVar14 * 8);
          do {
            iVar3 = FUN_140071310(*plVar10 + 8,local_b8);
            if (iVar3 == 0) goto LAB_140d39ab2;
            iVar4 = iVar4 + -1;
            plVar10 = plVar10 + -1;
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
        }
        iVar4 = -1;
LAB_140d39ab2:
        if (iVar4 == -1) {
          local_90 = 0xf;
          local_98 = 0;
          local_a8 = '\0';
          FUN_14000c780(&local_a8,"Missing Building Definition: ",0x1d);
          FUN_14000cb40(&local_a8,*(undefined8 *)(param_2[0x2d] + (longlong)local_e8 * 8),0,
                        0xffffffffffffffff);
          FUN_14014a240();
          pCVar7 = &local_a8;
          if (0xf < local_90) {
            pCVar7 = (LPCSTR)CONCAT71(uStack_a7,local_a8);
          }
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x124500) + (longlong)iVar4 * 8);
        if ((plVar10 < plVar6) && (local_e0 <= plVar10)) {
          lVar14 = (longlong)plVar10 - (longlong)local_e0;
          if (plVar6 == local_d0) {
            FUN_140050410(&local_e0);
            plVar6 = plStack_d8;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = local_e0[lVar14 >> 3];
LAB_140d39b27:
            *plVar6 = lVar14;
          }
        }
        else {
          if (plVar6 == local_d0) {
            FUN_140050410(&local_e0);
            plVar6 = plStack_d8;
          }
          if (plVar6 != (longlong *)0x0) {
            lVar14 = *plVar10;
            goto LAB_140d39b27;
          }
        }
        plVar6 = plVar6 + 1;
        pvVar9 = (void *)(*(longlong *)(param_1 + 0x124500) + (longlong)iVar4 * 8);
        pvVar1 = (void *)((longlong)pvVar9 + 8);
        plStack_d8 = plVar6;
        memmove(pvVar9,pvVar1,*(longlong *)(param_1 + 0x124508) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x124508) = *(longlong *)(param_1 + 0x124508) + -8;
        local_e8 = local_e8 + 1;
        local_c0 = local_c0 + 8;
      } while ((ulonglong)(longlong)local_e8 <
               (ulonglong)((longlong)(param_2[0x2e] - param_2[0x2d]) >> 3));
    }
    FUN_1405cd6c0(param_1 + 0x124500);
    *(undefined4 *)(param_1 + 0x124548) = 0;
    *(undefined8 *)(param_1 + 0x124520) = *(undefined8 *)(param_1 + 0x124518);
    *(undefined8 *)(param_1 + 0x124538) = *(undefined8 *)(param_1 + 0x124530);
    plVar16 = (longlong *)((longlong)plVar6 - (longlong)local_e0 >> 3);
    plVar6 = local_e0;
    plVar10 = plVar18;
    if (plVar16 != (longlong *)0x0) {
      do {
        *(undefined4 *)(*plVar6 + 0x28) = *(undefined4 *)(param_1 + 0x124548);
        *(int *)(param_1 + 0x124548) = *(int *)(param_1 + 0x124548) + 1;
        FUN_14004ffe0(param_1 + 0x124500,local_e0 + (longlong)plVar10);
        (**(code **)(*(longlong *)*plVar6 + 8))();
        uVar17 = (int)plVar18 + 1;
        plVar18 = (longlong *)(ulonglong)uVar17;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(longlong)(int)uVar17;
      } while ((longlong *)(longlong)(int)uVar17 < plVar16);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 7;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_e0);
    break;
  case 7:
    FUN_1400025a0(&local_e0);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x4f] - param_2[0x4e]) >> 3 != 0) {
      do {
        iVar4 = FUN_1401b36e0(param_1 + 0x11a860,*(undefined8 *)(param_2[0x4e] + (longlong)plVar6));
        if (iVar4 == -1) {
          FUN_1400be580(&local_a8,"Missing Body Detail Plan: ",
                        *(undefined8 *)(param_2[0x4e] + (longlong)(int)plVar10 * 8));
          pCVar7 = (LPCSTR)FUN_14000c1a0();
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_140106910(&local_e0,*(longlong *)(param_1 + 0x11a860) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x11a860,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x4f] - param_2[0x4e]) >> 3));
    }
    FUN_1405cc090(param_1 + 0x11a860);
    plVar6 = local_e0;
    plVar16 = (longlong *)((longlong)plStack_d8 - (longlong)local_e0 >> 3);
    plVar10 = plVar18;
    if (plVar16 != (longlong *)0x0) {
      do {
        FUN_140106910(param_1 + 0x11a860,plVar6 + (longlong)plVar18);
        uVar17 = (int)plVar10 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar16);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 8;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_e0);
    break;
  case 8:
    FUN_1400025a0(&local_88);
    FUN_1400025a0(&local_e0);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x22] - param_2[0x21]) >> 3 != 0) {
      do {
        iVar4 = FUN_1401b36e0(param_1 + 0x11a878,*(undefined8 *)(param_2[0x21] + (longlong)plVar6));
        if (iVar4 == -1) {
          FUN_140050390(&local_a8,"Missing Creature Body Definition: ");
          FUN_140050380(&local_a8,*(undefined8 *)(param_2[0x21] + (longlong)(int)plVar10 * 8));
          FUN_14014a240(&local_a8);
          pCVar7 = (LPCSTR)FUN_14000c1a0();
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_140106910(&local_88,*(longlong *)(param_1 + 0x11a878) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x11a878,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x22] - param_2[0x21]) >> 3));
    }
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x25] - param_2[0x24]) >> 3 != 0) {
      do {
        iVar4 = FUN_140d1ed30(param_1 + 0x11a878,*(undefined8 *)(param_2[0x24] + (longlong)plVar6));
        if (iVar4 == -1) {
          MessageBoxA((HWND)0x0,"Missing Creature Body Gloss Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_140106910(&local_e0,*(longlong *)(param_1 + 0x11a890) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x11a890,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x25] - param_2[0x24]) >> 3));
    }
    FUN_1405cbc10(param_1 + 0x11a878);
    plVar16 = (longlong *)(local_80 - local_88 >> 3);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if (plVar16 != (longlong *)0x0) {
      do {
        FUN_140106910(param_1 + 0x11a878,local_88 + (longlong)plVar6 * 8);
        uVar17 = (int)plVar10 + 1;
        plVar6 = (longlong *)(longlong)(int)uVar17;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((longlong *)(longlong)(int)uVar17 < plVar16);
    }
    plVar6 = local_e0;
    plVar16 = (longlong *)((longlong)plStack_d8 - (longlong)local_e0 >> 3);
    plVar10 = plVar18;
    if (plVar16 != (longlong *)0x0) {
      do {
        FUN_140106910(param_1 + 0x11a890,plVar6 + (longlong)plVar18);
        uVar17 = (int)plVar10 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar16);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 9;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_e0);
    FUN_1400030c0(&local_88);
    break;
  case 9:
    FUN_1400025a0(&local_88);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x52] - param_2[0x51]) >> 3 != 0) {
      do {
        iVar4 = FUN_1401b36e0(param_1 + 0x11a8a8,*(undefined8 *)((longlong)plVar6 + param_2[0x51]));
        if (iVar4 == -1) {
          FUN_1400be580(&local_a8,"Missing Creature Variation: ",
                        *(undefined8 *)(param_2[0x51] + (longlong)(int)plVar10 * 8));
          pCVar7 = (LPCSTR)FUN_14000c1a0();
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_140106910(&local_88,*(longlong *)(param_1 + 0x11a8a8) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x11a8a8,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x52] - param_2[0x51]) >> 3));
    }
    FUN_1405cbfb0(param_1 + 0x11a8a8);
    plVar10 = (longlong *)(local_80 - local_88 >> 3);
    plVar6 = plVar18;
    if (plVar10 != (longlong *)0x0) {
      do {
        FUN_140106910(param_1 + 0x11a8a8,local_88 + (longlong)plVar18 * 8);
        uVar17 = (int)plVar6 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar10);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 10;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_88);
    break;
  case 10:
    FUN_1400025a0(&local_88);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x28] - param_2[0x27]) >> 3 != 0) {
      do {
        sVar2 = FUN_140286c80(param_1 + 0x11a8c0,*(undefined8 *)(param_2[0x27] + (longlong)plVar6));
        if (sVar2 == -1) {
          FUN_140050390(&local_a8,"Missing Creature Definition: ");
          FUN_140050380(&local_a8,*(undefined8 *)(param_2[0x27] + (longlong)(int)plVar10 * 8));
          FUN_14014a240(&local_a8);
          pCVar7 = (LPCSTR)FUN_14000c1a0();
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_140050070(&local_88,*(longlong *)(param_1 + 0x11a8e0) + (longlong)sVar2 * 8);
        FUN_140050100(param_1 + 0x11a8e0,(longlong)sVar2);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x28] - param_2[0x27]) >> 3));
    }
    FUN_140289880(param_1 + 0x11a8c0);
    plVar10 = (longlong *)(local_80 - local_88 >> 3);
    plVar6 = plVar18;
    if (plVar10 != (longlong *)0x0) {
      do {
        FUN_140050070(param_1 + 0x11a8e0,local_88 + (longlong)plVar18 * 8);
        uVar17 = (int)plVar6 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar10);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0xb;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_88);
    break;
  case 0xb:
    FUN_1400025a0(&local_88);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x31] - param_2[0x30]) >> 3 != 0) {
      do {
        iVar4 = FUN_140d1f990(param_1 + 0x11ad20,*(undefined8 *)((longlong)plVar6 + param_2[0x30]));
        if (iVar4 == -1) {
          MessageBoxA((HWND)0x0,"Missing Entity Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_14004ffe0(&local_88,*(longlong *)(param_1 + 0x11ad20) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x11ad20,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x31] - param_2[0x30]) >> 3));
    }
    FUN_1405d2860(param_1 + 0x11ad20);
    plVar10 = (longlong *)(local_80 - local_88 >> 3);
    plVar6 = plVar18;
    if (plVar10 != (longlong *)0x0) {
      do {
        FUN_14004ffe0(param_1 + 0x11ad20,local_88 + (longlong)plVar18 * 8);
        uVar17 = (int)plVar6 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar10);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0xc;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_88);
    break;
  case 0xc:
    FUN_1400025a0(&local_a8);
    FUN_1400025a0(&local_e0);
    FUN_1400025a0(&local_88);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x34] - param_2[0x33]) >> 3 != 0) {
      do {
        iVar4 = FUN_140286f40(param_1 + 0x11ad38,*(undefined8 *)((longlong)plVar6 + param_2[0x33]));
        if (iVar4 == -1) {
          MessageBoxA((HWND)0x0,"Missing Word Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_14004ffe0(&local_a8,*(longlong *)(param_1 + 0x11ad38) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x11ad38,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x34] - param_2[0x33]) >> 3));
    }
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x37] - param_2[0x36]) >> 3 != 0) {
      do {
        iVar4 = FUN_140281b30(param_1 + 0x11ad38,*(undefined8 *)(param_2[0x36] + (longlong)plVar6));
        if (iVar4 == -1) {
          MessageBoxA((HWND)0x0,"Missing Symbol Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_14004ffe0(&local_e0,*(longlong *)(param_1 + 0x11ad50) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x11ad50,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x37] - param_2[0x36]) >> 3));
    }
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x3a] - param_2[0x39]) >> 3 != 0) {
      do {
        iVar4 = FUN_1401b83c0(param_1 + 0x11ad38,*(undefined8 *)(param_2[0x39] + (longlong)plVar6));
        if (iVar4 == -1) {
          MessageBoxA((HWND)0x0,"Missing Translation Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_14004ffe0(&local_88,*(longlong *)(param_1 + 0x11ad68) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x11ad68,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x3a] - param_2[0x39]) >> 3));
    }
    FUN_1405c8290(param_1 + 0x11ad38);
    lVar14 = CONCAT71(uStack_a7,local_a8);
    plVar16 = (longlong *)(local_a0 - lVar14 >> 3);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if (plVar16 != (longlong *)0x0) {
      do {
        FUN_14004ffe0(param_1 + 0x11ad38,lVar14 + (longlong)plVar6 * 8);
        uVar17 = (int)plVar10 + 1;
        plVar6 = (longlong *)(longlong)(int)uVar17;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((longlong *)(longlong)(int)uVar17 < plVar16);
    }
    plVar6 = local_e0;
    plVar15 = (longlong *)((longlong)plStack_d8 - (longlong)local_e0 >> 3);
    plVar10 = plVar18;
    plVar16 = plVar18;
    if (plVar15 != (longlong *)0x0) {
      do {
        FUN_14004ffe0(param_1 + 0x11ad50,plVar6 + (longlong)plVar10);
        uVar17 = (int)plVar16 + 1;
        plVar10 = (longlong *)(longlong)(int)uVar17;
        plVar16 = (longlong *)(ulonglong)uVar17;
      } while ((longlong *)(longlong)(int)uVar17 < plVar15);
    }
    plVar10 = (longlong *)(local_80 - local_88 >> 3);
    plVar6 = plVar18;
    if (plVar10 != (longlong *)0x0) {
      do {
        FUN_14004ffe0(param_1 + 0x11ad68,local_88 + (longlong)plVar18 * 8);
        uVar17 = (int)plVar6 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar10);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0xd;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_88);
    FUN_1400030c0(&local_e0);
    FUN_1400030c0(&local_a8);
    break;
  case 0xd:
    FUN_1400025a0(&local_e0);
    FUN_1400025a0(&local_88);
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x3d] - param_2[0x3c]) >> 3 != 0) {
      do {
        sVar2 = FUN_140361540(param_1 + 0x124440,*(undefined8 *)((longlong)plVar6 + param_2[0x3c]));
        if (sVar2 == -1) {
          MessageBoxA((HWND)0x0,"Missing Color Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_14004ffe0(&local_e0,*(longlong *)(param_1 + 0x124440) + (longlong)sVar2 * 8);
        FUN_140050100(param_1 + 0x124440,(longlong)sVar2);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x3d] - param_2[0x3c]) >> 3));
    }
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x40] - param_2[0x3f]) >> 3 != 0) {
      do {
        iVar4 = FUN_140281b30(param_1 + 0x124440,*(undefined8 *)(param_2[0x3f] + (longlong)plVar6));
        if (iVar4 == -1) {
          MessageBoxA((HWND)0x0,"Missing Shape Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_14004ffe0(&local_88,*(longlong *)(param_1 + 0x124458) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x124458,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x40] - param_2[0x3f]) >> 3));
    }
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x43] - param_2[0x42]) >> 3 != 0) {
      do {
        iVar4 = FUN_1401b83c0(param_1 + 0x124440,*(undefined8 *)(param_2[0x42] + (longlong)plVar6));
        if (iVar4 == -1) {
          MessageBoxA((HWND)0x0,"Missing Color Pattern Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_14004ffe0(&local_a8,*(longlong *)(param_1 + 0x124470) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x124470,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x43] - param_2[0x42]) >> 3));
    }
    FUN_1405c84a0(param_1 + 0x124440);
    plVar6 = local_e0;
    plVar15 = (longlong *)((longlong)plStack_d8 - (longlong)local_e0 >> 3);
    plVar10 = plVar18;
    plVar16 = plVar18;
    if (plVar15 != (longlong *)0x0) {
      do {
        FUN_14004ffe0(param_1 + 0x124440,plVar6 + (longlong)plVar10);
        uVar17 = (int)plVar16 + 1;
        plVar10 = (longlong *)(longlong)(int)uVar17;
        plVar16 = (longlong *)(ulonglong)uVar17;
      } while ((longlong *)(longlong)(int)uVar17 < plVar15);
    }
    plVar16 = (longlong *)(local_80 - local_88 >> 3);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if (plVar16 != (longlong *)0x0) {
      do {
        FUN_14004ffe0(param_1 + 0x124458,local_88 + (longlong)plVar6 * 8);
        uVar17 = (int)plVar10 + 1;
        plVar6 = (longlong *)(longlong)(int)uVar17;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((longlong *)(longlong)(int)uVar17 < plVar16);
    }
    lVar14 = CONCAT71(uStack_a7,local_a8);
    plVar10 = (longlong *)(local_a0 - lVar14 >> 3);
    plVar6 = plVar18;
    if (plVar10 != (longlong *)0x0) {
      do {
        FUN_14004ffe0(param_1 + 0x124470,lVar14 + (longlong)plVar18 * 8);
        uVar17 = (int)plVar6 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar10);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0xe;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_a8);
    FUN_1400030c0(&local_88);
    FUN_1400030c0(&local_e0);
    break;
  case 0xe:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x46] - param_2[0x45]) >> 3 != 0) {
      do {
        iVar4 = FUN_140286f40(param_1 + 0x1244d0,*(undefined8 *)((longlong)plVar6 + param_2[0x45]));
        if (iVar4 == -1) {
          MessageBoxA((HWND)0x0,"Missing Reaction Definition","FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_14004ffe0(&local_a8,*(longlong *)(param_1 + 0x1244d0) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x1244d0,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x46] - param_2[0x45]) >> 3));
    }
    FUN_1405cc2e0(param_1 + 0x1244d0);
    lVar14 = CONCAT71(uStack_a7,local_a8);
    plVar10 = (longlong *)(local_a0 - lVar14 >> 3);
    plVar6 = plVar18;
    if (plVar10 != (longlong *)0x0) {
      do {
        FUN_14004ffe0(param_1 + 0x1244d0,lVar14 + (longlong)plVar18 * 8);
        uVar17 = (int)plVar6 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar10);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0xf;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_a8);
    break;
  case 0xf:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x55] - param_2[0x54]) >> 3 != 0) {
      do {
        iVar4 = FUN_140286f40(param_1 + 0x124550,*(undefined8 *)((longlong)plVar6 + param_2[0x54]));
        if (iVar4 == -1) {
          FUN_140050390(&local_88,"Missing Interaction Definition: ");
          FUN_140050380(&local_88,*(undefined8 *)(param_2[0x54] + (longlong)(int)plVar10 * 8));
          pCVar7 = (LPCSTR)FUN_14000c1a0();
          MessageBoxA((HWND)0x0,pCVar7,"FATAL ERROR",0x30);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        FUN_140050070(&local_a8,*(longlong *)(param_1 + 0x124550) + (longlong)iVar4 * 8);
        FUN_140050100(param_1 + 0x124550,(longlong)iVar4);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x55] - param_2[0x54]) >> 3));
    }
    FUN_1405cc3c0(param_1 + 0x124550);
    lVar14 = CONCAT71(uStack_a7,local_a8);
    plVar10 = (longlong *)(local_a0 - lVar14 >> 3);
    plVar6 = plVar18;
    if (plVar10 != (longlong *)0x0) {
      do {
        FUN_140050070(param_1 + 0x124550,lVar14 + (longlong)plVar18 * 8);
        uVar17 = (int)plVar6 + 1;
        plVar18 = (longlong *)(longlong)(int)uVar17;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while (plVar18 < plVar10);
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0x10;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_1400030c0(&local_a8);
    break;
  case 0x10:
    local_f8 = (undefined4)(DAT_141d6e1e0 - DAT_141d6e1d8 >> 3);
    local_100 = 0;
    local_108 = (undefined4)(DAT_141d6e1c8 - DAT_141d6e1c0 >> 3);
    FUN_14089ba00(param_1 + 0x11ad38,0);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x11;
    goto LAB_140d3b438;
  case 0x11:
    FUN_140362e00(param_1 + 0x124440);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x12;
    goto LAB_140d3b438;
  case 0x12:
    FUN_1408b0fb0(param_1 + 0x11a758);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x13;
    goto LAB_140d3b438;
  case 0x13:
    FUN_1408dac80(param_1 + 0x11a770,0,DAT_141d6dbe8 - DAT_141d6dbe0 >> 3);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x14;
    goto LAB_140d3b438;
  case 0x14:
    FUN_1408dac10(param_1 + 0x11a7a0,0,DAT_141d6dc18 - DAT_141d6dc10 >> 3);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x15;
    goto LAB_140d3b438;
  case 0x15:
    FUN_1402b3820(param_1 + 0x11a848);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x16;
    goto LAB_140d3b438;
  case 0x16:
    FUN_140845860(param_1 + 0x11a948,0,DAT_141d6ddc0 - DAT_141d6ddb8 >> 3);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x17;
    goto LAB_140d3b438;
  case 0x17:
    FUN_1401b5700(param_1 + 0x124500);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x18;
    goto LAB_140d3b438;
  case 0x18:
    *(undefined4 *)(param_1 + 0x26b81c) = 0x19;
    goto LAB_140d3b438;
  case 0x19:
    *(undefined4 *)(param_1 + 0x26b81c) = 0x1a;
    goto LAB_140d3b438;
  case 0x1a:
    FUN_140295990(param_1 + 0x11a8c0,0,DAT_141d6dd58 - DAT_141d6dd50 >> 3);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x1b;
    goto LAB_140d3b438;
  case 0x1b:
    FUN_1404c5cb0(param_1 + 0x11ad20,0,DAT_141d6e198 - DAT_141d6e190 >> 3);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x1c;
    goto LAB_140d3b438;
  case 0x1c:
    FUN_140a36800(param_1 + 0x1244d0,0,DAT_141d77948 - DAT_141d77940 >> 3);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x1d;
    goto LAB_140d3b438;
  case 0x1d:
    FUN_1407dae60(param_1 + 0x124550,0,DAT_141d779c8 - DAT_141d779c0 >> 3,local_68);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x1e;
    goto LAB_140d3b438;
  case 0x1e:
    FUN_1408b94c0(param_1 + 0x124568);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x1f;
    goto LAB_140d3b438;
  case 0x1f:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    plVar10 = plVar18;
    if ((longlong)(param_2[0x19] - param_2[0x18]) >> 3 != 0) {
      do {
        uVar19 = FUN_1402803e0(&local_a8,*(undefined8 *)(param_2[0x18] + (longlong)plVar6));
        FUN_1408a5730(uVar19,&local_a8,1);
        uVar17 = (int)plVar10 + 1;
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x19] - param_2[0x18]) >> 3));
    }
    FUN_140051de0(&local_a8);
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    if ((longlong)(param_2[4] - param_2[3]) >> 3 != 0) {
      do {
        uVar19 = FUN_1402803e0(&local_a8,*(undefined8 *)(param_2[3] + (longlong)plVar18));
        FUN_1408d1d80(uVar19,&local_a8,1);
        uVar17 = (int)plVar6 + 1;
        plVar18 = plVar18 + 1;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[4] - param_2[3]) >> 3));
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0x20;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_140051de0(&local_a8);
    break;
  case 0x20:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    if ((longlong)(param_2[7] - param_2[6]) >> 3 != 0) {
      do {
        uVar19 = FUN_1402803e0(&local_a8,*(undefined8 *)((longlong)plVar18 + param_2[6]));
        FUN_1408da030(uVar19,&local_a8,1);
        uVar17 = (int)plVar6 + 1;
        plVar18 = plVar18 + 1;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[7] - param_2[6]) >> 3));
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0x21;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_140051de0(&local_a8);
    break;
  case 0x21:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    if ((longlong)(param_2[10] - param_2[9]) >> 3 != 0) {
      do {
        uVar19 = FUN_1402803e0(&local_a8,*(undefined8 *)(param_2[9] + (longlong)plVar18));
        FUN_14083ffe0(uVar19,&local_a8,1);
        uVar17 = (int)plVar6 + 1;
        plVar18 = plVar18 + 1;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[10] - param_2[9]) >> 3));
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0x22;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_140051de0(&local_a8);
    break;
  case 0x22:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    if ((longlong)(param_2[0xd] - param_2[0xc]) >> 3 != 0) {
      do {
        FUN_1402803e0(&local_a8,*(undefined8 *)(param_2[0xc] + (longlong)plVar18));
        FUN_14028cc90(&DAT_141d6dd30,&local_a8,1);
        uVar17 = (int)plVar6 + 1;
        plVar18 = plVar18 + 1;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0xd] - param_2[0xc]) >> 3));
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0x23;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_140051de0(&local_a8);
    break;
  case 0x23:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    if ((longlong)(param_2[0x10] - param_2[0xf]) >> 3 != 0) {
      do {
        uVar19 = FUN_1402803e0(&local_a8,*(undefined8 *)((longlong)plVar18 + param_2[0xf]));
        FUN_1404bd320(uVar19,&local_a8,1);
        uVar17 = (int)plVar6 + 1;
        plVar18 = plVar18 + 1;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x10] - param_2[0xf]) >> 3));
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0x24;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_140051de0(&local_a8);
    break;
  case 0x24:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    if ((longlong)(param_2[0x13] - param_2[0x12]) >> 3 != 0) {
      do {
        FUN_1402803e0(&local_a8,*(undefined8 *)(param_2[0x12] + (longlong)plVar18));
        FUN_140a33c20(&DAT_141d77940,&local_a8,1);
        uVar17 = (int)plVar6 + 1;
        plVar18 = plVar18 + 1;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x13] - param_2[0x12]) >> 3));
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0x25;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_140051de0(&local_a8);
    break;
  case 0x25:
    FUN_1400025a0(&local_a8);
    plVar6 = plVar18;
    if ((longlong)(param_2[0x16] - param_2[0x15]) >> 3 != 0) {
      do {
        uVar19 = FUN_1402803e0(&local_a8,*(undefined8 *)((longlong)plVar18 + param_2[0x15]));
        FUN_1407da930(uVar19,&local_a8,1);
        uVar17 = (int)plVar6 + 1;
        plVar18 = plVar18 + 1;
        plVar6 = (longlong *)(ulonglong)uVar17;
      } while ((ulonglong)(longlong)(int)uVar17 <
               (ulonglong)((longlong)(param_2[0x16] - param_2[0x15]) >> 3));
    }
    *(undefined4 *)(param_1 + 0x26b81c) = 0x26;
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
    FUN_140051de0(&local_a8);
    break;
  case 0x26:
    puVar11 = (undefined8 *)*param_2;
    plVar6 = (longlong *)((param_2[1] - (longlong)puVar11) + 7 >> 3);
    if ((undefined8 *)param_2[1] < puVar11) {
      plVar6 = plVar18;
    }
    if (plVar6 != (longlong *)0x0) {
      do {
        FUN_140a32af0(*puVar11,local_68);
        puVar11 = puVar11 + 1;
        plVar18 = (longlong *)((longlong)plVar18 + 1);
      } while (plVar18 < plVar6);
    }
    FUN_140d1fb00(param_1 + 0x132f58);
    FUN_1400abaf0(param_1 + 0x132f58,param_2);
    param_2[1] = *param_2;
    *(undefined4 *)(param_1 + 0x26b81c) = 0x27;
    goto LAB_140d3b438;
  case 0x27:
    FUN_140db7650(param_1 + 0x1265b8,local_68);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x28;
    goto LAB_140d3b438;
  case 0x28:
    FUN_1406ef7a0(switchD_140935618::caseD_26.e_magic +
                  (&switchD_140d38bc7::switchdataD_140d3b470)[(int)uVar17],local_68);
    *(undefined4 *)(param_1 + 0x26b81c) = 0x29;
LAB_140d3b438:
    *(int *)(param_1 + 0x26b820) = *(int *)(param_1 + 0x26b820) + 1;
  }
LAB_140d3b43f:
  FUN_14000c260(local_68);
  return;
}

