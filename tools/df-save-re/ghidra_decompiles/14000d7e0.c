// FUN_14000d7e0 @ 14000d7e0
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0


ulonglong FUN_14000d7e0(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 2) {
    return 0;
  }
  uVar1 = FUN_1409fc0c0();
  return (ulonglong)(uVar1 + (int)((longlong)((ulonglong)uVar1 * 0x100000003) >> 0x3f) * 0x7fffffff)
         / (ulonglong)((int)(0x7fffffff / (ulonglong)param_1) + 1);
}

