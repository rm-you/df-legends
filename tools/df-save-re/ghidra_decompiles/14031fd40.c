// FUN_14031fd40 @ 14031fd40
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 140002380 FUN_140002380
//   -> 140002250 FUN_140002250


void FUN_14031fd40(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_res18 [4];
  
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    FUN_1405bba90(param_2,local_res18);
    iVar2 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
    if ((iVar2 != 0) && (local_res18[0] != -1)) {
      iVar2 = iVar2 + -1;
      iVar3 = 0;
      if (-1 < iVar2) {
        do {
          iVar1 = iVar3 + iVar2 >> 1;
          lVar4 = *(longlong *)(DAT_141c67368 + (longlong)iVar1 * 8);
          if (*(int *)(lVar4 + 0x1c) == local_res18[0]) goto LAB_14031fddc;
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
LAB_14031fddc:
    *(longlong *)(param_1 + 0x90) = lVar4;
  }
  FUN_140315ac0(param_1 + 8,param_2);
  FUN_140002380(param_1 + 0x80,param_2);
  FUN_1405bba90(param_2,param_1 + 0x98,4);
  FUN_1405bba90(param_2,param_1 + 0x9c,4);
  FUN_1405bba90(param_2,param_1 + 0xa0,4);
  if (0x641 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xa4,4);
  }
  if (0x61a < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xa8,4);
    FUN_1405bba90(param_2,param_1 + 0xac,4);
    if (0x667 < param_3) {
      FUN_1405bba90(param_2,param_1 + 0xb0,4);
    }
    if (0x61c < param_3) {
      FUN_1405bba90(param_2,param_1 + 0xb4,4);
      FUN_1405bba90(param_2,param_1 + 0xb8,4);
      FUN_1405bba90(param_2,param_1 + 0xbc,4);
    }
  }
  if (0x617 < param_3) {
    FUN_140002250(param_2,param_1 + 0xc0);
    FUN_140002250(param_2,param_1 + 0xd8);
    FUN_140002250(param_2,param_1 + 0xf0);
  }
  if (0x61d < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x108,4);
    FUN_1405bba90(param_2,param_1 + 0x10c,4);
    FUN_1405bba90(param_2,param_1 + 0x110,4);
    FUN_1405bba90(param_2,param_1 + 0x114,4);
    FUN_1405bba90(param_2,param_1 + 0x118,4);
    FUN_1405bba90(param_2,param_1 + 0x11c,4);
    FUN_1405bba90(param_2,param_1 + 0x120,4);
  }
  return;
}

