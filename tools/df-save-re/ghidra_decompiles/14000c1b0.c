// FUN_14000c1b0 @ 14000c1b0
// callees:
//   -> EXTERNAL:00000098 _Xout_of_range


longlong * FUN_14000c1b0(longlong *param_1,ulonglong param_2)

{
  if ((ulonglong)param_1[2] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  param_1[2] = param_2;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)(*param_1 + param_2) = 0;
    return param_1;
  }
  *(undefined1 *)((longlong)param_1 + param_2) = 0;
  return param_1;
}

