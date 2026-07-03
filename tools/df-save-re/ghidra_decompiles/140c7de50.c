// FUN_140c7de50 @ 140c7de50
// callees:
//   -> 140c26150 FUN_140c26150
//   -> 140c800d0 FUN_140c800d0


uint FUN_140c7de50(longlong param_1)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = FUN_140c26150();
  if ((cVar2 == '\0') || (*(short *)(param_1 + 0x7f8) == 0)) {
    return 3;
  }
  FUN_140c800d0(param_1);
  uVar1 = *(uint *)(param_1 + 0x114);
  if ((uVar1 & 0x6000000) == 0) {
    return 0;
  }
  if ((uVar1 >> 0x1b & 1) != 0) {
    return 1;
  }
  return ~(uVar1 >> 0x1a) & 1 | 2;
}

