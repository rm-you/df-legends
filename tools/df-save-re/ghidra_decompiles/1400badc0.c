// FUN_1400badc0 @ 1400badc0
// callees:
//   -> 1400b9510 FUN_1400b9510
//   -> 140dfb5b4 free


void FUN_1400badc0(undefined8 *param_1)

{
  void *_Memory;
  ushort uVar1;
  
  uVar1 = 0;
  do {
    param_1 = param_1 + 1;
    if ((uVar1 < 500) && (_Memory = (void *)*param_1, _Memory != (void *)0x0)) {
      FUN_1400b9510(_Memory);
      free(_Memory);
      *param_1 = 0;
    }
    uVar1 = uVar1 + 1;
  } while ((short)uVar1 < 500);
  return;
}

