// FUN_14030c4d0 @ 14030c4d0
// callees:
//   -> 140dfb5b4 free


void FUN_14030c4d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x8a18) - *(longlong *)(param_1 + 0x8a10) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x8a10) + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0x8a18) = *(undefined8 *)(param_1 + 0x8a10);
  return;
}

