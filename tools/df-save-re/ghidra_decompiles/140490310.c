// FUN_140490310 @ 140490310
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380
//   -> 140002250 FUN_140002250


void FUN_140490310(longlong param_1,undefined8 param_2)

{
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_140002380(param_1 + 0x10,param_2);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_140002250(param_2,param_1 + 0x30);
  return;
}

