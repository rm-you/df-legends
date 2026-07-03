// FUN_1408fec20 @ 1408fec20
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1408fec20(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar2 = *(undefined8 **)(param_1 + 2);
  uVar3 = 0;
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 4) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res18[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}

