// FUN_1401b5700 @ 1401b5700
// callees:


void FUN_1401b5700(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar1 + *param_1) + 0x10))();
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  return;
}

