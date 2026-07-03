// FUN_1407ef5e0 @ 1407ef5e0
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140010860 FUN_140010860


void FUN_1407ef5e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    free(*(void **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(void **)(param_1 + 0x98) != (void *)0x0) {
    free(*(void **)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x110) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xf8) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_140010860(param_1 + 0xa8);
  puVar2 = (undefined8 *)(param_1 + 0x58);
  if (0xf < *(ulonglong *)(param_1 + 0x70)) {
    FUN_140002020(*puVar2,*(ulonglong *)(param_1 + 0x70) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0xf;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x70)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x38);
  if (0xf < *(ulonglong *)(param_1 + 0x50)) {
    FUN_140002020(*puVar2,*(ulonglong *)(param_1 + 0x50) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0xf;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x50)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    FUN_140002020(*(undefined8 *)(param_1 + 0x18),*(ulonglong *)(param_1 + 0x30) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    **(undefined1 **)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

