// FUN_140baf150 @ 140baf150
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140baf0a0 FUN_140baf0a0


void FUN_140baf150(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; param_1 < puVar1; param_1 = param_1 + 1) {
    puVar2 = operator_new(0xf4);
    lVar4 = 0x14;
    puVar3 = puVar2;
    do {
      *puVar3 = 0xffffffff;
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2[0x3c] = 0;
    *param_1 = puVar2;
    FUN_140baf0a0(puVar2,param_2);
  }
  return;
}

