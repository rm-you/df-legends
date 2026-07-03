// FUN_140dfa270 @ 140dfa270
// callees:


void FUN_140dfa270(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  uint uVar15;
  ushort *puVar16;
  longlong lVar17;
  int iVar14;
  
  uVar15 = 0xffffffff;
  iVar14 = 0;
  iVar6 = 7;
  iVar11 = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar6 = 0x8a;
    iVar11 = 3;
  }
  if (-1 < param_3) {
    puVar16 = (ushort *)(param_2 + 6);
    lVar17 = (longlong)param_3 + 1;
    uVar8 = (uint)*(ushort *)(param_2 + 2);
    do {
      iVar13 = iVar14 + 1;
      lVar10 = (longlong)(int)uVar8;
      uVar3 = *puVar16;
      uVar9 = (uint)uVar3;
      if ((iVar6 <= iVar13) || (uVar8 != uVar9)) {
        if (iVar13 < iVar11) {
          lVar1 = param_1 + lVar10 * 4;
          do {
            uVar7 = *(ushort *)(param_1 + lVar10 * 4 + 0xaa6);
            iVar6 = *(int *)(param_1 + 0x1714);
            if ((int)(0x10 - (uint)uVar7) < iVar6) {
              uVar4 = *(ushort *)(lVar1 + 0xaa4);
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | uVar4 << ((byte)iVar6 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar7 - 0x10);
              *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | *(short *)(lVar1 + 0xaa4) << ((byte)iVar6 & 0x1f)
              ;
              *(uint *)(param_1 + 0x1714) = iVar6 + (uint)uVar7;
            }
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        else if (uVar8 == 0) {
          iVar6 = *(int *)(param_1 + 0x1714);
          sVar12 = (short)iVar13;
          bVar5 = (byte)iVar6;
          if (iVar13 < 0xb) {
            uVar7 = *(ushort *)(param_1 + 0xaea);
            if ((int)(0x10 - (uint)uVar7) < iVar6) {
              uVar4 = *(ushort *)(param_1 + 0xae8);
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | uVar4 << (bVar5 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar7 - 0x10);
              *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | *(short *)(param_1 + 0xae8) << (bVar5 & 0x1f);
              *(uint *)(param_1 + 0x1714) = iVar6 + (uint)uVar7;
            }
            iVar6 = *(int *)(param_1 + 0x1714);
            if (iVar6 < 0xe) {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | sVar12 + -3 << ((byte)iVar6 & 0x1f);
              iVar6 = iVar6 + 3;
LAB_140dfa799:
              *(int *)(param_1 + 0x1714) = iVar6;
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | sVar12 - 3U << ((byte)iVar6 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
              *(ushort *)(param_1 + 0x1710) = (ushort)(sVar12 - 3U) >> (0x10U - cVar2 & 0x1f);
            }
          }
          else {
            uVar7 = *(ushort *)(param_1 + 0xaee);
            if ((int)(0x10 - (uint)uVar7) < iVar6) {
              uVar4 = *(ushort *)(param_1 + 0xaec);
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | uVar4 << (bVar5 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar7 - 0x10);
              *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | *(short *)(param_1 + 0xaec) << (bVar5 & 0x1f);
              *(uint *)(param_1 + 0x1714) = iVar6 + (uint)uVar7;
            }
            iVar6 = *(int *)(param_1 + 0x1714);
            if (iVar6 < 10) {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | sVar12 + -0xb << ((byte)iVar6 & 0x1f);
              iVar6 = iVar6 + 7;
              goto LAB_140dfa799;
            }
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | sVar12 - 0xbU << ((byte)iVar6 & 0x1f);
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1710);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1711);
            cVar2 = *(char *)(param_1 + 0x1714);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -9;
            *(ushort *)(param_1 + 0x1710) = (ushort)(sVar12 - 0xbU) >> (0x10U - cVar2 & 0x1f);
          }
        }
        else {
          if (uVar8 != uVar15) {
            uVar7 = *(ushort *)(param_1 + 0xaa6 + lVar10 * 4);
            iVar6 = *(int *)(param_1 + 0x1714);
            iVar13 = iVar14;
            if ((int)(0x10 - (uint)uVar7) < iVar6) {
              uVar4 = *(ushort *)(param_1 + 0xaa4 + lVar10 * 4);
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) | uVar4 << ((byte)iVar6 & 0x1f);
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1710);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              cVar2 = *(char *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar7 - 0x10);
              *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
            }
            else {
              *(ushort *)(param_1 + 0x1710) =
                   *(ushort *)(param_1 + 0x1710) |
                   *(short *)(param_1 + 0xaa4 + lVar10 * 4) << ((byte)iVar6 & 0x1f);
              *(uint *)(param_1 + 0x1714) = iVar6 + (uint)uVar7;
            }
          }
          uVar7 = *(ushort *)(param_1 + 0xae6);
          iVar6 = *(int *)(param_1 + 0x1714);
          if ((int)(0x10 - (uint)uVar7) < iVar6) {
            uVar4 = *(ushort *)(param_1 + 0xae4);
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | uVar4 << ((byte)iVar6 & 0x1f);
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1710);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1711);
            cVar2 = *(char *)(param_1 + 0x1714);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + (uVar7 - 0x10);
            *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - cVar2 & 0x1f);
          }
          else {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | *(short *)(param_1 + 0xae4) << ((byte)iVar6 & 0x1f)
            ;
            *(uint *)(param_1 + 0x1714) = iVar6 + (uint)uVar7;
          }
          iVar6 = *(int *)(param_1 + 0x1714);
          if (iVar6 < 0xf) {
            *(ushort *)(param_1 + 0x1710) =
                 *(ushort *)(param_1 + 0x1710) | (short)iVar13 + -3 << ((byte)iVar6 & 0x1f);
            iVar6 = iVar6 + 2;
            goto LAB_140dfa799;
          }
          uVar7 = (short)iVar13 - 3;
          *(ushort *)(param_1 + 0x1710) =
               *(ushort *)(param_1 + 0x1710) | uVar7 << ((byte)iVar6 & 0x1f);
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1710);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          cVar2 = *(char *)(param_1 + 0x1714);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xe;
          *(ushort *)(param_1 + 0x1710) = uVar7 >> (0x10U - cVar2 & 0x1f);
        }
        uVar15 = uVar8;
        iVar13 = 0;
        if (uVar3 == 0) {
          iVar6 = 0x8a;
          iVar11 = 3;
        }
        else if (uVar8 == uVar9) {
          iVar6 = 6;
          iVar11 = 3;
        }
        else {
          iVar6 = 7;
          iVar11 = 4;
          iVar13 = 0;
        }
      }
      iVar14 = iVar13;
      puVar16 = puVar16 + 2;
      lVar17 = lVar17 + -1;
      uVar8 = uVar9;
    } while (lVar17 != 0);
  }
  return;
}

