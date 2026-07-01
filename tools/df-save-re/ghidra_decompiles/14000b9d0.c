// FUN_14000b9d0 @ 14000b9d0
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000ccf0 FUN_14000ccf0
//   -> 140dfc99c memset


void FUN_14000b9d0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  uVar2 = lVar1 - *param_1 >> 3;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + (param_2 - uVar2) * 8;
    return;
  }
  if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 3) < param_2 - uVar2) {
      if (0x1fffffffffffffff - uVar2 < param_2 - uVar2) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      FUN_14000ccf0(param_1);
    }
    memset((void *)param_1[1],0,(param_2 - (param_1[1] - *param_1 >> 3)) * 8);
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 3)) * 8;
  }
  return;
}

