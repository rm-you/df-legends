// FUN_1405c7540 @ 1405c7540
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0


ulonglong FUN_1405c7540(void)

{
  uint uVar1;
  
  uVar1 = FUN_1409fc0c0();
  return (ulonglong)(uVar1 + (int)((longlong)((ulonglong)uVar1 * 0x100000003) >> 0x3f) * 0x7fffffff)
         / 0xba2e8bb;
}

