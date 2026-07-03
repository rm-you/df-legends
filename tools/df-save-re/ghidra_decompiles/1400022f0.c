// FUN_1400022f0 @ 1400022f0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1400022f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  if ((0 < (int)param_1[1]) && (iVar1 = 0, 0 < (int)param_1[1])) {
    lVar2 = 0;
    do {
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(lVar2 + *param_1));
      FUN_1405bb7c0(param_2,local_res8,1);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (iVar1 < (int)param_1[1]);
  }
  return;
}

