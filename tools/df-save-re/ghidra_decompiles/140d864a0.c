// FUN_140d864a0 @ 140d864a0
// callees:
//   -> 140d7ffa0 FUN_140d7ffa0


longlong FUN_140d864a0(longlong param_1,short param_2,short param_3,undefined8 param_4,char param_5,
                      char param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = FUN_140d7ffa0(param_1,param_2);
  lVar5 = 0;
  iVar2 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3) +
          -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar6 = (longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + lVar4 * 8);
    do {
      lVar1 = *plVar6;
      if (((((1 < *(int *)(lVar1 + 0x2a8)) &&
            ((*(byte *)(*(longlong *)(lVar1 + 0x2a0) + 1) & 4) != 0)) ||
           (iVar2 = (int)(short)(((param_2 / 0x30 + (param_2 >> 0xf)) -
                                 (short)((longlong)(int)param_2 * 0x2aaaaaab >> 0x3f)) +
                                *(short *)(param_1 + 0x1160f0)), iVar2 < *(int *)(lVar1 + 0x1f8)))
          || (((*(int *)(lVar1 + 0x200) < iVar2 ||
               (iVar2 = (int)(short)(((param_3 / 0x30 + (param_3 >> 0xf)) -
                                     (short)((longlong)(int)param_3 * 0x2aaaaaab >> 0x3f)) +
                                    *(short *)(param_1 + 0x1160f4)), iVar2 < *(int *)(lVar1 + 0x1fc)
               )) || (*(int *)(lVar1 + 0x204) < iVar2)))) ||
         (((0 < *(int *)(lVar1 + 0x2a8) && ((**(byte **)(lVar1 + 0x2a0) & 4) != 0)) &&
          (param_6 == '\0')))) goto LAB_140d8663f;
      if (lVar5 == 0) {
LAB_140d86612:
        if (lVar3 == 0) {
          if (*(int *)(lVar1 + 0x348) < 1) {
LAB_140d8663c:
            lVar5 = lVar1;
          }
        }
        else if ((*(int *)(lVar1 + 0x348) <= (int)*(short *)(lVar3 + 0x3a)) &&
                ((int)*(short *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x34c))) goto LAB_140d8663c;
      }
      else if (param_5 == '\0') {
        if (((*(int *)(lVar1 + 0x2a8) < 1) || ((**(byte **)(lVar1 + 0x2a0) & 0x80) == 0)) ||
           ((0 < *(int *)(lVar5 + 0x2a8) && ((**(byte **)(lVar5 + 0x2a0) & 0x80) != 0))))
        goto LAB_140d86612;
      }
      else if ((((0 < *(int *)(lVar1 + 0x2a8)) && ((**(byte **)(lVar1 + 0x2a0) & 0x80) != 0)) ||
               (*(int *)(lVar5 + 0x2a8) < 1)) || ((**(byte **)(lVar5 + 0x2a0) & 0x80) == 0))
      goto LAB_140d86612;
LAB_140d8663f:
      plVar6 = plVar6 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return lVar5;
}

