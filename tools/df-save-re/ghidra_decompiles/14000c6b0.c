// FUN_14000c6b0 @ 14000c6b0
// callees:
//   -> EXTERNAL:00000098 _Xout_of_range
//   -> EXTERNAL:000000e1 memmove


longlong * FUN_14000c6b0(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_3 < uVar1 - param_2) {
    if (param_3 != 0) {
      plVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar2 = (longlong *)*param_1;
      }
      lVar3 = uVar1 - param_3;
      if (lVar3 - param_2 != 0) {
        memmove((void *)((longlong)plVar2 + param_2),
                (void *)((longlong)((longlong)plVar2 + param_2) + param_3),lVar3 - param_2);
      }
      param_1[2] = lVar3;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)(*param_1 + lVar3) = 0;
        return param_1;
      }
      *(undefined1 *)((longlong)param_1 + lVar3) = 0;
    }
    return param_1;
  }
  param_1[2] = param_2;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)((longlong)param_1 + param_2) = 0;
    return param_1;
  }
  *(undefined1 *)(*param_1 + param_2) = 0;
  return param_1;
}

