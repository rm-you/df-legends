// FUN_1406fb080 @ 1406fb080
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1406fb080(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = param_1[9];
  piVar1 = param_1 + 9;
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar2 = 0;
  if (0 < *piVar1) {
    puVar3 = param_1 + 6;
    do {
      local_res8[0] = *param_1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)puVar3);
      FUN_1405bb7c0(param_2,local_res8,2);
      iVar2 = iVar2 + 1;
      puVar3 = (undefined4 *)((longlong)puVar3 + 2);
      param_1 = param_1 + 1;
    } while (iVar2 < *piVar1);
  }
  return;
}

