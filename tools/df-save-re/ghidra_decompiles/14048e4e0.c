// FUN_14048e4e0 @ 14048e4e0
// callees:
//   -> 14048e430 FUN_14048e430
//   -> 140dfb5b4 free
//   -> 14048e580 FUN_14048e580
//   -> 140002020 FUN_140002020


void FUN_14048e4e0(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  
  _Memory = *(void **)(param_1 + 0x48);
  if (_Memory != (void *)0x0) {
    FUN_14048e430(_Memory);
    free(_Memory);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_14048e580();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x30) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x18) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

