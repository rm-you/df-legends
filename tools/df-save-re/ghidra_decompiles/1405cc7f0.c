// FUN_1405cc7f0 @ 1405cc7f0
// callees:


void FUN_1405cc7f0(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  piVar1 = (int *)(param_1 + 0xf4434);
  iVar2 = *piVar1;
  uVar5 = (ulonglong)iVar2;
  uVar4 = uVar5;
  for (; (longlong)uVar5 < 500; uVar5 = uVar5 + 1) {
    if (param_1[uVar5] == '\0') {
      *piVar1 = (int)uVar4;
      return;
    }
    uVar4 = (ulonglong)((int)uVar4 + 1);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*param_1 == '\0') {
        *piVar1 = iVar3;
        return;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < iVar2);
  }
  *piVar1 = -1;
  return;
}

