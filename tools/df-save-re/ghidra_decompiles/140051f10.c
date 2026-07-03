// FUN_140051f10 @ 140051f10
// callees:


undefined8 FUN_140051f10(longlong param_1,short param_2,short param_3)

{
  longlong lVar1;
  
  if (((-1 < param_2) &&
      ((ulonglong)(longlong)param_2 <
       (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) &&
     (-1 < param_3)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8);
    if ((ulonglong)(longlong)param_3 <
        (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) {
      return *(undefined8 *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8);
    }
  }
  return 0;
}

