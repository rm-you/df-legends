// FUN_140304710 @ 140304710
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140304710(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_res18 [2];
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      local_res18[0] = **(undefined4 **)(uVar1 + *param_1);
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  return;
}

