// FUN_140ca2d80 @ 140ca2d80
// callees:
//   -> 140c88400 FUN_140c88400
//   -> 14000d840 FUN_14000d840


undefined8 FUN_140ca2d80(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  
  if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    return 0;
  }
  cVar4 = FUN_140c88400();
  if (cVar4 == '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x1260) < 8) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 7) & 4) == 0)) {
    if (((*(uint *)(param_1 + 0x810) & 0x2000000) != 0) ||
       ((*(uint *)(param_1 + 0x80c) & 0x2000000) == 0)) goto LAB_140ca2e08;
  }
  else if ((*(uint *)(param_1 + 0x810) & 0x2000000) != 0) goto LAB_140ca2e08;
  if (DAT_141c3d250 == 0) {
    return 0;
  }
  if ((1 < (ushort)(*(short *)(DAT_141c3d250 + 0xd06) - 1U)) &&
     (*(short *)(DAT_141c3d250 + 0xd06) != 0x10)) {
    return 0;
  }
LAB_140ca2e08:
  sVar1 = *(short *)(param_1 + 0xa4);
  sVar2 = *(short *)(param_1 + 300);
  if (((-1 < sVar1) &&
      ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (-1 < sVar2)) {
    lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
    if (((ulonglong)(longlong)sVar2 <
         (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
       (cVar4 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) +
                              0x6a8,0x2e), cVar4 != '\0')) {
      return 0;
    }
  }
  return 1;
}

