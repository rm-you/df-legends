// FUN_1407cd0a0 @ 1407cd0a0
// callees:


void FUN_1407cd0a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    param_3 = param_1 + 8;
    while (lVar2 = lVar1, lVar2 != 0) {
      param_3 = lVar2;
      lVar1 = *(longlong *)(lVar2 + 8);
    }
  }
  lVar1 = *(longlong *)(param_3 + 8);
  *(longlong *)(param_2 + 8) = lVar1;
  *(longlong *)(param_2 + 0x10) = param_3;
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x10) = param_2;
  }
  *(longlong *)(param_3 + 8) = param_2;
  return;
}

