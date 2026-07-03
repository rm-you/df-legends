// FUN_140bad300 @ 140bad300
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 140002f20 FUN_140002f20
//   -> 140c0bca0 FUN_140c0bca0
//   -> 140071df0 FUN_140071df0


void FUN_140bad300(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[7];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xb];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xc];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xe];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x18);
  FUN_1400021b0(param_2,param_1 + 0x1e);
  FUN_140002f20(param_1 + 0x2a,param_2);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x36) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar6 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x36);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x38) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    uVar4 = uVar6;
  }
  uVar3 = uVar6;
  if (uVar4 != 0) {
    do {
      puVar2 = (undefined4 *)*puVar1;
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_140c0bca0(puVar2 + 1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar4);
  }
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x3e) - *(longlong *)(param_1 + 0x3c) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 0x3c);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3e) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3e) < puVar1) {
    uVar4 = uVar6;
  }
  uVar3 = uVar6;
  if (uVar4 != 0) {
    do {
      FUN_140071df0(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar4);
  }
  FUN_1400021b0(param_2,param_1 + 0x42);
  local_res8[0] = param_1[0x7a];
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < (int)param_1[0x7a]) {
    puVar2 = param_1 + 0x48;
    do {
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      puVar2 = puVar2 + 1;
    } while ((int)uVar5 < (int)param_1[0x7a]);
  }
  local_res8[0] = param_1[0x7b];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x7c];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x24);
  return;
}

