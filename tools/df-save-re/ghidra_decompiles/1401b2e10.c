// FUN_1401b2e10 @ 1401b2e10
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 1401b2ff0 FUN_1401b2ff0
//   -> 140dfc99c memset


void FUN_1401b2e10(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  if (param_2 < (ulonglong)(lVar2 - lVar3)) {
    param_1[1] = lVar3 + param_2;
    return;
  }
  if ((ulonglong)(lVar2 - lVar3) < param_2) {
    uVar1 = (lVar3 - lVar2) + param_2;
    if ((ulonglong)(param_1[2] - lVar2) < uVar1) {
      if ((lVar3 - lVar2) - 1U < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      FUN_1401b2ff0(param_1);
    }
    memset((void *)param_1[1],0,(*param_1 - param_1[1]) + param_2);
    param_1[1] = *param_1 + param_2;
  }
  return;
}

