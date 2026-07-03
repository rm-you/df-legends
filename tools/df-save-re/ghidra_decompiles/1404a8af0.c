// FUN_1404a8af0 @ 1404a8af0
// callees:
//   -> 140d89d60 FUN_140d89d60


void FUN_1404a8af0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar3 = 0;
  iVar9 = 0;
  iVar7 = 0;
  iVar2 = (int)(*(longlong *)(param_1 + 0x2e0) - *(longlong *)(param_1 + 0x2d8) >> 1) + -1;
  lVar5 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x2f0) + lVar5 * 4);
    puVar6 = (undefined2 *)(*(longlong *)(param_1 + 0x2d8) + lVar5 * 2);
    do {
      lVar4 = FUN_140d89d60(&DAT_141c53470,*puVar6,*puVar8);
      if (lVar4 != 0) {
        iVar2 = *(int *)(lVar4 + 0x284) / 1000 + *(int *)(lVar4 + 0x260) / 10000;
        bVar1 = iVar9 < iVar2;
        iVar9 = iVar3;
        if (bVar1) {
          iVar9 = iVar2;
          iVar3 = iVar2;
        }
      }
      puVar8 = puVar8 + -1;
      puVar6 = puVar6 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0x3a0) - *(longlong *)(param_1 + 0x398) >> 1) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x3b0) + lVar5 * 4);
    puVar6 = (undefined2 *)(*(longlong *)(param_1 + 0x398) + lVar5 * 2);
    do {
      lVar4 = FUN_140d89d60(&DAT_141c53470,*puVar6,*puVar8);
      if (lVar4 != 0) {
        iVar3 = *(int *)(lVar4 + 0x260) / 10000;
        if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
      }
      puVar8 = puVar8 + -1;
      puVar6 = puVar6 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(int *)(param_1 + 0x1c08) = iVar7 + iVar9;
  return;
}

