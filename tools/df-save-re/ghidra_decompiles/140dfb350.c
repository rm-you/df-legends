// FUN_140dfb350 @ 140dfb350
// callees:


void FUN_140dfb350(longlong param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  
  if (*(int *)(param_1 + 0x1714) < 9) {
    if (*(int *)(param_1 + 0x1714) < 1) goto LAB_140dfb39f;
    uVar1 = *(undefined1 *)(param_1 + 0x1710);
  }
  else {
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    uVar1 = *(undefined1 *)(param_1 + 0x1711);
  }
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = uVar1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_140dfb39f:
  *(undefined2 *)(param_1 + 0x1710) = 0;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  *(undefined4 *)(param_1 + 0x170c) = 8;
  *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (byte)param_3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  bVar3 = (byte)((uint)param_3 >> 8);
  *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = bVar3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = ~(byte)param_3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = ~bVar3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  uVar2 = *(uint *)(param_1 + 0x28);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *(undefined1 *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x10)) = uVar1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    uVar2 = *(uint *)(param_1 + 0x28);
  }
  return;
}

