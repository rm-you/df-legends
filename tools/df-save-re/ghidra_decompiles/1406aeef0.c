// FUN_1406aeef0 @ 1406aeef0
// callees:


undefined4 FUN_1406aeef0(short param_1,short param_2)

{
  longlong lVar1;
  short sVar2;
  
  sVar2 = 0;
  if (-1 < param_2) {
    sVar2 = param_2;
  }
  if (-1 < param_1) {
    if (((ulonglong)(longlong)param_1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
       (-1 < sVar2)) {
      lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_1 * 8);
      if ((ulonglong)(longlong)sVar2 <
          (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) {
        return *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)sVar2 * 8) + 0x4ac);
      }
    }
  }
  return 0;
}

