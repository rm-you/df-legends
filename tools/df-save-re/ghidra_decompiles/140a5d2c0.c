// FUN_140a5d2c0 @ 140a5d2c0
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140a5d2c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  uVar4 = (*(longlong *)(param_1 + 0x28) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x28) < puVar3) {
    uVar4 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  uVar4 = (*(longlong *)(param_1 + 0x68) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x68) < puVar3) {
    uVar4 = uVar6;
  }
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      puVar3 = puVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xb0) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x90) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x70) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x30) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

