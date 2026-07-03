// FUN_1401411b0 @ 1401411b0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 14000d880 FUN_14000d880
//   -> 140010bc0 FUN_140010bc0
//   -> 1401409a0 FUN_1401409a0
//   -> 1400021b0 FUN_1400021b0


void FUN_1401411b0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res18 [2];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_14000d880(param_1 + 2,param_2);
  local_res18[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_140010bc0(param_1 + 6,param_2);
  local_res18[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_140010bc0(param_1 + 0x12,param_2);
  local_res18[0] = param_1[0x1c];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_140010bc0(param_1 + 0x1e,param_2);
  local_res18[0] = param_1[0x28];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x29];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2a];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2b];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2c];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2d];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2e];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x2f];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x30];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x3e) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  uVar4 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x3e);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x40) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x40) < puVar2) {
    uVar5 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      FUN_1401409a0(*puVar2,param_2);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar5);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x34) - *(longlong *)(param_1 + 0x32) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar2 = *(undefined8 **)(param_1 + 0x32);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x34) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x34) < puVar2) {
    uVar5 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res18[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res18,4);
      FUN_1400021b0(param_2,puVar1 + 4);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar5);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x3a) - *(longlong *)(param_1 + 0x38) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3a) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3a) < puVar2) {
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
      FUN_1400021b0(param_2,puVar1 + 4);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar5);
  }
  local_res18[0] = param_1[0x44];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

