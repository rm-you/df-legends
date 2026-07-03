// FUN_1405cd060 @ 1405cd060
// callees:


undefined8 FUN_1405cd060(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x118) >> 10;
  uVar2 = (ulonglong)uVar1;
  if ((uVar1 & 1) == 0) {
    if ((*(int *)(param_1 + 0x1260) < 4) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 3) & 2) == 0)) {
      return 0;
    }
    uVar2 = 0;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

