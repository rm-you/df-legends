// FUN_1402cd5b0 @ 1402cd5b0
// callees:


undefined8 FUN_1402cd5b0(longlong *param_1,short param_2,int param_3)

{
  longlong lVar1;
  
  if (-1 < param_3) {
    if (((ulonglong)(longlong)param_3 < (ulonglong)(param_1[1] - *param_1 >> 3)) &&
       (param_2 = param_2 + -0x1a3, -1 < param_2)) {
      lVar1 = *(longlong *)(*param_1 + (longlong)param_3 * 8);
      if ((ulonglong)(longlong)param_2 <
          (ulonglong)(*(longlong *)(lVar1 + 600) - *(longlong *)(lVar1 + 0x250) >> 3)) {
        return *(undefined8 *)(*(longlong *)(lVar1 + 0x250) + (longlong)param_2 * 8);
      }
    }
  }
  return 0;
}

