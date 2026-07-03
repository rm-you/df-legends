// FUN_14048d570 @ 14048d570
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14048d6d0 FUN_14048d6d0


void FUN_14048d570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pvVar1 = operator_new(0x110);
  FUN_14048d6d0(pvVar1,0,param_3,param_4,uVar2);
  return;
}

