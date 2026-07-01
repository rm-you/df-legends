// FUN_1403047a0 @ 1403047a0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_1403047a0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3 != 0) {
    do {
      FUN_1405bba90(param_2,*(undefined8 *)(uVar1 + *(longlong *)(param_1 + 0x18)),4);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3));
  }
  return;
}

