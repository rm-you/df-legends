// FUN_140c7dd80 @ 140c7dd80
// callees:
//   -> 140c800d0 FUN_140c800d0
//   -> 140c7de50 FUN_140c7de50
//   -> 14000d840 FUN_14000d840


ulonglong FUN_140c7dd80(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
    return 0;
  }
  FUN_140c800d0();
  iVar5 = FUN_140c7de50(param_1);
  sVar1 = *(short *)(param_1 + 0xa4);
  sVar2 = *(short *)(param_1 + 300);
  uVar6 = 1;
  if (-1 < sVar1) {
    if (((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
       (-1 < sVar2)) {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8);
      if ((ulonglong)(longlong)sVar2 <
          (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) {
        cVar4 = FUN_14000d840(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar2 * 8) +
                              0x6a8,0x15);
        uVar6 = uVar6 & 0xffffffff;
        if (cVar4 != '\0') {
          uVar6 = 0;
        }
      }
    }
  }
  if (iVar5 == 0) {
    uVar6 = 2;
  }
  return uVar6;
}

