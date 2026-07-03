// FUN_140c25bf0 @ 140c25bf0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140c25bf0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 local_res18 [4];
  
  puVar1 = (undefined4 *)(param_1 + 0x50);
  lVar2 = 10;
  do {
    local_res18[0] = puVar1[-0x14];
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar1[-10];
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = *puVar1;
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar1[10];
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = puVar1[0x14];
    FUN_1405bb7c0(param_2,local_res18,4);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

