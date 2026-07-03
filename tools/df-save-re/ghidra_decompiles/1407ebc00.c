// FUN_1407ebc00 @ 1407ebc00
// callees:
//   -> 1407f3200 FUN_1407f3200


void FUN_1407ebc00(longlong *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar4 = (**(code **)(*param_1 + 0x18))();
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = (**(code **)*param_1)(param_1);
  FUN_1407f3200(uVar3,uVar2,uVar1,uVar4);
  return;
}

