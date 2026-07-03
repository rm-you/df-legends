// FUN_140c8a660 @ 140c8a660
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 14075c8a0 FUN_14075c8a0


void FUN_140c8a660(longlong param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1268);
  if (uVar1 < 500) {
    puVar4 = (undefined4 *)((longlong)&DAT_141c70ac4 + (longlong)(int)uVar1 * 4);
    puVar2 = &DAT_141c70ac4 + (longlong)(int)uVar1 * 0xfa;
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
    FUN_14075c8a0(lVar3,param_2,param_3,param_4);
  }
  return;
}

