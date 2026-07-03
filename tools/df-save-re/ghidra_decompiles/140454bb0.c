// FUN_140454bb0 @ 140454bb0
// callees:
//   -> 140dfb5b4 free


void FUN_140454bb0(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c51368 - DAT_141c51360 >> 3 != 0) {
    lVar2 = 0;
    do {
      free(*(void **)(lVar2 + DAT_141c51360));
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c51368 - DAT_141c51360 >> 3));
  }
  DAT_141c51368 = DAT_141c51360;
  return;
}

