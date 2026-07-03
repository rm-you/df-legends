// FUN_1402cbac0 @ 1402cbac0
// callees:
//   -> 14000bae0 FUN_14000bae0


void FUN_1402cbac0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong local_res8 [4];
  
  plVar1 = (longlong *)*param_2;
  while( true ) {
    if ((longlong *)param_2[1] <= plVar1) {
      local_res8[0] = param_1;
      FUN_14000bae0(param_2,local_res8);
      return;
    }
    if (*plVar1 == param_1) break;
    plVar1 = plVar1 + 1;
  }
  return;
}

