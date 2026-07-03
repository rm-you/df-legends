// FUN_1407d5f30 @ 1407d5f30
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140010c40 FUN_140010c40
//   -> 140002250 FUN_140002250


void FUN_1407d5f30(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_140010c40(param_1 + 8,param_2,param_3);
  FUN_140010c40(param_1 + 0x30,param_2,param_3);
  FUN_1405bba90(param_2,param_1 + 0x58,4);
  FUN_1405bba90(param_2,param_1 + 0x5c,4);
  FUN_1405bba90(param_2,param_1 + 0x60,4);
  FUN_1405bba90(param_2,param_1 + 100,4);
  FUN_140002250(param_2,param_1 + 0x68);
  if (0x631 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x80,4);
  }
  return;
}

