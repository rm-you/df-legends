// FUN_1402cbba0 @ 1402cbba0
// callees:


void FUN_1402cbba0(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  
  puVar2 = (undefined1 *)*param_1;
  uVar1 = 0;
  uVar3 = (longlong)param_1[1] - (longlong)puVar2;
  if ((undefined1 *)param_1[1] < puVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    do {
      uVar1 = uVar1 + 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (uVar1 < uVar3);
  }
  return;
}

