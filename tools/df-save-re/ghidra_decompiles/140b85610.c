// FUN_140b85610 @ 140b85610
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630


void FUN_140b85610(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1ab];
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar1 = 0;
  if (0 < (int)param_1[0x1ab]) {
    puVar2 = param_1 + 0x192;
    do {
      FUN_1405bb630(param_2,param_1 + (longlong)iVar1 * 8 + 2);
      FUN_1405bb630(param_2,param_1 + (longlong)iVar1 * 8 + 0xca);
      local_res18[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res18,4);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)param_1[0x1ab]);
  }
  return;
}

