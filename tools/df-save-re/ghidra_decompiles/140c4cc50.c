// FUN_140c4cc50 @ 140c4cc50
// callees:
//   -> 1408243e0 FUN_1408243e0
//   -> 140824380 FUN_140824380
//   -> 140c4cec0 FUN_140c4cec0
//   -> 140c5b050 FUN_140c5b050


void FUN_140c4cc50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(uint *)(param_1 + 0x118) >> 0x13 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x3f0);
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfff7ffff;
    iVar5 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
    if ((iVar5 != 0) && (iVar1 != -1)) {
      iVar5 = iVar5 + -1;
      iVar6 = 0;
      if (-1 < iVar5) {
        do {
          iVar4 = iVar6 + iVar5 >> 1;
          lVar2 = *(longlong *)(DAT_141c67368 + (longlong)iVar4 * 8);
          if (*(int *)(lVar2 + 0x1c) == iVar1) {
            if (((lVar2 != 0) &&
                (FUN_1408243e0(lVar2,0x39,*(undefined4 *)(param_1 + 0x130)),
                (*(byte *)(lVar2 + 0x14) & 1) != 0)) &&
               (cVar3 = FUN_140824380(lVar2,0x39), cVar3 == '\0')) {
              *(uint *)(lVar2 + 0x14) = *(uint *)(lVar2 + 0x14) & 0xfffffffe;
            }
            break;
          }
          if (iVar1 < *(int *)(lVar2 + 0x1c)) {
            iVar5 = iVar4 + -1;
          }
          else {
            iVar6 = iVar4 + 1;
          }
        } while (iVar6 <= iVar5);
      }
    }
    *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
    cVar3 = FUN_140c4cec0(param_1);
    if (cVar3 == '\0') {
      FUN_140c5b050(param_1);
      return;
    }
  }
  return;
}

