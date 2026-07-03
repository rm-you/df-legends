// FUN_140c859b0 @ 140c859b0
// callees:
//   -> 1406145a0 FUN_1406145a0
//   -> 140c84420 FUN_140c84420
//   -> 140c41a40 FUN_140c41a40
//   -> 140dfb5b4 free


void FUN_140c859b0(void)

{
  uint *puVar1;
  void *_Memory;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar3 = DAT_141c66fd0;
  do {
    bVar2 = false;
    iVar4 = (int)(DAT_141c66fd8 - lVar3 >> 3) + -1;
    if (iVar4 < 0) break;
    lVar5 = (longlong)iVar4 * 8;
    do {
      if ((*(uint *)(*(longlong *)(lVar5 + lVar3) + 0x114) & 0x500) == 0x100) {
        FUN_1406145a0(*(longlong *)(lVar5 + lVar3),1);
        puVar1 = (uint *)(*(longlong *)(lVar5 + DAT_141c66fd0) + 0x114);
        *puVar1 = *puVar1 & 0xfffffeff;
        puVar1 = (uint *)(*(longlong *)(lVar5 + DAT_141c66fd0) + 0x114);
        *puVar1 = *puVar1 | 0x400;
        FUN_140c84420(*(undefined8 *)(lVar5 + DAT_141c66fd0));
        bVar2 = true;
        lVar3 = DAT_141c66fd0;
      }
      lVar5 = lVar5 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  } while (bVar2);
  iVar4 = (int)(DAT_141c66fd8 - lVar3 >> 3) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      puVar1 = (uint *)(*(longlong *)(lVar3 + lVar5 * 8) + 0x114);
      *puVar1 = *puVar1 & 0xfffffbff;
      lVar5 = lVar5 + -1;
      lVar3 = DAT_141c66fd0;
    } while (-1 < lVar5);
  }
  iVar4 = (int)(DAT_141c66fd8 - lVar3 >> 3) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      _Memory = *(void **)(lVar3 + lVar5 * 8);
      if (((*(uint *)((longlong)_Memory + 0x114) & 0x200) != 0) && (_Memory != (void *)0x0)) {
        FUN_140c41a40(_Memory);
        free(_Memory);
        lVar3 = DAT_141c66fd0;
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return;
}

