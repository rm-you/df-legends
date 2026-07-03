// FUN_14048e070 @ 14048e070
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140071810 FUN_140071810


int * FUN_14048e070(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  lVar2 = *(longlong *)(param_1 + 0xb8);
  iVar5 = (int)(*(longlong *)(param_1 + 0xc0) - lVar2 >> 3) + -1;
  if (-1 < iVar5) {
    do {
      iVar3 = iVar5 + iVar6 >> 1;
      piVar4 = *(int **)(lVar2 + (longlong)iVar3 * 8);
      iVar1 = *piVar4;
      if (iVar1 == param_2) {
        return piVar4;
      }
      if (param_2 < iVar1) {
        iVar5 = iVar3 + -1;
      }
      else {
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  piVar4 = operator_new(0x58);
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = -1;
  piVar4[0xf] = -1;
  piVar4[0x10] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = -1;
  *piVar4 = param_2;
  FUN_140071810(piVar4,(longlong *)(param_1 + 0xb8));
  return piVar4;
}

