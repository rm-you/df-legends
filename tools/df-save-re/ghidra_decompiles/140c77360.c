// FUN_140c77360 @ 140c77360
// callees:


longlong FUN_140c77360(longlong param_1,short param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  uint7 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x6b0);
  while( true ) {
    uVar3 = (uint7)((ulonglong)puVar2 >> 8);
    if (*(undefined8 **)(param_1 + 0x6b8) <= puVar2) {
      return (ulonglong)uVar3 << 8;
    }
    psVar1 = (short *)*puVar2;
    if (((*psVar1 == 6) && (psVar1[0xc] == param_2)) && ((*(byte *)(psVar1 + 0xd) & 1) != 0)) break;
    puVar2 = puVar2 + 1;
  }
  return CONCAT71(uVar3,1);
}

