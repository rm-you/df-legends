// FUN_140dfab50 @ 140dfab50
// callees:
//   -> 140dfb350 FUN_140dfb350


void FUN_140dfab50(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1714);
  if (0xd < iVar2) {
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | param_4 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
    *(ushort *)(param_1 + 0x1710) = param_4 >> (0x10U - cVar1 & 0x1f);
    FUN_140dfb350(param_1,param_2);
    return;
  }
  *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | param_4 << ((byte)iVar2 & 0x1f);
  *(int *)(param_1 + 0x1714) = iVar2 + 3;
  FUN_140dfb350(param_1,param_2);
  return;
}

