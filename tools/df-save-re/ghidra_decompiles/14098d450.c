// FUN_14098d450 @ 14098d450
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 14098c8f0 FUN_14098c8f0
//   -> 1400021b0 FUN_1400021b0


void FUN_14098d450(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x23];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1403159b0(param_1 + 2,param_2);
  local_res18[0] = param_1[0x20];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x21];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x22];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x26) - *(longlong *)(param_1 + 0x24) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  uVar4 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x24);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x26) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x26) < puVar2) {
    uVar5 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      FUN_14098c8f0(*puVar2,param_2);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar5);
  }
  local_res18[0] = param_1[0x2a];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2b];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2c];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 0x2e);
  local_res18[0] = param_1[0x34];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x35];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x36];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x37];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x38];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x39];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x3c) - *(longlong *)(param_1 + 0x3a) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar2 = *(undefined8 **)(param_1 + 0x3a);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3c) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3c) < puVar2) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res18[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}

