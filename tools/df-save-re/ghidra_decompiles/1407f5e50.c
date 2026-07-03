// FUN_1407f5e50 @ 1407f5e50
// callees:
//   -> 1407f4830 FUN_1407f4830
//   -> 14083b320 FUN_14083b320
//   -> 1400b3c20 FUN_1400b3c20


void FUN_1407f5e50(longlong param_1)

{
  FUN_1407f4830();
  FUN_14083b320(param_1,&DAT_141c67c68);
  FUN_14083b320(param_1,&DAT_141c67d70);
  if ((*(uint *)(param_1 + 0x10) & 0x2000) != 0) {
    FUN_1400b3c20(param_1,&DAT_141c676b0);
    return;
  }
  FUN_1400b3c20(param_1,&DAT_141c67578);
  FUN_1400b3c20(param_1,&DAT_141c675d8);
  FUN_1400b3c20(param_1,&DAT_141c67698);
  return;
}

