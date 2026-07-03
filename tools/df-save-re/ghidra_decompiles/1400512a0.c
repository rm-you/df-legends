// FUN_1400512a0 @ 1400512a0
// callees:


short * FUN_1400512a0(short param_1,longlong *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  ushort uVar4;
  int iVar6;
  uint uVar5;
  
  iVar6 = 0;
  uVar4 = (short)(param_2[1] - *param_2 >> 3) - 1;
  uVar5 = (uint)uVar4;
  if (-1 < (short)uVar4) {
    do {
      iVar3 = (int)(short)uVar5 + (int)(short)iVar6 >> 1;
      psVar2 = *(short **)(*param_2 + (longlong)(short)iVar3 * 8);
      sVar1 = *psVar2;
      if (sVar1 == param_1) {
        return psVar2;
      }
      if (param_1 < sVar1) {
        uVar5 = iVar3 - 1;
      }
      else {
        iVar6 = iVar3 + 1;
      }
    } while ((short)iVar6 <= (short)uVar5);
  }
  return (short *)0x0;
}

