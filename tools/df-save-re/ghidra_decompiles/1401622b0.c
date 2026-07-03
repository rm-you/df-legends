// FUN_1401622b0 @ 1401622b0
// callees:


ulonglong FUN_1401622b0(longlong param_1,short param_2,ushort param_3)

{
  ulonglong in_RAX;
  
  if (-1 < param_2) {
    in_RAX = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
    if (((ulonglong)(longlong)param_2 < in_RAX) && (in_RAX = 0, param_3 < 0x87)) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),
                      *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8) +
                        0x24f0 + (longlong)(short)param_3 * 0x20) != 0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

