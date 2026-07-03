// FUN_1405bd250 @ 1405bd250
// callees:
//   -> 140dfb5b4 free


void FUN_1405bd250(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(DAT_141c33c00 - DAT_141c33bf8 >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(DAT_141c33bf8 + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  DAT_141c33c00 = DAT_141c33bf8;
  param_1[1] = 0;
  iVar1 = 0;
  *param_1 = 0xffffffff;
  DAT_141d86428 = DAT_141d86420;
  if (DAT_141d69510 - DAT_141d69508 >> 3 != 0) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined8 *)(*(longlong *)(lVar2 + DAT_141d69508) + 0x70) =
           *(undefined8 *)(*(longlong *)(lVar2 + DAT_141d69508) + 0x68);
      *(undefined4 *)(*(longlong *)(lVar2 + DAT_141d69508) + 0x80) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(lVar2 + DAT_141d69508) + 0x84) = 0;
      lVar2 = lVar2 + 8;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141d69510 - DAT_141d69508 >> 3));
  }
  return;
}

