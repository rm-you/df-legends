// FUN_14030c370 @ 14030c370
// callees:
//   -> 140301ec0 FUN_140301ec0
//   -> 140dfb5b4 free


void FUN_14030c370(longlong param_1)

{
  void *_Memory;
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x8bc0);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x8bc8) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x8bc8) < puVar2) {
    uVar5 = uVar6;
  }
  uVar4 = uVar6;
  if (uVar5 != 0) {
    do {
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        FUN_140301ec0(_Memory);
        free(_Memory);
      }
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  *(undefined8 *)(param_1 + 0x8bc8) = *(undefined8 *)(param_1 + 0x8bc0);
  plVar3 = *(longlong **)(param_1 + 0x8bd8);
  uVar5 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x8be0) + (7 - (longlong)plVar3)) >> 3;
  if (*(longlong **)(param_1 + 0x8be0) < plVar3) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x78))(plVar1,1);
      }
      plVar3 = plVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  *(undefined8 *)(param_1 + 0x8be0) = *(undefined8 *)(param_1 + 0x8bd8);
  return;
}

