// FUN_140304680 @ 140304680
// callees:
//   -> 140c15720 FUN_140c15720


void FUN_140304680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_140c15720(*(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18)),param_2,param_3,param_4);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3));
  }
  return;
}

