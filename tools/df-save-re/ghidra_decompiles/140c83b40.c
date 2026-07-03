// FUN_140c83b40 @ 140c83b40
// callees:
//   -> 140c260d0 FUN_140c260d0
//   -> 140073a50 FUN_140073a50


void FUN_140c83b40(longlong param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    cVar4 = FUN_140c260d0();
    cVar5 = FUN_140073a50(param_1);
    if (((cVar4 != '\0') || (cVar5 != '\0')) &&
       (iVar6 = (int)(*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 3) + -1,
       lVar7 = (longlong)iVar6, -1 < iVar6)) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar7 * 8);
        sVar1 = *(short *)(lVar2 + 6);
        if (sVar1 != -1) {
          if (cVar4 != '\0') {
            plVar3 = *(longlong **)(param_1 + 0x5d8);
            iVar6 = 1;
            if (0 < (int)plVar3[0xc]) {
              iVar6 = (*(int *)(*(longlong *)(*plVar3 + (longlong)*(short *)(lVar2 + 4) * 8) + 0x80)
                      * 100) / (int)plVar3[0xc];
              if (iVar6 < 1) {
                iVar6 = 1;
              }
              else if (10 < iVar6) {
                iVar6 = 10;
              }
            }
            iVar6 = (*(int *)(*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*plVar3 + (longlong)*(short *)(lVar2 + 4) * 8) +
                                 0x58) + (longlong)sVar1 * 8) + 0x44) * iVar6 * 100) / 1000;
            if (*(int *)(lVar2 + 0x70) < iVar6) {
              *(int *)(lVar2 + 0x70) = iVar6;
            }
          }
          if ((cVar5 != '\0') &&
             (iVar6 = *(int *)(*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)
                                    (**(longlong **)(param_1 + 0x5d8) +
                                    (longlong)*(short *)(lVar2 + 4) * 8) + 0x58) +
                                (longlong)sVar1 * 8) + 0x40), *(int *)(lVar2 + 0x6c) < iVar6)) {
            *(int *)(lVar2 + 0x6c) = iVar6;
          }
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
  }
  return;
}

