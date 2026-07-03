// FUN_140c5ff60 @ 140c5ff60
// callees:
//   -> 140c26f00 FUN_140c26f00
//   -> 14097f810 FUN_14097f810


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5ff60(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(uint *)(param_1 + 0x110) & 0x20000) != 0) {
    iVar5 = 0;
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      FUN_140c26f00(param_1,0,0,0,0);
    }
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffdffff;
    *(undefined2 *)(param_1 + 0xae) = *(undefined2 *)(param_1 + 0xa8);
    *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_1 + 0xaa);
    *(undefined2 *)(param_1 + 0xb2) = *(undefined2 *)(param_1 + 0xac);
    *(undefined2 *)(param_1 + 0xc4) = 0x8ad0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 3;
    *(undefined2 *)(param_1 + 0xb8) = 0xffff;
    *(undefined4 *)(param_1 + 0xc0) = 0x8ad08ad0;
    *(undefined2 *)(param_1 + 0xc6) = 0xffff;
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
    iVar6 = (int)(DAT_141c36a58 - DAT_141c36a50 >> 3) + -1;
    iVar3 = iVar5;
    if (-1 < iVar6) {
      while( true ) {
        iVar4 = iVar6 + iVar3 >> 1;
        piVar2 = *(int **)(DAT_141c36a50 + (longlong)iVar4 * 8);
        iVar1 = *piVar2;
        if (iVar1 == *(int *)(param_1 + 0x150)) break;
        if (*(int *)(param_1 + 0x150) < iVar1) {
          iVar6 = iVar4 + -1;
        }
        else {
          iVar3 = iVar4 + 1;
        }
        if (iVar6 < iVar3) {
          return;
        }
      }
      piVar2[2] = piVar2[2] + -1;
      if ((*(uint *)(param_1 + 0x110) & 0x80000) != 0) {
        piVar2[3] = piVar2[3] + -1;
      }
      if ((piVar2[2] == 0) && (iVar6 = (int)(DAT_141c36a58 - DAT_141c36a50 >> 3) + -1, -1 < iVar6))
      {
        while( true ) {
          iVar3 = iVar6 + iVar5 >> 1;
          piVar2 = *(int **)(DAT_141c36a50 + (longlong)iVar3 * 8);
          if (*piVar2 == iVar1) break;
          if (iVar1 < *piVar2) {
            iVar6 = iVar3 + -1;
          }
          else {
            iVar5 = iVar3 + 1;
          }
          if (iVar6 < iVar5) {
            return;
          }
        }
        *(ushort *)(piVar2 + 6) = *(ushort *)(piVar2 + 6) & 0xfffe;
        FUN_14097f810(&DAT_141c34700);
        if ((0 < DAT_141c34a64) && ((*(byte *)(piVar2 + 6) & 2) != 0)) {
          _DAT_141c36950 = _DAT_141c36950 + piVar2[4];
        }
      }
    }
  }
  return;
}

