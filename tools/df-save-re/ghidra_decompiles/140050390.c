// FUN_140050390 @ 140050390
// callees:
//   -> 14000c780 FUN_14000c780


undefined1 * FUN_140050390(undefined1 *param_1,char *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (*param_2 != '\0') {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (param_2[lVar1] != '\0');
  }
  FUN_14000c780();
  return param_1;
}

