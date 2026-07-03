// FUN_140c5db20 @ 140c5db20
// callees:
//   -> 14000d840 FUN_14000d840


ulonglong FUN_140c5db20(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x118) >> 10;
  uVar5 = (ulonglong)uVar4;
  if (((uVar4 & 1) == 0) && ((*(uint *)(param_1 + 0x810) & 0x8000000) == 0)) {
    if ((*(uint *)(param_1 + 0x80c) & 0x8000000) != 0) {
      return CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0x118) >> 0x12),1);
    }
    uVar1 = *(ushort *)(param_1 + 0xa4);
    uVar5 = (ulonglong)uVar1;
    sVar2 = *(short *)(param_1 + 300);
    if (-1 < (short)uVar1) {
      uVar5 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
      if (((ulonglong)(longlong)(short)uVar1 < uVar5) && (-1 < sVar2)) {
        lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)(short)uVar1 * 8);
        uVar5 = *(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3;
        if ((ulonglong)(longlong)sVar2 < uVar5) {
          uVar5 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) +
                                0x6a8,0xa1);
          return uVar5;
        }
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}

