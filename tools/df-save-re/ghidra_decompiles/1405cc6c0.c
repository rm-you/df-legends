// FUN_1405cc6c0 @ 1405cc6c0
// callees:
//   -> 1400f1b70 FUN_1400f1b70
//   -> 140dfb5b4 free


void FUN_1405cc6c0(longlong param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  while (puVar1 != (undefined8 *)0x0) {
    _Memory = (void *)*puVar1;
    if (_Memory != (void *)0x0) {
      FUN_1400f1b70(_Memory);
      free(_Memory);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  uVar3 = 0;
  uVar2 = (*(longlong *)(param_1 + 0x28) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x28) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      free((void *)*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  return;
}

