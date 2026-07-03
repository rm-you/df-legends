// FUN_1408ff2a0 @ 1408ff2a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1408fed30 FUN_1408fed30


void FUN_1408ff2a0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1 + 0x2c,4);
  FUN_140002250(param_2,param_1 + 0x30);
  FUN_140002250(param_2,param_1 + 0x48);
  FUN_140002250(param_2,param_1 + 0x60);
  FUN_140002250(param_2,param_1 + 0x78);
  FUN_140002250(param_2,param_1 + 0x90);
  FUN_1405bba90(param_2,param_1 + 0xa8,4);
  FUN_1405bba90(param_2,param_1 + 0xac,4);
  FUN_1405bba90(param_2,param_1 + 0xb0,4);
  FUN_1405bba90(param_2,param_1 + 0xb4,4);
  FUN_1405bba90(param_2,param_1 + 0xb8,4);
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  FUN_1405bba90(param_2,param_1 + 0xdc,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xc0,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 200);
  for (puVar3 = *(undefined8 **)(param_1 + 0xc0); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0x28);
    *(undefined8 *)((longlong)pvVar2 + 8) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x20) = 0;
    *puVar3 = pvVar2;
    FUN_1408fed30(pvVar2,param_2);
  }
  return;
}

