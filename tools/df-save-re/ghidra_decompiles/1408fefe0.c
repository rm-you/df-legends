// FUN_1408fefe0 @ 1408fefe0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 1408fec20 FUN_1408fec20


void FUN_1408fefe0(undefined4 *param_1,undefined8 param_2)

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
  local_res18[0] = param_1[7];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0xb];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 0xc);
  FUN_1400021b0(param_2,param_1 + 0x12);
  FUN_1400021b0(param_2,param_1 + 0x18);
  FUN_1400021b0(param_2,param_1 + 0x1e);
  FUN_1400021b0(param_2,param_1 + 0x24);
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
  local_res18[0] = param_1[0x36];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x37];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 0x32) - *(longlong *)(param_1 + 0x30) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  uVar2 = 0;
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x32) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x32) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_1408fec20(*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

