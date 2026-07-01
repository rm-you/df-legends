// FUN_1403158a0 @ 1403158a0
// callees:


void FUN_1403158a0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c67fe8 - DAT_141c67fe0 >> 3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + DAT_141c67fe0) + 0x438))
                (*(longlong **)(lVar2 + DAT_141c67fe0),param_1,param_2);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c67fe8 - DAT_141c67fe0 >> 3));
  }
  return;
}

