// FUN_14031db90 @ 14031db90
// callees:
//   -> 1401b6b20 FUN_1401b6b20


void FUN_14031db90(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c536b8 - DAT_141c536b0 >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_1401b6b20(*(undefined8 *)(lVar2 + DAT_141c536b0),param_1);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c536b8 - DAT_141c536b0 >> 3));
  }
  return;
}

