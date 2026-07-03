// FUN_140288870 @ 140288870
// callees:
//   -> 140288ce0 FUN_140288ce0
//   -> 140dfb5b4 free


void * FUN_140288870(void *param_1)

{
  FUN_140288ce0();
  free(param_1);
  return param_1;
}

