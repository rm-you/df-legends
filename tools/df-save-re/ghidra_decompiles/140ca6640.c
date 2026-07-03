// FUN_140ca6640 @ 140ca6640
// callees:
//   -> 140c88550 FUN_140c88550
//   -> 140c88a90 FUN_140c88a90


bool FUN_140ca6640(longlong param_1)

{
  char cVar1;
  short sVar2;
  
  if ((*(byte *)(param_1 + 0x110) & 2) == 0) {
    cVar1 = FUN_140c88550();
    if (cVar1 != '\0') {
      if ((((*(short *)(param_1 + 0xa0) != 0x67) && (*(short *)(param_1 + 0xa0) != 0x68)) &&
          (*(short *)(param_1 + 0x348) == -1)) && (*(longlong *)(param_1 + 0xd60) == 0)) {
        if ((*(int *)(param_1 + 0x1260) < 8) ||
           ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 7) & 4) == 0)) {
          if (((*(uint *)(param_1 + 0x810) & 0x2000000) == 0) &&
             ((*(uint *)(param_1 + 0x80c) & 0x2000000) != 0)) goto LAB_140ca66c4;
        }
        else if ((*(uint *)(param_1 + 0x810) & 0x2000000) == 0) {
LAB_140ca66c4:
          sVar2 = FUN_140c88a90(param_1,0,DAT_141c36b88);
          return sVar2 != 0;
        }
      }
    }
  }
  return false;
}

