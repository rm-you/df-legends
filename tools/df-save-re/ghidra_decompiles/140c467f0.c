// FUN_140c467f0 @ 140c467f0
// callees:
//   -> 14000d840 FUN_14000d840


undefined8 FUN_140c467f0(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  lVar4 = DAT_141d6dd50;
  sVar1 = *(short *)(param_1 + 0xa4);
  sVar2 = *(short *)(param_1 + 300);
  if (-1 < sVar1) {
    lVar6 = DAT_141d6dd58;
    if (((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
       (-1 < sVar2)) {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if (((ulonglong)(longlong)sVar2 <
           (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
         (cVar5 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) +
                                0x6a8,0x17), cVar5 != '\0')) {
        return 2;
      }
    }
    if (-1 < sVar1) {
      if (((ulonglong)(longlong)sVar1 < (ulonglong)(lVar6 - lVar4 >> 3)) && (-1 < sVar2)) {
        lVar3 = *(longlong *)(lVar4 + (longlong)sVar1 * 8);
        if (((ulonglong)(longlong)sVar2 <
             (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
           (cVar5 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8)
                                  + 0x6a8,0x16), cVar5 != '\0')) {
          return 1;
        }
      }
      if (((-1 < sVar1) && ((ulonglong)(longlong)sVar1 < (ulonglong)(lVar6 - lVar4 >> 3))) &&
         (-1 < sVar2)) {
        lVar4 = *(longlong *)(lVar4 + (longlong)sVar1 * 8);
        if (((ulonglong)(longlong)sVar2 <
             (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3)) &&
           (*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar2 * 8) + 0x46c) ==
            -0x159f)) {
          return 0;
        }
      }
    }
  }
  return 2;
}

