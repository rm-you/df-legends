// FUN_1405c9da0 @ 1405c9da0
// callees:
//   -> 14000c8b0 FUN_14000c8b0


void FUN_1405c9da0(longlong *param_1,longlong param_2,int param_3,int param_4,char param_5)

{
  longlong lVar1;
  
  if (-1 < param_3) {
    if (((ulonglong)(longlong)param_3 < (ulonglong)(param_1[1] - *param_1 >> 3)) && (-1 < param_4))
    {
      lVar1 = *(longlong *)(*param_1 + (longlong)param_3 * 8);
      if ((ulonglong)(longlong)param_4 <
          (ulonglong)(*(longlong *)(lVar1 + 0x610) - *(longlong *)(lVar1 + 0x608) >> 3)) {
        lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x608) + (longlong)param_4 * 8);
        if (param_5 == '\0') {
          lVar1 = lVar1 + 0x20;
        }
        else {
          lVar1 = lVar1 + 0x40;
        }
        if (param_2 != lVar1) {
          FUN_14000c8b0(param_2,lVar1,0,0xffffffffffffffff);
          return;
        }
      }
    }
  }
  return;
}

