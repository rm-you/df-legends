// FUN_140c713b0 @ 140c713b0
// callees:
//   -> 14000d840 FUN_14000d840


undefined8 FUN_140c713b0(short param_1,short param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_141d6dd50;
  if (-1 < param_1) {
    uVar4 = (ulonglong)param_1;
    uVar5 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
    if (uVar5 <= uVar4) {
      return 0;
    }
    if (-1 < param_2) {
      lVar1 = *(longlong *)(DAT_141d6dd50 + uVar4 * 8);
      if (((ulonglong)(longlong)param_2 <
           (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) &&
         (cVar3 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_2 * 8)
                                + 0x6a8,0x36), cVar3 != '\0')) {
        return 1;
      }
    }
    if ((uVar4 < uVar5) && (-1 < param_2)) {
      lVar2 = *(longlong *)(lVar2 + uVar4 * 8);
      if (((ulonglong)(longlong)param_2 <
           (ulonglong)(*(longlong *)(lVar2 + 0x180) - *(longlong *)(lVar2 + 0x178) >> 3)) &&
         (cVar3 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar2 + 0x178) + (longlong)param_2 * 8)
                                + 0x6a8,0x37), cVar3 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}

