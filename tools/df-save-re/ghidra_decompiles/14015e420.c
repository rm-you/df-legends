// FUN_14015e420 @ 14015e420
// callees:


longlong FUN_14015e420(longlong param_1,short param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar5;
  
  uVar4 = (int)(*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 2) - 1;
  uVar5 = (ulonglong)uVar4;
  if (-1 < (int)uVar4) {
    lVar9 = (longlong)(int)uVar4;
    uVar5 = *(ulonglong *)(param_1 + 0x50);
    piVar6 = (int *)(uVar5 + lVar9 * 4);
    do {
      iVar2 = *piVar6;
      iVar7 = (int)(DAT_141c67370 - DAT_141c67368 >> 3);
      if ((iVar7 != 0) && (iVar2 != -1)) {
        iVar7 = iVar7 + -1;
        iVar8 = 0;
        if (-1 < iVar7) {
          do {
            uVar4 = iVar8 + iVar7 >> 1;
            uVar5 = (ulonglong)uVar4;
            lVar3 = *(longlong *)(DAT_141c67368 + (longlong)(int)uVar4 * 8);
            if (*(int *)(lVar3 + 0x1c) == iVar2) {
              if ((((lVar3 != 0) && ((*(byte *)(lVar3 + 0x10) & 1) != 0)) &&
                  (*(short *)(lVar3 + 8) == (short)(*(short *)(param_1 + 0x88) + param_2))) &&
                 (*(short *)(lVar3 + 10) == (short)(*(short *)(param_1 + 0x8a) + param_3))) {
                uVar1 = *(ushort *)(param_1 + 0x8c);
                uVar5 = (ulonglong)uVar1;
                if (*(ushort *)(lVar3 + 0xc) == uVar1) {
                  return (ulonglong)(byte)(uVar1 >> 8) << 8;
                }
              }
              break;
            }
            if (iVar2 < *(int *)(lVar3 + 0x1c)) {
              iVar7 = uVar4 - 1;
            }
            else {
              iVar8 = uVar4 + 1;
            }
          } while (iVar8 <= iVar7);
        }
      }
      piVar6 = piVar6 + -1;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}

