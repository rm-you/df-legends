// FUN_1407ab160 @ 1407ab160
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_1407ab160(ulonglong *param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar2 = (undefined8 *)*param_1;
  uVar3 = 0;
  uVar4 = (param_1[1] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      pvVar1 = operator_new(8);
      *puVar2 = pvVar1;
      FUN_1405bba90(param_2,pvVar1,4);
      FUN_1405bba90(param_2,(longlong)pvVar1 + 4,4);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar4);
  }
  FUN_1405bba90(param_2,param_1 + 3,4);
  return;
}

