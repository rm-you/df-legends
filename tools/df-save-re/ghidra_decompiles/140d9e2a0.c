// FUN_140d9e2a0 @ 140d9e2a0
// callees:
//   -> 140d868e0 FUN_140d868e0
//   -> 1400048f0 FUN_1400048f0
//   -> 1401aa670 FUN_1401aa670


undefined8 FUN_140d9e2a0(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x1160ec) && (cVar2 = FUN_140d868e0(), cVar2 != '\0')))) {
    uVar3 = FUN_1400048f0(param_1,param_2);
    if ((uVar3 & 7) != 6) {
      if ((uVar3 & 7) == 7) {
        cVar2 = FUN_1401aa670(param_1 + 0x1c928,param_2);
        if (cVar2 != '\0') {
          return 0;
        }
        iVar4 = (int)(*(longlong *)(param_1 + 0x1cd70) - *(longlong *)(param_1 + 0x1cd68) >> 3) + -1
        ;
        if (-1 < iVar4) {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0x1cd68) + (longlong)iVar4 * 8);
          do {
            lVar1 = *plVar5;
            if (((*(int *)(lVar1 + 0x10) == (int)param_2) &&
                (*(int *)(lVar1 + 0x1c) == (int)param_3)) &&
               (*(int *)(lVar1 + 0x20) == (int)param_4)) {
              return 0;
            }
            plVar5 = plVar5 + -1;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
        }
      }
      return 1;
    }
  }
  return 0;
}

