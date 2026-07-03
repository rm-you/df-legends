// FUN_1408ffbb0 @ 1408ffbb0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1408fefe0 FUN_1408fefe0
//   -> 1408ff4f0 FUN_1408ff4f0
//   -> 1408fec20 FUN_1408fec20
//   -> 1408ff5d0 FUN_1408ff5d0


void FUN_1408ffbb0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1403159b0(param_1 + 2,param_2);
  local_res18[0] = param_1[0x20];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x21];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x24) - *(longlong *)(param_1 + 0x22) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  uVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x22);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x24) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x24) < puVar1) {
    uVar3 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar3 != 0) {
    do {
      FUN_1408fefe0(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x2a) - *(longlong *)(param_1 + 0x28) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x2a) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x2a) < puVar1) {
    uVar3 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar3 != 0) {
    do {
      FUN_1408ff4f0(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x2e) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 0x2e);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x30) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x30) < puVar1) {
    uVar3 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar3 != 0) {
    do {
      FUN_1408fec20(*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x36) - *(longlong *)(param_1 + 0x34) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 0x34);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x36) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x36) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_1408ff5d0(*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  local_res18[0] = param_1[0x3a];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3b];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3c];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3d];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3e];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x3f];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x40];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x41];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x42];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x43];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x44];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x45];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x46];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x47];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x48];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

