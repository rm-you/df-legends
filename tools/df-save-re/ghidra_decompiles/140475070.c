// FUN_140475070 @ 140475070
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 140475100 FUN_140475100


void FUN_140475070(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1[2] - param_1[1] >> 2 != 0) {
    return;
  }
  lVar1 = param_1[1] - *param_1 >> 2;
  if (lVar1 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = lVar1 + 1;
  uVar4 = param_1[2] - *param_1 >> 2;
  uVar3 = (uVar4 >> 1) + uVar4;
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar3 = 0;
  }
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  FUN_140475100(param_1,uVar3);
  return;
}

