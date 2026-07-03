// FUN_1407ee990 @ 1407ee990
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14007cd60 FUN_14007cd60


undefined8 *
FUN_1407ee990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x120);
  FUN_14007cd60(puVar1,0,param_3,param_4,uVar3);
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *puVar1 = item_orthopedic_castst::vftable;
  puVar2 = puVar1 + 0x1c;
  puVar1[0x1f] = 0xf;
  puVar1[0x1e] = 0;
  if (0xf < (ulonglong)puVar1[0x1f]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = puVar1 + 0x20;
  puVar1[0x23] = 0xf;
  puVar1[0x22] = 0;
  if (0xf < (ulonglong)puVar1[0x23]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  return puVar1;
}

