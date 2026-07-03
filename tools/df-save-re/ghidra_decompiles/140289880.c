// FUN_140289880 @ 140289880
// callees:
//   -> 140288ff0 FUN_140288ff0
//   -> 140dfb5b4 free


void FUN_140289880(longlong param_1)

{
  void *_Memory;
  ulonglong uVar1;
  short sVar2;
  
  uVar1 = 0;
  sVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3 != 0) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0x20) + uVar1 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140288ff0(_Memory);
        free(_Memory);
      }
      sVar2 = sVar2 + 1;
      uVar1 = (ulonglong)sVar2;
    } while (uVar1 < (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)
            );
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

