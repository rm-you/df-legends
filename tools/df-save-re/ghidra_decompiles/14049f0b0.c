// FUN_14049f0b0 @ 14049f0b0
// callees:
//   -> 140d89d60 FUN_140d89d60
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390
//   -> 1404567a0 FUN_1404567a0


void FUN_14049f0b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong *puVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  uint local_res8 [2];
  
  plVar19 = (longlong *)(param_1 + 0x1440);
  plVar1 = (longlong *)(param_1 + 0x1458);
  *(longlong *)(param_1 + 0x1448) = *plVar19;
  plVar2 = (longlong *)(param_1 + 0x1470);
  plVar3 = (longlong *)(param_1 + 0x1488);
  *(longlong *)(param_1 + 0x1460) = *plVar1;
  *(longlong *)(param_1 + 0x1478) = *plVar2;
  *(longlong *)(param_1 + 0x1490) = *plVar3;
  *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(param_1 + 0x7a0);
  *(undefined8 *)(param_1 + 0x7c0) = *(undefined8 *)(param_1 + 0x7b8);
  *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(param_1 + 2000);
  *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(param_1 + 0x7e8);
  *(undefined8 *)(param_1 + 0x808) = *(undefined8 *)(param_1 + 0x800);
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0x818);
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x928) - *(longlong *)(param_1 + 0x920) >> 1 != 0) {
    lVar18 = 0;
    lVar14 = 0;
    do {
      puVar16 = (undefined2 *)(*(longlong *)(param_1 + 0x920) + lVar14);
      lVar13 = FUN_140d89d60(&DAT_141c53470,*puVar16,
                             *(undefined4 *)(lVar18 + *(longlong *)(param_1 + 0x938)));
      if (((lVar13 != 0) && (0 < *(int *)(lVar13 + 0x298))) &&
         ((**(byte **)(lVar13 + 0x290) & 0x10) != 0)) {
        puVar5 = *(undefined2 **)(param_1 + 0x1448);
        if ((puVar16 < puVar5) && (puVar6 = (undefined2 *)*plVar19, puVar6 <= puVar16)) {
          if (puVar5 == *(undefined2 **)(param_1 + 0x1450)) {
            FUN_14000c460(plVar19,1);
          }
          if (*(undefined2 **)(param_1 + 0x1448) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1448) =
                 *(undefined2 *)(*plVar19 + ((longlong)puVar16 - (longlong)puVar6 >> 1) * 2);
          }
        }
        else {
          if (puVar5 == *(undefined2 **)(param_1 + 0x1450)) {
            FUN_14000c460(plVar19,1);
          }
          if (*(undefined2 **)(param_1 + 0x1448) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1448) = *puVar16;
          }
        }
        *(longlong *)(param_1 + 0x1448) = *(longlong *)(param_1 + 0x1448) + 2;
        puVar7 = *(undefined4 **)(param_1 + 0x1460);
        puVar17 = (undefined4 *)(*(longlong *)(param_1 + 0x938) + lVar18);
        if ((puVar17 < puVar7) && (puVar8 = (undefined4 *)*plVar1, puVar8 <= puVar17)) {
          if (puVar7 == *(undefined4 **)(param_1 + 0x1468)) {
            FUN_14000c390(plVar1,1);
          }
          if (*(undefined4 **)(param_1 + 0x1460) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x1460) =
                 *(undefined4 *)(*plVar1 + ((longlong)puVar17 - (longlong)puVar8 >> 2) * 4);
          }
        }
        else {
          if (puVar7 == *(undefined4 **)(param_1 + 0x1468)) {
            FUN_14000c390(plVar1,1);
          }
          if (*(undefined4 **)(param_1 + 0x1460) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x1460) = *puVar17;
          }
        }
        *(longlong *)(param_1 + 0x1460) = *(longlong *)(param_1 + 0x1460) + 4;
      }
      puVar16 = (undefined2 *)(*(longlong *)(param_1 + 0x920) + lVar14);
      lVar13 = FUN_140d89d60(&DAT_141c53470,*puVar16,
                             *(undefined4 *)(lVar18 + *(longlong *)(param_1 + 0x938)));
      if (((lVar13 != 0) && (4 < *(int *)(lVar13 + 0x298))) &&
         ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 4) & 2) != 0)) {
        puVar5 = *(undefined2 **)(param_1 + 0x1478);
        if ((puVar16 < puVar5) && (puVar6 = (undefined2 *)*plVar2, puVar6 <= puVar16)) {
          if (puVar5 == *(undefined2 **)(param_1 + 0x1480)) {
            FUN_14000c460(plVar2,1);
          }
          if (*(undefined2 **)(param_1 + 0x1478) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1478) =
                 *(undefined2 *)(*plVar2 + ((longlong)puVar16 - (longlong)puVar6 >> 1) * 2);
          }
        }
        else {
          if (puVar5 == *(undefined2 **)(param_1 + 0x1480)) {
            FUN_14000c460(plVar2,1);
          }
          if (*(undefined2 **)(param_1 + 0x1478) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1478) = *puVar16;
          }
        }
        *(longlong *)(param_1 + 0x1478) = *(longlong *)(param_1 + 0x1478) + 2;
        puVar7 = *(undefined4 **)(param_1 + 0x1490);
        puVar17 = (undefined4 *)(*(longlong *)(param_1 + 0x938) + lVar18);
        if ((puVar17 < puVar7) && (puVar8 = (undefined4 *)*plVar3, puVar8 <= puVar17)) {
          if (puVar7 == *(undefined4 **)(param_1 + 0x1498)) {
            FUN_14000c390(plVar3,1);
          }
          if (*(undefined4 **)(param_1 + 0x1490) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x1490) =
                 *(undefined4 *)(*plVar3 + ((longlong)puVar17 - (longlong)puVar8 >> 2) * 4);
          }
        }
        else {
          if (puVar7 == *(undefined4 **)(param_1 + 0x1498)) {
            FUN_14000c390(plVar3,1);
          }
          if (*(undefined4 **)(param_1 + 0x1490) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x1490) = *puVar17;
          }
        }
        *(longlong *)(param_1 + 0x1490) = *(longlong *)(param_1 + 0x1490) + 4;
      }
      lVar14 = lVar14 + 2;
      local_res8[0] = local_res8[0] + 1;
      lVar18 = lVar18 + 4;
    } while ((ulonglong)(longlong)(int)local_res8[0] <
             (ulonglong)(*(longlong *)(param_1 + 0x928) - *(longlong *)(param_1 + 0x920) >> 1));
  }
  plVar19 = (longlong *)(param_1 + 0x7b8);
  puVar15 = (ulonglong *)(param_1 + 0x7a0);
  iVar12 = (int)(*(longlong *)(param_1 + 0x520) - *(longlong *)(param_1 + 0x518) >> 2) + -1;
  lVar14 = (longlong)iVar12;
  if (-1 < iVar12) {
    do {
      cVar11 = FUN_1404567a0(0xb,0xffffffff,0,
                             *(undefined4 *)(*(longlong *)(param_1 + 0x518) + lVar14 * 4));
      if (cVar11 != '\0') {
        puVar9 = *(uint **)(param_1 + 0x7a8);
        local_res8[0] = local_res8[0] & 0xffff0000;
        if ((local_res8 < puVar9) && (puVar10 = (uint *)*puVar15, puVar10 <= local_res8)) {
          if (puVar9 == *(uint **)(param_1 + 0x7b0)) {
            FUN_14000c460(puVar15,1);
          }
          if (*(undefined2 **)(param_1 + 0x7a8) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x7a8) =
                 *(undefined2 *)(*puVar15 + ((longlong)local_res8 - (longlong)puVar10 >> 1) * 2);
          }
        }
        else {
          if (puVar9 == *(uint **)(param_1 + 0x7b0)) {
            FUN_14000c460(puVar15);
          }
          if (*(undefined2 **)(param_1 + 0x7a8) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x7a8) = 0;
          }
        }
        *(longlong *)(param_1 + 0x7a8) = *(longlong *)(param_1 + 0x7a8) + 2;
        puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x518) + lVar14 * 4);
        puVar17 = *(undefined4 **)(param_1 + 0x7c0);
        if ((puVar7 < puVar17) && (puVar8 = (undefined4 *)*plVar19, puVar8 <= puVar7)) {
          if (puVar17 == *(undefined4 **)(param_1 + 0x7c8)) {
            FUN_14000c390(plVar19,1);
          }
          if (*(undefined4 **)(param_1 + 0x7c0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x7c0) =
                 *(undefined4 *)(*plVar19 + ((longlong)puVar7 - (longlong)puVar8 >> 2) * 4);
          }
        }
        else {
          if (puVar17 == *(undefined4 **)(param_1 + 0x7c8)) {
            FUN_14000c390(plVar19);
          }
          if (*(undefined4 **)(param_1 + 0x7c0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x7c0) = *puVar7;
          }
        }
        *(longlong *)(param_1 + 0x7c0) = *(longlong *)(param_1 + 0x7c0) + 4;
      }
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  iVar12 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 1) + -1;
  lVar14 = (longlong)iVar12;
  if (-1 < iVar12) {
    plVar1 = (longlong *)(param_1 + 0x818);
    plVar2 = (longlong *)(param_1 + 0x800);
    plVar3 = (longlong *)(param_1 + 2000);
    do {
      puVar16 = (undefined2 *)(*(longlong *)(param_1 + 0x3f8) + lVar14 * 2);
      puVar5 = *(undefined2 **)(param_1 + 0x7a8);
      if ((puVar16 < puVar5) && (puVar6 = (undefined2 *)*puVar15, puVar6 <= puVar16)) {
        if (puVar5 == *(undefined2 **)(param_1 + 0x7b0)) {
          FUN_14000c460(puVar15,1);
        }
        if (*(undefined2 **)(param_1 + 0x7a8) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x7a8) =
               *(undefined2 *)(*puVar15 + ((longlong)puVar16 - (longlong)puVar6 >> 1) * 2);
        }
      }
      else {
        if (puVar5 == *(undefined2 **)(param_1 + 0x7b0)) {
          FUN_14000c460(puVar15,1);
        }
        if (*(undefined2 **)(param_1 + 0x7a8) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x7a8) = *puVar16;
        }
      }
      *(longlong *)(param_1 + 0x7a8) = *(longlong *)(param_1 + 0x7a8) + 2;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x410) + lVar14 * 4);
      puVar17 = *(undefined4 **)(param_1 + 0x7c0);
      if ((puVar7 < puVar17) && (puVar8 = (undefined4 *)*plVar19, puVar8 <= puVar7)) {
        if (puVar17 == *(undefined4 **)(param_1 + 0x7c8)) {
          FUN_14000c390(plVar19,1);
        }
        if (*(undefined4 **)(param_1 + 0x7c0) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x7c0) =
               *(undefined4 *)(*plVar19 + ((longlong)puVar7 - (longlong)puVar8 >> 2) * 4);
        }
      }
      else {
        if (puVar17 == *(undefined4 **)(param_1 + 0x7c8)) {
          FUN_14000c390(plVar19,1);
        }
        if (*(undefined4 **)(param_1 + 0x7c0) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x7c0) = *puVar7;
        }
      }
      *(longlong *)(param_1 + 0x7c0) = *(longlong *)(param_1 + 0x7c0) + 4;
      puVar16 = (undefined2 *)(*(longlong *)(param_1 + 0x3f8) + lVar14 * 2);
      puVar5 = *(undefined2 **)(param_1 + 0x7d8);
      if ((puVar16 < puVar5) && (puVar6 = (undefined2 *)*plVar3, puVar6 <= puVar16)) {
        if (puVar5 == *(undefined2 **)(param_1 + 0x7e0)) {
          FUN_14000c460(plVar3,1);
        }
        if (*(undefined2 **)(param_1 + 0x7d8) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x7d8) =
               *(undefined2 *)(*plVar3 + ((longlong)puVar16 - (longlong)puVar6 >> 1) * 2);
        }
      }
      else {
        if (puVar5 == *(undefined2 **)(param_1 + 0x7e0)) {
          FUN_14000c460(plVar3,1);
        }
        if (*(undefined2 **)(param_1 + 0x7d8) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x7d8) = *puVar16;
        }
      }
      *(longlong *)(param_1 + 0x7d8) = *(longlong *)(param_1 + 0x7d8) + 2;
      puVar4 = (undefined8 *)(param_1 + 0x7e8);
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x410) + lVar14 * 4);
      puVar17 = *(undefined4 **)(param_1 + 0x7f0);
      if ((puVar7 < puVar17) && (puVar8 = (undefined4 *)*puVar4, puVar8 <= puVar7)) {
        if (puVar17 == *(undefined4 **)(param_1 + 0x7f8)) {
          FUN_14000c390(puVar4,1);
        }
        if (*(undefined4 **)(param_1 + 0x7f0) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x7f0) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x7e8) + ((longlong)puVar7 - (longlong)puVar8 >> 2) * 4);
        }
      }
      else {
        if (puVar17 == *(undefined4 **)(param_1 + 0x7f8)) {
          FUN_14000c390(puVar4,1);
        }
        if (*(undefined4 **)(param_1 + 0x7f0) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x7f0) = *puVar7;
        }
      }
      *(longlong *)(param_1 + 0x7f0) = *(longlong *)(param_1 + 0x7f0) + 4;
      puVar16 = (undefined2 *)(*(longlong *)(param_1 + 0x3f8) + lVar14 * 2);
      puVar5 = *(undefined2 **)(param_1 + 0x808);
      if ((puVar16 < puVar5) && (puVar6 = (undefined2 *)*plVar2, puVar6 <= puVar16)) {
        if (puVar5 == *(undefined2 **)(param_1 + 0x810)) {
          FUN_14000c460(plVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0x808) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x808) =
               *(undefined2 *)(*plVar2 + ((longlong)puVar16 - (longlong)puVar6 >> 1) * 2);
        }
      }
      else {
        if (puVar5 == *(undefined2 **)(param_1 + 0x810)) {
          FUN_14000c460(plVar2,1);
        }
        if (*(undefined2 **)(param_1 + 0x808) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x808) = *puVar16;
        }
      }
      *(longlong *)(param_1 + 0x808) = *(longlong *)(param_1 + 0x808) + 2;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x410) + lVar14 * 4);
      puVar17 = *(undefined4 **)(param_1 + 0x820);
      if ((puVar7 < puVar17) && (puVar8 = (undefined4 *)*plVar1, puVar8 <= puVar7)) {
        if (puVar17 == *(undefined4 **)(param_1 + 0x828)) {
          FUN_14000c390(plVar1,1);
        }
        if (*(undefined4 **)(param_1 + 0x820) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x820) =
               *(undefined4 *)(*plVar1 + ((longlong)puVar7 - (longlong)puVar8 >> 2) * 4);
        }
      }
      else {
        if (puVar17 == *(undefined4 **)(param_1 + 0x828)) {
          FUN_14000c390(plVar1,1);
        }
        if (*(undefined4 **)(param_1 + 0x820) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x820) = *puVar7;
        }
      }
      *(longlong *)(param_1 + 0x820) = *(longlong *)(param_1 + 0x820) + 4;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  return;
}

