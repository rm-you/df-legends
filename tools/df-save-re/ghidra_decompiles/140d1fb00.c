// FUN_140d1fb00 @ 140d1fb00
// callees:
//   -> 140dfb5b4 free


void FUN_140d1fb00(ulonglong *param_1)

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
  if (uVar2 == 0) {
    param_1[1] = (ulonglong)puVar1;
  }
  else {
    do {
      free((void *)*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
    param_1[1] = *param_1;
  }
  return;
}

