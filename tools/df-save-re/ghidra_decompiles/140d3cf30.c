// FUN_140d3cf30 @ 140d3cf30
// callees:
//   -> 140d89d60 FUN_140d89d60


ulonglong FUN_140d3cf30(undefined8 param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_140d89d60(param_1,param_3,param_4);
  uVar3 = uVar2;
  if ((uVar2 != 0) && (-1 < param_2)) {
    uVar1 = param_2 >> 3;
    uVar3 = (ulonglong)uVar1;
    if ((-1 < (int)uVar1) &&
       (((int)uVar1 < *(int *)(uVar2 + 0x298) &&
        (uVar3 = *(ulonglong *)(uVar2 + 0x290),
        (*(byte *)((longlong)(int)uVar1 + uVar3) & (byte)(1 << ((byte)param_2 & 7))) != 0)))) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

