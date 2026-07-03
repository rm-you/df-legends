// FUN_140c17680 @ 140c17680
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140c15f30 FUN_140c15f30
//   -> 1406f5460 FUN_1406f5460


void FUN_140c17680(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *param_1 = 0;
  }
  else {
    FUN_1405bba90(param_2,local_res18,4);
    plVar1 = (longlong *)FUN_140c15f30(local_res18[0]);
    *param_1 = plVar1;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_4);
  }
  FUN_1405bba90(param_2,param_1 + 1,4);
  FUN_1406f5460(param_2,param_1 + 2);
  return;
}

