// FUN_140304610 @ 140304610
// callees:
//   -> 140c15430 FUN_140c15430


void FUN_140304610(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    lVar2 = 0;
    do {
      FUN_140c15430(*(undefined8 *)(lVar2 + *param_1),param_2);
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  return;
}

