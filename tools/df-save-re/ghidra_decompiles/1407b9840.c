// FUN_1407b9840 @ 1407b9840
// callees:


undefined8 FUN_1407b9840(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  for (plVar9 = *(longlong **)(param_1 + 0xe8); plVar9 < plVar1; plVar9 = plVar9 + 1) {
    if (*(int *)((undefined8 *)*plVar9 + 1) == param_2) {
      sVar4 = (*(code *)**(undefined8 **)*plVar9)();
      if (sVar4 == 10) {
        return 1;
      }
      if (sVar4 == 0xd) {
        return 1;
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0xbc);
  if (iVar8 == -1) {
    return 0;
  }
  iVar10 = 0;
  iVar6 = 0;
  iVar7 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
  if (iVar7 < 0) {
    return 0;
  }
  while( true ) {
    iVar5 = iVar6 + iVar7 >> 1;
    piVar2 = *(int **)(DAT_141d692e0 + (longlong)iVar5 * 8);
    if (*piVar2 == iVar8) break;
    if (iVar8 < *piVar2) {
      iVar7 = iVar5 + -1;
    }
    else {
      iVar6 = iVar5 + 1;
    }
    if (iVar7 < iVar6) {
      return 0;
    }
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar8 = (int)(*(longlong *)(piVar2 + 6) - *(longlong *)(piVar2 + 4) >> 3) + -1;
  if (iVar8 < 0) {
    return 0;
  }
  do {
    iVar6 = iVar8 + iVar10 >> 1;
    piVar3 = *(int **)(*(longlong *)(piVar2 + 4) + (longlong)iVar6 * 8);
    iVar7 = *piVar3;
    if (iVar7 == param_2) {
      if ((*(byte *)(piVar3 + 7) & 2) == 0) {
        return 0;
      }
      return 1;
    }
    if (param_2 < iVar7) {
      iVar8 = iVar6 + -1;
    }
    else {
      iVar10 = iVar6 + 1;
    }
  } while (iVar10 <= iVar8);
  return 0;
}

