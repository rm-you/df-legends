// FUN_140339750 @ 140339750
// callees:
//   -> 1400022f0 FUN_1400022f0
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140339750(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  FUN_1400022f0(param_1 + 0x20);
  puVar1 = (undefined2 *)(param_1 + 0x30);
  lVar2 = 0x18;
  do {
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,*puVar1);
    FUN_1405bb7c0(param_2,local_res8,2);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_res8[0] = *(undefined4 *)(param_1 + 0x60);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 100);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x68));
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

