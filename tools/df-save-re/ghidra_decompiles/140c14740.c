// FUN_140c14740 @ 140c14740
// callees:
//   -> 1403670c0 FUN_1403670c0
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140002020 FUN_140002020


void FUN_140c14740(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  FUN_1403670c0(param_1 + 0x80);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x20),0x18,4,FUN_1400025c0);
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x18) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

