// FUN_140dfa8d0 @ 140dfa8d0
// callees:
//   -> 140dfa270 FUN_140dfa270


void FUN_140dfa8d0(longlong param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_4;
  iVar2 = *(int *)(param_1 + 0x1714);
  if (iVar2 < 0xc) {
    *(ushort *)(param_1 + 0x1710) =
         *(ushort *)(param_1 + 0x1710) | (short)param_2 + -0x101 << ((byte)iVar2 & 0x1f);
    *(int *)(param_1 + 0x1714) = iVar2 + 5;
  }
  else {
    uVar3 = (short)param_2 - 0x101;
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | uVar3 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xb;
    *(ushort *)(param_1 + 0x1710) = uVar3 >> (0x10U - cVar1 & 0x1f);
  }
  iVar2 = *(int *)(param_1 + 0x1714);
  if (iVar2 < 0xc) {
    *(ushort *)(param_1 + 0x1710) =
         *(ushort *)(param_1 + 0x1710) | (short)param_3 + -1 << ((byte)iVar2 & 0x1f);
    *(int *)(param_1 + 0x1714) = iVar2 + 5;
  }
  else {
    uVar3 = (short)param_3 - 1;
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | uVar3 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xb;
    *(ushort *)(param_1 + 0x1710) = uVar3 >> (0x10U - cVar1 & 0x1f);
  }
  iVar2 = *(int *)(param_1 + 0x1714);
  if (iVar2 < 0xd) {
    *(ushort *)(param_1 + 0x1710) =
         *(ushort *)(param_1 + 0x1710) | (short)param_4 + -4 << ((byte)iVar2 & 0x1f);
    *(int *)(param_1 + 0x1714) = iVar2 + 4;
  }
  else {
    uVar3 = (short)param_4 - 4;
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | uVar3 << ((byte)iVar2 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar1 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xc;
    *(ushort *)(param_1 + 0x1710) = uVar3 >> (0x10U - cVar1 & 0x1f);
  }
  if (0 < (int)param_4) {
    pbVar4 = &DAT_140e7e640;
    do {
      iVar2 = *(int *)(param_1 + 0x1714);
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x1710) =
             *(ushort *)(param_1 + 0x1710) |
             *(short *)(param_1 + 0xaa6 + (ulonglong)*pbVar4 * 4) << ((byte)iVar2 & 0x1f);
        *(int *)(param_1 + 0x1714) = iVar2 + 3;
      }
      else {
        uVar3 = *(ushort *)(param_1 + 0xaa6 + (ulonglong)*pbVar4 * 4);
        *(ushort *)(param_1 + 0x1710) =
             *(ushort *)(param_1 + 0x1710) | uVar3 << ((byte)iVar2 & 0x1f);
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
             *(undefined1 *)(param_1 + 0x1710);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
             *(undefined1 *)(param_1 + 0x1711);
        cVar1 = *(char *)(param_1 + 0x1714);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
        *(ushort *)(param_1 + 0x1710) = uVar3 >> (0x10U - cVar1 & 0x1f);
      }
      pbVar4 = pbVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140dfa270(param_1,param_1 + 0xbc,param_2 + -1);
  FUN_140dfa270(param_1,param_1 + 0x9b0,param_3 + -1);
  return;
}

