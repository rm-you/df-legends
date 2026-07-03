// FUN_140c238d0 @ 140c238d0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140c238d0(int *param_1,undefined8 param_2)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 1,4);
  FUN_1405bba90(param_2,param_1 + 2,4);
  if (*param_1 == 0) {
    FUN_1405bba90(param_2,param_1 + 4,2);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x12,2);
    FUN_1405bba90(param_2,param_1 + 5,2);
  }
  return;
}

