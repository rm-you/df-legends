// FUN_1402d95d0 @ 1402d95d0
// callees:
//   -> 1402cd610 FUN_1402cd610


ulonglong FUN_1402d95d0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402cd610(&DAT_141d6ddb8,param_1);
  if (lVar1 != 0) {
    return (ulonglong)*(ushort *)(lVar1 + 0x28);
  }
  return 0xffffffff;
}

