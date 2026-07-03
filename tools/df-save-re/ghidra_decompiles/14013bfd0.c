// FUN_14013bfd0 @ 14013bfd0
// callees:


ulonglong FUN_14013bfd0(longlong param_1,short param_2,short param_3,short param_4)

{
  ulonglong in_RAX;
  
  if (((((-1 < param_2) &&
        (in_RAX = (ulonglong)(uint)(int)param_2, (int)param_2 < *(int *)(param_1 + 0x1160e4))) &&
       (-1 < param_3)) &&
      ((in_RAX = (ulonglong)(uint)(int)param_3, (int)param_3 < *(int *)(param_1 + 0x1160e8) &&
       (-1 < param_4)))) &&
     ((in_RAX = (ulonglong)(uint)(int)param_4, (int)param_4 < *(int *)(param_1 + 0x1160ec) &&
      ((*(longlong *)(param_1 + 0x1160b0) != 0 &&
       (in_RAX = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x1160b0) + ((longlong)param_2 >> 4) * 8) +
                  ((longlong)param_3 >> 4) * 8), *(longlong *)(in_RAX + (longlong)param_4 * 8) != 0)
       ))))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}

