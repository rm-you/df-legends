// FUN_140566c90 @ 140566c90
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140566d60 FUN_140566d60


void FUN_140566c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pvVar1 = operator_new(0xb8);
  FUN_140566d60(pvVar1,0,param_3,param_4,uVar2);
  return;
}

