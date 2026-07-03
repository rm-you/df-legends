// FUN_1408dea20 @ 1408dea20
// callees:


longlong FUN_1408dea20(ushort param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 - 0x144;
  uVar2 = (ulonglong)uVar1;
  if (((6 < uVar1) || ((0x77U >> (uVar1 & 0x1f) & 1) == 0)) &&
     (uVar2 = (ulonglong)(param_1 - 0xac), 2 < param_1 - 0xac)) {
    uVar1 = param_1 - 0x1b1;
    uVar2 = (ulonglong)uVar1;
    if (2 < uVar1) {
      return (ulonglong)(uint3)(uVar1 >> 8) << 8;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

