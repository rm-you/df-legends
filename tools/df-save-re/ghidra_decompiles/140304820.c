// FUN_140304820 @ 140304820
// callees:
//   -> 140dfb5c4 operator_new


void FUN_140304820(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x50);
  *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x30) = 0;
  return;
}

