// FUN_140366ce0 @ 140366ce0
// callees:
//   -> 140c800d0 FUN_140c800d0


undefined8 FUN_140366ce0(longlong param_1)

{
  short sVar1;
  
  if ((2 < *(int *)(param_1 + 0x1260)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 2) & 8) != 0)) {
    FUN_140c800d0();
    sVar1 = *(short *)(param_1 + 0xc22);
    FUN_140c800d0(param_1);
    if (((*(short *)(param_1 + 0xc20) >> 1 < sVar1) ||
        (FUN_140c800d0(param_1), *(short *)(param_1 + 0xc20) == 0)) &&
       (((*(short *)(param_1 + 0x7e4) < 1 && (*(short *)(param_1 + 0x7e8) < 10)) &&
        (*(int *)(param_1 + 0x958) < 100)))) {
      return 1;
    }
  }
  return 0;
}

