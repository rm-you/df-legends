// FUN_140805600 @ 140805600
// callees:


undefined8 FUN_140805600(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  bVar1 = *(byte *)(param_1 + 0x10);
joined_r0x000140805619:
  if ((bVar1 & 8) == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  do {
    if (puVar2 <= puVar5) {
      return 0;
    }
    iVar3 = (**(code **)(*(longlong *)*puVar5 + 0x10))();
    if (iVar3 == 0xb) {
      param_1 = (**(code **)(*(longlong *)*puVar5 + 0x18))();
      if (param_1 != 0) break;
    }
    else if (((iVar3 == 0x12) && (lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x20))(), lVar4 != 0))
            && (lVar4 == param_2)) {
      return 1;
    }
    puVar5 = puVar5 + 1;
  } while( true );
  bVar1 = *(byte *)(param_1 + 0x10);
  goto joined_r0x000140805619;
}

