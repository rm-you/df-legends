// FUN_14014ff90 @ 14014ff90
// callees:


byte FUN_14014ff90(longlong param_1,short param_2,short param_3)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = *(uint *)(param_1 + 0x294 + ((longlong)param_2 * 0x10 + (longlong)param_3) * 4);
  if ((uVar1 >> 0x15 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (uVar1 & 1) != 0;
    if ((uVar1 & 2) != 0) {
      bVar2 = bVar2 | 2;
    }
    if ((uVar1 & 4) != 0) {
      return bVar2 | 4;
    }
  }
  return bVar2;
}

