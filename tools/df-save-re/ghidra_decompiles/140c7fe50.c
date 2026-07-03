// FUN_140c7fe50 @ 140c7fe50
// callees:


void FUN_140c7fe50(longlong param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = *(int *)(param_1 + 0x654) - *(int *)(param_1 + 0x664);
  lVar8 = *(longlong *)(param_1 + 0x8c8);
  iVar6 = iVar7;
  if (lVar8 != 0) {
    iVar6 = (*(int *)(lVar8 + 0x10) * iVar7) / 100 + *(int *)(lVar8 + 0x28);
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (*(int *)(param_1 + 0x1360) == iVar6) {
    return;
  }
  if (lVar8 != 0) {
    iVar7 = (*(int *)(lVar8 + 0x10) * iVar7) / 100 + *(int *)(lVar8 + 0x28);
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  iVar6 = (int)(*(longlong *)(*(longlong *)(param_1 + 0x5d8) + 0x70) -
                *(longlong *)(*(longlong *)(param_1 + 0x5d8) + 0x68) >> 1) + -1;
  lVar8 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      plVar4 = *(longlong **)(param_1 + 0x5d8);
      iVar6 = *(int *)(*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*plVar4 + (longlong)*(short *)(plVar4[0xd] + lVar8 * 2) * 8) + 0x58) +
                        (longlong)*(short *)(plVar4[0x10] + lVar8 * 2) * 8) + 0x3c);
      *(int *)(*(longlong *)(param_1 + 0x1348) + lVar8 * 4) = iVar6;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1348) + lVar8 * 4);
      if (0 < *(int *)(*(longlong *)(param_1 + 0x1348) + lVar8 * 4)) {
        if (iVar7 < 1) {
          *piVar1 = iVar6 * 100;
        }
        else {
          *piVar1 = (iVar6 * 1000) / iVar7;
          if (*(int *)(*(longlong *)(param_1 + 0x1348) + lVar8 * 4) < 1) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x1348) + lVar8 * 4) = 1;
          }
          if (iVar6 * 100 < *(int *)(*(longlong *)(param_1 + 0x1348) + lVar8 * 4)) {
            *(int *)(*(longlong *)(param_1 + 0x1348) + lVar8 * 4) = iVar6 * 100;
          }
        }
      }
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  sVar2 = *(short *)(param_1 + 0xa4);
  sVar3 = *(short *)(param_1 + 300);
  if (((-1 < sVar2) &&
      ((ulonglong)(longlong)sVar2 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (-1 < sVar3)) {
    lVar8 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar2 * 8);
    if (((ulonglong)(longlong)sVar3 <
         (ulonglong)(*(longlong *)(lVar8 + 0x180) - *(longlong *)(lVar8 + 0x178) >> 3)) &&
       (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x178) + (longlong)sVar3 * 8), lVar8 != 0)) {
      iVar6 = *(int *)(lVar8 + 0x3bc8);
      *(int *)(param_1 + 0x1364) = iVar6;
      if (0 < iVar6) {
        if (iVar7 < 1) {
          *(int *)(param_1 + 0x1364) = iVar6 * 100;
        }
        else {
          iVar5 = (iVar6 * 1000) / iVar7;
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          *(int *)(param_1 + 0x1364) = iVar5;
          if (iVar6 * 100 < iVar5) {
            *(int *)(param_1 + 0x1364) = iVar6 * 100;
          }
        }
      }
      iVar6 = *(int *)(lVar8 + 0x3c38);
      *(int *)(param_1 + 0x1368) = iVar6;
      if (0 < iVar6) {
        if (iVar7 < 1) {
          *(int *)(param_1 + 0x1360) = iVar7;
          *(int *)(param_1 + 0x1368) = iVar6 * 100;
          return;
        }
        iVar5 = (iVar6 * 1000) / iVar7;
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        *(int *)(param_1 + 0x1368) = iVar5;
        if (iVar6 * 100 < iVar5) {
          *(int *)(param_1 + 0x1368) = iVar6 * 100;
          *(int *)(param_1 + 0x1360) = iVar7;
          return;
        }
      }
      goto LAB_140c800be;
    }
  }
  *(undefined8 *)(param_1 + 0x1364) = 0;
LAB_140c800be:
  *(int *)(param_1 + 0x1360) = iVar7;
  return;
}

