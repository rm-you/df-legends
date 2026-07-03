// FUN_140301700 @ 140301700
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1400026e0 FUN_1400026e0


void * FUN_140301700(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x128);
  FUN_1400026e0((longlong)pvVar1 + 8);
  *(undefined8 *)((longlong)pvVar1 + 0x88) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x90) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x98) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xa0) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xa8) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xb0) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xb8) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xc0) = 0;
  *(undefined8 *)((longlong)pvVar1 + 200) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xd0) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xd8) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xe0) = 0;
  return pvVar1;
}

