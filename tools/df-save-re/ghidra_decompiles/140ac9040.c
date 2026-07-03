// FUN_140ac9040 @ 140ac9040
// callees:
//   -> 140adffb0 FUN_140adffb0
//   -> 140dfb5b4 free
//   -> 140493660 FUN_140493660
//   -> 140303030 FUN_140303030
//   -> 140306db0 FUN_140306db0


void FUN_140ac9040(longlong param_1)

{
  FUN_140adffb0();
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    free(*(void **)(param_1 + 200));
  }
  if (*(void **)(param_1 + 0xd0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xd0));
  }
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    free(*(void **)(param_1 + 0xd8));
  }
  if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe0));
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_140493660(param_1 + 0xe8);
  FUN_140303030(param_1 + 0x118);
  FUN_140306db0(param_1 + 0x148);
  FUN_140306db0(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x48398) = *(undefined8 *)(param_1 + 0x48390);
  return;
}

