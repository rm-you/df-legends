// FUN_140a5e100 @ 140a5e100
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140a5e100(ulonglong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = 0;
  uVar2 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      free((void *)*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  param_1[1] = *param_1;
  uVar2 = *param_1;
  if (uVar2 != 0) {
    FUN_140002020(uVar2,(longlong)(param_1[2] - uVar2) >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

