// FUN_140df5670 @ 140df5670
// callees:
//   -> 140df9a40 FUN_140df9a40
//   -> 140dfc99c memset


undefined8 FUN_140df5670(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) &&
      (*(longlong *)(param_1 + 0x30) != 0)) && (*(longlong *)(param_1 + 0x38) != 0)) {
    *(undefined4 *)(param_1 + 0x48) = 2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined4 *)(lVar1 + 0x28) = 0;
    if (*(int *)(lVar1 + 0x2c) < 0) {
      *(int *)(lVar1 + 0x2c) = -*(int *)(lVar1 + 0x2c);
    }
    uVar2 = 0x71;
    if (*(int *)(lVar1 + 0x2c) != 0) {
      uVar2 = 0x2a;
    }
    *(undefined4 *)(lVar1 + 8) = uVar2;
    *(uint *)(param_1 + 0x4c) = (uint)(*(int *)(lVar1 + 0x2c) != 2);
    *(undefined4 *)(lVar1 + 0x40) = 0;
    FUN_140df9a40(lVar1);
    *(int *)(lVar1 + 0x58) = *(int *)(lVar1 + 0x44) * 2;
    *(undefined2 *)(*(longlong *)(lVar1 + 0x68) + (ulonglong)(*(int *)(lVar1 + 0x74) - 1) * 2) = 0;
    memset(*(void **)(lVar1 + 0x68),0,(ulonglong)(*(int *)(lVar1 + 0x74) - 1) * 2);
    lVar3 = (longlong)*(int *)(lVar1 + 0xac);
    *(uint *)(lVar1 + 0xa8) = (uint)*(ushort *)(&DAT_140e7d072 + lVar3 * 0x10);
    *(uint *)(lVar1 + 0xb4) = (uint)*(ushort *)(&DAT_140e7d070 + lVar3 * 0x10);
    *(uint *)(lVar1 + 0xb8) = (uint)*(ushort *)(&DAT_140e7d074 + lVar3 * 0x10);
    *(uint *)(lVar1 + 0xa4) = (uint)*(ushort *)(&DAT_140e7d076 + lVar3 * 0x10);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined4 *)(lVar1 + 0x84) = 0;
    *(undefined4 *)(lVar1 + 0x9c) = 0;
    *(undefined4 *)(lVar1 + 0x70) = 0;
    *(undefined4 *)(lVar1 + 0xa0) = 2;
    *(undefined4 *)(lVar1 + 0x88) = 2;
    return 0;
  }
  return 0xfffffffe;
}

