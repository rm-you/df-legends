// FUN_14031c540 @ 14031c540
// callees:
//   -> 1404a8c40 FUN_1404a8c40


void FUN_14031c540(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c53720 - DAT_141c53718 >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_1404a8c40(*(undefined8 *)(lVar2 + DAT_141c53718),param_1,param_2);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c53720 - DAT_141c53718 >> 3));
  }
  return;
}

