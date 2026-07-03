// FUN_140acc530 @ 140acc530
// callees:


uint FUN_140acc530(longlong param_1,short param_2,short param_3,int param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  
  if (DAT_1410b67d8 - 4U < 2) {
    iVar4 = (uint)DAT_141ebfa70 * 4 + -40000;
    uVar3 = iVar4 / 3 + (iVar4 >> 0x1f) +
            (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f);
    if (30000 < (int)uVar3) {
      uVar3 = 30000;
    }
    return uVar3 & 0xffff;
  }
  uVar5 = *(ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)param_2 * 8) + 0x36 +
           (longlong)param_3 * 0x70);
  sVar1 = *(short *)(param_1 + 0xb0);
  if (-1 < sVar1) {
    if (sVar1 < 2) {
      iVar4 = *(int *)(param_1 + 0xa4) >> 1;
      uVar3 = param_3 - iVar4 >> 0x1f;
      iVar2 = iVar4 - ((param_3 - iVar4 ^ uVar3) - uVar3);
    }
    else {
      if (sVar1 != 2) goto LAB_140acc67b;
      iVar4 = *(int *)(param_1 + 0xa4);
      if ((int)param_3 < iVar4 / 2) {
        param_3 = param_3 * 2;
      }
      else {
        param_3 = ((short)(iVar4 / 2) - param_3) * 2 + (short)iVar4 + -1;
        if (param_3 < 0) {
          param_3 = 0;
        }
        if (iVar4 <= param_3) {
          param_3 = (short)iVar4 + -1;
        }
      }
      iVar4 = iVar4 >> 1;
      uVar3 = param_3 - iVar4 >> 0x1f;
      iVar2 = iVar4 - ((param_3 - iVar4 ^ uVar3) - uVar3);
    }
    iVar4 = (iVar2 * 0x41) / (iVar4 + 1);
    if (0 < iVar4) {
      iVar2 = (DAT_1416992b2 * 0x2760 + 0xb130 + DAT_1416992a4 + param_4) % 0x9d80;
      if (0x4ec0 < iVar2) {
        iVar2 = 0x9d80 - iVar2;
      }
      iVar4 = (iVar2 + -0x4ec0) * iVar4;
      uVar5 = uVar5 + ((short)(iVar4 / 0x4ec0) - (short)(iVar4 / -0x62800000));
    }
  }
LAB_140acc67b:
  return (uint)uVar5;
}

