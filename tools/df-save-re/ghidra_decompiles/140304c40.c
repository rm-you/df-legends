// FUN_140304c40 @ 140304c40
// callees:
//   -> 14001b850 FUN_14001b850


void FUN_140304c40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_14001b850(*(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18)),param_2,param_3,param_4);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3));
  }
  return;
}

