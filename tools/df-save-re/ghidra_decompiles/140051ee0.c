// FUN_140051ee0 @ 140051ee0
// callees:


undefined8 FUN_140051ee0(longlong param_1,short param_2)

{
  if ((-1 < param_2) &&
     ((ulonglong)(longlong)param_2 <
      (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8);
  }
  return 0;
}

