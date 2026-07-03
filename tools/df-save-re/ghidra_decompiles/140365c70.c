// FUN_140365c70 @ 140365c70
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140365f60 FUN_140365f60


void FUN_140365c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pvVar1 = operator_new(200);
  FUN_140365f60(pvVar1,0,param_3,param_4,uVar2);
  return;
}

