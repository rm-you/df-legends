// FUN_1400f1d90 @ 1400f1d90
// callees:
//   -> 1400f1b70 FUN_1400f1b70
//   -> 140dfb5b4 free


void FUN_1400f1d90(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    FUN_1400f1b70(param_2);
    free(param_2);
  }
  return;
}

