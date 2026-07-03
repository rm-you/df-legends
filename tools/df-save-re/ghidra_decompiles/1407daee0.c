// FUN_1407daee0 @ 1407daee0
// callees:
//   -> 1400be580 FUN_1400be580
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407daee0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  puVar1 = (undefined1 *)FUN_1400be580(local_60,"*** Error(s) finalizing the interaction ",param_1);
  uVar5 = 0;
  if (puVar1 != &DAT_141c3d418) {
    if (0xf < DAT_141c3d430) {
      FUN_140002020(CONCAT71(uRam0000000141c3d419,DAT_141c3d418),DAT_141c3d430 + 1,1);
    }
    DAT_141c3d430 = 0xf;
    DAT_141c3d428 = 0;
    DAT_141c3d418 = 0;
    FUN_14007b2f0(&DAT_141c3d418,puVar1);
  }
  if (0xf < local_48) {
    FUN_140002020(local_60[0],local_48 + 1,1);
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  uVar3 = (*(longlong *)(param_1 + 0x58) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x58) < puVar2) {
    uVar3 = uVar5;
  }
  uVar4 = uVar5;
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x28))((longlong *)*puVar2,param_2,param_3);
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  uVar3 = (*(longlong *)(param_1 + 0x70) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x70) < puVar2) {
    uVar3 = uVar5;
  }
  uVar4 = uVar5;
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x28))((longlong *)*puVar2,param_2);
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x80);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x88) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x88) < puVar2) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x38))((longlong *)*puVar2,param_2);
      puVar2 = puVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  DAT_141c3d428 = 0;
  puVar1 = &DAT_141c3d418;
  if (0xf < DAT_141c3d430) {
    puVar1 = (undefined1 *)CONCAT71(uRam0000000141c3d419,DAT_141c3d418);
  }
  *puVar1 = 0;
  return;
}

