// FUN_1407ad2c0 @ 1407ad2c0
// callees:
//   -> 1407ad250 FUN_1407ad250
//   -> 1407d4c00 FUN_1407d4c00


longlong FUN_1407ad2c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1407ad250();
  if (lVar1 != 0) {
    lVar1 = FUN_1407d4c00(lVar1);
    return lVar1;
  }
  return param_1 + 0x38;
}

