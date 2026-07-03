// FUN_1405cc3c0 @ 1405cc3c0
// callees:
//   -> 1407db210 FUN_1407db210
//   -> 140dfb5b4 free


void FUN_1405cc3c0(ulonglong *param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = 0;
  uVar2 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 == 0) {
    param_1[1] = (ulonglong)puVar1;
  }
  else {
    do {
      _Memory = (void *)*puVar1;
      if (_Memory != (void *)0x0) {
        FUN_1407db210(_Memory);
        free(_Memory);
      }
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    param_1[1] = *param_1;
  }
  return;
}

