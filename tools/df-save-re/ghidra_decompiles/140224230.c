// FUN_140224230 @ 140224230
// callees:
//   -> 1402242d0 FUN_1402242d0
//   -> 140dfb5b4 free


void FUN_140224230(longlong param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x89d0);
  uVar2 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x89d8) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x89d8) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      _Memory = (void *)*puVar1;
      if (_Memory != (void *)0x0) {
        FUN_1402242d0(_Memory);
        free(_Memory);
      }
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  *(undefined8 *)(param_1 + 0x89d8) = *(undefined8 *)(param_1 + 0x89d0);
  return;
}

