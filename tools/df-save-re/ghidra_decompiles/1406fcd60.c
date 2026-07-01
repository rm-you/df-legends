// FUN_1406fcd60 @ 1406fcd60
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380


void FUN_1406fcd60(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_140002380(param_1 + 0x10,param_2);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1 + 0x2c,2);
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  if (param_3 < 0x5e9) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x2d;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x30) = 0x2e;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x30) = 0x2f;
    }
  }
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,2);
  FUN_1405bba90(param_2,param_1 + 0x42,2);
  return;
}

