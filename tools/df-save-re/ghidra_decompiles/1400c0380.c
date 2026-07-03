// FUN_1400c0380 @ 1400c0380
// callees:


longlong FUN_1400c0380(ushort param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 - 0x109;
  uVar2 = (ulonglong)uVar1;
  if ((((((0x3e < uVar1) ||
         (uVar2 = (ulonglong)(int)uVar1, (0x7a0000000007ffffU >> (uVar2 & 0x3f) & 1) == 0)) &&
        (param_1 != 0xea)) &&
       ((0x2c < param_1 - 0x24 ||
        (uVar2 = (ulonglong)(int)(param_1 - 0x24), (0x100000000107U >> (uVar2 & 0x3f) & 1) == 0))))
      && ((uVar2 = (ulonglong)(param_1 - 0x195), 3 < param_1 - 0x195 &&
          ((uVar2 = (ulonglong)(param_1 - 0x150), 3 < param_1 - 0x150 && (param_1 != 399)))))) &&
     (uVar2 = (ulonglong)(param_1 - 0x212), 0xe < param_1 - 0x212)) {
    uVar1 = param_1 - 0x26c;
    uVar2 = (ulonglong)uVar1;
    if (0xe < uVar1) {
      return (ulonglong)(uint3)(uVar1 >> 8) << 8;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

