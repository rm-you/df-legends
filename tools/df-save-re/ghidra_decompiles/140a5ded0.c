// FUN_140a5ded0 @ 140a5ded0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140a5ded0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 2);
  uVar3 = 0;
  uVar4 = (*(longlong *)(param_1 + 4) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_1400021b0(param_2,puVar1 + 4);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}

