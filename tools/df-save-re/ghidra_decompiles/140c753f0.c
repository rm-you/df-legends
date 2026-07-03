// FUN_140c753f0 @ 140c753f0
// callees:
//   -> 14000d840 FUN_14000d840


undefined8 FUN_140c753f0(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  
  if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
    return 0;
  }
  if ((((*(short *)(param_1 + 0x348) == 8) && ((*(uint *)(param_1 + 0x110) & 0x200) != 0)) &&
      (*(int *)(param_1 + 0x3c4) == *(int *)(param_1 + 0x3ac))) && (*(int *)(param_1 + 0x3c4) != -1)
     ) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x810) & 0x10000) == 0) {
    if ((*(uint *)(param_1 + 0x80c) & 0x10000) != 0) {
      return 0;
    }
    sVar1 = *(short *)(param_1 + 0xa4);
    sVar2 = *(short *)(param_1 + 300);
    if (((-1 < sVar1) &&
        ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar2)) {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if (((ulonglong)(longlong)sVar2 <
           (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
         (cVar4 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) +
                                0x6a8,0xd), cVar4 != '\0')) {
        return 0;
      }
    }
  }
  return 1;
}

