// FUN_14031c3c0 @ 14031c3c0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 140dfb5c4 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 14031c150 FUN_14031c150
//   -> 14031bf90 FUN_14031bf90


void FUN_14031c3c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 2,2);
  FUN_1405bba90(param_2,param_1 + 4,2);
  FUN_140002250(param_2,param_1 + 8);
  FUN_140002250(param_2,param_1 + 0x20);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    puVar1 = operator_new(0xa10);
    _eh_vector_constructor_iterator_(puVar1 + 1,0x18,0x6b,FUN_1400025a0,FUN_1400025c0);
    *puVar1 = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar1;
    FUN_14031c150(puVar1,param_2);
  }
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    puVar1 = operator_new(0x20);
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    *(undefined8 **)(param_1 + 0x50) = puVar1;
    FUN_14031bf90(puVar1,param_2);
  }
  return;
}

