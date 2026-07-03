// FUN_140c4cd90 @ 140c4cd90
// callees:
//   -> 14000f360 FUN_14000f360


undefined8 FUN_140c4cd90(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 10) && (*(int *)(param_1 + 0x3a4 + (longlong)(int)param_2 * 4) != -1)) {
    uVar1 = FUN_14000f360(&DAT_141c66fd0);
    return uVar1;
  }
  return 0;
}

