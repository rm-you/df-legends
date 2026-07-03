// FUN_1406f8b50 @ 1406f8b50
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140071df0 FUN_140071df0
//   -> 1400021b0 FUN_1400021b0


void FUN_1406f8b50(undefined4 *param_1,undefined8 param_2)

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
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 0xc);
  uVar2 = 0;
  uVar3 = (*(longlong *)(param_1 + 0xe) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0xe) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_140071df0(*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < uVar3);
  }
  FUN_1400021b0(param_2,param_1 + 0x12);
  return;
}

