// FUN_14007bd20 @ 14007bd20
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630


void FUN_14007bd20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int local_res8 [2];
  
  iVar2 = (int)(param_1[1] - *param_1 >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar1 = 0;
  if (0 < (longlong)iVar2) {
    do {
      FUN_1405bb630(param_2,*(undefined8 *)(*param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < iVar2);
  }
  return;
}

