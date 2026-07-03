// FUN_14008f730 @ 14008f730
// callees:
//   -> 1400b3970 FUN_1400b3970


void FUN_14008f730(longlong param_1,short param_2,short param_3,ushort param_4)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  
  *(short *)(param_1 + 4) = param_2;
  *(short *)(param_1 + 6) = param_3;
  *(ushort *)(param_1 + 8) = param_4;
  iVar3 = (int)param_2 / 0x30;
  iVar4 = (int)param_3 / 0x30;
  if ((((-1 < iVar3) && (iVar3 < *(int *)(DAT_141d6cfd0 + 0xa0))) && (-1 < iVar4)) &&
     ((iVar4 < *(int *)(DAT_141d6cfd0 + 0xa4) && (param_4 < 6)))) {
    sVar6 = (short)iVar3;
    if ((((-1 < sVar6) &&
         (((int)sVar6 < *(int *)(DAT_141d6cfd0 + 0xa0) && (sVar5 = (short)iVar4, -1 < sVar5)))) &&
        ((int)sVar5 < *(int *)(DAT_141d6cfd0 + 0xa4))) &&
       (*(longlong *)(DAT_141d6cfd0 + 0x2a0) != 0)) {
      lVar2 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x2a0) + (longlong)sVar6 * 8);
      if (1 < *(int *)(lVar2 + 0x28 + (longlong)sVar5 * 0x70)) {
        pbVar1 = (byte *)(*(longlong *)(lVar2 + 0x20 + (longlong)sVar5 * 0x70) + 1);
        *pbVar1 = *pbVar1 | 0x10;
      }
    }
    FUN_1400b3970(param_1,((longlong)iVar4 >> 4) * 0x30 + 0x18 +
                          *(longlong *)
                           (*(longlong *)
                             (DAT_141d6cfd0 + 0x2d0 + (longlong)*(short *)(param_1 + 8) * 8) +
                           ((longlong)iVar3 >> 4) * 8));
  }
  return;
}

