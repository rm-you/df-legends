// FUN_140df9b40 @ 140df9b40
// callees:


void FUN_140df9b40(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar6 = (int)param_3;
  iVar8 = iVar6 * 2;
  iVar3 = *(int *)(param_1 + 0xba8 + (longlong)iVar6 * 4);
  iVar4 = *(int *)(param_1 + 0x149c);
  bVar10 = SBORROW4(iVar8,iVar4);
  iVar7 = iVar8 - iVar4;
  if (iVar4 < iVar8) {
    *(int *)(param_1 + 0xba8 + (longlong)iVar6 * 4) = iVar3;
    return;
  }
  while( true ) {
    if (bVar10 != iVar7 < 0) {
      lVar9 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)(iVar8 + 1) * 4);
      lVar5 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)iVar8 * 4);
      uVar1 = *(ushort *)(param_2 + lVar9 * 4);
      uVar2 = *(ushort *)(param_2 + lVar5 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(lVar9 + 0x14a4 + param_1) <= *(byte *)(lVar5 + 0x14a4 + param_1))))) {
        iVar8 = iVar8 + 1;
      }
    }
    iVar4 = *(int *)(param_1 + 0xba8 + (longlong)iVar8 * 4);
    uVar1 = *(ushort *)(param_2 + (longlong)iVar3 * 4);
    uVar2 = *(ushort *)(param_2 + (longlong)iVar4 * 4);
    iVar7 = (int)param_3;
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)(param_1 + 0x14a4 + (longlong)iVar3) <=
         *(byte *)((longlong)iVar4 + 0x14a4 + param_1))))) break;
    param_3 = (longlong)iVar8;
    iVar8 = iVar8 * 2;
    *(int *)(param_1 + 0xba8 + (longlong)iVar7 * 4) = iVar4;
    iVar4 = *(int *)(param_1 + 0x149c);
    bVar10 = SBORROW4(iVar8,iVar4);
    iVar7 = iVar8 - iVar4;
    if (iVar4 < iVar8) {
      *(int *)(param_1 + 0xba8 + param_3 * 4) = iVar3;
      return;
    }
  }
  *(int *)(param_1 + 0xba8 + (longlong)iVar7 * 4) = iVar3;
  return;
}

