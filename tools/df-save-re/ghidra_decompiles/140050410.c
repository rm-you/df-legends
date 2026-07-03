// FUN_140050410 @ 140050410
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000ccf0 FUN_14000ccf0


void FUN_140050410(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1[2] - param_1[1] >> 3 != 0) {
    return;
  }
  lVar1 = param_1[1] - *param_1 >> 3;
  if (lVar1 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = lVar1 + 1;
  uVar4 = param_1[2] - *param_1 >> 3;
  uVar3 = (uVar4 >> 1) + uVar4;
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar3 = 0;
  }
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  FUN_14000ccf0(param_1,uVar3);
  return;
}

