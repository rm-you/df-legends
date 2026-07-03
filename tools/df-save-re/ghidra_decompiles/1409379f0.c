// FUN_1409379f0 @ 1409379f0
// callees:
//   -> 14048e4e0 FUN_14048e4e0
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 14048e310 FUN_14048e310
//   -> 140364610 FUN_140364610


void FUN_1409379f0(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  uVar5 = 0;
  uVar4 = uVar5;
  uVar6 = uVar5;
  if (*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar6 + *(longlong *)(param_1 + 0xc0));
      if (pvVar1 != (void *)0x0) {
        FUN_14048e4e0(pvVar1);
        free(pvVar1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3));
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3 != 0) {
    do {
      pvVar1 = *(void **)(uVar4 + *(longlong *)(param_1 + 0x60));
      if (pvVar1 != (void *)0x0) {
        puVar7 = (undefined8 *)((longlong)pvVar1 + 8);
        if (0xf < *(ulonglong *)((longlong)pvVar1 + 0x20)) {
          FUN_140002020(*puVar7,*(ulonglong *)((longlong)pvVar1 + 0x20) + 1,1);
        }
        *(undefined8 *)((longlong)pvVar1 + 0x20) = 0xf;
        *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
        if (0xf < *(ulonglong *)((longlong)pvVar1 + 0x20)) {
          puVar7 = (undefined8 *)*puVar7;
        }
        *(undefined1 *)puVar7 = 0;
        free(pvVar1);
      }
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3));
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x18,0x6b,FUN_14007c030);
    free(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  pvVar1 = *(void **)(param_1 + 0x48);
  if (pvVar1 != (void *)0x0) {
    FUN_14048e310(pvVar1);
    free(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (((*(byte *)(param_1 + 0xb8) & 1) != 0) &&
     (pvVar1 = *(void **)(param_1 + 0x50), pvVar1 != (void *)0x0)) {
    FUN_140364610(pvVar1);
    free(pvVar1);
    *(undefined8 *)(param_1 + 0x50) = 0;
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
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x160) - lVar2 >> 2,4);
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
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x130) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x108);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x118) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x100) - lVar2 >> 1,2);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xe8) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xd0) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  puVar7 = (undefined8 *)(param_1 + 0x98);
  if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
    FUN_140002020(*puVar7,*(ulonglong *)(param_1 + 0xb0) + 1,1);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0xf;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
    puVar7 = (undefined8 *)*puVar7;
  }
  *(undefined1 *)puVar7 = 0;
  puVar7 = (undefined8 *)(param_1 + 0x78);
  if (0xf < *(ulonglong *)(param_1 + 0x90)) {
    FUN_140002020(*puVar7,*(ulonglong *)(param_1 + 0x90) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x90) = 0xf;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x90)) {
    puVar7 = (undefined8 *)*puVar7;
  }
  *(undefined1 *)puVar7 = 0;
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x70) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x38) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x20) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

