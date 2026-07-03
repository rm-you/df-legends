// FUN_140ad7830 @ 140ad7830
// callees:


void FUN_140ad7830(longlong param_1,short param_2,short param_3)

{
  longlong lVar1;
  
  if ((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0xa0))) && (-1 < param_3)) &&
     (((int)param_3 < *(int *)(param_1 + 0xa4) && (*(longlong *)(param_1 + 0x2a0) != 0)))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)param_2 * 8);
    if (1 < *(int *)(lVar1 + 0x28 + (longlong)param_3 * 0x70)) {
      lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)param_3 * 0x70);
      *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) & 0xef;
    }
  }
  return;
}

