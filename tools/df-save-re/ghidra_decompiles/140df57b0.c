// FUN_140df57b0 @ 140df57b0
// callees:
//   -> 140dfdcc6 memcpy


void FUN_140df57b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x28);
  if (*(uint *)(param_1 + 0x18) < uVar4) {
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  if (uVar4 != 0) {
    memcpy(*(void **)(param_1 + 0x10),*(void **)(*(longlong *)(param_1 + 0x28) + 0x20),
           (ulonglong)uVar4);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar4;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
    *plVar1 = *plVar1 + (ulonglong)uVar4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar4;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar4;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + 0x28);
    *piVar2 = *piVar2 - uVar4;
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar3 + 0x28) == 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  return;
}

