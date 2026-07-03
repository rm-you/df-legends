// FUN_140b164d0 @ 140b164d0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140b1c360 FUN_140b1c360


void FUN_140b164d0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  short sVar2;
  ulonglong uVar3;
  short local_res8 [4];
  
  FUN_1405bba90(param_2,local_res8,2);
  FUN_14000b9d0(param_1,(longlong)local_res8[0]);
  uVar3 = 0;
  sVar2 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      pvVar1 = operator_new(0x49e0);
      *(undefined8 *)((longlong)pvVar1 + 0x12e8) = 0;
      *(undefined2 *)((longlong)pvVar1 + 0x12f0) = 0;
      _eh_vector_constructor_iterator_
                ((void *)((longlong)pvVar1 + 0x22d8),0x18,0x100,FUN_1400025a0,FUN_1400030c0);
      *(void **)(*param_1 + uVar3 * 8) = pvVar1;
      FUN_140b1c360(*(undefined8 *)(*param_1 + uVar3 * 8),param_2,param_3);
      sVar2 = sVar2 + 1;
      uVar3 = (ulonglong)sVar2;
    } while (uVar3 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  FUN_1405bba90(param_2,param_1 + 3,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x24,4);
  FUN_1405bba90(param_2,param_1 + 5,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2a,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2c,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2e,2);
  return;
}

