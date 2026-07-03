// FUN_140c799b0 @ 140c799b0
// callees:
//   -> 1408364b0 FUN_1408364b0
//   -> 140c79b00 FUN_140c79b00


void FUN_140c799b0(longlong param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  
  if (((0 < DAT_141c34170) && ((*DAT_141c34168 & 1) != 0)) &&
     ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
    iVar2 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
    lVar3 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        FUN_1408364b0(**(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + lVar3 * 8),50000);
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    sVar4 = *(short *)(param_1 + 0xa4);
    sVar1 = *(short *)(param_1 + 300);
    if (((-1 < sVar4) &&
        ((ulonglong)(longlong)sVar4 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar1)) {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar4 * 8);
      if (((ulonglong)(longlong)sVar1 <
           (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
         (*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar1 * 8) + 0x46c) ==
          -0x159f)) {
        sVar4 = 0;
        if (*(ulonglong *)(param_1 + 0xc28) < *(ulonglong *)(param_1 + 0xc30)) {
          lVar3 = ((*(ulonglong *)(param_1 + 0xc30) - *(ulonglong *)(param_1 + 0xc28)) - 1 >> 3) + 1
          ;
          do {
            FUN_140c79b00(param_1,50000,sVar4);
            sVar4 = sVar4 + 1;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
      }
    }
  }
  return;
}

