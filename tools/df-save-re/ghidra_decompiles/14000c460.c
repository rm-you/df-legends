// FUN_14000c460 @ 14000c460
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000ce10 FUN_14000ce10


void FUN_14000c460(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 1)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 1;
  if (0x7fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = lVar2 + param_2;
  uVar3 = param_1[2] - *param_1 >> 1;
  uVar1 = (uVar3 >> 1) + uVar3;
  if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar1 = 0;
  }
  if (uVar1 < param_2) {
    uVar1 = param_2;
  }
  FUN_14000ce10(param_1,uVar1);
  return;
}

