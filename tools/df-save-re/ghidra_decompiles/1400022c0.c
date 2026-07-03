// FUN_1400022c0 @ 1400022c0
// callees:
//   -> 140dfb5b4 free


void FUN_1400022c0(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

