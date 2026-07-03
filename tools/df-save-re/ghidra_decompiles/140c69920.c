// FUN_140c69920 @ 140c69920
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 140c49aa0 FUN_140c49aa0


undefined8 FUN_140c69920(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    lVar2 = FUN_140ca8390();
    if ((lVar2 != 0) &&
       (cVar1 = FUN_140c49aa0(lVar2,0x11,DAT_141c36b80,DAT_141c36b88), cVar1 != '\0')) {
      return 1;
    }
    for (puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0xa78) + 0x218);
        puVar3 < *(undefined8 **)(*(longlong *)(param_1 + 0xa78) + 0x220); puVar3 = puVar3 + 1) {
      if ((0xe < *(int *)((short *)*puVar3 + 2)) && (*(short *)*puVar3 != 0x74)) {
        return 1;
      }
    }
  }
  return 0;
}

