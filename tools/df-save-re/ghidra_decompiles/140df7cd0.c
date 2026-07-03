// FUN_140df7cd0 @ 140df7cd0
// callees:
//   -> 140dfdcc6 memcpy


undefined8 FUN_140df7cd0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    lVar3 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),
                       1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f),1);
    *(longlong *)(lVar1 + 0x38) = lVar3;
    if (lVar3 == 0) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0x2c) == 0) {
    *(int *)(lVar1 + 0x2c) = 1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f);
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  uVar4 = param_2 - *(int *)(param_1 + 0x18);
  uVar5 = *(uint *)(lVar1 + 0x2c);
  if (uVar4 < uVar5) {
    uVar5 = uVar5 - *(int *)(lVar1 + 0x34);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    memcpy((void *)((ulonglong)*(uint *)(lVar1 + 0x34) + *(longlong *)(lVar1 + 0x38)),
           (void *)(*(longlong *)(param_1 + 0x10) - (ulonglong)uVar4),(ulonglong)uVar5);
    uVar4 = uVar4 - uVar5;
    if (uVar4 == 0) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + uVar5;
      iVar2 = *(int *)(lVar1 + 0x34);
      if (*(int *)(lVar1 + 0x34) == *(int *)(lVar1 + 0x2c)) {
        iVar2 = 0;
      }
      *(int *)(lVar1 + 0x34) = iVar2;
      if (*(uint *)(lVar1 + 0x2c) <= *(uint *)(lVar1 + 0x30)) {
        return 0;
      }
      iVar2 = *(uint *)(lVar1 + 0x30) + uVar5;
    }
    else {
      memcpy(*(void **)(lVar1 + 0x38),(void *)(*(longlong *)(param_1 + 0x10) - (ulonglong)uVar4),
             (ulonglong)uVar4);
      iVar2 = *(int *)(lVar1 + 0x2c);
      *(uint *)(lVar1 + 0x34) = uVar4;
    }
  }
  else {
    memcpy(*(void **)(lVar1 + 0x38),(void *)(*(longlong *)(param_1 + 0x10) - (ulonglong)uVar5),
           (ulonglong)uVar5);
    iVar2 = *(int *)(lVar1 + 0x2c);
    *(undefined4 *)(lVar1 + 0x34) = 0;
  }
  *(int *)(lVar1 + 0x30) = iVar2;
  return 0;
}

