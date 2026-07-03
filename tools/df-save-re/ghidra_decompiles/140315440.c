// FUN_140315440 @ 140315440
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140315440(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res10 [2];
  
  local_res10[0] = (undefined4)(param_2[1] - *param_2 >> 3);
  FUN_1405bb7c0(param_1,local_res10,4);
  iVar1 = 0;
  if (param_2[1] - *param_2 >> 3 != 0) {
    lVar2 = 0;
    do {
      local_res10[0] = (**(code **)(**(longlong **)(lVar2 + *param_2) + 0x10))();
      FUN_1405bb7c0(param_1,local_res10,4);
      (**(code **)**(undefined8 **)(lVar2 + *param_2))(*(undefined8 **)(lVar2 + *param_2),param_1);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  return;
}

