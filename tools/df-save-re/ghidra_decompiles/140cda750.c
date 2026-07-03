// FUN_140cda750 @ 140cda750
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 1407d4c00 FUN_1407d4c00


longlong FUN_140cda750(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ca8390();
  if (lVar1 == 0) {
    return param_1 + 8;
  }
  lVar2 = FUN_1407ad250(lVar1);
  if (lVar2 != 0) {
    lVar1 = FUN_1407d4c00(lVar2);
    return lVar1;
  }
  return lVar1 + 0x38;
}

