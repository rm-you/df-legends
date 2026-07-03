// FUN_1400c0400 @ 1400c0400
// callees:


longlong FUN_1400c0400(ushort param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 - 0x11c;
  uVar2 = (ulonglong)uVar1;
  if (((((0x3b < uVar1) ||
        (uVar2 = (ulonglong)(int)uVar1, (0xf00f0800007ffffU >> (uVar2 & 0x3f) & 1) == 0)) &&
       (param_1 != 0xeb)) &&
      ((0x24 < param_1 - 0x2d ||
       (uVar2 = (ulonglong)(int)(param_1 - 0x2d), (0x1000070001U >> (uVar2 & 0x3f) & 1) == 0)))) &&
     ((uVar2 = (ulonglong)(param_1 - 0x199), 3 < param_1 - 0x199 &&
      ((param_1 != 400 && (uVar2 = (ulonglong)(param_1 - 0x221), 0xe < param_1 - 0x221)))))) {
    uVar1 = param_1 - 0x27b;
    uVar2 = (ulonglong)uVar1;
    if (0xe < uVar1) {
      return (ulonglong)(uint3)(uVar1 >> 8) << 8;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

