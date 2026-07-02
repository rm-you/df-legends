// FUN_140002a30 @ 140002a30
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1400028e0 FUN_1400028e0


void FUN_140002a30(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; param_1 < puVar1; param_1 = param_1 + 1) {
    puVar2 = operator_new(0x38);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    puVar2[2] = 0xffffffffffffffff;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *param_1 = puVar2;
    FUN_1400028e0(puVar2,param_2);
  }
  return;
}

