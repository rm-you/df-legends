// FUN_140df4960 @ 140df4960
// callees:


void FUN_140df4960(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  uVar4 = 0;
  uVar3 = (*(longlong *)(param_1 + 0x38) - (longlong)plVar2) + 7U >> 3;
  if (*(longlong **)(param_1 + 0x38) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x78))(plVar1,1);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  return;
}

