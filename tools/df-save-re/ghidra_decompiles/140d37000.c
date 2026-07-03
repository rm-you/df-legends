// FUN_140d37000 @ 140d37000
// callees:
//   -> 1405bc3f0 FUN_1405bc3f0


void FUN_140d37000(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x26b838) = *(undefined8 *)(param_1 + 0x26b830);
  *(undefined4 *)(param_1 + 0x26b848) = 0;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_1405bc3f0(param_3);
  return;
}

