// FUN_140b844f0 @ 140b844f0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140b84950 FUN_140b84950
//   -> 1405bb630 FUN_1405bb630
//   -> 1400021b0 FUN_1400021b0


void FUN_140b844f0(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res18 [2];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  puVar2 = *(undefined8 **)(param_1 + 2);
  uVar4 = 0;
  uVar6 = (*(longlong *)(param_1 + 4) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar2) {
    uVar6 = uVar4;
  }
  uVar5 = uVar4;
  if (uVar6 != 0) {
    do {
      FUN_140b84950(*puVar2,param_2);
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar5 < uVar6);
  }
  local_res18[0] = (undefined4)(*(longlong *)(param_1 + 10) - *(longlong *)(param_1 + 8) >> 3);
  FUN_1405bb7c0(param_2,local_res18,4);
  plVar3 = *(longlong **)(param_1 + 8);
  uVar6 = (*(longlong *)(param_1 + 10) - (longlong)plVar3) + 7U >> 3;
  if (*(longlong **)(param_1 + 10) < plVar3) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar3;
      FUN_1405bb630(param_2,lVar1);
      FUN_1400021b0(param_2,lVar1 + 0x20);
      FUN_1400021b0(param_2,lVar1 + 0x38);
      local_res18[0] = *(undefined4 *)(lVar1 + 0x50);
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar4 < uVar6);
  }
  return;
}

