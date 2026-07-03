// FUN_14000bed0 @ 14000bed0
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000ce10 FUN_14000ce10
//   -> 140dfc99c memset


void FUN_14000bed0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  uVar2 = lVar1 - *param_1 >> 1;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + (param_2 - uVar2) * 2;
    return;
  }
  if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 1) < param_2 - uVar2) {
      if (0x7fffffffffffffff - uVar2 < param_2 - uVar2) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      FUN_14000ce10(param_1);
    }
    memset((void *)param_1[1],0,(param_2 - (param_1[1] - *param_1 >> 1)) * 2);
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 1)) * 2;
  }
  return;
}

