// FUN_140cc6190 @ 140cc6190
// callees:


int FUN_140cc6190(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar3 = (int)(*(longlong *)(param_1 + 0xd38) - *(longlong *)(param_1 + 0xd30) >> 3) + -1;
  if (-1 < iVar3) {
    do {
      iVar2 = iVar3 + iVar4 >> 1;
      piVar1 = *(int **)(*(longlong *)(param_1 + 0xd30) + (longlong)iVar2 * 8);
      if (*piVar1 == *(int *)(param_2 + 0x1c)) {
        iVar4 = piVar1[3] / 100 + piVar1[1] / 0x127500;
        iVar3 = 0;
        if ((-1 < iVar4) && (iVar3 = iVar4, 100 < iVar4)) {
          iVar3 = 100;
        }
        return iVar3;
      }
      if (*(int *)(param_2 + 0x1c) < *piVar1) {
        iVar3 = iVar2 + -1;
      }
      else {
        iVar4 = iVar2 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return 0;
}

