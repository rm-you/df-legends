// FUN_14075f120 @ 14075f120
// callees:
//   -> 140002660 FUN_140002660
//   -> 140d9ead0 FUN_140d9ead0
//   -> 140752d70 FUN_140752d70
//   -> 1404c59d0 FUN_1404c59d0
//   -> 14061e7d0 FUN_14061e7d0


void FUN_14075f120(longlong param_1,undefined4 param_2)

{
  short sVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xaa) == '\0') {
    FUN_140002660(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0xa4) == -1) {
    *(undefined4 *)(param_1 + 0xa4) = param_2;
  }
  sVar1 = *(short *)(param_1 + 2);
  if (-1 < sVar1) {
    if ((((ulonglong)(longlong)sVar1 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3)) &&
        (lVar2 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8), lVar2 != 0)) &&
       (plVar3 = (longlong *)(lVar2 + 0x160), *(longlong *)(lVar2 + 0x168) - *plVar3 >> 1 != 0)) {
      FUN_140d9ead0(plVar3,param_1 + 0x38,8,*(undefined4 *)(param_1 + 0xa4),plVar3);
      return;
    }
  }
  lVar2 = FUN_140752d70(param_1);
  if ((lVar2 != 0) && (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x3c0) != 0)) {
    FUN_1404c59d0(lVar2,param_1 + 0x38,8);
  }
  FUN_14061e7d0(param_1 + 0x38,param_2,8,&DAT_141d6e1f0,&DAT_141d72d50);
  return;
}

