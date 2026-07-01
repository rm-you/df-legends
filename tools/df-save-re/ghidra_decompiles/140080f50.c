// FUN_140080f50 @ 140080f50
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380


void FUN_140080f50(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  char local_res18 [16];
  
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_140002380(param_1 + 0x10,param_2);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1 + 0x2c,4);
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,2);
  FUN_1405bba90(param_2,param_1 + 0x42,2);
  FUN_1405bba90(param_2,param_1 + 0x44,2);
  cVar1 = FUN_1405bba90(param_2,local_res18,1);
  if (cVar1 != '\0') {
    *(bool *)(param_1 + 0x46) = local_res18[0] != '\0';
  }
  if (0x669 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x48,4);
  }
  return;
}

