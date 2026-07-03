// FUN_140a5c030 @ 140a5c030
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140a5c030(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  uVar7 = 0;
  uVar5 = (*(longlong *)(param_1 + 0x28) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x28) < puVar3) {
    uVar5 = uVar7;
  }
  uVar6 = uVar7;
  if (uVar5 != 0) {
    do {
      free((void *)*puVar3);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar5);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  puVar3 = *(undefined8 **)(param_1 + 200);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xd0) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0xd0) < puVar3) {
    uVar5 = uVar7;
  }
  uVar6 = uVar7;
  if (uVar5 != 0) {
    do {
      free((void *)*puVar3);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar5);
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
  puVar3 = *(undefined8 **)(param_1 + 0xe0);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xe8) + (7 - (longlong)puVar3)) >> 3;
  if (*(undefined8 **)(param_1 + 0xe8) < puVar3) {
    uVar5 = uVar7;
  }
  uVar6 = uVar7;
  if (uVar5 != 0) {
    do {
      free((void *)*puVar3);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar5);
  }
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
  plVar4 = *(longlong **)(param_1 + 0xf8);
  uVar5 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x100) + (7 - (longlong)plVar4)) >> 3;
  if (*(longlong **)(param_1 + 0x100) < plVar4) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      plVar4 = plVar4 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  lVar2 = *(longlong *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x208) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1e0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1f0) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1d8) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1c0) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x198);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1a8) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 400) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x178) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x160) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x138);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x148) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x130) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xf8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x108) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xf0) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 200);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xd8) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xc0) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xa8) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x90) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x78) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x60) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x48) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x30) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x18) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

