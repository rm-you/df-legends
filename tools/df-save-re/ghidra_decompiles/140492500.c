// FUN_140492500 @ 140492500
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140492500(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  uVar4 = 0;
  uVar3 = (*(longlong *)(param_1 + 0x20) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x20) < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      free((void *)*puVar2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x28) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

