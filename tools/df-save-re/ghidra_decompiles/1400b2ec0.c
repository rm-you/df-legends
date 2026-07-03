// FUN_1400b2ec0 @ 1400b2ec0
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 140051a50 FUN_140051a50


void FUN_1400b2ec0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar3 = (longlong)(uVar1 - uVar2) >> 2;
  if (param_2 < uVar3) {
    param_1[1] = uVar1 + (param_2 - uVar3) * 4;
  }
  else if (uVar3 < param_2) {
    if ((param_3 < uVar1) && (uVar2 <= param_3)) {
      FUN_14000c390(param_1,param_2 - uVar3);
      param_3 = *param_1 + ((longlong)(param_3 - uVar2) >> 2) * 4;
    }
    else {
      FUN_14000c390(param_1,param_2 - uVar3);
    }
    FUN_140051a50(param_1[1],param_2 - ((longlong)(param_1[1] - *param_1) >> 2),param_3);
    param_1[1] = param_1[1] + (param_2 - ((longlong)(param_1[1] - *param_1) >> 2)) * 4;
  }
  return;
}

