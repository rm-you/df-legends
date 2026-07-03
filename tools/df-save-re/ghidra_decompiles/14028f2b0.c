// FUN_14028f2b0 @ 14028f2b0
// callees:
//   -> 14000d840 FUN_14000d840


void FUN_14028f2b0(longlong *param_1,short param_2,short param_3,undefined1 *param_4,short *param_5,
                  short *param_6)

{
  short sVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  short sVar7;
  short sVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short sVar12;
  
  *param_4 = 0;
  *param_5 = -1;
  *param_6 = -1;
  if (-1 < param_2) {
    plVar9 = (longlong *)param_1[1];
    param_1 = (longlong *)*param_1;
    uVar11 = (longlong)plVar9 - (longlong)param_1 >> 3;
    if ((((ulonglong)(longlong)param_2 < uVar11) && (-1 < param_3)) &&
       ((ulonglong)(longlong)param_3 < uVar11)) {
      if (param_2 == param_3) {
        *param_4 = 1;
      }
      else if ((*(short *)(param_1[param_3] + 0x40) == param_2) &&
              (cVar5 = FUN_14000d840(param_1[param_3] + 0x48,2), cVar5 != '\0')) {
        *param_4 = 1;
      }
      else {
        bVar4 = false;
        sVar12 = 0;
        sVar8 = sVar12;
        for (plVar6 = param_1; plVar6 < plVar9; plVar6 = plVar6 + 1) {
          sVar7 = 1;
          if ((1 < *(int *)(*plVar6 + 0x50)) &&
             ((*(byte *)(*(longlong *)(*plVar6 + 0x48) + 1) & 4) != 0)) {
            if (sVar8 != -1) {
              sVar1 = *(short *)(param_1[sVar8] + 0x40);
              while( true ) {
                if (((sVar1 == -1) || (lVar2 = param_1[sVar1], *(int *)(lVar2 + 0x50) < 2)) ||
                   ((*(byte *)(*(longlong *)(lVar2 + 0x48) + 1) & 1) == 0)) goto LAB_14028f3ee;
                if (sVar1 == param_3) break;
                sVar1 = *(short *)(lVar2 + 0x40);
                sVar7 = sVar7 + 1;
              }
              if (0 < sVar7) goto LAB_14028f403;
            }
LAB_14028f3ee:
            if (sVar8 == param_3) {
LAB_14028f403:
              bVar4 = true;
              break;
            }
          }
          sVar8 = sVar8 + 1;
        }
        bVar3 = false;
        if (param_3 != -1) {
          do {
            if (bVar3) {
              if (param_3 < 0) {
                return;
              }
              uVar10 = (ulonglong)param_3;
              if ((uVar11 <= uVar10) ||
                 (cVar5 = FUN_14000d840(param_1[uVar10] + 0x48,1), cVar5 == '\0')) {
                if (uVar11 <= uVar10) {
                  return;
                }
                cVar5 = FUN_14000d840(param_1[uVar10] + 0x48,2);
                if (cVar5 == '\0') {
                  return;
                }
              }
            }
            if ((param_3 < 0) ||
               (((uVar10 = (ulonglong)param_3, uVar11 <= uVar10 ||
                 (cVar5 = FUN_14000d840(param_1[uVar10] + 0x48,1), cVar5 == '\0')) &&
                ((uVar11 <= uVar10 ||
                 (cVar5 = FUN_14000d840(param_1[uVar10] + 0x48,2), cVar5 == '\0')))))) {
              if (!bVar3) {
                sVar12 = sVar12 + 1;
              }
            }
            else {
              bVar3 = true;
            }
          } while ((param_3 != param_2) &&
                  (param_3 = *(short *)(param_1[param_3] + 0x40), param_3 != -1));
          if ((0 < sVar12) && (param_3 == param_2)) {
            if (!bVar4) {
              param_6 = param_5;
            }
            *param_6 = sVar12;
          }
        }
      }
    }
  }
  return;
}

