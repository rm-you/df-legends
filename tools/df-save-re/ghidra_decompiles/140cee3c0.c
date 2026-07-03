// FUN_140cee3c0 @ 140cee3c0
// callees:
//   -> 1407f0860 FUN_1407f0860
//   -> 140c41a40 FUN_140c41a40
//   -> 140dfb5b4 free


void FUN_140cee3c0(longlong param_1,short param_2)

{
  uint *puVar1;
  longlong *plVar2;
  void *_Memory;
  int iVar3;
  longlong lVar4;
  
  param_1 = (longlong)param_2 * 0x20 + param_1;
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3 != 0) {
    lVar4 = 0;
    do {
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar4) + 0x10);
      *puVar1 = *puVar1 | 0x100000;
      plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 8));
      if (plVar2 != (longlong *)0x0) {
        if ((*(uint *)(plVar2 + 2) & 0x100000) == 0) {
          FUN_1407f0860(plVar2,0);
          (**(code **)(*plVar2 + 800))(plVar2);
        }
        (**(code **)(*plVar2 + 0x770))(plVar2);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while ((ulonglong)(longlong)iVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 0x114);
    *puVar1 = *puVar1 | 0x100000;
    _Memory = *(void **)(param_1 + 0x20);
    if (_Memory != (void *)0x0) {
      FUN_140c41a40(_Memory);
      free(_Memory);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

