// FUN_1408dd6a0 @ 1408dd6a0
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140071310 FUN_140071310
//   -> 140002020 FUN_140002020


int FUN_1408dd6a0(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res20 [2];
  uint *local_40;
  uint *puStack_38;
  uint *local_30;
  
  if (param_1[4] - param_1[3] >> 3 == 0) {
    iVar2 = -1;
  }
  else {
    local_40 = (uint *)0x0;
    puStack_38 = (uint *)0x0;
    puVar5 = (uint *)0x0;
    local_30 = (uint *)0x0;
    local_res20[0] = 0;
    puVar6 = (uint *)0x0;
    puVar9 = (uint *)0x0;
    puVar8 = puVar5;
    if (param_1[4] - param_1[3] >> 3 != 0) {
      puVar11 = puVar5;
      do {
        lVar10 = *(longlong *)(param_1[3] + (longlong)puVar5 * 8);
        if ((((-1 < param_3) && (iVar2 = param_3 >> 3, -1 < iVar2)) &&
            (iVar2 < *(int *)(lVar10 + 0x440))) &&
           ((((byte)(1 << ((byte)param_3 & 7)) &
             *(byte *)((longlong)iVar2 + *(longlong *)(lVar10 + 0x438))) != 0 &&
            ((*(int *)(lVar10 + 0x40) < 3 ||
             ((*(byte *)(*(longlong *)(lVar10 + 0x38) + 2) & 1) == 0)))))) {
          if ((local_res20 < puVar6) && (puVar9 <= local_res20)) {
            lVar10 = (longlong)local_res20 - (longlong)puVar9;
            if (puVar6 == puVar8) {
              FUN_14000c390(&local_40,1);
              puVar6 = puStack_38;
              puVar8 = local_30;
              puVar9 = local_40;
            }
            if (puVar6 != (uint *)0x0) {
              *puVar6 = puVar9[lVar10 >> 2];
            }
          }
          else {
            if (puVar6 == puVar8) {
              FUN_14000c390(&local_40,1);
              puVar6 = puStack_38;
              puVar8 = local_30;
              puVar9 = local_40;
            }
            if (puVar6 != (uint *)0x0) {
              *puVar6 = (uint)puVar11;
            }
          }
          puVar6 = puVar6 + 1;
          puStack_38 = puVar6;
        }
        local_res20[0] = (uint)puVar11 + 1;
        puVar11 = (uint *)(ulonglong)local_res20[0];
        puVar5 = (uint *)(longlong)(int)local_res20[0];
      } while (puVar5 < (uint *)(param_1[4] - param_1[3] >> 3));
    }
    uVar3 = 0;
    uVar7 = (longlong)puVar6 - (longlong)puVar9 >> 2;
    if (uVar7 != 0) {
      if (1 < (uint)uVar7) {
        uVar3 = FUN_1409fc0c0();
        uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar7 & 0xffffffff)) + 1U);
      }
      uVar1 = *(undefined8 *)(param_1[3] + (longlong)(int)puVar9[(int)uVar3] * 8);
      iVar2 = (int)(param_1[1] - *param_1 >> 3) + -1;
      if (-1 < iVar2) {
        lVar10 = (longlong)iVar2;
        puVar12 = (undefined8 *)(*param_1 + lVar10 * 8);
        do {
          iVar4 = FUN_140071310(*puVar12,uVar1);
          if (iVar4 == 0) goto LAB_1408dd8ce;
          iVar2 = iVar2 + -1;
          puVar12 = puVar12 + -1;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
    }
    iVar2 = -1;
LAB_1408dd8ce:
    if (puVar9 != (uint *)0x0) {
      FUN_140002020(puVar9,(longlong)puVar8 - (longlong)puVar9 >> 2,4);
    }
  }
  return iVar2;
}

