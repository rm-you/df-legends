// FUN_140c5ad60 @ 140c5ad60
// callees:
//   -> 140c7fb40 FUN_140c7fb40


ulonglong FUN_140c5ad60(longlong param_1,short param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  FUN_140c7fb40();
  iVar7 = *(int *)(param_1 + 0x5e4) - *(int *)(param_1 + 0x5f4);
  piVar3 = *(int **)(param_1 + 0x8c8);
  lVar5 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)param_2 * 8);
  if (piVar3 != (int *)0x0) {
    iVar7 = (*piVar3 * iVar7) / 100 + piVar3[6];
  }
  sVar1 = *(short *)(param_1 + 0xa4);
  iVar8 = *(int *)(lVar5 + 0x7c);
  sVar2 = *(short *)(param_1 + 300);
  iVar11 = 0;
  if (iVar7 < 0) {
    iVar7 = iVar11;
  }
  if ((((-1 < sVar1) &&
       ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
      (-1 < sVar2)) &&
     (lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8),
     (ulonglong)(longlong)sVar2 <
     (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3))) {
    iVar9 = iVar8;
    if (0 < iVar8) {
      if (5000 < iVar7) {
        iVar7 = 5000;
      }
      iVar8 = (iVar8 * iVar7) / 1000;
      iVar9 = iVar11;
    }
    iVar8 = iVar8 + iVar9;
  }
  iVar7 = *(int *)(param_1 + 0x980);
  iVar9 = *(int *)(lVar5 + 0x78);
  if (((-1 < sVar1) &&
      ((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     ((-1 < sVar2 &&
      (lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8),
      (ulonglong)(longlong)sVar2 <
      (ulonglong)(*(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3))))) {
    iVar10 = iVar9;
    if (0 < iVar9) {
      if (999999 < iVar7) {
        iVar7 = 999999;
      }
      iVar9 = ((iVar7 / 0x9c4) * iVar9) / 100;
      iVar10 = iVar11;
    }
    iVar9 = iVar9 + iVar10;
  }
  lVar5 = (((longlong)iVar9 + (longlong)*(int *)(lVar5 + 0x74) + (longlong)iVar8) *
          (longlong)
          (*(int *)(*(longlong *)(param_1 + 0x12a0) + (longlong)param_2 * 4) *
          *(int *)(lVar5 + 0x84))) / (longlong)*(int *)(lVar5 + 0x70);
  uVar6 = (*(int *)(param_1 + 0x690) * lVar5) /
          (longlong)(int)(*(longlong **)(param_1 + 0x5d8))[0xc];
  if ((((int)uVar6 < 1) && (0 < lVar5)) &&
     (uVar6 = uVar6 & 0xffffffff, 0 < *(int *)(param_1 + 0x690))) {
    uVar6 = 1;
  }
  return uVar6;
}

