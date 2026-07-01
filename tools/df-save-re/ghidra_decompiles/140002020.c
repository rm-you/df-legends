// FUN_140002020 @ 140002020
// callees:
//   -> EXTERNAL:000000f1 _invalid_parameter_noinfo_noreturn
//   -> 140dfb6d0 free


void FUN_140002020(void *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  void *_Memory;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Memory = param_1;
  if (0xfff < param_2 * param_3) {
    if (((ulonglong)param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Memory = *(void **)((longlong)param_1 - 8);
    if (param_1 <= _Memory) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if ((ulonglong)((longlong)param_1 - (longlong)_Memory) < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < (ulonglong)((longlong)param_1 - (longlong)_Memory)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(_Memory);
  return;
}

