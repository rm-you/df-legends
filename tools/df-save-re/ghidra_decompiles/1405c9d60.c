// FUN_1405c9d60 @ 1405c9d60
// callees:
//   -> 14000c8b0 FUN_14000c8b0


void FUN_1405c9d60(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (-1 < param_3) {
    if (((ulonglong)(longlong)param_3 < (ulonglong)(param_1[1] - *param_1 >> 3)) &&
       (lVar1 = *(longlong *)(*param_1 + (longlong)param_3 * 8) + 0xd0, param_2 != lVar1)) {
      FUN_14000c8b0(param_2,lVar1,0,0xffffffffffffffff);
      return;
    }
  }
  return;
}

