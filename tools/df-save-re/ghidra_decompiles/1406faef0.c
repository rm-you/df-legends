// FUN_1406faef0 @ 1406faef0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 1406f57a0 FUN_1406f57a0


void FUN_1406faef0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pvVar2 = operator_new(0xc);
      *(void **)(param_1 + 0x10) = pvVar2;
      FUN_1405bba90(param_2,pvVar2,4);
      FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
      lVar3 = (longlong)pvVar2 + 8;
      goto LAB_1406fafa6;
    }
    if (iVar1 == 2) {
      pvVar2 = operator_new(0x38);
      *(undefined4 *)((longlong)pvVar2 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 8) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0xc) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x28) = 0xffffffff;
      *(void **)(param_1 + 0x10) = pvVar2;
      FUN_1406f57a0(pvVar2,param_2,param_3);
      FUN_1405bba90(param_2,(longlong)pvVar2 + 0x2c,4);
      FUN_1405bba90(param_2,(longlong)pvVar2 + 0x30,4);
      lVar3 = (longlong)pvVar2 + 0x34;
      goto LAB_1406fafa6;
    }
    if (iVar1 != 3) {
      return;
    }
  }
  pvVar2 = operator_new(0x10);
  *(void **)(param_1 + 0x10) = pvVar2;
  FUN_1405bba90(param_2,pvVar2,4);
  FUN_1405bba90(param_2,(longlong)pvVar2 + 4,4);
  FUN_1405bba90(param_2,(longlong)pvVar2 + 8,4);
  lVar3 = (longlong)pvVar2 + 0xc;
LAB_1406fafa6:
  FUN_1405bba90(param_2,lVar3,4);
  return;
}

