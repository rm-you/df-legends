// FUN_140d3c620 @ 140d3c620
// callees:
//   -> 140050b50 FUN_140050b50


void FUN_140d3c620(longlong param_1,undefined4 param_2,short param_3,short param_4,short param_5)

{
  uint *puVar1;
  
  if (((((-1 < param_3) && ((int)param_3 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_4)) &&
      (((int)param_4 < *(int *)(param_1 + 0x1160e8) && (-1 < param_5)))) &&
     (((int)param_5 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (puVar1 = *(uint **)(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_3 >> 4) * 8) +
                             ((longlong)param_4 >> 4) * 8) + (longlong)param_5 * 8),
       puVar1 != (uint *)0x0)))))) {
    FUN_140050b50(param_2,puVar1 + 0x14);
    *puVar1 = *puVar1 | 2;
    puVar1 = (uint *)(DAT_141d6cf68 + (longlong)(short)puVar1[0x23] * 4);
    *puVar1 = *puVar1 | 5;
  }
  return;
}

