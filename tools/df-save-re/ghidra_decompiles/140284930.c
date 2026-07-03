// FUN_140284930 @ 140284930
// callees:
//   -> 140284a90 FUN_140284a90
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140284930(longlong param_1)

{
  void *_Memory;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0x58) + lVar3 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140284a90(_Memory);
        free(_Memory);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      FUN_140002020(lVar3,plVar1[2] - lVar3 >> 1,2);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
    }
    free(plVar1);
  }
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      FUN_140002020(lVar3,plVar1[2] - lVar3 >> 1,2);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
    }
    free(plVar1);
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      FUN_140002020(lVar3,plVar1[2] - lVar3 >> 1,2);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
    }
    free(plVar1);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  return;
}

