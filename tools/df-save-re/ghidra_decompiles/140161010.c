// FUN_140161010 @ 140161010
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140161010(undefined8 param_1,int *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res10 [2];
  
  local_res10[0] = param_2[2] - *param_2;
  FUN_1405bb7c0(param_1,local_res10,4);
  puVar1 = *(undefined1 **)param_2;
  uVar3 = 0;
  uVar2 = (longlong)*(undefined1 **)(param_2 + 2) - (longlong)puVar1;
  if (*(undefined1 **)(param_2 + 2) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,*puVar1);
      FUN_1405bb7c0(param_1,local_res10,1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

