// FUN_140d43830 @ 140d43830
// callees:
//   -> 1405bd6f0 FUN_1405bd6f0
//   -> 140d89d60 FUN_140d89d60
//   -> 140168ac0 FUN_140168ac0
//   -> 1406ac900 FUN_1406ac900


short * FUN_140d43830(longlong param_1,short param_2,int param_3,short param_4,short param_5,
                     short param_6,short param_7)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  short *psVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if (((((param_4 < 0) || (DAT_141d69554 <= param_4)) || (param_5 < 0)) ||
      ((DAT_141d69558 <= param_5 || (param_6 < 0)))) ||
     ((DAT_141d6955c <= param_6 ||
      ((DAT_141d69520 == 0 ||
       (lVar6 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(DAT_141d69520 + ((longlong)param_4 >> 4) * 8) +
                   ((longlong)param_5 >> 4) * 8) + (longlong)param_6 * 8), lVar6 == 0)))))) {
    plVar4 = &DAT_141d86420;
  }
  else {
    plVar4 = (longlong *)(lVar6 + 0x68);
  }
  iVar3 = (int)(plVar4[1] - *plVar4 >> 3) + -1;
  if (-1 < iVar3) {
    lVar6 = (longlong)iVar3;
    puVar7 = (undefined8 *)(*plVar4 + lVar6 * 8);
    do {
      psVar5 = (short *)*puVar7;
      if (((((*(byte *)((longlong)psVar5 + 0x17) & 1) == 0) && (psVar5[5] == param_4)) &&
          (psVar5[6] == param_5)) &&
         (((psVar5[7] == param_6 && (*psVar5 == 9)) &&
          ((psVar5[1] == param_2 && (*(int *)(psVar5 + 2) == param_3)))))) {
        psVar5[4] = psVar5[4] + param_7;
        if (psVar5[4] < 0x65) {
          return psVar5;
        }
        psVar5[4] = 100;
        return psVar5;
      }
      puVar7 = puVar7 + -1;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  psVar5 = (short *)FUN_1405bd6f0(param_1 + 0x11a750,param_4,param_5,param_6);
  psVar5[4] = param_7;
  *psVar5 = 9;
  psVar5[5] = param_4;
  psVar5[6] = param_5;
  psVar5[7] = param_6;
  psVar5[1] = param_2;
  *(int *)(psVar5 + 2) = param_3;
  lVar6 = FUN_140d89d60(param_1,param_2,param_3);
  if (lVar6 == 0) {
    sVar2 = -0x159f;
  }
  else {
    sVar2 = *(short *)(lVar6 + 0x8c);
  }
  lVar6 = FUN_140d89d60(param_1,param_2,param_3);
  if (lVar6 == 0) {
    sVar1 = -0x159f;
  }
  else {
    sVar1 = *(short *)(lVar6 + 0x8a);
  }
  if ((sVar2 == -0x159f) && (sVar2 = sVar1, sVar1 == -0x159f)) {
    sVar2 = FUN_140168ac0(&DAT_141c53470,param_4,param_5,param_6);
  }
  FUN_1406ac900(param_4,param_5,param_6,sVar2,param_2,param_3,2);
  return psVar5;
}

