// FUN_140301790 @ 140301790
// callees:
//   -> 1408ffbb0 FUN_1408ffbb0


void FUN_140301790(ulonglong *param_1,undefined8 param_2)

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
      FUN_1408ffbb0(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

