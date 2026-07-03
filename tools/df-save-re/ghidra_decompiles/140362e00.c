// FUN_140362e00 @ 140362e00
// callees:
//   -> 140363330 FUN_140363330
//   -> 140363920 FUN_140363920
//   -> 14000c780 FUN_14000c780
//   -> 140071310 FUN_140071310
//   -> 140002020 FUN_140002020
//   -> 14000c390 FUN_14000c390
//   -> 140363aa0 FUN_140363aa0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140362e00(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 auStack_88 [32];
  int local_68;
  uint local_64;
  int local_60 [2];
  longlong *local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  uVar11 = 0;
  uVar15 = uVar11;
  local_58 = param_1;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      FUN_140363330(*(undefined8 *)(*param_1 + uVar11 * 8));
      uVar12 = (int)uVar15 + 1;
      uVar11 = (ulonglong)(int)uVar12;
      uVar15 = (ulonglong)uVar12;
    } while (uVar11 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  puVar1 = (ulonglong *)(param_1 + 9);
  param_1[10] = param_1[9];
  puVar2 = (ulonglong *)(param_1 + 0xc);
  puVar3 = (ulonglong *)(param_1 + 0xf);
  param_1[0xd] = *puVar2;
  uVar11 = 0;
  param_1[0x10] = *puVar3;
  local_64 = 0;
  local_68 = 0;
  uVar15 = uVar11;
  plVar17 = param_1;
  if (param_1[4] - param_1[3] >> 3 != 0) {
    do {
      lVar14 = uVar11 * 8;
      FUN_140363920(*(undefined8 *)(lVar14 + plVar17[3]));
      local_38 = 0xf;
      local_40 = 0;
      local_50 = 0;
      FUN_14000c780(&local_50,"SIMPLE",6);
      lVar4 = *(longlong *)(*(longlong *)(lVar14 + plVar17[3]) + 0xb0);
      iVar10 = (int)(*(longlong *)(*(longlong *)(lVar14 + plVar17[3]) + 0xb8) - lVar4 >> 3) + -1;
      if (-1 < iVar10) {
        lVar13 = (longlong)iVar10;
        puVar16 = (undefined8 *)(lVar4 + lVar13 * 8);
        do {
          iVar10 = FUN_140071310(*puVar16,&local_50);
          if (iVar10 == 0) {
            bVar9 = true;
            goto LAB_140362f44;
          }
          puVar16 = puVar16 + -1;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
      }
      bVar9 = false;
LAB_140362f44:
      if (0xf < local_38) {
        FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
      }
      plVar17 = local_58;
      if (bVar9) {
        lVar14 = *(longlong *)(lVar14 + local_58[3]);
        if (*(longlong *)(lVar14 + 0x98) - *(longlong *)(lVar14 + 0x90) >> 3 == 0) {
          piVar5 = (int *)param_1[10];
          if ((&local_68 < piVar5) && (piVar6 = (int *)*puVar1, piVar6 <= &local_68)) {
            if (piVar5 == (int *)param_1[0xb]) {
              FUN_14000c390(puVar1,1);
            }
            if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[10] =
                   *(undefined4 *)(*puVar1 + ((longlong)&local_68 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[0xb]) {
              FUN_14000c390(puVar1,1);
            }
            if ((int *)param_1[10] != (int *)0x0) {
              *(int *)param_1[10] = local_68;
            }
          }
          param_1[10] = param_1[10] + 4;
          piVar5 = (int *)param_1[0xd];
          local_60[0] = -1;
          if ((local_60 < piVar5) && (piVar6 = (int *)*puVar2, piVar6 <= local_60)) {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(puVar2,1);
            }
            if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0xd] =
                   *(undefined4 *)(*puVar2 + ((longlong)local_60 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(puVar2,1);
            }
            if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0xd] = 0xffffffff;
            }
          }
          param_1[0xd] = param_1[0xd] + 4;
          puVar7 = (uint *)param_1[0x10];
          if ((&local_64 < puVar7) && (puVar8 = (uint *)*puVar3, puVar8 <= &local_64)) {
            if (puVar7 == (uint *)param_1[0x11]) {
              FUN_14000c390(puVar3,1);
            }
            if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x10] =
                   *(undefined4 *)
                    (*puVar3 + ((longlong)local_60 + (-4 - (longlong)puVar8) >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (uint *)param_1[0x11]) {
              FUN_14000c390(puVar3,1);
            }
            if ((int *)param_1[0x10] != (int *)0x0) {
              *(int *)param_1[0x10] = (int)uVar15;
            }
          }
          param_1[0x10] = param_1[0x10] + 4;
          local_64 = (int)uVar15 + 1;
          uVar15 = (ulonglong)local_64;
        }
        else {
          local_60[0] = 0;
          if (*(ulonglong *)(lVar14 + 0x90) < *(ulonglong *)(lVar14 + 0x98)) {
            lVar14 = ((*(ulonglong *)(lVar14 + 0x98) - *(ulonglong *)(lVar14 + 0x90)) - 1 >> 3) + 1;
            do {
              iVar10 = local_60[0];
              piVar5 = (int *)param_1[10];
              if ((&local_68 < piVar5) && (piVar6 = (int *)*puVar1, piVar6 <= &local_68)) {
                if (piVar5 == (int *)param_1[0xb]) {
                  FUN_14000c390(puVar1,1);
                }
                if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
                  *(undefined4 *)param_1[10] =
                       *(undefined4 *)(*puVar1 + ((longlong)&local_68 - (longlong)piVar6 >> 2) * 4);
                }
              }
              else {
                if (piVar5 == (int *)param_1[0xb]) {
                  FUN_14000c390(puVar1,1);
                }
                if ((int *)param_1[10] != (int *)0x0) {
                  *(int *)param_1[10] = local_68;
                }
              }
              param_1[10] = param_1[10] + 4;
              piVar5 = (int *)param_1[0xd];
              if ((local_60 < piVar5) && (piVar6 = (int *)*puVar2, piVar6 <= local_60)) {
                if (piVar5 == (int *)param_1[0xe]) {
                  FUN_14000c390(puVar2,1);
                }
                if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
                  *(undefined4 *)param_1[0xd] =
                       *(undefined4 *)(*puVar2 + ((longlong)local_60 - (longlong)piVar6 >> 2) * 4);
                }
              }
              else {
                if (piVar5 == (int *)param_1[0xe]) {
                  FUN_14000c390(puVar2,1);
                }
                if ((int *)param_1[0xd] != (int *)0x0) {
                  *(int *)param_1[0xd] = iVar10;
                }
              }
              param_1[0xd] = param_1[0xd] + 4;
              puVar7 = (uint *)param_1[0x10];
              if ((&local_64 < puVar7) && (puVar8 = (uint *)*puVar3, puVar8 <= &local_64)) {
                if (puVar7 == (uint *)param_1[0x11]) {
                  FUN_14000c390(puVar3,1);
                }
                if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
                  *(undefined4 *)param_1[0x10] =
                       *(undefined4 *)
                        (*puVar3 + ((longlong)local_60 + (-4 - (longlong)puVar8) >> 2) * 4);
                }
              }
              else {
                if (puVar7 == (uint *)param_1[0x11]) {
                  FUN_14000c390(puVar3,1);
                }
                if ((int *)param_1[0x10] != (int *)0x0) {
                  *(int *)param_1[0x10] = (int)uVar15;
                }
              }
              param_1[0x10] = param_1[0x10] + 4;
              local_64 = (int)uVar15 + 1;
              uVar15 = (ulonglong)local_64;
              local_60[0] = iVar10 + 1;
              lVar14 = lVar14 + -1;
              plVar17 = local_58;
            } while (lVar14 != 0);
          }
        }
      }
      local_68 = local_68 + 1;
      uVar11 = (ulonglong)local_68;
    } while (uVar11 < (ulonglong)(plVar17[4] - plVar17[3] >> 3));
  }
  uVar11 = 0;
  uVar15 = uVar11;
  if (plVar17[7] - plVar17[6] >> 3 != 0) {
    do {
      FUN_140363aa0(*(undefined8 *)(plVar17[6] + uVar11 * 8));
      uVar12 = (int)uVar15 + 1;
      uVar11 = (ulonglong)(int)uVar12;
      uVar15 = (ulonglong)uVar12;
    } while (uVar11 < (ulonglong)(plVar17[7] - plVar17[6] >> 3));
  }
  return;
}

