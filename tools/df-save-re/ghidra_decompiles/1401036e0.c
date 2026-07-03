// FUN_1401036e0 @ 1401036e0
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 14000bc60 FUN_14000bc60


void FUN_1401036e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  
  *param_2 = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  param_2[3] = param_2[2];
  if (param_3 != 0) {
    *(undefined4 *)param_2 = *(undefined4 *)(param_3 + 0xc10);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_3 + 0xc10);
    lVar1 = FUN_140ca8390(param_3);
    if (lVar1 != 0) {
      lVar1 = FUN_1407ad250(lVar1);
      if (lVar1 != 0) {
        FUN_14000bc60(param_2 + 2,lVar1);
        return;
      }
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0xc10);
  }
  return;
}

