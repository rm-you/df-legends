// FUN_1401aa910 @ 1401aa910
// callees:
//   -> 140004830 FUN_140004830


void FUN_1401aa910(longlong param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  
  sVar9 = *(short *)(param_1 + 8) + -1;
  iVar8 = (int)sVar9;
  iVar10 = *(int *)(param_1 + 0x14) + 1;
  if (iVar8 <= iVar10) {
    sVar1 = *(short *)(param_1 + 0xc);
    uVar7 = *(int *)(param_1 + 0x18) + 1;
    do {
      uVar6 = (uint)(short)(sVar1 + -1);
      if ((int)uVar6 <= (int)uVar7) {
        iVar2 = *(int *)(param_1 + 8);
        uVar4 = uVar6;
        do {
          if (((((iVar8 != iVar2 + 1) && (iVar8 != iVar10)) ||
               ((uVar4 != *(int *)(param_1 + 0xc) - 1U && (uVar4 != uVar7)))) &&
              (((sVar3 = FUN_140004830(&DAT_141c53470,sVar9,uVar6 & 0xffff,
                                       *(undefined2 *)(param_1 + 0x20)), sVar3 != 1 &&
                (sVar3 != 0x20)) && (sVar3 != 0x23)))) && (sVar3 != 0x2a)) {
            *(ushort *)(param_1 + 0x178) = *(ushort *)(param_1 + 0x178) | 0x10;
            return;
          }
          uVar5 = (short)uVar6 + 1;
          uVar6 = (uint)uVar5;
          uVar4 = (uint)(short)uVar5;
        } while ((int)uVar4 <= (int)uVar7);
      }
      sVar9 = sVar9 + 1;
      iVar8 = (int)sVar9;
    } while (iVar8 <= iVar10);
  }
  *(ushort *)(param_1 + 0x178) = *(ushort *)(param_1 + 0x178) & 0xffef;
  return;
}

