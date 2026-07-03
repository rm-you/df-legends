// FUN_14013c210 @ 14013c210
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_14013c210(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18);
  iVar2 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
  if ((iVar2 != 0) && (local_res18[0] != -1)) {
    iVar2 = iVar2 + -1;
    iVar3 = 0;
    if (-1 < iVar2) {
      do {
        iVar1 = iVar3 + iVar2 >> 1;
        lVar4 = *(longlong *)(DAT_141c67368 + (longlong)iVar1 * 8);
        if (*(int *)(lVar4 + 0x1c) == local_res18[0]) goto LAB_14013c299;
        if (local_res18[0] < *(int *)(lVar4 + 0x1c)) {
          iVar2 = iVar1 + -1;
        }
        else {
          iVar3 = iVar1 + 1;
        }
      } while (iVar3 <= iVar2);
    }
  }
  lVar4 = 0;
LAB_14013c299:
  *param_1 = lVar4;
  FUN_1405bba90(param_2,param_1 + 1,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 2,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 3,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1c,4);
  return;
}

