// FUN_14029a480 @ 14029a480
// callees:
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14007b720 FUN_14007b720
//   -> 14000d7e0 FUN_14000d7e0
//   -> 1400b4080 FUN_1400b4080


void FUN_14029a480(longlong param_1,short param_2,short param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  if (((-1 < param_2) &&
      ((ulonglong)(longlong)param_2 <
       (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) &&
     (-1 < param_3)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8);
    if ((ulonglong)(longlong)param_3 <
        (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_3 * 8);
      iVar3 = *(int *)(lVar1 + 0x40a8);
      lVar5 = *(longlong *)(lVar1 + 0x40b8) - *(longlong *)(lVar1 + 0x40b0) >> 1;
      if (iVar3 < 10000) {
        if ((lVar5 != 0) && (0 < iVar3)) {
          iVar3 = FUN_14000d7e0((*(int *)(lVar1 + 0x40ac) - iVar3) + 1);
          for (iVar3 = iVar3 + *(int *)(lVar1 + 0x40a8); 0 < iVar3; iVar3 = iVar3 + -1) {
            iVar4 = FUN_1400b4080(lVar1 + 0x40c8);
            FUN_14007b720(*(undefined2 *)(*(longlong *)(lVar1 + 0x40b0) + (longlong)iVar4 * 2),
                          param_4);
          }
        }
      }
      else if (lVar5 != 0) {
        do {
          if ((param_4[1] - *param_4 & 0xfffffffffffffffeU) != 0) {
            return;
          }
          puVar6 = *(undefined2 **)(lVar1 + 0x40b0);
          piVar9 = *(int **)(lVar1 + 0x40c8);
          uVar7 = (ulonglong)((longlong)*(undefined2 **)(lVar1 + 0x40b8) + (1 - (longlong)puVar6))
                  >> 1;
          if (*(undefined2 **)(lVar1 + 0x40b8) < puVar6) {
            uVar7 = 0;
          }
          uVar8 = 0;
          if (uVar7 != 0) {
            do {
              uVar2 = FUN_1409fc0c0();
              if ((int)((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / 0x147ae15) < *piVar9) {
                FUN_14007b720(*puVar6,param_4);
              }
              piVar9 = piVar9 + 1;
              puVar6 = puVar6 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
        } while (*(longlong *)(lVar1 + 0x40b8) - *(longlong *)(lVar1 + 0x40b0) >> 1 != 0);
      }
    }
  }
  return;
}

