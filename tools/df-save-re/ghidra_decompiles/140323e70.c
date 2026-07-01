// FUN_140323e70 @ 140323e70
// callees:
//   -> 1409085c0 FUN_1409085c0


void FUN_140323e70(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c67350 - DAT_141c67348 >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_1409085c0(*(undefined8 *)(lVar2 + DAT_141c67348),param_1,param_2);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c67350 - DAT_141c67348 >> 3));
  }
  return;
}

