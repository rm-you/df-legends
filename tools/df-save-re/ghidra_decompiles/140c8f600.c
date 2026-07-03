// FUN_140c8f600 @ 140c8f600
// callees:


ulonglong FUN_140c8f600(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  sVar2 = (short)((longlong)(ulonglong)(uint)(*(int *)(param_1 + 0xc30) - *(int *)(param_1 + 0xc28))
                 >> 3) + -1;
  if (-1 < sVar2) {
    lVar4 = (longlong)sVar2 * 8;
    pbVar3 = (byte *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar2 * 4);
    do {
      if (((*pbVar3 & 2) == 0) &&
         (uVar1 = **(ushort **)(lVar4 + *(longlong *)(param_1 + 0xc28)), uVar1 != 0xea61)) {
        iVar6 = iVar6 + (uint)uVar1;
        iVar5 = iVar5 + 1;
      }
      pbVar3 = pbVar3 + -4;
      lVar4 = lVar4 + -8;
      sVar2 = sVar2 + -1;
    } while (-1 < sVar2);
    if (0 < iVar5) {
      return (longlong)iVar6 / (longlong)iVar5 & 0xffffffff;
    }
  }
  return 0xea61;
}

