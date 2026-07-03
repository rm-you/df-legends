// FUN_1405d78e0 @ 1405d78e0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140071f40 FUN_140071f40


void FUN_1405d78e0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 2);
  uVar3 = 0;
  uVar2 = (*(longlong *)(param_1 + 4) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_140071f40(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  local_res8[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

