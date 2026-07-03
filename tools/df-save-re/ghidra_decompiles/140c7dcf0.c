// FUN_140c7dcf0 @ 140c7dcf0
// callees:
//   -> 1401623d0 FUN_1401623d0


int FUN_140c7dcf0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  cVar2 = FUN_1401623d0();
  if (cVar2 == '\0') {
    return 2;
  }
  if ((*(byte *)(param_1 + 0x110) & 0x20) == 0) {
    iVar3 = (int)(*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3) + -1;
    if (-1 < iVar3) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xaf8) + (longlong)iVar3 * 8);
      do {
        if ((*(char *)(*plVar4 + 0x1e) < '\0') && (*(short *)(*plVar4 + 0x1c) == 3)) {
          return 0;
        }
        plVar4 = plVar4 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    uVar1 = *(uint *)(param_1 + 0x114);
    if (((uVar1 >> 0x1c & 1) != 0) || ((uVar1 >> 0x1d & 1) == 0)) {
      return 2 - (uint)((uVar1 & 0x20000000) != 0);
    }
  }
  return 0;
}

