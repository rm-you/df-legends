// FUN_140df9ac0 @ 140df9ac0
// callees:


void FUN_140df9ac0(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined2 *)(param_1 + 0xbc);
  lVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0x9b0);
  lVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0xaa4);
  lVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x1700) = 0;
  *(undefined2 *)(param_1 + 0x4bc) = 1;
  *(undefined4 *)(param_1 + 0x1708) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  return;
}

