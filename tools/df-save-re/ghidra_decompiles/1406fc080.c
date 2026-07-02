// FUN_1406fc080 @ 1406fc080
// callees:
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250
//   -> 1405bba90 FUN_1405bba90


void FUN_1406fc080(longlong param_1,undefined8 param_2)

{
  FUN_140002140(param_2,param_1);
  FUN_140002250(param_2,param_1 + 0x18);
  FUN_140002250(param_2,param_1 + 0x30);
  FUN_140002250(param_2,param_1 + 0x48);
  FUN_140002250(param_2,param_1 + 0x60);
  FUN_1405bba90(param_2,param_1 + 0x78,4);
  FUN_140002140(param_2,param_1 + 0x80);
  FUN_140002250(param_2,param_1 + 0x98);
  FUN_140002250(param_2,param_1 + 0xb0);
  FUN_140002250(param_2,param_1 + 200);
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_140002140(param_2,param_1 + 0xe8);
  FUN_140002250(param_2,param_1 + 0x100);
  FUN_140002250(param_2,param_1 + 0x118);
  FUN_1405bba90(param_2,param_1 + 0x130,4);
  return;
}

