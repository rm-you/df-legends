// FUN_140cdde90 @ 140cdde90
// callees:
//   -> 140050b50 FUN_140050b50


void FUN_140cdde90(longlong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar1 = *param_2;
  uVar6 = 0;
  param_2[1] = iVar1;
  iVar7 = (int)(param_1[1] - *param_1 >> 3) + -1;
  uVar5 = uVar6;
  if (-1 < iVar7) {
    while( true ) {
      iVar3 = iVar7 + (int)uVar5 >> 1;
      piVar2 = *(int **)(*param_1 + (longlong)iVar3 * 8);
      if (*piVar2 == iVar1) break;
      if (iVar1 < *piVar2) {
        iVar7 = iVar3 + -1;
      }
      else {
        uVar5 = (ulonglong)(iVar3 + 1);
      }
      if (iVar7 < (int)uVar5) {
        return;
      }
    }
    if ((*(byte *)(piVar2 + 1) & 1) != 0) {
      param_2[2] = iVar1;
    }
    puVar4 = *(undefined4 **)(piVar2 + 2);
    uVar5 = (*(longlong *)(piVar2 + 4) - (longlong)puVar4) + 3U >> 2;
    if (*(undefined4 **)(piVar2 + 4) < puVar4) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      do {
        FUN_140050b50(*puVar4,param_2 + 4);
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 < uVar5);
    }
  }
  return;
}

