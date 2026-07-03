// FUN_1405d51a0 @ 1405d51a0
// callees:
//   -> 140429f90 FUN_140429f90
//   -> 140dfb5b4 free
//   -> 14042a030 FUN_14042a030


void FUN_1405d51a0(longlong *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0x21;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x1000b;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  iVar2 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*param_1 + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140429f90(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  param_1[1] = *param_1;
  iVar2 = (int)(param_1[4] - param_1[3] >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(param_1[3] + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_14042a030(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  param_1[4] = param_1[3];
  iVar2 = (int)(param_1[0xf] - param_1[0xe] >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      free(*(void **)(param_1[0xe] + lVar3 * 8));
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  param_1[0xf] = param_1[0xe];
  return;
}

