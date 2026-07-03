// FUN_1405cd6c0 @ 1405cd6c0
// callees:


void FUN_1405cd6c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar2 = param_1[1] - lVar3 >> 3;
  if (lVar2 != 0) {
    do {
      plVar1 = *(longlong **)(lVar3 + -8 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      lVar3 = *param_1;
      lVar2 = param_1[1] - lVar3 >> 3;
    } while (lVar2 != 0);
    *(undefined4 *)(param_1 + 9) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}

