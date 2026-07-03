// FUN_1406f5f50 @ 1406f5f50
// callees:
//   -> 1400b4b80 FUN_1400b4b80
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1406f5e90 FUN_1406f5e90


void FUN_1406f5f50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  lVar5 = 8;
  lVar3 = 8;
  lVar1 = param_1;
  do {
    FUN_1400b4b80(lVar1,param_2);
    lVar1 = lVar1 + 0x24;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar1 = param_1 + 0x120;
  do {
    FUN_1400b4b80(lVar1,param_2);
    lVar1 = lVar1 + 0x24;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 0x248) - *(longlong *)(param_1 + 0x240) >> 3)
  ;
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = *(undefined8 **)(param_1 + 0x240);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x248) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x248) < puVar2) {
    uVar4 = 0;
  }
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1406f5e90(*puVar2,param_2);
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar6 < uVar4);
  }
  return;
}

