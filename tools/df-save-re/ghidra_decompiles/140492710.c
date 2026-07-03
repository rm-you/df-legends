// FUN_140492710 @ 140492710
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_140492710(longlong param_1,undefined8 param_2,int param_3)

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
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x18,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar3 = *(undefined8 **)(param_1 + 0x18); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0x14);
    *(undefined8 *)((longlong)pvVar2 + 4) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)pvVar2 + 0xc) = 0xffffffffffffffff;
    *puVar3 = pvVar2;
    FUN_1405bba90(param_2,pvVar2,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 0xc,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 0x10,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  return;
}

