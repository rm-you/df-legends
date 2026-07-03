// FUN_14083ba20 @ 14083ba20
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14083ef20 FUN_14083ef20


void FUN_14083ba20(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x100);
  FUN_14083ef20(pvVar1);
  return;
}

