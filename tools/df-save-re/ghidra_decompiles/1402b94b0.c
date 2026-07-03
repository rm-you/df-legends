// FUN_1402b94b0 @ 1402b94b0
// callees:
//   -> 1402b9160 FUN_1402b9160
//   -> 140050b50 FUN_140050b50


void FUN_1402b94b0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((param_2 != 0) &&
     (iVar5 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1,
     -1 < iVar5)) {
    lVar4 = (longlong)iVar5 * 8;
    do {
      lVar3 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20));
      uVar2 = (int)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3) - 1;
      if (-1 < (int)uVar2) {
        lVar3 = (longlong)(int)uVar2 << 3;
        do {
          cVar1 = FUN_1402b9160(param_1,param_2,iVar5,uVar2 & 0xffff);
          if (cVar1 != '\0') {
            if ((*(byte *)(param_2 + 0x100) & 1) != 0) {
              FUN_140050b50(*(undefined4 *)(param_2 + 0x10c),
                            *(longlong *)
                             (*(longlong *)
                               (*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)) + 0x178) +
                             lVar3) + 0x3f08);
            }
            if ((*(byte *)(param_2 + 0x100) & 2) != 0) {
              FUN_140050b50(*(undefined4 *)(param_2 + 0x10c),
                            *(longlong *)
                             (*(longlong *)
                               (*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)) + 0x178) +
                             lVar3) + 0x3f20);
            }
            if ((*(byte *)(param_2 + 0x100) & 4) != 0) {
              FUN_140050b50(*(undefined4 *)(param_2 + 0x10c),
                            *(longlong *)
                             (*(longlong *)
                               (*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)) + 0x178) +
                             lVar3) + 0x3f38);
            }
            if ((*(byte *)(param_2 + 0x100) & 0x10) != 0) {
              FUN_140050b50(*(undefined4 *)(param_2 + 0x10c),
                            *(longlong *)
                             (*(longlong *)
                               (*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)) + 0x178) +
                             lVar3) + 0x3f50);
            }
          }
          lVar3 = lVar3 + -8;
          uVar2 = uVar2 - 1;
        } while (-1 < (int)uVar2);
      }
      lVar4 = lVar4 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}

