// FUN_1400b4450 @ 1400b4450
// callees:


ulonglong FUN_1400b4450(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  piVar6 = (int *)*param_1;
  uVar9 = 0;
  uVar8 = 0;
  uVar11 = (param_1[1] - (longlong)piVar6) + 3U >> 2;
  if ((int *)param_1[1] < piVar6) {
    uVar11 = uVar9;
  }
  uVar7 = uVar9;
  uVar10 = uVar9;
  if ((uVar11 != 0) && (uVar7 = 0, uVar10 = 0, 7 < uVar11)) {
    iVar13 = 0;
    iVar15 = 0;
    iVar17 = 0;
    iVar19 = 0;
    uVar10 = uVar9;
    iVar14 = iVar13;
    iVar16 = iVar15;
    iVar18 = iVar17;
    iVar20 = iVar19;
    do {
      uVar10 = uVar10 + 8;
      iVar13 = *piVar6 + iVar13;
      iVar15 = piVar6[1] + iVar15;
      iVar17 = piVar6[2] + iVar17;
      iVar19 = piVar6[3] + iVar19;
      piVar1 = piVar6 + 4;
      piVar2 = piVar6 + 5;
      piVar3 = piVar6 + 6;
      piVar4 = piVar6 + 7;
      piVar6 = piVar6 + 8;
      iVar14 = *piVar1 + iVar14;
      iVar16 = *piVar2 + iVar16;
      iVar18 = *piVar3 + iVar18;
      iVar20 = *piVar4 + iVar20;
    } while (uVar10 < uVar11 - ((uint)uVar11 & 7));
    uVar7 = (ulonglong)(uint)(iVar13 + iVar14 + iVar17 + iVar18 + iVar15 + iVar16 + iVar19 + iVar20)
    ;
  }
  iVar14 = (int)uVar7;
  if (uVar10 < uVar11) {
    uVar12 = uVar8;
    if (1 < uVar11 - uVar10) {
      lVar5 = ((uVar11 - uVar10) - 2 >> 1) + 1;
      uVar10 = uVar10 + lVar5 * 2;
      uVar7 = uVar9;
      do {
        uVar8 = (int)uVar9 + *piVar6;
        uVar9 = (ulonglong)uVar8;
        uVar12 = (int)uVar7 + piVar6[1];
        uVar7 = (ulonglong)uVar12;
        piVar6 = piVar6 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (uVar10 < uVar11) {
      iVar14 = iVar14 + *piVar6;
    }
    return (ulonglong)(uVar8 + uVar12 + iVar14);
  }
  return uVar7;
}

