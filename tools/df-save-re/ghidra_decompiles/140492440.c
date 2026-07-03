// FUN_140492440 @ 140492440
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140492440(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  uVar4 = 0;
  uVar3 = (*(longlong *)(param_1 + 0x40) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x40) < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      free((void *)*puVar2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x48) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

