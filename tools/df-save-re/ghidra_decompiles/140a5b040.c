// FUN_140a5b040 @ 140a5b040
// callees:
//   -> 140315ac0 FUN_140315ac0
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380


void FUN_140a5b040(longlong param_1,undefined8 param_2)

{
  FUN_140315ac0();
  FUN_140002140(param_2,param_1 + 0x78);
  FUN_140002140(param_2,param_1 + 0x90);
  FUN_140002250(param_2,param_1 + 0xa8);
  FUN_1405bba90(param_2,param_1 + 0xf0,2);
  FUN_1405bba90(param_2,param_1 + 0xf2,2);
  FUN_140002140(param_2,param_1 + 0xc0);
  FUN_140002140(param_2,param_1 + 0xd8);
  FUN_140002380(param_1 + 0xf8,param_2);
  return;
}

