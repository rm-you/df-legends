// FUN_140607ff0 @ 140607ff0
// callees:


undefined8 * FUN_140607ff0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = viewscreen_update_regionst::vftable;
  DAT_141c33e70 = DAT_141c33e70 | 2;
  DAT_141ebeeca = 1;
  if (DAT_1416992b2 == -1) {
    DAT_1416b1974 = 0;
    DAT_1416992a4 = 0;
  }
  if (DAT_1410b67dc == 0) {
    DAT_141c36b80 = 0xffffffff;
    DAT_141c36b84 = 0xffffffff;
    DAT_141c36b88 = 0xffffffff;
    DAT_141c36b8c = 0xffff;
    DAT_141c3d250 = 0;
    DAT_141c3d258 = 0;
    *(undefined4 *)(param_1 + 4) = DAT_1416b1980;
    *(int *)((longlong)param_1 + 0x24) = DAT_1416b1974 + 0x41a0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = DAT_1416b1980;
    *(int *)((longlong)param_1 + 0x24) = ((DAT_1416b1974 + 0x41a0) / 0x4b0) * 0x4b0 + 0x1c2;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (0x626ff < iVar1) {
    iVar2 = *(int *)(param_1 + 4);
    do {
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -0x62700;
    } while (0x626ff < iVar1);
    *(int *)(param_1 + 4) = iVar2;
    *(int *)((longlong)param_1 + 0x24) = iVar1;
  }
  if (DAT_1416992b2 == -1) {
    DAT_1416992b2 = '\0';
  }
  return param_1;
}

