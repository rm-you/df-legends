// FUN_1405d7850 @ 1405d7850
// callees:
//   -> 1400021b0 FUN_1400021b0


void FUN_1405d7850(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x3f00;
  lVar1 = 0x150;
  do {
    FUN_1400021b0(param_2,param_1 + -0x3f00);
    FUN_1400021b0(param_2,param_1 + -0x1f80);
    FUN_1400021b0(param_2,param_1);
    FUN_1400021b0(param_2,param_1 + 0x1f80);
    FUN_1400021b0(param_2,param_1 + 0x3f00);
    FUN_1400021b0(param_2,param_1 + 0x5e80);
    param_1 = param_1 + 0x18;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

