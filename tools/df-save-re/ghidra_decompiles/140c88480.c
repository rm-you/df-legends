// FUN_140c88480 @ 140c88480
// callees:
//   -> 140c5db20 FUN_140c5db20
//   -> 14007dc50 FUN_14007dc50


ulonglong FUN_140c88480(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  if ((DAT_1410b67dc == 0) && (*(short *)(param_1 + 0x348) != 7)) {
    in_RAX = FUN_140c5db20();
    if ((char)in_RAX == '\0') {
      in_RAX = FUN_14007dc50(param_1);
      if (((char)in_RAX == '\0') && (*(longlong *)(param_1 + 0xd60) == 0)) {
        uVar1 = *(uint *)(param_1 + 0x118);
        in_RAX = (ulonglong)uVar1;
        if (((uVar1 >> 0xc & 1) == 0) &&
           ((((uVar2 = *(uint *)(param_1 + 0x110), (uVar2 & 0xa0010) == 0 && (-1 < (char)uVar2)) &&
             ((uVar2 >> 0xb & 1) == 0)) && ((uVar2 & 0x40) == 0)))) {
          if ((uVar2 >> 0x1a & 1) != 0) {
LAB_140c884f6:
            return CONCAT71((int7)(in_RAX >> 8),1);
          }
          uVar2 = *(uint *)(param_1 + 0x114);
          if ((((uVar2 >> 0x12 & 1) == 0) && ((uVar2 >> 0x13 & 1) == 0)) &&
             ((uVar2 >> 0x16 & 1) == 0)) {
            if ((uVar2 >> 0x17 & 1) != 0) {
              return (ulonglong)(uVar1 >> 0x1f);
            }
            uVar1 = *(uint *)(param_1 + 0x140);
            in_RAX = (ulonglong)uVar1;
            if ((uVar1 != 0xffffffff) && (uVar1 == DAT_141c36b80)) goto LAB_140c884f6;
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

