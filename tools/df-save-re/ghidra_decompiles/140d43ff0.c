// FUN_140d43ff0 @ 140d43ff0
// callees:
//   -> 140168dc0 FUN_140168dc0
//   -> 140db5d70 FUN_140db5d70
//   -> 140019af0 FUN_140019af0


undefined8 FUN_140d43ff0(undefined8 param_1,short param_2,short param_3,short param_4)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  cVar2 = FUN_140168dc0();
  if (cVar2 == '\0') {
    if ((((param_2 < 0) || (DAT_141d69554 <= param_2)) || (param_3 < 0)) ||
       (((DAT_141d69558 <= param_3 || (param_4 < 0)) ||
        ((DAT_141d6955c <= param_4 ||
         ((DAT_141d69520 == 0 ||
          (lVar7 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)(DAT_141d69520 + ((longlong)param_2 >> 4) * 8) +
                      ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar7 == 0)))))))) {
      plVar6 = &DAT_141d86420;
    }
    else {
      plVar6 = (longlong *)(lVar7 + 0x68);
    }
    iVar3 = (int)(plVar6[1] - *plVar6 >> 3) + -1;
    if (-1 < iVar3) {
      lVar7 = (longlong)iVar3;
      puVar8 = (undefined8 *)(*plVar6 + lVar7 * 8);
      do {
        psVar1 = (short *)*puVar8;
        if (((((*(byte *)((longlong)psVar1 + 0x17) & 1) == 0) && (psVar1[5] == param_2)) &&
            (psVar1[6] == param_3)) && (psVar1[7] == param_4)) {
          if (*psVar1 == 1) {
            bVar9 = psVar1[1] == 1;
          }
          else {
            bVar9 = *psVar1 == 0xb;
          }
          if (bVar9) goto LAB_140d4401b;
        }
        puVar8 = puVar8 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    cVar2 = FUN_140db5d70(param_1,param_2,param_3,param_4);
    if ((cVar2 == '\x01') &&
       (uVar4 = FUN_140019af0(param_1,param_2,param_3,param_4), (uVar4 >> 0x10 & 1) != 0)) {
      return 2;
    }
    uVar5 = 3;
  }
  else {
LAB_140d4401b:
    uVar5 = 1;
  }
  return uVar5;
}

