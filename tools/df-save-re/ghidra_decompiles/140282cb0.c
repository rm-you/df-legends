// FUN_140282cb0 @ 140282cb0
// callees:
//   -> 140282540 FUN_140282540
//   -> 140dfb5b4 free


void FUN_140282cb0(longlong param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x150) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x150) < puVar1) {
    uVar4 = uVar3;
  }
  uVar2 = uVar3;
  if (uVar4 != 0) {
    do {
      _Memory = (void *)*puVar1;
      if (_Memory != (void *)0x0) {
        FUN_140282540(_Memory);
        free(_Memory);
      }
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x148);
  puVar1 = *(undefined8 **)(param_1 + 0x130);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x138) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x138) < puVar1) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      free((void *)*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  return;
}

