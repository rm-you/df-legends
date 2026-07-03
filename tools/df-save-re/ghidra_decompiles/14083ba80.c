// FUN_14083ba80 @ 14083ba80
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14083f5e0 FUN_14083f5e0


void FUN_14083ba80(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x100);
  FUN_14083f5e0(pvVar1);
  return;
}

