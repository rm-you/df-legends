// FUN_1400f1760 @ 1400f1760
// callees:


short * FUN_1400f1760(undefined8 param_1,short param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  if (DAT_141c3d258 == 0) {
    return (short *)0x0;
  }
  plVar6 = *(longlong **)(DAT_141c3d258 + 0x428);
  do {
    if (*(longlong **)(DAT_141c3d258 + 0x430) <= plVar6) {
      return (short *)0x0;
    }
    if ((*(byte *)(*plVar6 + 0x18) & 2) != 0) {
      iVar1 = *(int *)(*plVar6 + 4);
      lVar4 = DAT_141c53720 - DAT_141c53718 >> 3;
      if ((lVar4 != 0) && (iVar1 != -1)) {
        iVar8 = 0;
        iVar7 = (int)lVar4 + -1;
        if (-1 < iVar7) {
          do {
            iVar3 = iVar7 + iVar8 >> 1;
            psVar2 = *(short **)(DAT_141c53718 + (longlong)iVar3 * 8);
            if (*(int *)(psVar2 + 2) == iVar1) {
              if (((psVar2 != (short *)0x0) && ((*(byte *)(psVar2 + 0x4a) & 0x10) == 0)) &&
                 (*psVar2 == 10)) {
                puVar5 = *(undefined8 **)(psVar2 + 0x4c);
                goto joined_r0x0001400f183f;
              }
              break;
            }
            if (iVar1 < *(int *)(psVar2 + 2)) {
              iVar7 = iVar3 + -1;
            }
            else {
              iVar8 = iVar3 + 1;
            }
          } while (iVar8 <= iVar7);
        }
      }
    }
LAB_1400f1864:
    plVar6 = plVar6 + 1;
  } while( true );
joined_r0x0001400f183f:
  if (*(undefined8 **)(psVar2 + 0x50) <= puVar5) goto LAB_1400f1864;
  if ((*(int *)*puVar5 == 0) && (((int *)*puVar5)[1] == (int)param_2)) {
    if (puVar5 < *(undefined8 **)(psVar2 + 0x50)) {
      return psVar2;
    }
    goto LAB_1400f1864;
  }
  puVar5 = puVar5 + 1;
  goto joined_r0x0001400f183f;
}

