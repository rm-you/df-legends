// FUN_1403029d0 @ 1403029d0
// callees:
//   -> 1407d45d0 FUN_1407d45d0


void FUN_1403029d0(ulonglong *param_1,undefined8 param_2)

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
      FUN_1407d45d0(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

