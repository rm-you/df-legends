// FUN_1400504b0 @ 1400504b0
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cee0 FUN_14000cee0


undefined8 FUN_1400504b0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    lVar1 = FUN_14000cee0();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
    param_1[2] = *param_1 + param_2 * 4;
  }
  return uVar2;
}

