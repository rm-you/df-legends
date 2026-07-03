// FUN_1400bf2f0 @ 1400bf2f0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400bef00 FUN_1400bef00
//   -> 1400021b0 FUN_1400021b0


void FUN_1400bf2f0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar1 = *(undefined8 **)(param_1 + 2);
  uVar3 = 0;
  uVar2 = (*(longlong *)(param_1 + 4) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_1400bef00(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  FUN_1400021b0(param_2,param_1 + 8);
  FUN_1400021b0(param_2,param_1 + 0xe);
  param_1 = param_1 + 0x14;
  lVar4 = 0x40;
  do {
    local_res18[0] = *param_1;
    FUN_1405bb7c0(param_2,local_res18,4);
    param_1 = param_1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

