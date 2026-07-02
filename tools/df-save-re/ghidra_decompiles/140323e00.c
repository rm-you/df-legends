// FUN_140323e00 @ 140323e00
// callees:
//   -> 140908410 FUN_140908410


void FUN_140323e00(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c67098 - DAT_141c67090 >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_140908410(*(undefined8 *)(lVar2 + DAT_141c67090),param_1);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c67098 - DAT_141c67090 >> 3));
  }
  return;
}

