// FUN_140d1d410 @ 140d1d410
// callees:
//   -> 1406d1dd0 FUN_1406d1dd0


void FUN_140d1d410(char *param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  
  if ((DAT_1410b67dc != 1) && ((param_1[0xc] & 1U) == 0)) {
    if (*param_1 != '\a') {
      FUN_1406d1dd0(*(undefined2 *)(param_1 + 2));
      param_1[0xc] = param_1[0xc] | 1;
      return;
    }
    sVar9 = *(short *)(param_1 + 2);
    if ((sVar9 < 0) ||
       ((ulonglong)(DAT_141d6dc18 - DAT_141d6dc10 >> 3) <= (ulonglong)(longlong)sVar9)) {
      iVar5 = -1;
      sVar9 = -1;
    }
    else {
      lVar7 = *(longlong *)(DAT_141d6dc10 + (longlong)sVar9 * 8);
      sVar9 = *(short *)(lVar7 + 0x268);
      iVar5 = *(int *)(lVar7 + 0x27c);
    }
    iVar11 = 0;
    if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
      lVar4 = 0;
      lVar7 = DAT_141c66ff0;
      lVar8 = DAT_141c66fe8;
      do {
        if (((*(byte *)(*(longlong *)(lVar4 + lVar8) + 0x110) & 2) == 0) &&
           (lVar6 = *(longlong *)(*(longlong *)(lVar4 + lVar8) + 0xa78), lVar6 != 0)) {
          plVar3 = (longlong *)(lVar6 + 0x230);
          iVar10 = 0;
          if (*(longlong *)(lVar6 + 0x238) - *plVar3 >> 3 != 0) {
            lVar6 = 0;
            do {
              psVar1 = *(short **)(lVar6 + *plVar3);
              if (*psVar1 == 0) {
                if ((((psVar1[6] == sVar9) || (psVar1[6] == -1)) || (sVar9 == -1)) &&
                   (((*(int *)(psVar1 + 8) == iVar5 || (*(int *)(psVar1 + 8) == -1)) ||
                    (iVar5 == -1)))) {
                  *(byte *)(psVar1 + 0xb) = *(byte *)(psVar1 + 0xb) | 1;
                  lVar8 = DAT_141c66fe8;
                }
              }
              iVar10 = iVar10 + 1;
              lVar6 = lVar6 + 8;
              lVar2 = *(longlong *)(*(longlong *)(lVar4 + lVar8) + 0xa78);
              plVar3 = (longlong *)(lVar2 + 0x230);
              lVar7 = DAT_141c66ff0;
            } while ((ulonglong)(longlong)iVar10 <
                     (ulonglong)(*(longlong *)(lVar2 + 0x238) - *plVar3 >> 3));
          }
        }
        iVar11 = iVar11 + 1;
        lVar4 = lVar4 + 8;
      } while ((ulonglong)(longlong)iVar11 < (ulonglong)(lVar7 - lVar8 >> 3));
    }
    *(undefined1 *)(*(short *)(param_1 + 2) + DAT_141c369a0) = 1;
    param_1[0xc] = param_1[0xc] | 1;
  }
  return;
}

