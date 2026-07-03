// FUN_1408a38b0 @ 1408a38b0
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 140360950 FUN_140360950
//   -> 140360750 FUN_140360750
//   -> 14000bc60 FUN_14000bc60


void FUN_1408a38b0(ulonglong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  
  puVar2 = param_1 + 0x12;
  param_1[1] = *param_1;
  puVar3 = param_1 + 0x15;
  puVar4 = param_1 + 0x1e;
  param_1[0x13] = *puVar2;
  param_1[4] = param_1[3];
  param_1[0x16] = *puVar3;
  param_1[7] = param_1[6];
  param_1[0x19] = param_1[0x18];
  param_1[10] = param_1[9];
  param_1[0x1c] = param_1[0x1b];
  param_1[0xd] = param_1[0xc];
  param_1[0x1f] = *puVar4;
  param_1[0x10] = param_1[0xf];
  param_1[0x22] = param_1[0x21];
  lVar9 = *param_2;
  local_54 = 0;
  if (0 < (int)(param_2[1] - lVar9 >> 2)) {
    local_48 = 0;
    do {
      local_res18[0] = *(int *)(lVar9 + local_48 * 4);
      if ((-1 < local_res18[0]) && (local_res18[0] < (int)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
        local_50 = *(longlong *)(DAT_141d6e1a8 + (longlong)local_res18[0] * 8);
        local_res20[0] = local_res18[0];
        if ((*(byte *)(local_50 + 0x148) & 1) != 0) {
          piVar5 = (int *)param_1[1];
          if ((local_res18 < piVar5) && (piVar6 = (int *)*param_1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[1] =
                   *(undefined4 *)(*param_1 + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((int *)param_1[1] != (int *)0x0) {
              *(int *)param_1[1] = local_res20[0];
            }
          }
          param_1[1] = param_1[1] + 4;
          puVar7 = (undefined4 *)param_1[0x13];
          local_58 = 0;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar2, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] =
                   *(undefined4 *)(*puVar2 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] = 0;
            }
          }
          param_1[0x13] = param_1[0x13] + 4;
        }
        if ((*(byte *)(local_50 + 0x148) & 2) != 0) {
          piVar5 = (int *)param_1[1];
          if ((local_res18 < piVar5) && (piVar6 = (int *)*param_1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[1] =
                   *(undefined4 *)(*param_1 + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((int *)param_1[1] != (int *)0x0) {
              *(int *)param_1[1] = local_res20[0];
            }
          }
          param_1[1] = param_1[1] + 4;
          puVar7 = (undefined4 *)param_1[0x13];
          local_58 = 1;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar2, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] =
                   *(undefined4 *)(*puVar2 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] = 1;
            }
          }
          param_1[0x13] = param_1[0x13] + 4;
        }
        if ((*(byte *)(local_50 + 0x148) & 4) != 0) {
          piVar5 = (int *)param_1[1];
          if ((local_res18 < piVar5) && (piVar6 = (int *)*param_1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[1] =
                   *(undefined4 *)(*param_1 + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((int *)param_1[1] != (int *)0x0) {
              *(int *)param_1[1] = local_res20[0];
            }
          }
          param_1[1] = param_1[1] + 4;
          puVar7 = (undefined4 *)param_1[0x13];
          local_58 = 2;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar2, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] =
                   *(undefined4 *)(*puVar2 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] = 2;
            }
          }
          param_1[0x13] = param_1[0x13] + 4;
        }
        if ((*(byte *)(local_50 + 0x148) & 8) != 0) {
          piVar5 = (int *)param_1[1];
          if ((local_res18 < piVar5) && (piVar6 = (int *)*param_1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[1] =
                   *(undefined4 *)(*param_1 + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((int *)param_1[1] != (int *)0x0) {
              *(int *)param_1[1] = local_res20[0];
            }
          }
          param_1[1] = param_1[1] + 4;
          puVar7 = (undefined4 *)param_1[0x13];
          local_58 = 3;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar2, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] =
                   *(undefined4 *)(*puVar2 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] = 3;
            }
          }
          param_1[0x13] = param_1[0x13] + 4;
        }
        if ((*(byte *)(local_50 + 0x148) & 0x10) != 0) {
          piVar5 = (int *)param_1[4];
          if ((local_res18 < piVar5) && (piVar6 = (int *)param_1[3], piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[5]) {
              FUN_14000c390(param_1 + 3,1);
            }
            if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[4] =
                   *(undefined4 *)(param_1[3] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4)
              ;
            }
          }
          else {
            if (piVar5 == (int *)param_1[5]) {
              FUN_14000c390(param_1 + 3,1);
            }
            if ((int *)param_1[4] != (int *)0x0) {
              *(int *)param_1[4] = local_res20[0];
            }
          }
          param_1[4] = param_1[4] + 4;
          puVar7 = (undefined4 *)param_1[0x16];
          local_58 = 0;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar3, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x17]) {
              FUN_140360950(puVar3);
            }
            if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x16] =
                   *(undefined4 *)(*puVar3 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x17]) {
              FUN_140360950(puVar3);
            }
            if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x16] = 0;
            }
          }
          param_1[0x16] = param_1[0x16] + 4;
        }
        if ((*(byte *)(local_50 + 0x148) & 0x20) != 0) {
          piVar5 = (int *)param_1[4];
          if ((local_res18 < piVar5) && (piVar6 = (int *)param_1[3], piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[5]) {
              FUN_14000c390(param_1 + 3,1);
            }
            if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[4] =
                   *(undefined4 *)(param_1[3] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4)
              ;
            }
          }
          else {
            if (piVar5 == (int *)param_1[5]) {
              FUN_14000c390(param_1 + 3,1);
            }
            if ((int *)param_1[4] != (int *)0x0) {
              *(int *)param_1[4] = local_res20[0];
            }
          }
          param_1[4] = param_1[4] + 4;
          puVar7 = (undefined4 *)param_1[0x16];
          local_58 = 1;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar3, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x17]) {
              FUN_140360950(puVar3);
            }
            if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x16] =
                   *(undefined4 *)(*puVar3 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x17]) {
              FUN_140360950(puVar3);
            }
            if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x16] = 1;
            }
          }
          param_1[0x16] = param_1[0x16] + 4;
        }
        if ((*(byte *)(local_50 + 0x148) & 0x40) != 0) {
          piVar5 = (int *)param_1[4];
          if ((local_res18 < piVar5) && (piVar6 = (int *)param_1[3], piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[5]) {
              FUN_14000c390(param_1 + 3,1);
            }
            if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[4] =
                   *(undefined4 *)(param_1[3] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4)
              ;
            }
          }
          else {
            if (piVar5 == (int *)param_1[5]) {
              FUN_14000c390(param_1 + 3,1);
            }
            if ((int *)param_1[4] != (int *)0x0) {
              *(int *)param_1[4] = local_res20[0];
            }
          }
          param_1[4] = param_1[4] + 4;
          puVar7 = (undefined4 *)param_1[0x16];
          local_58 = 2;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar3, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x17]) {
              FUN_140360950(puVar3);
            }
            if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x16] =
                   *(undefined4 *)(*puVar3 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x17]) {
              FUN_140360950(puVar3);
            }
            if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x16] = 2;
            }
          }
          param_1[0x16] = param_1[0x16] + 4;
        }
        if ((*(byte *)(local_50 + 0x148) & 0x80) != 0) {
          piVar5 = (int *)param_1[7];
          puVar1 = param_1 + 6;
          if ((local_res18 < piVar5) && (piVar6 = (int *)*puVar1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[8]) {
              FUN_14000c390(puVar1,1);
            }
            if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[7] =
                   *(undefined4 *)(param_1[6] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4)
              ;
            }
          }
          else {
            if (piVar5 == (int *)param_1[8]) {
              FUN_14000c390(puVar1,1);
            }
            if ((int *)param_1[7] != (int *)0x0) {
              *(int *)param_1[7] = local_res20[0];
            }
          }
          param_1[7] = param_1[7] + 4;
          puVar1 = param_1 + 0x18;
          puVar7 = (undefined4 *)param_1[0x19];
          local_58 = 0;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar1, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x1a]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x19] =
                   *(undefined4 *)
                    (param_1[0x18] + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x1a]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x19] = 0;
            }
          }
          param_1[0x19] = param_1[0x19] + 4;
        }
        if ((*(uint *)(local_50 + 0x148) & 0x100) != 0) {
          piVar5 = (int *)param_1[7];
          puVar1 = param_1 + 6;
          if ((local_res18 < piVar5) && (piVar6 = (int *)*puVar1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[8]) {
              FUN_14000c390(puVar1,1);
            }
            if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[7] =
                   *(undefined4 *)(param_1[6] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4)
              ;
            }
          }
          else {
            if (piVar5 == (int *)param_1[8]) {
              FUN_14000c390(puVar1,1);
            }
            if ((int *)param_1[7] != (int *)0x0) {
              *(int *)param_1[7] = local_res20[0];
            }
          }
          param_1[7] = param_1[7] + 4;
          puVar1 = param_1 + 0x18;
          local_58 = 1;
          puVar7 = (undefined4 *)param_1[0x19];
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar1, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x1a]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x19] =
                   *(undefined4 *)
                    (param_1[0x18] + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x1a]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x19] = 1;
            }
          }
          param_1[0x19] = param_1[0x19] + 4;
        }
        if (*(longlong *)(local_50 + 0x70) != 0) {
          piVar5 = (int *)param_1[10];
          puVar1 = param_1 + 9;
          if ((local_res18 < piVar5) && (piVar6 = (int *)*puVar1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[0xb]) {
              FUN_14000c390(puVar1,1);
            }
            if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[10] =
                   *(undefined4 *)(param_1[9] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4)
              ;
            }
          }
          else {
            if (piVar5 == (int *)param_1[0xb]) {
              FUN_14000c390(puVar1,1);
            }
            if ((int *)param_1[10] != (int *)0x0) {
              *(int *)param_1[10] = local_res20[0];
            }
          }
          param_1[10] = param_1[10] + 4;
          puVar1 = param_1 + 0x1b;
          local_58 = 2;
          puVar7 = (undefined4 *)param_1[0x1c];
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar1, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x1d]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1c] =
                   *(undefined4 *)
                    (param_1[0x1b] + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x1d]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1c] = 2;
            }
          }
          param_1[0x1c] = param_1[0x1c] + 4;
        }
        if ((*(uint *)(local_50 + 0x148) & 0x200) != 0) {
          piVar5 = (int *)param_1[0xd];
          if ((local_res18 < piVar5) && (piVar6 = (int *)param_1[0xc], piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(param_1 + 0xc,1);
            }
            if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0xd] =
                   *(undefined4 *)
                    (param_1[0xc] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(param_1 + 0xc,1);
            }
            if ((int *)param_1[0xd] != (int *)0x0) {
              *(int *)param_1[0xd] = local_res20[0];
            }
          }
          param_1[0xd] = param_1[0xd] + 4;
          puVar7 = (undefined4 *)param_1[0x1f];
          local_58 = 0;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar4, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x20]) {
              FUN_140360950(puVar4);
            }
            if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1f] =
                   *(undefined4 *)(*puVar4 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x20]) {
              FUN_140360950(puVar4);
            }
            if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1f] = 0;
            }
          }
          param_1[0x1f] = param_1[0x1f] + 4;
        }
        if ((*(uint *)(local_50 + 0x148) & 0x400) != 0) {
          piVar5 = (int *)param_1[0xd];
          if ((local_res18 < piVar5) && (piVar6 = (int *)param_1[0xc], piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(param_1 + 0xc,1);
            }
            if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0xd] =
                   *(undefined4 *)
                    (param_1[0xc] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(param_1 + 0xc,1);
            }
            if ((int *)param_1[0xd] != (int *)0x0) {
              *(int *)param_1[0xd] = local_res20[0];
            }
          }
          param_1[0xd] = param_1[0xd] + 4;
          puVar7 = (undefined4 *)param_1[0x1f];
          local_58 = 1;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar4, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x20]) {
              FUN_140360950(puVar4);
            }
            if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1f] =
                   *(undefined4 *)(*puVar4 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x20]) {
              FUN_140360950(puVar4);
            }
            if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1f] = 1;
            }
          }
          param_1[0x1f] = param_1[0x1f] + 4;
        }
        if ((*(uint *)(local_50 + 0x148) & 0x800) != 0) {
          piVar5 = (int *)param_1[0xd];
          if ((local_res18 < piVar5) && (piVar6 = (int *)param_1[0xc], piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(param_1 + 0xc,1);
            }
            if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0xd] =
                   *(undefined4 *)
                    (param_1[0xc] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(param_1 + 0xc,1);
            }
            if ((int *)param_1[0xd] != (int *)0x0) {
              *(int *)param_1[0xd] = local_res20[0];
            }
          }
          param_1[0xd] = param_1[0xd] + 4;
          puVar7 = (undefined4 *)param_1[0x1f];
          local_58 = 2;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar4, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x20]) {
              FUN_140360950(puVar4);
            }
            if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1f] =
                   *(undefined4 *)(*puVar4 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x20]) {
              FUN_140360950(puVar4);
            }
            if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1f] = 2;
            }
          }
          param_1[0x1f] = param_1[0x1f] + 4;
        }
        if ((*(uint *)(local_50 + 0x148) & 0x1000) != 0) {
          piVar5 = (int *)param_1[0xd];
          if ((local_res18 < piVar5) && (piVar6 = (int *)param_1[0xc], piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(param_1 + 0xc,1);
            }
            if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0xd] =
                   *(undefined4 *)
                    (param_1[0xc] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[0xe]) {
              FUN_14000c390(param_1 + 0xc,1);
            }
            if ((int *)param_1[0xd] != (int *)0x0) {
              *(int *)param_1[0xd] = local_res20[0];
            }
          }
          param_1[0xd] = param_1[0xd] + 4;
          puVar7 = (undefined4 *)param_1[0x1f];
          local_58 = 3;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar4, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x20]) {
              FUN_140360950(puVar4);
            }
            if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1f] =
                   *(undefined4 *)(*puVar4 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x20]) {
              FUN_140360950(puVar4);
            }
            if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x1f] = 3;
            }
          }
          param_1[0x1f] = param_1[0x1f] + 4;
        }
        if ((*(uint *)(local_50 + 0x148) & 0x2000) != 0) {
          puVar1 = param_1 + 0xf;
          piVar5 = (int *)param_1[0x10];
          if ((local_res18 < piVar5) && (piVar6 = (int *)*puVar1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[0x11]) {
              FUN_14000c390(puVar1,1);
            }
            if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x10] =
                   *(undefined4 *)
                    (param_1[0xf] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[0x11]) {
              FUN_14000c390(puVar1,1);
            }
            if ((int *)param_1[0x10] != (int *)0x0) {
              *(int *)param_1[0x10] = local_res20[0];
            }
          }
          param_1[0x10] = param_1[0x10] + 4;
          puVar1 = param_1 + 0x21;
          local_58 = 0;
          puVar7 = (undefined4 *)param_1[0x22];
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar1, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x23]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x22] =
                   *(undefined4 *)
                    (param_1[0x21] + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x23]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x22] = 0;
            }
          }
          param_1[0x22] = param_1[0x22] + 4;
        }
        if ((*(uint *)(local_50 + 0x148) & 0x4000) != 0) {
          puVar1 = param_1 + 0xf;
          piVar5 = (int *)param_1[0x10];
          if ((local_res18 < piVar5) && (piVar6 = (int *)*puVar1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[0x11]) {
              FUN_14000c390(puVar1,1);
            }
            if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x10] =
                   *(undefined4 *)
                    (param_1[0xf] + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[0x11]) {
              FUN_14000c390(puVar1,1);
            }
            if ((int *)param_1[0x10] != (int *)0x0) {
              *(int *)param_1[0x10] = local_res20[0];
            }
          }
          param_1[0x10] = param_1[0x10] + 4;
          puVar1 = param_1 + 0x21;
          local_58 = 1;
          puVar7 = (undefined4 *)param_1[0x22];
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar1, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x23]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x22] =
                   *(undefined4 *)
                    (param_1[0x21] + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x23]) {
              FUN_140360950(puVar1);
            }
            if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x22] = 1;
            }
          }
          param_1[0x22] = param_1[0x22] + 4;
        }
        if ((*(uint *)(local_50 + 0x148) & 0x8000) != 0) {
          piVar5 = (int *)param_1[1];
          if ((local_res18 < piVar5) && (piVar6 = (int *)*param_1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[1] =
                   *(undefined4 *)(*param_1 + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((int *)param_1[1] != (int *)0x0) {
              *(int *)param_1[1] = local_res20[0];
            }
          }
          param_1[1] = param_1[1] + 4;
          puVar7 = (undefined4 *)param_1[0x13];
          local_58 = 4;
          if ((&local_58 < puVar7) && (puVar8 = (undefined4 *)*puVar2, puVar8 <= &local_58)) {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] =
                   *(undefined4 *)(*puVar2 + ((longlong)&local_58 - (longlong)puVar8 >> 2) * 4);
            }
          }
          else {
            if (puVar7 == (undefined4 *)param_1[0x14]) {
              FUN_140360950(puVar2);
            }
            if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x13] = 4;
            }
          }
          param_1[0x13] = param_1[0x13] + 4;
          piVar5 = (int *)param_1[1];
          if ((local_res18 < piVar5) && (piVar6 = (int *)*param_1, piVar6 <= local_res18)) {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[1] =
                   *(undefined4 *)(*param_1 + ((longlong)local_res18 - (longlong)piVar6 >> 2) * 4);
            }
          }
          else {
            if (piVar5 == (int *)param_1[2]) {
              FUN_14000c390(param_1,1);
            }
            if ((int *)param_1[1] != (int *)0x0) {
              *(int *)param_1[1] = local_res20[0];
            }
          }
          param_1[1] = param_1[1] + 4;
          local_res20[0] = 7;
          FUN_140360750(puVar2,local_res20);
          FUN_14000bc60(param_1 + 3,local_res18);
          local_res20[0] = 4;
          FUN_140360750(puVar3,local_res20);
          FUN_14000bc60(param_1 + 3,local_res18);
          local_res20[0] = 5;
          FUN_140360750(puVar3,local_res20);
          FUN_14000bc60(param_1 + 3,local_res18);
          local_res20[0] = 6;
          FUN_140360750(puVar3,local_res20);
          FUN_14000bc60(param_1 + 3,local_res18);
          local_res20[0] = 7;
          FUN_140360750(puVar3,local_res20);
        }
        if (*(longlong *)(local_50 + 0x130) != 0) {
          FUN_14000bc60(param_1 + 0xf,local_res18);
          local_res18[0] = 8;
          FUN_140360750(param_1 + 0x21,local_res18);
        }
      }
      local_54 = local_54 + 1;
      local_48 = local_48 + 1;
      lVar9 = *param_2;
    } while (local_54 < (int)(param_2[1] - lVar9 >> 2));
  }
  return;
}

