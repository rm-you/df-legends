// FUN_1403023c0 @ 1403023c0
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1403023c0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  *(undefined8 *)((longlong)pvVar1 + 8) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x30) = 0;
  return;
}

