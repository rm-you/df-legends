// FUN_140c4cd40 @ 140c4cd40
// callees:
//   -> 140c4c7b0 FUN_140c4c7b0
//   -> 140c4c950 FUN_140c4c950
//   -> 140c4cb60 FUN_140c4cb60
//   -> 140c4cc50 FUN_140c4cc50


void FUN_140c4cd40(longlong param_1)

{
  FUN_140c4c7b0();
  FUN_140c4c950(param_1);
  if ((*(uint *)(param_1 + 0x118) & 0x100000) != 0) {
    FUN_140c4cb60(param_1);
  }
  if ((*(uint *)(param_1 + 0x118) & 0x80000) != 0) {
    FUN_140c4cc50(param_1);
    return;
  }
  return;
}

