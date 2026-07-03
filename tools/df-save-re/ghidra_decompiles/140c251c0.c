// FUN_140c251c0 @ 140c251c0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_140c251c0(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  if (0x66c < param_3) {
    FUN_1405bba90(param_2,param_1 + 8,4);
  }
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,2);
  FUN_1405bb6d0(param_2,param_1 + 0x20);
  if (0x5fe < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x40,4);
    FUN_1405bba90(param_2,param_1 + 0x44,4);
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 2;
  return;
}

