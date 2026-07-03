// FUN_140c0cb20 @ 140c0cb20
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_140c0cb20(ulonglong *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (puVar3 = (undefined8 *)*param_1; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0xc);
    *(undefined4 *)((longlong)pvVar2 + 4) = 0;
    *(undefined4 *)((longlong)pvVar2 + 8) = 0;
    *puVar3 = pvVar2;
    FUN_1405bba90(param_2,pvVar2,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 3,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[4];
  for (puVar3 = (undefined8 *)param_1[3]; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0xc);
    *(undefined4 *)((longlong)pvVar2 + 4) = 0;
    *(undefined4 *)((longlong)pvVar2 + 8) = 0;
    *puVar3 = pvVar2;
    FUN_1405bba90(param_2,pvVar2,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 6,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[7];
  for (puVar3 = (undefined8 *)param_1[6]; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0xc);
    *(undefined4 *)((longlong)pvVar2 + 4) = 0;
    *(undefined4 *)((longlong)pvVar2 + 8) = 0;
    *puVar3 = pvVar2;
    FUN_1405bba90(param_2,pvVar2,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 9,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[10];
  for (puVar3 = (undefined8 *)param_1[9]; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0xc);
    *(undefined4 *)((longlong)pvVar2 + 4) = 0;
    *(undefined4 *)((longlong)pvVar2 + 8) = 0;
    *puVar3 = pvVar2;
    FUN_1405bba90(param_2,pvVar2,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
    FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
  }
  return;
}

