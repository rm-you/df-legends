// FUN_1400f1b70 @ 1400f1b70
// callees:
//   -> 140846bc0 FUN_140846bc0
//   -> 140847550 FUN_140847550
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 1400f1980 FUN_1400f1980


void FUN_1400f1b70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Memory;
  longlong lVar1;
  
  FUN_140846bc0(param_1,0,0,param_4,0xfffffffffffffffe);
  FUN_140847550(param_1,0,1);
  _Memory = *(void **)(param_1 + 8);
  if (_Memory != (void *)0x0) {
    if (*(longlong *)((longlong)_Memory + 8) != 0) {
      *(undefined8 *)(*(longlong *)((longlong)_Memory + 8) + 0x10) =
           *(undefined8 *)((longlong)_Memory + 0x10);
    }
    if (*(longlong *)((longlong)_Memory + 0x10) != 0) {
      *(undefined8 *)(*(longlong *)((longlong)_Memory + 0x10) + 8) =
           *(undefined8 *)((longlong)_Memory + 8);
    }
    free(_Memory);
  }
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x120) - lVar1 >> 1,2);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x108) - lVar1 >> 1,2);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xf0) - lVar1 >> 1,2);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  FUN_1400f1980(param_1 + 200);
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xc0) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xa8) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x90) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x68)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0x50),*(ulonglong *)(param_1 + 0x68) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x68) = 0xf;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x50) = 0;
  }
  return;
}

