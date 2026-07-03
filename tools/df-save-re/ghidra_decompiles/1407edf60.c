// FUN_1407edf60 @ 1407edf60
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14007cd60 FUN_14007cd60


undefined8 * FUN_1407edf60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0x100);
  FUN_14007cd60(puVar1);
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *puVar1 = item_bookst::vftable;
  puVar2 = puVar1 + 0x1c;
  puVar1[0x1f] = 0xf;
  puVar1[0x1e] = 0;
  if (0xf < (ulonglong)puVar1[0x1f]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  return puVar1;
}

