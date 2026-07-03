// FUN_140050540 @ 140050540
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cfe0 FUN_14000cfe0
//   -> 140dfc99c memset


longlong * FUN_140050540(longlong *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (-param_1[2] - 1U <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  uVar1 = param_1[2] + param_2;
  if (param_2 != 0) {
    if (uVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < uVar1) {
      FUN_14000cfe0(param_1,uVar1);
      if (uVar1 == 0) {
        return param_1;
      }
    }
    else if (uVar1 == 0) {
      param_1[2] = 0;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)*param_1 = 0;
        return param_1;
      }
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    lVar2 = param_1[2];
    if (param_2 == 1) {
      if ((ulonglong)param_1[3] < 0x10) {
        *(char *)((longlong)param_1 + lVar2) = param_3;
      }
      else {
        *(char *)(*param_1 + lVar2) = param_3;
      }
    }
    else {
      plVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar3 = (longlong *)*param_1;
      }
      memset((undefined1 *)(lVar2 + (longlong)plVar3),(int)param_3,param_2);
    }
    param_1[2] = uVar1;
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    *(undefined1 *)((longlong)plVar3 + uVar1) = 0;
  }
  return param_1;
}

