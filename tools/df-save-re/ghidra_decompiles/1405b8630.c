// FUN_1405b8630 @ 1405b8630
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1405b8630(longlong param_1,short param_2,short param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    puVar1 = operator_new(0x400);
    lVar6 = 0x10;
    puVar5 = puVar1;
    do {
      lVar3 = 0x10;
      do {
        *puVar5 = 0xffff;
        puVar5[1] = 0xffff;
        puVar5 = puVar5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(undefined2 **)(param_1 + 0x10) = puVar1;
  }
  lVar6 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x288) + (longlong)param_2 * 8);
  uVar2 = (int)*(short *)(*(longlong *)(lVar6 + 0x78) + (longlong)param_3 * 2) & 0x8000000f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
  }
  uVar4 = (int)*(short *)(*(longlong *)(lVar6 + 0x90) + (longlong)param_3 * 2) & 0x8000000f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
  }
  lVar6 = (longlong)(short)uVar2 * 0x10 + (longlong)(short)uVar4;
  *(short *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4) = param_2;
  *(short *)(*(longlong *)(param_1 + 0x10) + 2 + lVar6 * 4) = param_3;
  return;
}

