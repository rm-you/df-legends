// FUN_14083bae0 @ 14083bae0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14083c020 FUN_14083c020
//   -> 14083fe60 FUN_14083fe60


undefined8 * FUN_14083bae0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0x88);
  FUN_14083c020(puVar1);
  *puVar1 = itemdef_foodst::vftable;
  puVar2 = puVar1 + 0xc;
  puVar1[0xf] = 0xf;
  puVar1[0xe] = 0;
  if (0xf < (ulonglong)puVar1[0xf]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined2 *)(puVar1 + 0x10) = 2;
  FUN_14083fe60(puVar1);
  return puVar1;
}

