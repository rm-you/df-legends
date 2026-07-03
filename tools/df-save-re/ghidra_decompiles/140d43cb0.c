// FUN_140d43cb0 @ 140d43cb0
// callees:
//   -> 1405bd6f0 FUN_1405bd6f0
//   -> 140d89d60 FUN_140d89d60
//   -> 1406ac900 FUN_1406ac900


void FUN_140d43cb0(longlong param_1,short param_2,short param_3,short param_4,short param_5,
                  char param_6)

{
  short *psVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if ((((param_2 < 0) || (DAT_141d69554 <= param_2)) || (param_3 < 0)) ||
     (((DAT_141d69558 <= param_3 || (param_4 < 0)) ||
      ((DAT_141d6955c <= param_4 ||
       ((DAT_141d69520 == 0 ||
        (lVar6 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)(DAT_141d69520 + ((longlong)param_2 >> 4) * 8) +
                    ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar6 == 0)))))))) {
    plVar5 = &DAT_141d86420;
  }
  else {
    plVar5 = (longlong *)(lVar6 + 0x68);
  }
  iVar4 = (int)(plVar5[1] - *plVar5 >> 3) + -1;
  if (-1 < iVar4) {
    lVar6 = (longlong)iVar4;
    puVar7 = (undefined8 *)(*plVar5 + lVar6 * 8);
    do {
      psVar1 = (short *)*puVar7;
      if (((((*(byte *)((longlong)psVar1 + 0x17) & 1) == 0) && (psVar1[5] == param_2)) &&
          (psVar1[6] == param_3)) && ((psVar1[7] == param_4 && (*psVar1 == 1)))) {
        psVar1[4] = psVar1[4] + param_5;
        if (100 < psVar1[4]) {
          psVar1[4] = 100;
        }
        if (param_6 != '\0') {
          psVar1[1] = 1;
        }
        break;
      }
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + -1;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  if (iVar4 == -1) {
    puVar3 = (undefined2 *)FUN_1405bd6f0(param_1 + 0x11a750,param_2,param_3,param_4);
    *puVar3 = 1;
    puVar3[4] = param_5;
    puVar3[5] = param_2;
    puVar3[6] = param_3;
    puVar3[7] = param_4;
    puVar3[1] = (short)param_6;
    if (param_6 != '\0') {
      lVar6 = FUN_140d89d60(param_1,6,0xffffffff);
      if (lVar6 == 0) {
        uVar2 = 0xea61;
      }
      else {
        uVar2 = *(undefined2 *)(lVar6 + 0x8a);
      }
      FUN_1406ac900(param_2,param_3,param_4,uVar2,6,0xffffffff,2);
    }
  }
  return;
}

