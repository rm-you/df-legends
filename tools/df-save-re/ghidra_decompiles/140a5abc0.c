// FUN_140a5abc0 @ 140a5abc0
// callees:
//   -> 140dfb5b4 free


void FUN_140a5abc0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    uVar2 = uVar3;
    uVar4 = uVar3;
    if (0 < (int)param_1[5]) {
      do {
        free(*(void **)(uVar4 + *param_1));
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
        uVar4 = uVar4 + 8;
      } while ((int)uVar1 < (int)param_1[5]);
    }
    free((void *)*param_1);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  if (param_1[7] != 0) {
    uVar2 = uVar3;
    if (0 < (int)param_1[8]) {
      do {
        free(*(void **)(param_1[7] + uVar3));
        uVar1 = (int)uVar2 + 1;
        uVar3 = uVar3 + 8;
        uVar2 = (ulonglong)uVar1;
      } while ((int)uVar1 < (int)param_1[8]);
    }
    free((void *)param_1[7]);
  }
  return;
}

