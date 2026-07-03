// FUN_1400021b0 @ 1400021b0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1400021b0(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res10 [2];
  
  local_res10[0] = (undefined4)(param_2[1] - *param_2 >> 2);
  FUN_1405bb7c0(param_1,local_res10,4);
  puVar1 = (undefined4 *)*param_2;
  uVar3 = 0;
  uVar2 = (ulonglong)(param_2[1] + (3 - (longlong)puVar1)) >> 2;
  if ((undefined4 *)param_2[1] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      local_res10[0] = *puVar1;
      FUN_1405bb7c0(param_1,local_res10,4);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

