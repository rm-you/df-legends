// FUN_14000c210 @ 14000c210
// callees:
//   -> 14000c780 FUN_14000c780


void FUN_14000c210(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  
  if (*param_2 == '\0') {
    FUN_14000c780(param_1,param_2,0);
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_2[lVar1] != '\0');
  FUN_14000c780();
  return;
}

