// FUN_140df9f20 @ 140df9f20
// callees:
//   -> 140df9b40 FUN_140df9b40
//   -> 140df9c50 FUN_140df9c50
//   -> 140df9e60 FUN_140df9e60


void FUN_140df9f20(longlong param_1,longlong *param_2)

{
  short *psVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  
  lVar3 = *param_2;
  iVar7 = -1;
  iVar9 = 0;
  iVar8 = *(int *)(param_2[2] + 0x14);
  uVar11 = (ulonglong)iVar8;
  lVar6 = *(longlong *)param_2[2];
  *(undefined4 *)(param_1 + 0x149c) = 0;
  *(undefined4 *)(param_1 + 0x14a0) = 0x23d;
  lVar5 = 0;
  if (0 < iVar8) {
    do {
      if (*(short *)(lVar3 + lVar5 * 4) == 0) {
        *(undefined2 *)(lVar3 + 2 + lVar5 * 4) = 0;
      }
      else {
        *(int *)(param_1 + 0x149c) = *(int *)(param_1 + 0x149c) + 1;
        *(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x149c) * 4) = iVar9;
        *(undefined1 *)(lVar5 + 0x14a4 + param_1) = 0;
        iVar7 = iVar9;
      }
      iVar9 = iVar9 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)uVar11);
  }
  iVar8 = *(int *)(param_1 + 0x149c);
  while (iVar8 < 2) {
    if (iVar7 < 2) {
      iVar8 = iVar7 + 1;
      iVar7 = iVar8;
    }
    else {
      iVar8 = 0;
    }
    *(int *)(param_1 + 0x149c) = *(int *)(param_1 + 0x149c) + 1;
    *(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x149c) * 4) = iVar8;
    lVar5 = (longlong)iVar8;
    *(undefined2 *)(lVar3 + lVar5 * 4) = 1;
    *(undefined1 *)(lVar5 + 0x14a4 + param_1) = 0;
    *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + -1;
    if (lVar6 != 0) {
      *(int *)(param_1 + 0x1704) =
           *(int *)(param_1 + 0x1704) - (uint)*(ushort *)(lVar6 + 2 + lVar5 * 4);
    }
    iVar8 = *(int *)(param_1 + 0x149c);
  }
  *(int *)(param_2 + 1) = iVar7;
  for (iVar8 = *(int *)(param_1 + 0x149c) / 2; 0 < iVar8; iVar8 = iVar8 + -1) {
    FUN_140df9b40(param_1,lVar3,iVar8);
  }
  do {
    iVar8 = *(int *)(param_1 + 0xbac);
    *(undefined4 *)(param_1 + 0xbac) =
         *(undefined4 *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x149c) * 4);
    *(int *)(param_1 + 0x149c) = *(int *)(param_1 + 0x149c) + -1;
    FUN_140df9b40(param_1,lVar3,1);
    iVar9 = *(int *)(param_1 + 0xbac);
    lVar6 = (longlong)iVar9;
    psVar1 = (short *)(lVar3 + (longlong)iVar8 * 4);
    *(int *)(param_1 + 0x14a0) = *(int *)(param_1 + 0x14a0) + -1;
    iVar10 = (int)uVar11;
    *(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) = iVar8;
    *(int *)(param_1 + 0x14a0) = *(int *)(param_1 + 0x14a0) + -1;
    *(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) = iVar9;
    *(short *)(lVar3 + (longlong)iVar10 * 4) = *(short *)(lVar3 + lVar6 * 4) + *psVar1;
    bVar4 = *(byte *)((longlong)iVar8 + 0x14a4 + param_1);
    bVar2 = *(byte *)(lVar6 + 0x14a4 + param_1);
    if (bVar4 < bVar2) {
      bVar4 = bVar2;
    }
    *(byte *)((longlong)iVar10 + 0x14a4 + param_1) = bVar4 + 1;
    *(short *)(lVar3 + 2 + lVar6 * 4) = (short)uVar11;
    psVar1[1] = (short)uVar11;
    *(int *)(param_1 + 0xbac) = iVar10;
    uVar11 = (ulonglong)(iVar10 + 1);
    FUN_140df9b40(param_1,lVar3,1);
  } while (1 < *(int *)(param_1 + 0x149c));
  *(int *)(param_1 + 0x14a0) = *(int *)(param_1 + 0x14a0) + -1;
  *(undefined4 *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) =
       *(undefined4 *)(param_1 + 0xbac);
  FUN_140df9c50();
  FUN_140df9e60(lVar3,iVar7,param_1 + 0xb88);
  return;
}

