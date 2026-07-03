// FUN_140491db0 @ 140491db0
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140491db0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)(param_1 + 0x158);
  lVar4 = 7;
  do {
    iVar1 = (int)(plVar5[1] - *plVar5 >> 3) + -1;
    lVar2 = (longlong)iVar1;
    if (-1 < iVar1) {
      do {
        free(*(void **)(*plVar5 + lVar2 * 8));
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
    plVar5[1] = *plVar5;
    plVar5 = plVar5 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = (undefined8 *)(param_1 + 0x200);
  if (0xf < *(ulonglong *)(param_1 + 0x218)) {
    FUN_140002020(*puVar3,*(ulonglong *)(param_1 + 0x218) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x218) = 0xf;
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x218)) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x158),0x18,7,FUN_1400030c0);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0xb0),0x18,7,FUN_140002620);
  _eh_vector_destructor_iterator_((void *)(param_1 + 8),0x18,7,FUN_140002620);
  return;
}

