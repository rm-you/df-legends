// FUN_140dfabf0 @ 140dfabf0
// callees:
//   -> 140dfb270 FUN_140dfb270
//   -> 140df9f20 FUN_140df9f20
//   -> 140dfa800 FUN_140dfa800
//   -> 140dfab50 FUN_140dfab50
//   -> 140dfa8d0 FUN_140dfa8d0
//   -> 140dfae20 FUN_140dfae20
//   -> 140df9ac0 FUN_140df9ac0
//   -> 140dfb2f0 bi_windup


void FUN_140dfabf0(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  longlong *plVar9;
  longlong lVar10;
  
  iVar5 = 0;
  if (*(int *)((longlong)param_1 + 0xac) < 1) {
    uVar7 = param_3 + 5;
  }
  else {
    lVar10 = *param_1;
    if (*(int *)(lVar10 + 0x48) == 2) {
      uVar4 = FUN_140dfb270();
      *(undefined4 *)(lVar10 + 0x48) = uVar4;
    }
    FUN_140df9f20(param_1,param_1 + 0x168);
    FUN_140df9f20(param_1,param_1 + 0x16b);
    iVar5 = FUN_140dfa800(param_1);
    uVar6 = (int)param_1[0x2e0] + 10U >> 3;
    uVar7 = *(int *)((longlong)param_1 + 0x1704) + 10U >> 3;
    if (uVar6 < uVar7) goto LAB_140dfac7c;
  }
  uVar6 = uVar7;
  uVar7 = uVar6;
LAB_140dfac7c:
  if ((uVar6 < param_3 + 4U) || (param_2 == 0)) {
    sVar3 = (short)param_4;
    if (((int)param_1[0x16] == 4) || (uVar7 == uVar6)) {
      iVar5 = *(int *)((longlong)param_1 + 0x1714);
      if (iVar5 < 0xe) {
        *(ushort *)(param_1 + 0x2e2) =
             *(ushort *)(param_1 + 0x2e2) | sVar3 + 2 << ((byte)iVar5 & 0x1f);
        *(int *)((longlong)param_1 + 0x1714) = iVar5 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x2e2) =
             *(ushort *)(param_1 + 0x2e2) | sVar3 + 2U << ((byte)iVar5 & 0x1f);
        *(char *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = (char)param_1[0x2e2];
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) =
             *(undefined1 *)((longlong)param_1 + 0x1711);
        cVar1 = *(char *)((longlong)param_1 + 0x1714);
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(int *)((longlong)param_1 + 0x1714) = *(int *)((longlong)param_1 + 0x1714) + -0xd;
        *(ushort *)(param_1 + 0x2e2) = (ushort)(sVar3 + 2U) >> (0x10U - cVar1 & 0x1f);
      }
      plVar9 = (longlong *)&DAT_140e7ed30;
      puVar8 = &DAT_140e7e660;
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0x1714);
      if (iVar2 < 0xe) {
        *(ushort *)(param_1 + 0x2e2) =
             *(ushort *)(param_1 + 0x2e2) | sVar3 + 4 << ((byte)iVar2 & 0x1f);
        *(int *)((longlong)param_1 + 0x1714) = iVar2 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x2e2) =
             *(ushort *)(param_1 + 0x2e2) | sVar3 + 4U << ((byte)iVar2 & 0x1f);
        *(char *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = (char)param_1[0x2e2];
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) =
             *(undefined1 *)((longlong)param_1 + 0x1711);
        cVar1 = *(char *)((longlong)param_1 + 0x1714);
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(int *)((longlong)param_1 + 0x1714) = *(int *)((longlong)param_1 + 0x1714) + -0xd;
        *(ushort *)(param_1 + 0x2e2) = (ushort)(sVar3 + 4U) >> (0x10U - cVar1 & 0x1f);
      }
      FUN_140dfa8d0(param_1,(int)param_1[0x169] + 1,(int)param_1[0x16c] + 1,iVar5 + 1);
      plVar9 = param_1 + 0x136;
      puVar8 = (undefined *)((longlong)param_1 + 0xbc);
    }
    FUN_140dfae20(param_1,puVar8,plVar9);
  }
  else {
    FUN_140dfab50(param_1,param_2,param_3,param_4);
  }
  FUN_140df9ac0(param_1);
  if (param_4 != 0) {
    bi_windup();
  }
  return;
}

