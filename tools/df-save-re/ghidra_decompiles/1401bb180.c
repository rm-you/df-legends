// FUN_1401bb180 @ 1401bb180
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_1401bb180(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x198) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if (*(void **)(param_1 + 0x168) != (void *)0x0) {
    free(*(void **)(param_1 + 0x168));
  }
  if (*(void **)(param_1 + 0x178) != (void *)0x0) {
    free(*(void **)(param_1 + 0x178));
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined2 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x180) = 0;
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x160) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x148) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x130) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x108);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x118) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x100) - lVar1 >> 1,2);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xe0) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 200) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}

