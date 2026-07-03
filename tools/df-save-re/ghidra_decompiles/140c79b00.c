// FUN_140c79b00 @ 140c79b00
// callees:
//   -> 1408054d0 FUN_1408054d0
//   -> 140d43ff0 FUN_140d43ff0


void FUN_140c79b00(longlong param_1,ushort param_2,short param_3)

{
  uint *puVar1;
  longlong lVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  short *psVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 local_res20 [4];
  undefined2 local_28 [2];
  undefined2 local_24 [6];
  
  if (DAT_141c34170 < 1) {
    return;
  }
  if ((*DAT_141c34168 & 1) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x118) >> 0xc & 1) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffeff;
  sVar3 = *(short *)(param_1 + 0xa4);
  if ((sVar3 < 0) || ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar3)
     ) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar3 * 8);
  }
  lVar2 = (longlong)param_3 * 4;
  uVar5 = *(uint *)(lVar2 + *(longlong *)(param_1 + 0x4d0));
  if ((uVar5 & 2) != 0) {
    return;
  }
  lVar6 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)param_3 * 8);
  plVar11 = *(longlong **)(lVar6 + 0x58);
  plVar7 = *(longlong **)(lVar6 + 0x60);
  if (plVar7 <= plVar11) {
    return;
  }
  while (((*(byte *)(*(longlong *)(param_1 + 0x518) + (longlong)*(int *)(*plVar11 + 0x68) * 4) & 1)
          != 0 || (lVar6 = *(longlong *)
                            (*(longlong *)(lVar12 + 0x24c8) +
                            (longlong)*(int *)(*plVar11 + 0x20) * 8), *(short *)(lVar6 + 0xd0) == -1
                  ))) {
    plVar11 = plVar11 + 1;
    if (plVar7 <= plVar11) {
      return;
    }
  }
  uVar4 = *(ushort *)(lVar6 + 0x122);
  if (uVar4 == 0xea61) {
    return;
  }
  if (param_2 < uVar4) {
    return;
  }
  if ((uVar5 & 1) != 0) {
    return;
  }
  local_res20[0] = 0x8ad0;
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
    local_res20[0] = *(undefined2 *)(param_1 + 0xa8);
    local_24[0] = *(undefined2 *)(param_1 + 0xaa);
    local_28[0] = *(undefined2 *)(param_1 + 0xac);
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x1c8);
    for (puVar13 = *(undefined8 **)(param_1 + 0x1c0); puVar13 < puVar8; puVar13 = puVar13 + 1) {
      iVar10 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
      if ((iVar10 == 0xb) && (lVar12 = (**(code **)(*(longlong *)*puVar13 + 0x18))(), lVar12 != 0))
      {
        FUN_1408054d0(lVar12,local_res20,local_24,local_28);
        break;
      }
    }
  }
  iVar10 = FUN_140d43ff0(&DAT_141c53470,local_res20[0],local_24[0],local_28[0]);
  if (iVar10 == 3) {
    for (puVar13 = *(undefined8 **)(param_1 + 0x6b0); puVar13 < *(undefined8 **)(param_1 + 0x6b8);
        puVar13 = puVar13 + 1) {
      psVar9 = (short *)*puVar13;
      if (((*psVar9 == 6) && (psVar9[0xc] == param_3)) && ((*(byte *)(psVar9 + 0xd) & 1) != 0)) {
        return;
      }
    }
    puVar1 = (uint *)(lVar2 + *(longlong *)(param_1 + 0x4d0));
    *puVar1 = *puVar1 | 1;
  }
  return;
}

