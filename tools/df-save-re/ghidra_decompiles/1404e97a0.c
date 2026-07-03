// FUN_1404e97a0 @ 1404e97a0
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140002020 FUN_140002020


undefined4 FUN_1404e97a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 *local_40;
  undefined4 *puStack_38;
  undefined4 *local_30;
  
  uVar12 = 0xfffffffffffffffe;
  uVar10 = 0xffffffff;
  if (*(longlong *)(param_1 + 0xfc0) - *(longlong *)(param_1 + 0xfb8) >> 2 != 0) {
    local_40 = (undefined4 *)0x0;
    puStack_38 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    uVar4 = 0;
    local_30 = (undefined4 *)0x0;
    iVar2 = (int)(*(longlong *)(param_1 + 0xfc0) - *(longlong *)(param_1 + 0xfb8) >> 2) + -1;
    lVar11 = (longlong)iVar2;
    puVar5 = (undefined4 *)0x0;
    puVar8 = (undefined4 *)0x0;
    if (-1 < iVar2) {
      do {
        if (-1 < *(int *)(*(longlong *)(param_1 + 0xfd0) + lVar11 * 4)) {
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xfb8) + lVar11 * 4);
          if ((puVar1 < puVar5) && (puVar8 <= puVar1)) {
            lVar9 = (longlong)puVar1 - (longlong)puVar8;
            if (puVar5 == puVar7) {
              FUN_14000c390(&local_40,1);
              puVar5 = puStack_38;
              puVar7 = local_30;
              puVar8 = local_40;
            }
            if (puVar5 != (undefined4 *)0x0) {
              uVar3 = puVar8[lVar9 >> 2];
LAB_1404e98a1:
              *puVar5 = uVar3;
            }
          }
          else {
            if (puVar5 == puVar7) {
              FUN_14000c390(&local_40,1);
              puVar5 = puStack_38;
              puVar7 = local_30;
              puVar8 = local_40;
            }
            if (puVar5 != (undefined4 *)0x0) {
              uVar3 = *puVar1;
              goto LAB_1404e98a1;
            }
          }
          puVar5 = puVar5 + 1;
          puStack_38 = puVar5;
        }
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    uVar6 = (longlong)puVar5 - (longlong)puVar8 >> 2;
    if (uVar6 != 0) {
      if (1 < (uint)uVar6) {
        uVar4 = FUN_1409fc0c0();
        uVar4 = (uVar4 + (int)((longlong)((ulonglong)uVar4 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar6 & 0xffffffff)) + 1U);
      }
      uVar10 = puVar8[(int)uVar4];
    }
    if (puVar8 != (undefined4 *)0x0) {
      FUN_140002020(puVar8,(longlong)puVar7 - (longlong)puVar8 >> 2,4,param_4,uVar12);
    }
  }
  return uVar10;
}

