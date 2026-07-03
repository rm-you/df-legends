// FUN_14081fb50 @ 14081fb50
// callees:
//   -> 140820540 FUN_140820540
//   -> 1405bba90 FUN_1405bba90


void FUN_14081fb50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  short local_res18 [8];
  
  FUN_140820540();
  FUN_1405bba90(param_2,local_res18,2);
  iVar3 = (int)(DAT_141d6e0f0 - DAT_141d6e0e8 >> 3) + -1;
  if (-1 < iVar3) {
    lVar1 = (longlong)iVar3;
    do {
      if (*(short *)(*(longlong *)(DAT_141d6e0e8 + lVar1 * 8) + 0x28) == local_res18[0]) {
        uVar2 = *(undefined8 *)(DAT_141d6e0e8 + (longlong)iVar3 * 8);
        goto LAB_14081fbb8;
      }
      iVar3 = iVar3 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  uVar2 = 0;
LAB_14081fbb8:
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  if (0x5bd < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xe8,4);
    return;
  }
  *(undefined4 *)(param_1 + 0xe8) = 10000;
  return;
}

