// FUN_14000c2d0 @ 14000c2d0
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000ccf0 FUN_14000ccf0


void FUN_14000c2d0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 3)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 3;
  if (0x1fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = lVar2 + param_2;
  uVar3 = param_1[2] - *param_1 >> 3;
  uVar1 = (uVar3 >> 1) + uVar3;
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar1 = 0;
  }
  if (uVar1 < param_2) {
    uVar1 = param_2;
  }
  FUN_14000ccf0(param_1,uVar1);
  return;
}

