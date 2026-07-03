// FUN_140ca3200 @ 140ca3200
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140c3c220 FUN_140c3c220


ulonglong FUN_140ca3200(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  
  sVar1 = *(short *)(param_1 + 300);
  sVar2 = *(short *)(param_1 + 0xa4);
  if (-1 < sVar2) {
    if (((ulonglong)(longlong)sVar2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
       (-1 < sVar1)) {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8);
      if ((ulonglong)(longlong)sVar1 <
          (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) {
        cVar4 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar1 * 8) +
                              0x6a8,10);
        if (cVar4 != '\0') {
          uVar5 = FUN_140c3c220(param_1,0x47);
          uVar6 = (ulonglong)uVar5;
          if (uVar5 == 0) {
            sVar1 = *(short *)(param_1 + 0xa4);
            sVar2 = *(short *)(param_1 + 300);
            if (-1 < sVar1) {
              if (((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
                 (-1 < sVar2)) {
                lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
                if ((ulonglong)(longlong)sVar2 <
                    (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) {
                  cVar4 = FUN_14000d840(*(longlong *)
                                         (*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) +
                                        0x6a8,0x7b);
                  uVar6 = uVar6 & 0xffffffff;
                  if (cVar4 != '\0') {
                    uVar6 = 1;
                  }
                }
              }
            }
          }
          return uVar6;
        }
      }
    }
  }
  return 0;
}

