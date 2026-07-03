// FUN_140150400 @ 140150400
// callees:
//   -> 140dfb5c4 operator_new


void FUN_140150400(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x14);
  *(undefined2 *)((longlong)pvVar1 + 6) = 0xffff;
  *(undefined2 *)((longlong)pvVar1 + 8) = 0xffff;
  *(undefined2 *)((longlong)pvVar1 + 10) = 0xffff;
  *(undefined4 *)((longlong)pvVar1 + 0xc) = 0xffffffff;
  *(undefined2 *)((longlong)pvVar1 + 0x12) = 0x20;
  *(undefined1 *)((longlong)pvVar1 + 0x10) = 0;
  return;
}

