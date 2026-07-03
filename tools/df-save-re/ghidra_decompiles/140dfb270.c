// FUN_140dfb270 @ 140dfb270
// callees:


undefined8 FUN_140dfb270(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  psVar1 = (short *)(param_1 + 0xbc);
  lVar2 = 0;
  uVar3 = 0xf3ffc07f;
  while (((uVar3 & 1) == 0 || (*psVar1 == 0))) {
    lVar2 = lVar2 + 1;
    uVar3 = uVar3 >> 1;
    psVar1 = psVar1 + 2;
    if (0x1f < lVar2) {
      if (((*(short *)(param_1 + 0xe0) == 0) && (*(short *)(param_1 + 0xe4) == 0)) &&
         (*(short *)(param_1 + 0xf0) == 0)) {
        lVar2 = 0x20;
        psVar1 = (short *)(param_1 + 0x13c);
        while (*psVar1 == 0) {
          lVar2 = lVar2 + 1;
          psVar1 = psVar1 + 2;
          if (0xff < lVar2) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

