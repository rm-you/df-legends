// FUN_1404916f0 @ 1404916f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_1404916f0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int local_res18 [2];
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x30,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  for (puVar3 = *(undefined8 **)(param_1 + 0x30); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    puVar2 = operator_new(8);
    puVar2[1] = 0;
    *puVar2 = 0xffffffff;
    *puVar3 = puVar2;
    FUN_1405bba90(param_2,puVar2,4);
    FUN_1405bba90(param_2,puVar2 + 1,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  FUN_1405bba90(param_2,param_1 + 0x4c,4);
  if (0x591 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x20,4);
    FUN_1405bba90(param_2,param_1 + 0x24,4);
    FUN_1405bba90(param_2,param_1 + 0x28,4);
  }
  if (0x600 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x50,4);
    FUN_1405bba90(param_2,param_1 + 0x54,4);
  }
  return;
}

