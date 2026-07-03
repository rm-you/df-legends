// FUN_140367670 @ 140367670
// callees:


longlong FUN_140367670(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x1c0c);
  lVar3 = 0x10;
  do {
    lVar2 = 0x10;
    do {
      puVar1[-0x100] = 0xffffffff;
      *puVar1 = 0xffffffff;
      puVar1[0x100] = 0xffffffff;
      puVar1[0x200] = 0xffffffff;
      puVar1[0x300] = 0;
      puVar1[0x400] = 1;
      puVar1[-0x700] = 0xffffffff;
      puVar1[-0x600] = 0xffffffff;
      puVar1[-0x500] = 0xffffffff;
      puVar1[-0x400] = 0xffffffff;
      puVar1[-0x300] = 0;
      puVar1[-0x200] = 1;
      puVar1[0x600] = 0;
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}

