// FUN_140c889d0 @ 140c889d0
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 14073e2c0 FUN_14073e2c0


void FUN_140c889d0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1268);
  if (uVar1 < 500) {
    puVar2 = &DAT_141c70ac4 + (longlong)(int)uVar1 * 0xfa;
    puVar4 = (undefined4 *)((longlong)&DAT_141c70ac4 + (longlong)(int)uVar1 * 4);
    lVar3 = 500;
    do {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 500;
      *(undefined4 *)puVar2 = 0xffffffff;
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar3 = FUN_140ca8390();
  if (lVar3 != 0) {
    FUN_14073e2c0(lVar3);
    return;
  }
  return;
}

