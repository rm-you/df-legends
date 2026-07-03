// FUN_140dfae20 @ 140dfae20
// callees:


void FUN_140dfae20(longlong param_1,longlong param_2,longlong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint uVar12;
  ushort uVar13;
  
  uVar10 = 0;
  if (*(int *)(param_1 + 0x16f4) != 0) {
    do {
      uVar11 = *(ushort *)(*(longlong *)(param_1 + 0x16f8) + uVar10 * 2);
      bVar3 = *(byte *)(uVar10 + *(longlong *)(param_1 + 0x16e8));
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      if (uVar11 == 0) {
        uVar11 = *(ushort *)(param_2 + 2 + (longlong)(int)(uint)bVar3 * 4);
        puVar1 = (ushort *)(param_2 + (longlong)(int)(uint)bVar3 * 4);
        iVar8 = *(int *)(param_1 + 0x1714);
        if ((int)(0x10 - (uint)uVar11) < iVar8) {
          uVar13 = *puVar1;
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar8 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar4 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar11 - 0x10);
          *(ushort *)(param_1 + 0x1710) = uVar13 >> (0x10U - cVar4 & 0x1f);
        }
        else {
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | *puVar1 << ((byte)iVar8 & 0x1f);
          iVar8 = iVar8 + (uint)uVar11;
LAB_140dfb195:
          *(int *)(param_1 + 0x1714) = iVar8;
        }
      }
      else {
        bVar5 = (&DAT_140e7e540)[bVar3];
        uVar13 = *(ushort *)(param_2 + 2 + (ulonglong)(bVar5 + 0x101) * 4);
        puVar1 = (ushort *)(param_2 + (ulonglong)(bVar5 + 0x101) * 4);
        iVar7 = *(int *)(param_1 + 0x1714);
        if ((int)(0x10 - (uint)uVar13) < iVar7) {
          uVar6 = *puVar1;
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar6 << ((byte)iVar7 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar4 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar13 - 0x10);
          *(ushort *)(param_1 + 0x1710) = uVar6 >> (0x10U - cVar4 & 0x1f);
        }
        else {
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | *puVar1 << ((byte)iVar7 & 0x1f);
          *(uint *)(param_1 + 0x1714) = iVar7 + (uint)uVar13;
        }
        iVar7 = *(int *)(&DAT_140e7ec60 + (ulonglong)bVar5 * 4);
        if (iVar7 != 0) {
          uVar13 = (ushort)bVar3 - (short)*(undefined4 *)(&DAT_140e7eb60 + (ulonglong)bVar5 * 4);
          iVar8 = *(int *)(param_1 + 0x1714);
          if (0x10 - iVar7 < iVar8) {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar8 & 0x1f);
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1710);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1711);
            cVar4 = *(char *)(param_1 + 0x1714);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + iVar7 + -0x10;
            *(ushort *)(param_1 + 0x1710) = uVar13 >> (0x10U - cVar4 & 0x1f);
          }
          else {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar8 & 0x1f);
            *(int *)(param_1 + 0x1714) = iVar8 + iVar7;
          }
        }
        uVar12 = uVar11 - 1;
        if (uVar12 < 0x100) {
          bVar3 = (&DAT_140e7e340)[uVar12];
        }
        else {
          bVar3 = (&DAT_140e7e340)[(uVar12 >> 7) + 0x100];
        }
        iVar7 = *(int *)(param_1 + 0x1714);
        lVar2 = (ulonglong)bVar3 * 4;
        uVar11 = *(ushort *)(lVar2 + 2 + param_3);
        if ((int)(0x10 - (uint)uVar11) < iVar7) {
          uVar13 = *(ushort *)(lVar2 + param_3);
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar7 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar4 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar11 - 0x10);
          *(ushort *)(param_1 + 0x1710) = uVar13 >> (0x10U - cVar4 & 0x1f);
        }
        else {
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | *(short *)(lVar2 + param_3) << ((byte)iVar7 & 0x1f);
          *(uint *)(param_1 + 0x1714) = iVar7 + (uint)uVar11;
        }
        iVar7 = *(int *)(&DAT_140e7eae0 + lVar2);
        if (iVar7 != 0) {
          uVar11 = (short)uVar12 - (short)*(undefined4 *)(&DAT_140e7ebe0 + lVar2);
          iVar8 = *(int *)(param_1 + 0x1714);
          if (iVar8 <= 0x10 - iVar7) {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | uVar11 << ((byte)iVar8 & 0x1f);
            iVar8 = iVar8 + iVar7;
            goto LAB_140dfb195;
          }
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar11 << ((byte)iVar8 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar4 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + iVar7 + -0x10;
          *(ushort *)(param_1 + 0x1710) = uVar11 >> (0x10U - cVar4 & 0x1f);
        }
      }
    } while (uVar9 < *(uint *)(param_1 + 0x16f4));
  }
  uVar11 = *(ushort *)(param_2 + 0x402);
  iVar7 = *(int *)(param_1 + 0x1714);
  if ((int)(0x10 - (uint)uVar11) < iVar7) {
    uVar13 = *(ushort *)(param_2 + 0x400);
    *(ushort *)(param_1 + 0x1710) = *(ushort *)(param_1 + 0x1710) | uVar13 << ((byte)iVar7 & 0x1f);
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1710);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    cVar4 = *(char *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar11 - 0x10);
    *(ushort *)(param_1 + 0x1710) = uVar13 >> (0x10U - cVar4 & 0x1f);
  }
  else {
    *(ushort *)(param_1 + 0x1710) =
         *(ushort *)(param_1 + 0x1710) | *(short *)(param_2 + 0x400) << ((byte)iVar7 & 0x1f);
    *(uint *)(param_1 + 0x1714) = iVar7 + (uint)uVar11;
  }
  *(uint *)(param_1 + 0x170c) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}

