// FUN_140402b10 @ 140402b10
// callees:
//   -> 140dfb5b4 free


void FUN_140402b10(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x8aa0) - *(longlong *)(param_1 + 0x8a98) >> 3 != 0) {
    do {
      free(*(void **)(uVar1 + *(longlong *)(param_1 + 0x8a98)));
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x8aa0) - *(longlong *)(param_1 + 0x8a98) >> 3));
  }
  *(undefined8 *)(param_1 + 0x8aa0) = *(undefined8 *)(param_1 + 0x8a98);
  return;
}

