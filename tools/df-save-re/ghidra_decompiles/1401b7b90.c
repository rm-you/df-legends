// FUN_1401b7b90 @ 1401b7b90
// callees:
//   -> 140dfb5b4 free


void FUN_1401b7b90(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x240);
  uVar2 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x248) + (7 - (longlong)puVar1)) >> 3;
  if (*(undefined8 **)(param_1 + 0x248) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      free((void *)*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x240);
  return;
}

