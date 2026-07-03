// FUN_14013c3d0 @ 14013c3d0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_14013c3d0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18);
  lVar2 = DAT_141c6fda8 - DAT_141c6fda0 >> 3;
  if ((lVar2 != 0) && (local_res18[0] != -1)) {
    iVar3 = (int)lVar2 + -1;
    iVar4 = 0;
    if (-1 < iVar3) {
      do {
        iVar1 = iVar4 + iVar3 >> 1;
        lVar2 = *(longlong *)(DAT_141c6fda0 + (longlong)iVar1 * 8);
        if (*(int *)(lVar2 + 0x50) == local_res18[0]) goto LAB_14013c459;
        if (local_res18[0] < *(int *)(lVar2 + 0x50)) {
          iVar3 = iVar1 + -1;
        }
        else {
          iVar4 = iVar1 + 1;
        }
      } while (iVar4 <= iVar3);
    }
  }
  lVar2 = 0;
LAB_14013c459:
  *param_1 = lVar2;
  FUN_1405bba90(param_2,param_1 + 1,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 2,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x14,4);
  return;
}

