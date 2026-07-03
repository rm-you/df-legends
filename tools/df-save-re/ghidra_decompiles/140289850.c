// FUN_140289850 @ 140289850
// callees:
//   -> 140283610 FUN_140283610
//   -> 140dfb5b4 free


void * FUN_140289850(void *param_1)

{
  FUN_140283610();
  free(param_1);
  return param_1;
}

