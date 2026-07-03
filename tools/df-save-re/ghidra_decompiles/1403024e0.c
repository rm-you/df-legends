// FUN_1403024e0 @ 1403024e0
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1403024e0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x40);
  *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x30) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x38) = 0;
  return;
}

