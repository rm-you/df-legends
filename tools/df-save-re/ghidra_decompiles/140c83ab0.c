// FUN_140c83ab0 @ 140c83ab0
// callees:
//   -> 140210660 FUN_140210660
//   -> 140c83b40 FUN_140c83b40


void FUN_140c83ab0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = FUN_140210660();
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x964) = *(int *)(param_1 + 0x964) + 10;
  }
  iVar5 = 0;
  iVar4 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
  if (-1 < iVar4) {
    while( true ) {
      iVar3 = iVar4 + iVar5 >> 1;
      piVar1 = *(int **)(*(longlong *)(param_1 + 0x590) + (longlong)iVar3 * 8);
      if (*piVar1 == *(int *)(param_3 + 0x10)) break;
      if (*(int *)(param_3 + 0x10) < *piVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar5 = iVar3 + 1;
      }
      if (iVar4 < iVar5) {
        return;
      }
    }
    if (piVar1 != (int *)0x0) {
      FUN_140c83b40(param_1,piVar1);
      return;
    }
  }
  return;
}

