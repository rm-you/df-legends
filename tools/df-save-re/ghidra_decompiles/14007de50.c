// FUN_14007de50 @ 14007de50
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_14007de50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *_Memory;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uVar5 = 0;
  uVar4 = (*(longlong *)(param_1 + 0x18) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x18) < puVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 9) {
LAB_14007df0c:
    _Memory = *(longlong **)(param_1 + 0x28);
  }
  else {
    if (iVar1 != 0xe) {
      if (iVar1 != 0xf) goto LAB_14007df15;
      goto LAB_14007df0c;
    }
    _Memory = *(longlong **)(param_1 + 0x28);
    if (_Memory == (longlong *)0x0) goto LAB_14007df15;
    lVar2 = *_Memory;
    if (lVar2 != 0) {
      FUN_140002020(lVar2,_Memory[2] - lVar2 >> 2,4);
      *_Memory = 0;
      _Memory[1] = 0;
      _Memory[2] = 0;
    }
  }
  free(_Memory);
LAB_14007df15:
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x20) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

