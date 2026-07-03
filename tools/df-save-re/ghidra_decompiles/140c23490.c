// FUN_140c23490 @ 140c23490
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140c23490(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_res18 [4];
  
  lVar1 = 0;
  do {
    local_res18[0] = *(undefined4 *)(param_1 + lVar1 * 4);
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = *(undefined4 *)(param_1 + 0x18 + lVar1 * 4);
    FUN_1405bb7c0(param_2,local_res18,4);
    lVar1 = lVar1 + 1;
  } while (lVar1 < 6);
  puVar2 = (undefined4 *)(param_1 + 100);
  lVar1 = 0xd;
  do {
    local_res18[0] = puVar2[-0xd];
    FUN_1405bb7c0(param_2,local_res18,4);
    local_res18[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res18,4);
    puVar2 = puVar2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

