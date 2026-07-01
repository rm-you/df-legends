// FUN_14031aa30 @ 14031aa30
// callees:


void FUN_14031aa30(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c70660 - DAT_141c70658 >> 3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + DAT_141c70658) + 0x218))
                (*(longlong **)(lVar2 + DAT_141c70658),param_1,param_2);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c70660 - DAT_141c70658 >> 3));
  }
  return;
}

