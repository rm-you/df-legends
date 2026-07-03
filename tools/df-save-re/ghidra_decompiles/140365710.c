// FUN_140365710 @ 140365710
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140365890 FUN_140365890


void FUN_140365710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pvVar1 = operator_new(0xb8);
  FUN_140365890(pvVar1,0,param_3,param_4,uVar2);
  return;
}

