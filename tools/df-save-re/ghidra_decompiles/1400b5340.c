// FUN_1400b5340 @ 1400b5340
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140071df0 FUN_140071df0
//   -> 1400021b0 FUN_1400021b0


void FUN_1400b5340(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 4);
  uVar3 = 0;
  uVar2 = (*(longlong *)(param_1 + 6) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 6) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_140071df0(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  FUN_1400021b0(param_2,param_1 + 10);
  FUN_1400021b0(param_2,param_1 + 0x10);
  local_res8[0] = param_1[0x16];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x17];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x18];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x1a);
  return;
}

