// FUN_140c88550 @ 140c88550
// callees:
//   -> 140c5db20 FUN_140c5db20
//   -> 14007dc50 FUN_14007dc50


ulonglong FUN_140c88550(longlong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if ((DAT_1410b67dc == 0) && (*(short *)(param_1 + 0x348) != 7)) {
    in_RAX = FUN_140c5db20();
    if ((char)in_RAX == '\0') {
      in_RAX = FUN_14007dc50(param_1);
      if ((((char)in_RAX == '\0') && (*(longlong *)(param_1 + 0xd60) == 0)) &&
         ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
        uVar1 = *(uint *)(param_1 + 0x110);
        in_RAX = (ulonglong)uVar1;
        if ((((uVar1 & 0xa0010) == 0) && (-1 < (char)uVar1)) &&
           (((uVar1 >> 0xb & 1) == 0 && ((uVar1 & 0x40) == 0)))) {
          if ((uVar1 >> 0x1a & 1) != 0) {
LAB_140c885c0:
            return CONCAT71((int7)(in_RAX >> 8),1);
          }
          uVar1 = *(uint *)(param_1 + 0x114);
          in_RAX = (ulonglong)uVar1;
          if ((((uVar1 >> 0x12 & 1) == 0) && ((uVar1 >> 0x13 & 1) == 0)) &&
             (((uVar1 >> 0x16 & 1) == 0 && ((uVar1 >> 0x17 & 1) == 0)))) {
            uVar1 = *(uint *)(param_1 + 0x140);
            in_RAX = (ulonglong)uVar1;
            if ((uVar1 != 0xffffffff) && (uVar1 == DAT_141c36b80)) goto LAB_140c885c0;
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

