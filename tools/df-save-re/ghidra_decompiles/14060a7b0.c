// FUN_14060a7b0 @ 14060a7b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14060a830 FUN_14060a830
//   -> 1407ccfa0 FUN_1407ccfa0


undefined8 FUN_14060a7b0(void)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x438);
  uVar2 = FUN_14060a830(pvVar1);
  FUN_1407ccfa0();
  return uVar2;
}

