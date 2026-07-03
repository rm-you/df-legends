// FUN_14083b9f0 @ 14083b9f0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14083eb60 FUN_14083eb60


void FUN_14083b9f0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x100);
  FUN_14083eb60(pvVar1);
  return;
}

