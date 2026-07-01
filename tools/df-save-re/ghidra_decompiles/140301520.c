// FUN_140301520 @ 140301520
// callees:
//   -> 140b84640 FUN_140b84640


void FUN_140301520(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uVar3 = 0;
  uVar2 = (*(longlong *)(param_1 + 0x20) - (longlong)puVar1) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x20) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_140b84640(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

