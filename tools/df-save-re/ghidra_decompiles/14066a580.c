// FUN_14066a580 @ 14066a580
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0


undefined8 FUN_14066a580(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_1409fc0c0();
  uVar1 = uVar1 + (int)((longlong)((ulonglong)uVar1 * 0x100000003) >> 0x3f) * 0x7fffffff;
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d == 0) {
    return 0x15c;
  }
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return 0x15f;
    }
    return 0x15e;
  }
  return 0x15d;
}

