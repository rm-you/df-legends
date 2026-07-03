// FUN_14098cba0 @ 14098cba0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_14098cba0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  if (param_4 < 0x5fc) {
    if (*(int *)(param_1 + 0x18) == -1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x1c) == -1) {
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    }
  }
  FUN_140002250(param_2,param_1 + 0x20);
  FUN_140002250(param_2,param_1 + 0x38);
  FUN_140002250(param_2,param_1 + 0x50);
  FUN_140002250(param_2,param_1 + 0x68);
  FUN_140002250(param_2,param_1 + 0x80);
  FUN_140002250(param_2,param_1 + 0x98);
  FUN_140002250(param_2,param_1 + 0xb0);
  FUN_140002250(param_2,param_1 + 200);
  FUN_140002250(param_2,param_1 + 0xe0);
  FUN_140002250(param_2,param_1 + 0xf8);
  if (0x5ef < param_4) {
    FUN_140002250(param_2,param_1 + 0x110);
  }
  FUN_140002250(param_2,param_1 + 0x128);
  FUN_140002250(param_2,param_1 + 0x140);
  FUN_1405bba90(param_2,param_1 + 0x158,4);
  FUN_1405bba90(param_2,param_1 + 0x15c,4);
  FUN_1405bba90(param_2,param_1 + 0x160,4);
  FUN_140002250(param_2,param_1 + 0x168);
  FUN_1405bba90(param_2,param_1 + 0x180,4);
  FUN_1405bba90(param_2,param_1 + 0x184,4);
  if (0x5ef < param_4) {
    FUN_1405bba90(param_2,param_1 + 0x188,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x18c,4);
  FUN_1405bba90(param_2,param_1 + 400,4);
  FUN_1405bba90(param_2,param_1 + 0x194,4);
  return;
}

