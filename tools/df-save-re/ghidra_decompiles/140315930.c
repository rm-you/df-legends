// FUN_140315930 @ 140315930
// callees:


void FUN_140315930(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (DAT_141c67fe8 - DAT_141c67fe0 >> 3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + DAT_141c67fe0) + 0x430))
                (*(longlong **)(lVar2 + DAT_141c67fe0),param_1);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141c67fe8 - DAT_141c67fe0 >> 3));
  }
  return;
}

