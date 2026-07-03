// FUN_14066feb0 @ 14066feb0
// callees:
//   -> 140d89d60 FUN_140d89d60


void FUN_14066feb0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int local_res8;
  
  local_res8 = 0;
  if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
    lVar10 = 0;
    lVar7 = DAT_141c66fe8;
    lVar4 = DAT_141c66ff0;
    do {
      if (((*(byte *)(*(longlong *)(lVar7 + lVar10) + 0x110) & 2) == 0) &&
         (lVar8 = *(longlong *)(*(longlong *)(lVar7 + lVar10) + 0xa78), lVar8 != 0)) {
        plVar6 = (longlong *)(lVar8 + 0x230);
        iVar9 = 0;
        if (*(longlong *)(lVar8 + 0x238) - *plVar6 >> 3 != 0) {
          lVar8 = 0;
          do {
            psVar2 = *(short **)(lVar8 + *plVar6);
            if (*psVar2 == 0) {
              iVar1 = *(int *)(psVar2 + 8);
              lVar4 = FUN_140d89d60(&DAT_141c53470,psVar2[6],iVar1);
              if (((((lVar4 != 0) && (-1 < param_3)) && (iVar5 = param_3 >> 3, -1 < iVar5)) &&
                  ((iVar5 < *(int *)(lVar4 + 0x298) &&
                   (((byte)(1 << ((byte)param_3 & 7)) &
                    *(byte *)((longlong)iVar5 + *(longlong *)(lVar4 + 0x290))) != 0)))) &&
                 ((iVar1 == param_2 || ((iVar1 == -1 || (param_2 == -1)))))) {
                *(byte *)(psVar2 + 0xb) = *(byte *)(psVar2 + 0xb) | 1;
                lVar7 = DAT_141c66fe8;
              }
            }
            iVar9 = iVar9 + 1;
            lVar8 = lVar8 + 8;
            lVar3 = *(longlong *)(*(longlong *)(lVar7 + lVar10) + 0xa78);
            plVar6 = (longlong *)(lVar3 + 0x230);
            lVar4 = DAT_141c66ff0;
          } while ((ulonglong)(longlong)iVar9 <
                   (ulonglong)(*(longlong *)(lVar3 + 0x238) - *plVar6 >> 3));
        }
      }
      local_res8 = local_res8 + 1;
      lVar10 = lVar10 + 8;
    } while ((ulonglong)(longlong)local_res8 < (ulonglong)(lVar4 - lVar7 >> 3));
  }
  return;
}

