// FUN_1404ceb70 @ 1404ceb70
// callees:


short * FUN_1404ceb70(short *param_1)

{
  short *psVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  
  if (*param_1 == 0) {
    return (short *)0x0;
  }
  psVar6 = (short *)0x0;
LAB_1404cebb0:
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  psVar1 = param_1 + 0x5c;
  do {
    if (*(undefined8 **)psVar1 <= puVar3) {
      return psVar6;
    }
    if (*(short *)*puVar3 == 0) {
      iVar2 = *(int *)((short *)*puVar3 + 2);
      lVar5 = DAT_141c53720 - DAT_141c53718 >> 3;
      if ((lVar5 != 0) && (iVar2 != -1)) {
        iVar8 = 0;
        iVar7 = (int)lVar5 + -1;
        if (-1 < iVar7) {
          do {
            iVar4 = iVar7 + iVar8 >> 1;
            param_1 = *(short **)(DAT_141c53718 + (longlong)iVar4 * 8);
            if (*(int *)(param_1 + 2) == iVar2) {
              if (param_1 != (short *)0x0) {
                psVar6 = param_1;
                if (*param_1 == 0) {
                  return param_1;
                }
                goto LAB_1404cebb0;
              }
              break;
            }
            if (iVar2 < *(int *)(param_1 + 2)) {
              iVar7 = iVar4 + -1;
            }
            else {
              iVar8 = iVar4 + 1;
            }
          } while (iVar8 <= iVar7);
        }
      }
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

