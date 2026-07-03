// FUN_1401b2f70 @ 1401b2f70
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 1401b2ff0 FUN_1401b2ff0


void FUN_1401b2f70(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_1[1];
  if (param_2 <= (ulonglong)(param_1[2] - lVar1)) {
    return;
  }
  lVar2 = *param_1;
  if ((lVar2 - lVar1) - 1U < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar4 = param_1[2] - lVar2;
  param_2 = (lVar1 - lVar2) + param_2;
  uVar3 = (uVar4 >> 1) + uVar4;
  if (-(uVar4 >> 1) - 1 < uVar4) {
    uVar3 = 0;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  FUN_1401b2ff0(param_1,uVar3);
  return;
}

