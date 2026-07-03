// FUN_1406d1dd0 @ 1406d1dd0
// callees:
//   -> 14066feb0 FUN_14066feb0


void FUN_1406d1dd0(short param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  if (((-1 < param_1) &&
      (uVar5 = (ulonglong)param_1, uVar5 < (ulonglong)(DAT_141c36978 - DAT_141c36970))) &&
     (*(char *)(uVar5 + DAT_141c36970) == '\0')) {
    FUN_14066feb0(DAT_141c36970,(int)param_1,0x1d);
    FUN_14066feb0();
    FUN_14066feb0();
    FUN_14066feb0();
    FUN_14066feb0();
    iVar4 = 0;
    if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
      lVar10 = 0;
      lVar7 = DAT_141c66ff0;
      lVar8 = DAT_141c66fe8;
      do {
        if (((*(byte *)(*(longlong *)(lVar10 + lVar8) + 0x110) & 2) == 0) &&
           (lVar6 = *(longlong *)(*(longlong *)(lVar10 + lVar8) + 0xa78), lVar6 != 0)) {
          plVar3 = (longlong *)(lVar6 + 0x230);
          iVar9 = 0;
          if (*(longlong *)(lVar6 + 0x238) - *plVar3 >> 3 != 0) {
            lVar6 = 0;
            do {
              psVar1 = *(short **)(lVar6 + *plVar3);
              if ((*psVar1 == 1) &&
                 (((psVar1[2] == param_1 || (psVar1[2] == -1)) || (param_1 == -1)))) {
                *(byte *)(psVar1 + 0xb) = *(byte *)(psVar1 + 0xb) | 1;
                lVar8 = DAT_141c66fe8;
              }
              iVar9 = iVar9 + 1;
              lVar6 = lVar6 + 8;
              lVar2 = *(longlong *)(*(longlong *)(lVar10 + lVar8) + 0xa78);
              plVar3 = (longlong *)(lVar2 + 0x230);
              lVar7 = DAT_141c66ff0;
            } while ((ulonglong)(longlong)iVar9 <
                     (ulonglong)(*(longlong *)(lVar2 + 0x238) - *plVar3 >> 3));
          }
        }
        iVar4 = iVar4 + 1;
        lVar10 = lVar10 + 8;
      } while ((ulonglong)(longlong)iVar4 < (ulonglong)(lVar7 - lVar8 >> 3));
    }
    *(undefined1 *)(uVar5 + DAT_141c36970) = 1;
  }
  return;
}

