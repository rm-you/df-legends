// FUN_140c9c1e0 @ 140c9c1e0
// callees:
//   -> 1406aee70 FUN_1406aee70


ulonglong FUN_140c9c1e0(longlong param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  short sVar11;
  int iVar12;
  ulonglong uVar13;
  
  sVar1 = *(short *)(param_1 + 300);
  sVar2 = *(short *)(param_1 + 0xa4);
  uVar5 = FUN_1406aee70(*(undefined2 *)(param_1 + 0xa0),sVar2);
  iVar6 = 0;
  uVar13 = (ulonglong)uVar5;
  sVar11 = 0;
  if (-1 < sVar1) {
    sVar11 = sVar1;
  }
  if (((-1 < sVar2) &&
      ((ulonglong)(longlong)sVar2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (-1 < sVar11)) {
    lVar7 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8);
    if (((ulonglong)(longlong)sVar11 <
         (ulonglong)(*(longlong *)(lVar7 + 0x180) - *(longlong *)(lVar7 + 0x178) >> 3)) &&
       (iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x178) + (longlong)sVar11 * 8) + 0x500)
       , 1 < iVar3)) {
      uVar13 = (longlong)(int)uVar5 / (longlong)iVar3 & 0xffffffff;
    }
  }
  if (param_2 == 0) {
    return uVar13;
  }
  if (*(longlong *)(param_2 + 0x2110) == 0) {
    return uVar13;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  lVar7 = DAT_141c53720 - DAT_141c53718 >> 3;
  if (lVar7 == 0) {
    return uVar13;
  }
  if (iVar3 == -1) {
    return uVar13;
  }
  iVar12 = (int)lVar7 + -1;
  if (iVar12 < 0) {
    return uVar13;
  }
  while( true ) {
    iVar9 = iVar12 + iVar6 >> 1;
    lVar7 = *(longlong *)(DAT_141c53718 + (longlong)iVar9 * 8);
    if (*(int *)(lVar7 + 4) == iVar3) break;
    if (iVar3 < *(int *)(lVar7 + 4)) {
      iVar12 = iVar9 + -1;
    }
    else {
      iVar6 = iVar9 + 1;
    }
    if (iVar12 < iVar6) {
      return uVar13;
    }
  }
  if (lVar7 == 0) {
    return uVar13;
  }
  piVar4 = *(int **)(lVar7 + 0xb30);
  psVar10 = *(short **)(lVar7 + 0xbd8);
  piVar8 = piVar4;
  if (*(int **)(lVar7 + 0xb38) <= piVar4) {
    return uVar13;
  }
  while ((*piVar8 != *(int *)(param_1 + 0xa4) || (*psVar10 != sVar1))) {
    piVar8 = piVar8 + 1;
    psVar10 = psVar10 + 1;
    if (*(int **)(lVar7 + 0xb38) <= piVar8) {
      return uVar13;
    }
  }
  iVar6 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2);
  if (iVar6 == -1) {
    return uVar13;
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x2110) + 0x248) + (longlong)iVar6 * 4);
  if (iVar6 < 0x81) {
    return uVar13;
  }
  return (ulonglong)(uint)((int)uVar13 * iVar6 >> 7);
}

