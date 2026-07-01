// FUN_140323f70 @ 140323f70
// callees:
//   -> 14031fd40 FUN_14031fd40


void FUN_140323f70(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c68030 - DAT_141c68028 >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_14031fd40(*(undefined8 *)(lVar2 + DAT_141c68028),param_1,param_2);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c68030 - DAT_141c68028 >> 3));
  }
  return;
}

