// FUN_1407d58e0 @ 1407d58e0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140010bc0 FUN_140010bc0


void FUN_1407d58e0(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = (undefined8 *)*param_1;
  uVar3 = 0;
  uVar2 = (ulonglong)((longlong)param_1[1] + (7 - (longlong)puVar1)) >> 3;
  if ((undefined8 *)param_1[1] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_140010bc0(*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

