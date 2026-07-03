// FUN_1407ef380 @ 1407ef380
// callees:


void FUN_1407ef380(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = 0;
  do {
    *(undefined4 *)(param_1 + lVar1 * 4) = 100;
    *(undefined4 *)(param_1 + 0x18 + lVar1 * 4) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 < 6);
  puVar2 = (undefined4 *)(param_1 + 100);
  lVar1 = 0xd;
  do {
    puVar2[-0xd] = 100;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

