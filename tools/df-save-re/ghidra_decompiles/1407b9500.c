// FUN_1407b9500 @ 1407b9500
// callees:
//   -> 14014a480 FUN_14014a480
//   -> 1400511c0 FUN_1400511c0
//   -> 1407b91c0 FUN_1407b91c0


void FUN_1407b9500(undefined8 param_1,int *param_2,int param_3,undefined4 param_4,longlong *param_5)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(byte *)((longlong)param_5 + 0x1b4) & 1) == 0) {
    FUN_14014a480("world view filter not set (moderate private opinion)");
    return;
  }
  if (*param_2 != 9) {
    return;
  }
  if (param_3 == -1) {
    return;
  }
  iVar6 = 0;
  iVar5 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
  if (iVar5 < 0) {
    return;
  }
  while( true ) {
    iVar4 = iVar5 + iVar6 >> 1;
    piVar1 = *(int **)(DAT_141d692e0 + (longlong)iVar4 * 8);
    if (*piVar1 == param_3) break;
    if (param_3 < *piVar1) {
      iVar5 = iVar4 + -1;
    }
    else {
      iVar6 = iVar4 + 1;
    }
    if (iVar5 < iVar6) {
      return;
    }
  }
  if (piVar1 == (int *)0x0) {
    return;
  }
  lVar3 = FUN_1400511c0(param_4,piVar1 + 4);
  if (lVar3 == 0) {
    return;
  }
  iVar5 = *(int *)(lVar3 + 0x58);
  FUN_1407b91c0();
  lVar3 = *param_5;
  if (lVar3 == 0) {
LAB_1407b96b6:
    if (iVar5 < 0x32) {
      return;
    }
  }
  else {
    sVar2 = *(short *)(lVar3 + 0xa4);
    if (*(longlong *)(lVar3 + 0x158) == 0) {
LAB_1407b9617:
      if (0x5a < sVar2) {
        return;
      }
      if (0x4b < sVar2) {
        if (iVar5 < 0x5a) {
          return;
        }
        goto LAB_1407b96bd;
      }
      if (0x3c < sVar2) {
        if (iVar5 < 0x4b) {
          return;
        }
        goto LAB_1407b96bd;
      }
      if (9 < sVar2) {
        if (sVar2 < 0x19) {
          if (iVar5 < 10) {
            return;
          }
          goto LAB_1407b96bd;
        }
        if (sVar2 < 0x28) {
          if (iVar5 < 0x19) {
            return;
          }
          goto LAB_1407b96bd;
        }
        goto LAB_1407b96b6;
      }
    }
    else {
      sVar2 = sVar2 + *(short *)(*(longlong *)(lVar3 + 0x158) + 0x24);
      if (-1 < sVar2) {
        if (100 < sVar2) {
          return;
        }
        goto LAB_1407b9617;
      }
    }
    if (iVar5 == 0) {
      return;
    }
  }
LAB_1407b96bd:
  *param_2 = 10;
  return;
}

