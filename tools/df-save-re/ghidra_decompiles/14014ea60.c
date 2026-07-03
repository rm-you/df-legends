// FUN_14014ea60 @ 14014ea60
// callees:
//   -> 1407f2a40 FUN_1407f2a40


undefined4 FUN_14014ea60(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x10) & 0x20000000) == 0) {
    FUN_1407f2a40();
    return *(undefined4 *)(param_1 + 0x70);
  }
  return *(undefined4 *)(param_1 + 0x70);
}

