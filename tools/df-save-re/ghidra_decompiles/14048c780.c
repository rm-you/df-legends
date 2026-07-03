// FUN_14048c780 @ 14048c780
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14048c850 FUN_14048c850


void FUN_14048c780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  pvVar1 = operator_new(0xc0);
  FUN_14048c850(pvVar1,0,param_3,param_4,uVar2);
  return;
}

