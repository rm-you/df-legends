// FUN_1405cbc10 @ 1405cbc10
// callees:
//   -> 1402cbca0 FUN_1402cbca0
//   -> 140dfb5b4 free
//   -> 1405cbd80 FUN_1405cbd80


void FUN_1405cbc10(longlong *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  uVar3 = uVar2;
  uVar5 = uVar2;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar3 + *param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_1402cbca0(pvVar1);
        free(pvVar1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  param_1[1] = *param_1;
  uVar3 = uVar2;
  if (param_1[4] - param_1[3] >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar3 + param_1[3]);
      if (pvVar1 != (void *)0x0) {
        FUN_1405cbd80(pvVar1);
        free(pvVar1);
      }
      uVar4 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar4;
      uVar3 = uVar3 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[4] - param_1[3] >> 3));
  }
  param_1[4] = param_1[3];
  return;
}

