// FUN_1408cf9b0 @ 1408cf9b0
// callees:


void FUN_1408cf9b0(ulonglong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)param_1[1];
  plVar5 = (longlong *)*param_1;
  if (plVar5 < plVar1) {
    uVar6 = 0;
    do {
      plVar3 = *(longlong **)(*plVar5 + 0x20);
      plVar2 = *(longlong **)(*plVar5 + 0x28);
      uVar8 = (ulonglong)((longlong)plVar2 + (7 - (longlong)plVar3)) >> 3;
      if (plVar2 < plVar3) {
        uVar8 = uVar6;
      }
      uVar4 = uVar6;
      uVar7 = uVar6;
      if (uVar8 != 0) {
        do {
          *(int *)(*plVar3 + 0x28) = (int)uVar7;
          (**(code **)(*(longlong *)*plVar3 + 0xa8))();
          uVar7 = (ulonglong)((int)uVar7 + 1);
          plVar3 = plVar3 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar8);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 < plVar1);
  }
  return;
}

