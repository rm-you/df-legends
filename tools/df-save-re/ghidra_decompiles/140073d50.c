// FUN_140073d50 @ 140073d50
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140073d50(ulonglong *param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar3 = (param_1[1] - (longlong)puVar1) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      free((void *)*puVar1);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 < uVar3);
  }
  param_1[1] = *param_1;
  uVar3 = param_1[0xb];
  if (uVar3 != 0) {
    FUN_140002020(uVar3,(longlong)(param_1[0xd] - uVar3) >> 2,4);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puVar2 = param_1 + 5;
  if (0xf < param_1[8]) {
    FUN_140002020(*puVar2,param_1[8] + 1,1);
  }
  param_1[8] = 0xf;
  param_1[7] = 0;
  if (0xf < param_1[8]) {
    puVar2 = (ulonglong *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  uVar3 = *param_1;
  if (uVar3 != 0) {
    FUN_140002020(uVar3,(longlong)(param_1[2] - uVar3) >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

