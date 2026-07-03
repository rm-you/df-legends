// FUN_140c0c850 @ 140c0c850
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140c0c850(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)(param_1[1] - *param_1 >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar3 = (param_1[1] - (longlong)puVar2) + 7U >> 3;
  if ((undefined8 *)param_1[1] < puVar2) {
    uVar3 = uVar4;
  }
  uVar5 = uVar4;
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = (undefined4)(param_1[4] - param_1[3] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)param_1[3];
  uVar3 = (param_1[4] - (longlong)puVar2) + 7U >> 3;
  if ((undefined8 *)param_1[4] < puVar2) {
    uVar3 = uVar4;
  }
  uVar5 = uVar4;
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = (undefined4)(param_1[7] - param_1[6] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)param_1[6];
  uVar3 = (param_1[7] - (longlong)puVar2) + 7U >> 3;
  if ((undefined8 *)param_1[7] < puVar2) {
    uVar3 = uVar4;
  }
  uVar5 = uVar4;
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = (undefined4)(param_1[10] - param_1[9] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)param_1[9];
  uVar3 = (param_1[10] - (longlong)puVar2) + 7U >> 3;
  if ((undefined8 *)param_1[10] < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

