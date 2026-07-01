// FUN_14031c5d0 @ 14031c5d0
// callees:
//   -> 1404aaa30 FUN_1404aaa30


void FUN_14031c5d0(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c53738 - DAT_141c53730 >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_1404aaa30(*(undefined8 *)(lVar2 + DAT_141c53730),param_1,param_2,param_3);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c53738 - DAT_141c53730 >> 3));
  }
  return;
}

