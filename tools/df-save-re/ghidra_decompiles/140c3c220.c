// FUN_140c3c220 @ 140c3c220
// callees:
//   -> 1400512a0 FUN_1400512a0
//   -> 140c7de50 FUN_140c7de50
//   -> 140c5dbd0 FUN_140c5dbd0


int FUN_140c3c220(longlong param_1,short param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if ((*(longlong *)(param_1 + 0xa78) == 0) || (param_2 == -1)) {
    return 0;
  }
  iVar6 = 0;
  lVar3 = FUN_1400512a0(param_2,*(longlong *)(param_1 + 0xa78) + 0x218);
  if ((lVar3 != 0) && (iVar6 = *(int *)(lVar3 + 4) - *(int *)(lVar3 + 0x10), iVar6 < 0)) {
    iVar6 = 0;
  }
  if ((0 < *(int *)(param_1 + 0x800)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  if ((0 < *(short *)(param_1 + 0x7e0)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  if ((0 < *(short *)(param_1 + 0x7e2)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  if ((0 < *(int *)(param_1 + 0x804)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  if ((0 < *(int *)(param_1 + 0x960)) && (*(short *)(param_1 + 0x7f8) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  iVar2 = FUN_140c7de50(param_1);
  if (iVar2 == 0) {
    iVar6 = iVar6 >> 2;
  }
  if (((99 < *(int *)(param_1 + 0x7fc)) && (*(short *)(param_1 + 0x7f8) != 0)) &&
     (*(short *)(param_1 + 0x348) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  iVar2 = *(int *)(param_1 + 0x964);
  if ((1999 < iVar2) && (*(short *)(param_1 + 0x7f8) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  if ((3999 < iVar2) && (*(short *)(param_1 + 0x7f8) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  if ((5999 < iVar2) && (*(short *)(param_1 + 0x7f8) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  cVar1 = FUN_140c5dbd0(param_1);
  iVar2 = iVar6;
  if (cVar1 == '\0') {
LAB_140c3c40f:
    if (DAT_1410b67dc == 0) {
      if (49999 < *(int *)(param_1 + 0x96c)) {
        iVar2 = iVar2 >> 1;
      }
      if (74999 < *(int *)(param_1 + 0x968)) {
        iVar2 = iVar2 >> 1;
      }
      if (*(int *)(param_1 + 0x970) < 150000) {
        return iVar2;
      }
      goto LAB_140c3c440;
    }
  }
  else {
    for (puVar4 = *(undefined8 **)(param_1 + 0x988); iVar7 = 0,
        puVar4 < *(undefined8 **)(param_1 + 0x990); puVar4 = puVar4 + 1) {
      if (*(short *)*puVar4 == 0x32) {
        piVar5 = (int *)((short *)*puVar4 + 2);
        iVar7 = 0;
        if (piVar5 != (int *)0x0) {
          iVar7 = *piVar5;
        }
        break;
      }
    }
    iVar2 = iVar6 >> 1;
    if (DAT_1410b67dc != 1) {
      if ((iVar7 < 0x62700) && (iVar2 = iVar6, 0x49d3f < iVar7)) {
        iVar2 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
      }
      goto LAB_140c3c40f;
    }
    if ((iVar7 < 0x24ea00) && (iVar2 = iVar6, 0x1274ff < iVar7)) {
      iVar2 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
    }
  }
  iVar6 = *(int *)(param_1 + 0x96c);
  if (iVar6 < 0x54600) {
    if (iVar6 < 0x2a300) {
      if (0x1c1ff < iVar6) {
        iVar2 = (iVar2 * 9) / 10;
      }
    }
    else {
      iVar2 = (int)((iVar2 * 3 >> 0x1f & 3U) + iVar2 * 3) >> 2;
    }
  }
  else {
    iVar2 = iVar2 >> 1;
  }
  iVar6 = *(int *)(param_1 + 0x968);
  if (iVar6 < 0x278d00) {
    if (iVar6 < 0x127500) {
      if (0x2a2ff < iVar6) {
        iVar2 = (iVar2 * 9) / 10;
      }
    }
    else {
      iVar2 = (int)((iVar2 * 3 >> 0x1f & 3U) + iVar2 * 3) >> 2;
    }
  }
  else {
    iVar2 = iVar2 >> 1;
  }
  iVar6 = *(int *)(param_1 + 0x970);
  if (0xd2eff < iVar6) {
    return iVar2 >> 2;
  }
  if (iVar6 < 0x54600) {
    if (iVar6 < 0x3f480) {
      if (0x2a2ff < iVar6) {
        iVar2 = (iVar2 * 9) / 10;
      }
      return iVar2;
    }
    return (int)((iVar2 * 3 >> 0x1f & 3U) + iVar2 * 3) >> 2;
  }
LAB_140c3c440:
  return iVar2 >> 1;
}

