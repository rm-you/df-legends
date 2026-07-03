// FUN_1408fed30 @ 1408fed30
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_1408fed30(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int local_res18 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar3 = *(undefined8 **)(param_1 + 8); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    puVar2 = operator_new(8);
    puVar2[1] = 0;
    *puVar2 = 1;
    *puVar3 = puVar2;
    FUN_1405bba90(param_2,puVar2,4);
    FUN_1405bba90(param_2,puVar2 + 1,4);
  }
  return;
}

