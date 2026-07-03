// FUN_14081fab0 @ 14081fab0
// callees:
//   -> 140820540 FUN_140820540
//   -> 1405bba90 FUN_1405bba90


void FUN_14081fab0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  short local_res8 [4];
  
  FUN_140820540();
  FUN_1405bba90(param_2,local_res8,2);
  iVar2 = (int)(DAT_141d6e168 - DAT_141d6e160 >> 3) + -1;
  if (-1 < iVar2) {
    lVar1 = (longlong)iVar2;
    do {
      if (*(short *)(*(longlong *)(DAT_141d6e160 + lVar1 * 8) + 0x28) == local_res8[0]) {
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(DAT_141d6e160 + (longlong)iVar2 * 8);
        return;
      }
      iVar2 = iVar2 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}

