// FUN_140d2adc0 @ 140d2adc0
// callees:
//   -> 1400ba370 FUN_1400ba370
//   -> 1405c8d80 FUN_1405c8d80


void FUN_140d2adc0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x13c08);
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(param_1 + 0x13c10) - *plVar1 >> 3 != 0) {
    do {
      FUN_1400ba370(*(undefined8 *)(*plVar1 + uVar2));
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x13c10) - *plVar1 >> 3));
  }
  FUN_1405c8d80(plVar1);
  return;
}

