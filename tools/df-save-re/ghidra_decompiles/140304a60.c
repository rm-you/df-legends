// FUN_140304a60 @ 140304a60
// callees:
//   -> 140d1db30 FUN_140d1db30
//   -> 140dfb5b4 free


void FUN_140304a60(longlong *param_1,int param_2)

{
  void *_Memory;
  
  _Memory = *(void **)(*param_1 + (longlong)param_2 * 8);
  if (_Memory != (void *)0x0) {
    FUN_140d1db30(_Memory);
    free(_Memory);
    return;
  }
  return;
}

