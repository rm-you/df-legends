// FUN_1403159b0 @ 1403159b0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630


void FUN_1403159b0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x72));
  FUN_1405bb7c0(param_2,local_res8,1);
  if (*(char *)(param_1 + 0x72) != '\0') {
    FUN_1405bb630(param_2,param_1);
    FUN_1405bb630(param_2,param_1 + 0x20);
    lVar3 = 7;
    puVar1 = (undefined4 *)(param_1 + 0x40);
    lVar4 = 7;
    do {
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      puVar1 = puVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = (undefined2 *)(param_1 + 0x5c);
    do {
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,*puVar2);
      FUN_1405bb7c0(param_2,local_res8,2);
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    local_res8[0] = *(undefined4 *)(param_1 + 0x6c);
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x70));
    FUN_1405bb7c0(param_2,local_res8,2);
  }
  return;
}

