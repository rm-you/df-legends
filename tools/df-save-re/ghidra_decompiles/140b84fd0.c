// FUN_140b84fd0 @ 140b84fd0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140b853c0 FUN_140b853c0
//   -> 140b85470 FUN_140b85470
//   -> 140b85610 FUN_140b85610


void FUN_140b84fd0(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 local_res18 [2];
  ulonglong uVar2;
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1c];
  FUN_1405bb7c0(param_2,local_res18,4);
  uVar5 = 0;
  if ((param_1[2] == 1) && (0 < (int)param_1[0x1c])) {
    puVar6 = param_1 + 3;
    uVar2 = uVar5;
    do {
      local_res18[0] = *puVar6;
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      puVar6 = puVar6 + 1;
    } while ((int)uVar1 < (int)param_1[0x1c]);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x1e) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar3 = *(undefined8 **)(param_1 + 0x1e);
  uVar2 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x20) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0x20) < puVar3) {
    uVar2 = uVar5;
  }
  uVar4 = uVar5;
  if (uVar2 != 0) {
    do {
      FUN_140b853c0(*puVar3,param_2);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < uVar2);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x26) - *(longlong *)(param_1 + 0x24) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar3 = *(undefined8 **)(param_1 + 0x24);
  uVar2 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x26) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0x26) < puVar3) {
    uVar2 = uVar5;
  }
  if (uVar2 != 0) {
    do {
      FUN_140b85470(*puVar3,param_2);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar2);
  }
  FUN_140b85610(param_1 + 0x2a,param_2);
  return;
}

