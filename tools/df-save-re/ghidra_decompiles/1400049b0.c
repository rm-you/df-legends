// FUN_1400049b0 @ 1400049b0
// callees:


void FUN_1400049b0(longlong param_1,short param_2,short param_3,short param_4,uint param_5)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (lVar2 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8)
                   + ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar2 != 0)))))) {
    uVar4 = (int)param_2 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    uVar3 = (int)param_3 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    puVar1 = (uint *)(lVar2 + 0x694 + ((longlong)(int)uVar4 * 0x10 + (longlong)(int)uVar3) * 4);
    *puVar1 = *puVar1 & ~param_5;
  }
  return;
}

