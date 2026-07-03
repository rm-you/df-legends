// FUN_14000c1f0 @ 14000c1f0
// callees:
//   -> 14000c9f0 FUN_14000c9f0


void FUN_14000c1f0(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  
  if (*param_2 == '\0') {
    FUN_14000c9f0(param_1,param_2,0);
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_2[lVar1] != '\0');
  FUN_14000c9f0();
  return;
}

