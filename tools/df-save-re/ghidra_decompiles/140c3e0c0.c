// FUN_140c3e0c0 @ 140c3e0c0
// callees:
//   -> 14000d840 FUN_14000d840


ulonglong FUN_140c3e0c0(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0xa4);
  uVar4 = (ulonglong)uVar1;
  sVar2 = *(short *)(param_1 + 300);
  if (-1 < (short)uVar1) {
    uVar4 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
    if (((ulonglong)(longlong)(short)uVar1 < uVar4) && (-1 < sVar2)) {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)(short)uVar1 * 8);
      uVar4 = *(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3;
      if ((ulonglong)(longlong)sVar2 < uVar4) {
        uVar4 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) +
                              0x6a8,0x3d);
        return uVar4;
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

