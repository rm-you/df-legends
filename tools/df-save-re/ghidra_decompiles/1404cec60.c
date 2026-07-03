// FUN_1404cec60 @ 1404cec60
// callees:


short * FUN_1404cec60(short *param_1)

{
  int iVar1;
  short *psVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if (*param_1 == 0) {
    return param_1;
  }
LAB_1404cec90:
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  do {
    if (*(undefined8 **)(param_1 + 0x5c) <= puVar3) {
      return param_1;
    }
    if (*(short *)*puVar3 == 0) {
      iVar1 = *(int *)((short *)*puVar3 + 2);
      lVar5 = DAT_141c53720 - DAT_141c53718 >> 3;
      if ((lVar5 != 0) && (iVar1 != -1)) {
        iVar7 = 0;
        iVar6 = (int)lVar5 + -1;
        if (-1 < iVar6) {
          do {
            iVar4 = iVar6 + iVar7 >> 1;
            psVar2 = *(short **)(DAT_141c53718 + (longlong)iVar4 * 8);
            if (*(int *)(psVar2 + 2) == iVar1) {
              if (psVar2 != (short *)0x0) {
                param_1 = psVar2;
                if (*psVar2 == 0) {
                  return psVar2;
                }
                goto LAB_1404cec90;
              }
              break;
            }
            if (iVar1 < *(int *)(psVar2 + 2)) {
              iVar6 = iVar4 + -1;
            }
            else {
              iVar7 = iVar4 + 1;
            }
          } while (iVar7 <= iVar6);
        }
      }
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

