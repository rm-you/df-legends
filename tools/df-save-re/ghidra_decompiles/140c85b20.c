// FUN_140c85b20 @ 140c85b20
// callees:
//   -> 140c88550 FUN_140c88550


undefined8 FUN_140c85b20(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0xd60) == 0) {
    if ((*(int *)(param_1 + 0x1260) < 8) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 7) & 4) == 0)) {
      if (((*(uint *)(param_1 + 0x810) & 0x2000000) == 0) &&
         ((*(uint *)(param_1 + 0x80c) & 0x2000000) != 0)) {
        return 1;
      }
    }
    else if ((*(uint *)(param_1 + 0x810) & 0x2000000) == 0) {
      return 1;
    }
  }
  cVar1 = FUN_140c88550();
  if (((cVar1 != '\0') && ((*(uint *)(param_1 + 0x118) >> 10 & 1) == 0)) &&
     (*(int *)(param_1 + 0x3a4) != -1)) {
    return 1;
  }
  return 0;
}

