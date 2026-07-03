// FUN_1409085c0 @ 1409085c0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 140002380 FUN_140002380


void FUN_1409085c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_res8 [2];
  char local_res18 [16];
  
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,local_res18,1);
  if (local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_1405bba90(param_2,local_res8);
    iVar3 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
    if ((iVar3 != 0) && (local_res8[0] != -1)) {
      iVar3 = iVar3 + -1;
      iVar4 = 0;
      if (-1 < iVar3) {
        do {
          iVar2 = iVar4 + iVar3 >> 1;
          lVar1 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar2 * 8);
          if (*(int *)(lVar1 + 0x130) == local_res8[0]) goto LAB_14090866e;
          if (local_res8[0] < *(int *)(lVar1 + 0x130)) {
            iVar3 = iVar2 + -1;
          }
          else {
            iVar4 = iVar2 + 1;
          }
        } while (iVar4 <= iVar3);
      }
    }
    lVar1 = 0;
LAB_14090866e:
    *(longlong *)(param_1 + 0x18) = lVar1;
  }
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,local_res18,1);
  if (local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    FUN_1405bba90(param_2,local_res8);
    lVar1 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar1 != 0) && (local_res8[0] != -1)) {
      iVar4 = 0;
      iVar3 = (int)lVar1 + -1;
      if (-1 < iVar3) {
        do {
          iVar2 = iVar3 + iVar4 >> 1;
          lVar1 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar2 * 8);
          if (*(int *)(lVar1 + 0xe0) == local_res8[0]) goto LAB_14090871c;
          if (local_res8[0] < *(int *)(lVar1 + 0xe0)) {
            iVar3 = iVar2 + -1;
          }
          else {
            iVar4 = iVar2 + 1;
          }
        } while (iVar4 <= iVar3);
      }
    }
    lVar1 = 0;
LAB_14090871c:
    *(longlong *)(param_1 + 0x10) = lVar1;
  }
  FUN_140002250(param_2,param_1 + 0x28);
  FUN_1405bba90(param_2,param_1 + 0x40,2);
  FUN_140002380(param_1 + 0x58,param_2);
  if ((param_3 < 0x677) && (0 < *(int *)(param_1 + 0x60))) {
    **(byte **)(param_1 + 0x58) = **(byte **)(param_1 + 0x58) & 0xfd;
  }
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,2);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  if (0x671 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x4c,4);
    FUN_1405bba90(param_2,param_1 + 0x50,4);
  }
  return;
}

