// FUN_140a5dfd0 @ 140a5dfd0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140002250 FUN_140002250
//   -> 1404933f0 FUN_1404933f0


void FUN_140a5dfd0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar3 = *(undefined8 **)(param_1 + 8); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    puVar2 = operator_new(0x28);
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    *puVar3 = puVar2;
    FUN_1405bba90(param_2,puVar2,4);
    FUN_1405bba90(param_2,puVar2 + 1,4);
    FUN_1405bba90(param_2,puVar2 + 2,4);
    FUN_140002250(param_2,puVar2 + 4);
    FUN_1404933f0(param_1,*puVar3);
  }
  return;
}

