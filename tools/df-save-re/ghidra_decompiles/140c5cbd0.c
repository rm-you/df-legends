// FUN_140c5cbd0 @ 140c5cbd0
// callees:
//   -> 140c5cc40 FUN_140c5cc40


void FUN_140c5cbd0(longlong *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x5a0))();
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = (**(code **)*param_1)(param_1);
  FUN_140c5cc40(uVar3,uVar2,uVar1,param_2);
  return;
}

