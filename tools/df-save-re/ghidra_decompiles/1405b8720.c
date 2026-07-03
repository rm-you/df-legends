// FUN_1405b8720 @ 1405b8720
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1405b8720(longlong param_1,short param_2,short param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    puVar1 = operator_new(0x2800);
    lVar7 = 0x10;
    puVar6 = puVar1;
    do {
      lVar4 = 0x10;
      do {
        lVar2 = 5;
        do {
          *puVar6 = 0xffffffffffffffff;
          puVar6 = puVar6 + 1;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(undefined8 **)(param_1 + 0x18) = puVar1;
  }
  lVar7 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x240) + (longlong)param_2 * 8);
  uVar3 = (int)*(short *)(*(longlong *)(lVar7 + 0x98) + (longlong)param_3 * 2) & 0x8000000f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
  }
  uVar5 = (int)*(short *)(*(longlong *)(lVar7 + 0xb0) + (longlong)param_3 * 2) & 0x8000000f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
  }
  lVar4 = ((longlong)(short)uVar3 * 0x10 + (longlong)(short)uVar5) * 5;
  *(int *)(*(longlong *)(param_1 + 0x18) + (*(short *)(lVar7 + 0x84) + lVar4) * 8) = (int)param_2;
  *(int *)(*(longlong *)(param_1 + 0x18) + 4 + (*(short *)(lVar7 + 0x84) + lVar4) * 8) =
       (int)param_3;
  return;
}

