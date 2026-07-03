// FUN_140282da0 @ 140282da0
// callees:
//   -> 140282540 FUN_140282540
//   -> 140dfb5b4 free


void * FUN_140282da0(void *param_1)

{
  FUN_140282540();
  free(param_1);
  return param_1;
}

