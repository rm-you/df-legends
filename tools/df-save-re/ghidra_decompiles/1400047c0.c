// FUN_1400047c0 @ 1400047c0
// callees:


undefined8 FUN_1400047c0(longlong param_1,short param_2,short param_3,short param_4)

{
  if ((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x1160e4))) && (-1 < param_3)) &&
     ((((int)param_3 < *(int *)(param_1 + 0x1160e8) && (-1 < param_4)) &&
      (((int)param_4 < *(int *)(param_1 + 0x1160ec) && (*(longlong *)(param_1 + 0x1160b0) != 0))))))
  {
    return *(undefined8 *)
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8) +
              ((longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8);
  }
  return 0;
}

