// FUN_14007dbc0 @ 14007dbc0
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_14007dbc0(longlong param_1,short param_2)

{
  void *_Src;
  void *_Dst;
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x988);
  if (puVar1 < *(undefined8 **)(param_1 + 0x990)) {
    while (*(short *)*puVar1 != param_2) {
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
      if (*(undefined8 **)(param_1 + 0x990) <= puVar1) {
        return;
      }
    }
    free((short *)*puVar1);
    _Dst = (void *)(*(longlong *)(param_1 + 0x988) + (longlong)iVar2 * 8);
    _Src = (void *)((longlong)_Dst + 8);
    memmove(_Dst,_Src,*(longlong *)(param_1 + 0x990) - (longlong)_Src);
    *(longlong *)(param_1 + 0x990) = *(longlong *)(param_1 + 0x990) + -8;
  }
  return;
}

