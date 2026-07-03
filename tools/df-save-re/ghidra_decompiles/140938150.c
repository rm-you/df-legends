// FUN_140938150 @ 140938150
// callees:
//   -> 14048e430 FUN_14048e430
//   -> 140dfb5b4 free
//   -> 14048e580 FUN_14048e580
//   -> 140002020 FUN_140002020
//   -> 1403092c0 FUN_1403092c0


void FUN_140938150(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  
  _Memory = *(void **)(param_1 + 0x2110);
  if (_Memory != (void *)0x0) {
    FUN_14048e430(_Memory);
    free(_Memory);
  }
  if (*(longlong *)(param_1 + 0x2118) != 0) {
    FUN_14048e580();
  }
  lVar1 = *(longlong *)(param_1 + 0x2120);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x2130) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x2120) = 0;
    *(undefined8 *)(param_1 + 0x2128) = 0;
    *(undefined8 *)(param_1 + 0x2130) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20f8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x2108) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x20f8) = 0;
    *(undefined8 *)(param_1 + 0x2100) = 0;
    *(undefined8 *)(param_1 + 0x2108) = 0;
  }
  FUN_1403092c0(param_1 + 0x10);
  return;
}

