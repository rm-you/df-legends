// FUN_140dfa170 @ 140dfa170
// callees:


void FUN_140dfa170(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = *(ushort *)(param_2 + 2);
  uVar5 = 0xffffffff;
  iVar9 = 0;
  iVar4 = 4;
  iVar10 = 7;
  if (uVar2 == 0) {
    iVar4 = 3;
    iVar10 = 0x8a;
  }
  *(undefined2 *)(param_2 + 2 + (longlong)(param_3 + 1) * 4) = 0xffff;
  if (-1 < param_3) {
    puVar3 = (ushort *)(param_2 + 6);
    lVar8 = (longlong)param_3 + 1;
    uVar6 = (uint)uVar2;
    do {
      iVar9 = iVar9 + 1;
      uVar2 = *puVar3;
      uVar7 = (uint)uVar2;
      if ((iVar10 <= iVar9) || (uVar6 != uVar7)) {
        if (iVar9 < iVar4) {
          psVar1 = (short *)(param_1 + 0xaa4 + (longlong)(int)uVar6 * 4);
          *psVar1 = *psVar1 + (short)iVar9;
        }
        else if (uVar6 == 0) {
          if (iVar9 < 0xb) {
            *(short *)(param_1 + 0xae8) = *(short *)(param_1 + 0xae8) + 1;
          }
          else {
            *(short *)(param_1 + 0xaec) = *(short *)(param_1 + 0xaec) + 1;
          }
        }
        else {
          if (uVar6 != uVar5) {
            psVar1 = (short *)(param_1 + 0xaa4 + (longlong)(int)uVar6 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xae4) = *(short *)(param_1 + 0xae4) + 1;
        }
        iVar9 = 0;
        uVar5 = uVar6;
        if (uVar2 == 0) {
          iVar4 = 3;
          iVar10 = 0x8a;
          iVar9 = 0;
        }
        else if (uVar6 == uVar7) {
          iVar4 = 3;
          iVar10 = 6;
          iVar9 = 0;
        }
        else {
          iVar4 = 4;
          iVar10 = 7;
        }
      }
      puVar3 = puVar3 + 2;
      lVar8 = lVar8 + -1;
      uVar6 = uVar7;
    } while (lVar8 != 0);
  }
  return;
}

