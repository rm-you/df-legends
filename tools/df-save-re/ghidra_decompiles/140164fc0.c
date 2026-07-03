// FUN_140164fc0 @ 140164fc0
// callees:
//   -> 140164c60 FUN_140164c60
//   -> 140164ae0 FUN_140164ae0
//   -> 140164a20 FUN_140164a20
//   -> 140002020 FUN_140002020
//   -> 1401647e0 FUN_1401647e0
//   -> 140164870 FUN_140164870
//   -> 140164410 FUN_140164410


void FUN_140164fc0(longlong param_1)

{
  longlong lVar1;
  
  FUN_140164c60(param_1 + 0x720);
  FUN_140164ae0(param_1 + 0x650);
  FUN_140164a20(param_1 + 0x5e0);
  lVar1 = *(longlong *)(param_1 + 0x5c8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x5d8) - lVar1,1);
    *(undefined8 *)(param_1 + 0x5c8) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    *(undefined8 *)(param_1 + 0x5d8) = 0;
  }
  FUN_140164ae0(param_1 + 0x508);
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x500) - lVar1,1);
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x500) = 0;
  }
  FUN_1401647e0(param_1 + 0x498);
  FUN_140164a20(param_1 + 0x438);
  FUN_140164a20(param_1 + 0x3d8);
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x3d0) - lVar1,1);
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
  }
  FUN_1401647e0(param_1 + 0x368);
  lVar1 = *(longlong *)(param_1 + 0x350);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x360) - lVar1,1);
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x348) - lVar1,1);
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  FUN_140164870(param_1 + 600);
  FUN_1401647e0(param_1 + 0x1f8);
  FUN_140164410(param_1 + 0x28);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x20) - lVar1,1);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

