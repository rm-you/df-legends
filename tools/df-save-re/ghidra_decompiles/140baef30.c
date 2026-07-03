// FUN_140baef30 @ 140baef30
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1406f57a0 FUN_1406f57a0


void FUN_140baef30(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1,(longlong)local_res8[0]);
  puVar1 = (undefined8 *)param_1[1];
  for (puVar3 = (undefined8 *)*param_1; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0x2c);
    *(undefined4 *)((longlong)pvVar2 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar2 + 8) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0xc) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)pvVar2 + 0x28) = 0xffffffff;
    *puVar3 = pvVar2;
    FUN_1406f57a0(pvVar2,param_2,param_3);
  }
  return;
}

