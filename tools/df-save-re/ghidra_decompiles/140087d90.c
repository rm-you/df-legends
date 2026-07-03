// FUN_140087d90 @ 140087d90
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140087020 FUN_140087020
//   -> 140071810 FUN_140071810


undefined4 * FUN_140087d90(longlong param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = operator_new(0x210);
  puVar2 = (undefined4 *)FUN_140087020(pvVar1);
  *puVar2 = param_2;
  FUN_140071810(puVar2,param_1 + 0x1f8);
  return puVar2;
}

