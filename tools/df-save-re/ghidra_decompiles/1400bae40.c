// FUN_1400bae40 @ 1400bae40
// callees:
//   -> 1400b9510 FUN_1400b9510
//   -> 140dfb5b4 free


void FUN_1400bae40(longlong param_1,ushort param_2)

{
  void *_Memory;
  
  if (param_2 < 500) {
    _Memory = *(void **)(param_1 + 8 + (longlong)(short)param_2 * 8);
    if (_Memory != (void *)0x0) {
      FUN_1400b9510(_Memory);
      free(_Memory);
      *(undefined8 *)(param_1 + (longlong)(short)param_2 * 8 + 8) = 0;
    }
  }
  return;
}

