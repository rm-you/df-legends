// FUN_14090fd70 @ 14090fd70
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 14090f810 FUN_14090f810


void FUN_14090fd70(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 10) - *(longlong *)(param_1 + 8) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar3 = 0;
  uVar2 = (*(longlong *)(param_1 + 10) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 10) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_14090f810(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  local_res18[0] = param_1[0xe];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

