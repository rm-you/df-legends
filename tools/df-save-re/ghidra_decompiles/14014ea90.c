// FUN_14014ea90 @ 14014ea90
// callees:


undefined8 FUN_14014ea90(undefined8 *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = (**(code **)*param_1)();
  iVar2 = (int)sVar1;
  if (iVar2 == 0x38) {
    if ((*(uint *)(param_1 + 2) & 0x200) != 0) {
      return 1;
    }
  }
  else if (((iVar2 - 0x44U & 0xfffffffa) == 0) && (iVar2 != 0x49)) {
    return 1;
  }
  return 0;
}

