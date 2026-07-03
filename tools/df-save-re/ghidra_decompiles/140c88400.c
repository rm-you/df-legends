// FUN_140c88400 @ 140c88400
// callees:


bool FUN_140c88400(longlong param_1)

{
  uint uVar1;
  
  if (DAT_1410b67dc == 1) {
    if (*(int *)(param_1 + 0x140) == -1) {
      return (*(uint *)(param_1 + 0x114) & 0x40000000) != 0;
    }
  }
  else if (*(short *)(param_1 + 0x348) != 7) {
    uVar1 = *(uint *)(param_1 + 0x110);
    if (((((uVar1 & 0xa0000) == 0) && (-1 < (char)uVar1)) && ((uVar1 >> 0xb & 1) == 0)) &&
       (((uVar1 & 0x40) == 0 && ((uVar1 >> 0x1a & 1) == 0)))) {
      uVar1 = *(uint *)(param_1 + 0x114);
      if ((((uVar1 >> 0x12 & 1) == 0) && (((uVar1 >> 0x17 & 1) == 0 && ((uVar1 >> 0x16 & 1) == 0))))
         && (*(int *)(param_1 + 0x140) == -1)) {
        return (uVar1 & 0x40000000) != 0;
      }
    }
  }
  return false;
}

