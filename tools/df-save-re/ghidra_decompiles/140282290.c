// FUN_140282290 @ 140282290
// callees:
//   -> 140281bb0 FUN_140281bb0
//   -> 140dfb5b4 free


void * FUN_140282290(void *param_1)

{
  FUN_140281bb0();
  free(param_1);
  return param_1;
}

