// FUN_140758120 @ 140758120
// callees:
//   -> 140758670 FUN_140758670


void FUN_140758120(longlong param_1,short param_2,short param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 100) = 0;
  if (((-1 < param_2) &&
      (uVar5 = (ulonglong)param_3, uVar5 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (lVar2 = *(longlong *)(DAT_141d6dd50 + (longlong)param_2 * 8),
     uVar5 < (ulonglong)(*(longlong *)(lVar2 + 0x180) - *(longlong *)(lVar2 + 0x178) >> 3))) {
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x178) + uVar5 * 8);
    plVar1 = (longlong *)(lVar2 + 0x17a0);
    if ((plVar1 != (longlong *)0x0) &&
       (iVar3 = (int)(*(longlong *)(lVar2 + 0x17a8) - *plVar1 >> 1) + -1, lVar4 = (longlong)iVar3,
       -1 < iVar3)) {
      do {
        FUN_140758670(param_1,*(undefined2 *)(*plVar1 + lVar4 * 2),
                      *(undefined4 *)(*(longlong *)(lVar2 + 0x17b8) + lVar4 * 4),1000000000);
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
  }
  return;
}

