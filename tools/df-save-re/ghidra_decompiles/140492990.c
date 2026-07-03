// FUN_140492990 @ 140492990
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1404925b0 FUN_1404925b0


void FUN_140492990(undefined4 *param_1,undefined8 param_2)

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
  FUN_1403159b0(param_1 + 4,param_2);
  local_res8[0] = param_1[0x22];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x23];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x24];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x25];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x26];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x2a) - *(longlong *)(param_1 + 0x28) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uVar3 = 0;
  uVar2 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x2a) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x2a) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_1404925b0(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

