// FUN_14078d100 @ 14078d100
// callees:


void FUN_14078d100(longlong param_1,ushort param_2)

{
  byte *pbVar1;
  
  if ((((param_2 < 0x2b) && ((0x7b800001000U >> ((longlong)(short)param_2 & 0x3fU) & 1) != 0)) &&
      (1 < *(int *)(param_1 + 0xd0))) &&
     ((pbVar1 = (byte *)(*(longlong *)(param_1 + 200) + 1), *pbVar1 = *pbVar1 | 1,
      1 < *(int *)(param_1 + 0xd0) &&
      (pbVar1 = (byte *)(*(longlong *)(param_1 + 200) + 1), *pbVar1 = *pbVar1 | 2,
      1 < *(int *)(param_1 + 0xd0))))) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 200) + 1);
    *pbVar1 = *pbVar1 | 4;
  }
  return;
}

