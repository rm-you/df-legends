// FUN_1400be960 @ 1400be960
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1400be960(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar3 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      local_res8[0] = (*(code *)**(undefined8 **)*puVar1)();
      FUN_1405bb7c0(param_2,local_res8,4);
      (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  local_res8[0] = (undefined4)((longlong)(param_1[5] - param_1[4]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = (undefined8 *)param_1[4];
  uVar3 = (param_1[5] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[5] < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      local_res8[0] = (*(code *)**(undefined8 **)*puVar1)();
      FUN_1405bb7c0(param_2,local_res8,4);
      (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

