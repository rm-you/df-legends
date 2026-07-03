// FUN_14030c460 @ 14030c460
// callees:
//   -> 140dfb5b4 free


void FUN_14030c460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x8a38) - *(longlong *)(param_1 + 0x8a30) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x8a30) + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined8 *)(param_1 + 0x8a38) = *(undefined8 *)(param_1 + 0x8a30);
  return;
}

