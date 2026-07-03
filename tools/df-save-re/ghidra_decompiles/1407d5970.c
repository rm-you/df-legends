// FUN_1407d5970 @ 1407d5970
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140010c40 FUN_140010c40


void FUN_1407d5970(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1,(longlong)local_res8[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; param_1 < puVar1; param_1 = param_1 + 1) {
    puVar2 = operator_new(0x28);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 1) = 0xffffffff;
    *param_1 = puVar2;
    FUN_140010c40(puVar2,param_2,param_3);
  }
  return;
}

