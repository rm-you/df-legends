// FUN_14009a6b0 @ 14009a6b0
// callees:
//   -> 14009a360 FUN_14009a360


void FUN_14009a6b0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x54) = 10000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 100;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  uVar2 = (*(longlong *)(param_1 + 0x28) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x28) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_14009a360(param_1,*puVar1,0);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

