// FUN_140019d50 @ 140019d50
// callees:


ulonglong FUN_140019d50(longlong param_1,short param_2)

{
  if (DAT_1410b67dc == 0) {
    return CONCAT71((int7)(char)((ushort)param_2 >> 8),
                    (*(byte *)(param_1 + (longlong)param_2 * 4) & 0x70) != 0);
  }
  return (ulonglong)(*(byte *)(param_1 + (longlong)param_2 * 4) >> 3 & 1);
}

