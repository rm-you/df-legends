// FUN_14030c2d0 @ 14030c2d0
// callees:
//   -> 140dfb5b4 free


void FUN_14030c2d0(ulonglong *param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  puVar1 = param_1 + 7;
  lVar5 = 0x11;
  do {
    puVar1[-3] = puVar1[-4];
    *puVar1 = puVar1[-1];
    puVar1 = puVar1 + 6;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar3 = (param_1[1] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 == 0) {
    param_1[1] = (ulonglong)puVar2;
  }
  else {
    do {
      free((void *)*puVar2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
    param_1[1] = *param_1;
  }
  return;
}

