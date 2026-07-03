// FUN_14031bd40 @ 14031bd40
// callees:
//   -> 1403197e0 FUN_1403197e0
//   -> 1405bba90 FUN_1405bba90


void FUN_14031bd40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char local_res8 [8];
  int local_res20 [2];
  
  FUN_1403197e0();
  FUN_1405bba90(param_2,local_res8,1);
  if (local_res8[0] == '\0') {
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  else {
    FUN_1405bba90(param_2,local_res20);
    iVar2 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
    if ((iVar2 != 0) && (local_res20[0] != -1)) {
      iVar2 = iVar2 + -1;
      iVar3 = 0;
      if (-1 < iVar2) {
        do {
          iVar1 = iVar3 + iVar2 >> 1;
          lVar4 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar1 * 8);
          if (*(int *)(lVar4 + 0x130) == local_res20[0]) goto LAB_14031bddc;
          if (local_res20[0] < *(int *)(lVar4 + 0x130)) {
            iVar2 = iVar1 + -1;
          }
          else {
            iVar3 = iVar1 + 1;
          }
        } while (iVar3 <= iVar2);
      }
    }
    lVar4 = 0;
LAB_14031bddc:
    *(longlong *)(param_1 + 0x178) = lVar4;
  }
  FUN_1405bba90(param_2,param_1 + 0x180,4);
  FUN_1405bba90(param_2,param_1 + 0x184,2);
  FUN_1405bba90(param_2,param_1 + 0x186,2);
  return;
}

