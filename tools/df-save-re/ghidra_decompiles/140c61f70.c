// FUN_140c61f70 @ 140c61f70
// callees:
//   -> 140c5db20 FUN_140c5db20
//   -> 14000d840 FUN_14000d840


bool FUN_140c61f70(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  
  if (((*(uint *)(param_1 + 0x118) >> 0xc & 1) == 0) &&
     ((*(uint *)(param_1 + 0x118) >> 10 & 1) == 0)) {
    if ((*(short *)(param_1 + 0x348) != 8) &&
       ((*(short *)(param_1 + 0x348) != 7 && (4 < *(ushort *)(param_1 + 0x7f8))))) {
      cVar4 = FUN_140c5db20();
      if (cVar4 == '\0') {
        if ((*(uint *)(param_1 + 0x810) & 0x8000) != 0) {
          return true;
        }
        if ((*(uint *)(param_1 + 0x80c) & 0x8000) == 0) {
          sVar1 = *(short *)(param_1 + 0xa4);
          sVar2 = *(short *)(param_1 + 300);
          if (-1 < sVar1) {
            if (((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
               (-1 < sVar2)) {
              lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
              if ((ulonglong)(longlong)sVar2 <
                  (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) {
                cVar4 = FUN_14000d840(*(longlong *)
                                       (*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) + 0x6a8,
                                      0x50);
                return cVar4 == '\0';
              }
            }
          }
          return true;
        }
      }
    }
  }
  return false;
}

