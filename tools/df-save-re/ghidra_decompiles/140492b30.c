// FUN_140492b30 @ 140492b30
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140492710 FUN_140492710


void FUN_140492b30(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_140315ac0(param_1 + 0x10,param_2);
  FUN_1405bba90(param_2,param_1 + 0x88,4);
  FUN_1405bba90(param_2,param_1 + 0x8c,4);
  FUN_1405bba90(param_2,param_1 + 0x90,4);
  FUN_1405bba90(param_2,param_1 + 0x94,4);
  FUN_1405bba90(param_2,param_1 + 0x98,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xa0,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  for (puVar3 = *(undefined8 **)(param_1 + 0xa0); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0x38);
    *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x14) = 0;
    *(undefined8 *)((longlong)pvVar2 + 4) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)pvVar2 + 0xc) = 0xffffffffffffffff;
    *puVar3 = pvVar2;
    FUN_140492710(pvVar2,param_2);
  }
  return;
}

