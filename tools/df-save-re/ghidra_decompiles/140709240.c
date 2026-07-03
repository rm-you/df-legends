// FUN_140709240 @ 140709240
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 1407c8470 FUN_1407c8470
//   -> 140050b50 FUN_140050b50
//   -> 14007e640 FUN_14007e640


/* WARNING: Removing unreachable block (ram,0x000140709282) */

undefined8 * FUN_140709240(undefined8 *param_1,char param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = history_eventst::vftable;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  if (param_2 == '\0') {
    puVar2 = operator_new(1);
    param_1[2] = puVar2;
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 3) = 1;
    if ((DAT_141d7a020 == 0) && (0 < *(int *)(param_1 + 3))) {
      *(byte *)param_1[2] = *(byte *)param_1[2] | 1;
    }
    *(int *)(param_1 + 4) = DAT_14155b288;
    DAT_14155b288 = DAT_14155b288 + 1;
    FUN_1407c8470(param_1,&DAT_141d7a048);
    iVar1 = (int)(DAT_141d7a688 - DAT_141d7a680 >> 3);
    if (0 < iVar1) {
      FUN_140050b50(*(undefined4 *)(param_1 + 4),
                    *(longlong *)(DAT_141d7a680 + (longlong)(iVar1 + -1) * 8) + 8);
    }
    if (DAT_141d7a6a8 != 0) {
      FUN_14007e640(DAT_141d7a6a8,*(undefined4 *)(param_1 + 4),DAT_1416b1980,DAT_1416b1974,uVar3);
    }
  }
  return param_1;
}

