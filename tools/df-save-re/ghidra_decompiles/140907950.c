// FUN_140907950 @ 140907950
// callees:
//   -> 140c41a40 FUN_140c41a40
//   -> 140dfb5b4 free


void FUN_140907950(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    FUN_140c41a40(param_2);
    free(param_2);
  }
  return;
}

