// FUN_140a5bac0 @ 140a5bac0
// callees:
//   -> 14009d500 FUN_14009d500
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140a5bac0(longlong param_1)

{
  longlong *plVar1;
  void *_Memory;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  puVar8 = (ulonglong *)(param_1 + 8);
  lVar4 = 100;
  uVar6 = 0;
  do {
    plVar2 = (longlong *)*puVar8;
    uVar5 = (puVar8[1] - (longlong)plVar2) + 7 >> 3;
    if ((longlong *)puVar8[1] < plVar2) {
      uVar5 = uVar6;
    }
    uVar7 = uVar6;
    if (uVar5 != 0) {
      do {
        plVar1 = (longlong *)*plVar2;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,1);
        }
        plVar2 = plVar2 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
    puVar8[1] = *puVar8;
    puVar8 = puVar8 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = *(undefined8 **)(param_1 + 0x978);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x980) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0x980) < puVar3) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      _Memory = (void *)*puVar3;
      if (_Memory != (void *)0x0) {
        FUN_14009d500(_Memory);
        free(_Memory);
      }
      puVar3 = puVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  *(undefined8 *)(param_1 + 0x980) = *(undefined8 *)(param_1 + 0x978);
  lVar4 = *(longlong *)(param_1 + 0x978);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x988) - lVar4 >> 3,8);
    *(undefined8 *)(param_1 + 0x978) = 0;
    *(undefined8 *)(param_1 + 0x980) = 0;
    *(undefined8 *)(param_1 + 0x988) = 0;
  }
  _eh_vector_destructor_iterator_((void *)(param_1 + 8),0x18,100,FUN_1400030c0);
  return;
}

