// FUN_140d435a0 @ 140d435a0
// callees:
//   -> 1405bd6f0 FUN_1405bd6f0


void FUN_140d435a0(longlong param_1,short param_2,short param_3,short param_4,short param_5)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if ((((param_2 < 0) || (DAT_141d69554 <= param_2)) || (param_3 < 0)) ||
     (((DAT_141d69558 <= param_3 || (param_4 < 0)) ||
      ((DAT_141d6955c <= param_4 ||
       ((DAT_141d69520 == 0 ||
        (lVar5 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)(DAT_141d69520 + ((longlong)param_2 >> 4) * 8) +
                    ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar5 == 0)))))))) {
    plVar4 = &DAT_141d86420;
  }
  else {
    plVar4 = (longlong *)(lVar5 + 0x68);
  }
  iVar3 = (int)(plVar4[1] - *plVar4 >> 3) + -1;
  if (-1 < iVar3) {
    lVar5 = (longlong)iVar3;
    puVar6 = (undefined8 *)(*plVar4 + lVar5 * 8);
    do {
      psVar1 = (short *)*puVar6;
      if (((((*(byte *)((longlong)psVar1 + 0x17) & 1) == 0) && (psVar1[5] == param_2)) &&
          (psVar1[6] == param_3)) && (psVar1[7] == param_4)) {
        if (*psVar1 == 5) {
          psVar1[4] = psVar1[4] + param_5;
          if (100 < psVar1[4]) {
            psVar1[4] = 100;
          }
          break;
        }
        if (*psVar1 == 0xb) break;
      }
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  if (iVar3 == -1) {
    puVar2 = (undefined2 *)FUN_1405bd6f0(param_1 + 0x11a750,param_2,param_3,param_4);
    *puVar2 = 5;
    puVar2[4] = param_5;
    puVar2[5] = param_2;
    puVar2[6] = param_3;
    puVar2[7] = param_4;
  }
  return;
}

