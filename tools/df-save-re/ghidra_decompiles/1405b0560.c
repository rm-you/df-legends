// FUN_1405b0560 @ 1405b0560
// callees:


undefined8 FUN_1405b0560(longlong *param_1,short *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*param_2 == -1) {
    return 0;
  }
  lVar1 = *param_1;
  iVar3 = (int)(param_1[1] - lVar1 >> 3) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3;
    plVar5 = (longlong *)(lVar1 + lVar4 * 8);
    do {
      lVar2 = *plVar5;
      if (*(short *)(lVar2 + 0x10) == *param_2) {
        if (*(short *)(lVar2 + 0x12) == param_2[1]) {
          if (*(short *)(lVar2 + 0x14) == param_2[2]) {
            if (*(int *)(lVar2 + 0x18) == *(int *)(param_2 + 4)) {
              if (*(int *)(lVar2 + 0x1c) == *(int *)(param_2 + 6)) {
                if (*(int *)(lVar2 + 0x20) == *(int *)(param_2 + 8)) {
                  return *(undefined8 *)(lVar1 + (longlong)iVar3 * 8);
                }
              }
            }
          }
        }
      }
      iVar3 = iVar3 + -1;
      plVar5 = plVar5 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return 0;
}

