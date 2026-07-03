// FUN_140a5d220 @ 140a5d220
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002fc0 FUN_140002fc0
//   -> 140002250 FUN_140002250


void FUN_140a5d220(longlong param_1,undefined8 param_2)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_140002fc0(param_1 + 8,param_2);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  FUN_140002250(param_2,param_1 + 0x50);
  return;
}

