// FUN_140ce0f50 @ 140ce0f50
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1407b8b40 FUN_1407b8b40
//   -> 140ce0ff0 FUN_140ce0ff0
//   -> 140ce0da0 FUN_140ce0da0
//   -> 1407b9500 FUN_1407b9500


ulonglong FUN_140ce0f50(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 == -1) {
    return 5;
  }
  lVar2 = FUN_140ca8390();
  if (lVar2 != 0) {
    uVar3 = FUN_1407b8b40(lVar2,param_2,param_3);
    return uVar3;
  }
  uVar1 = FUN_140ce0ff0(param_1,param_2);
  FUN_140ce0da0(param_1,param_3);
  FUN_1407b9500();
  return (ulonglong)uVar1;
}

