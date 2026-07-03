// FUN_140912b10 @ 140912b10
// callees:
//   -> 14029a650 FUN_14029a650
//   -> 140910cc0 FUN_140910cc0
//   -> 14029a480 FUN_14029a480


void FUN_140912b10(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  FUN_14029a650(&DAT_141d6dd30,param_2,param_3,param_1 + 0x80);
  FUN_140910cc0(param_1,param_2 & 0xffff,param_3 & 0xffff);
  FUN_14029a480(&DAT_141d6dd30,param_2 & 0xffff,param_3 & 0xffff,param_1 + 0x108);
  return;
}

