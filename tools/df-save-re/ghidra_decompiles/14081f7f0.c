// FUN_14081f7f0 @ 14081f7f0
// callees:
//   -> 140820540 FUN_140820540
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380


void FUN_14081f7f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  short local_res8 [4];
  
  FUN_140820540();
  FUN_1405bba90(param_2,local_res8,2);
  iVar3 = (int)(DAT_141d6e108 - DAT_141d6e100 >> 3) + -1;
  if (-1 < iVar3) {
    lVar1 = (longlong)iVar3;
    do {
      if (*(short *)(*(longlong *)(DAT_141d6e100 + lVar1 * 8) + 0x28) == local_res8[0]) {
        uVar2 = *(undefined8 *)(DAT_141d6e100 + (longlong)iVar3 * 8);
        goto LAB_14081f855;
      }
      iVar3 = iVar3 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  uVar2 = 0;
LAB_14081f855:
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  FUN_140002380(param_1 + 0xe8,param_2);
  return;
}

