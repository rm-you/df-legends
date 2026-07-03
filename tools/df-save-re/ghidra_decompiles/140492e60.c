// FUN_140492e60 @ 140492e60
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1400026e0 FUN_1400026e0
//   -> 140492b30 FUN_140492b30


void FUN_140492e60(ulonglong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,4,param_4,0xfffffffffffffffe);
  FUN_14000b9d0(param_1,(longlong)local_res18[0]);
  puVar1 = (undefined8 *)param_1[1];
  iVar4 = 0;
  for (puVar3 = (undefined8 *)*param_1; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    pvVar2 = operator_new(0xc0);
    FUN_1400026e0((longlong)pvVar2 + 0x10);
    *(undefined8 *)((longlong)pvVar2 + 0xa0) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0xa8) = 0;
    *(undefined8 *)((longlong)pvVar2 + 0xb0) = 0;
    *(undefined4 *)((longlong)pvVar2 + 4) = 0;
    *(undefined8 *)((longlong)pvVar2 + 8) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)pvVar2 + 0x94) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)pvVar2 + 0xb8) = 0;
    *puVar3 = pvVar2;
    FUN_140492b30(pvVar2,param_2);
  }
  FUN_1405bba90(param_2,param_1 + 3,4,param_4,uVar5);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x44,4);
  if (0 < *(int *)((longlong)param_1 + 0x44)) {
    do {
      FUN_1405bba90(param_2,(longlong)param_1 + ((longlong)iVar4 + 7) * 4,4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((longlong)param_1 + 0x44));
  }
  return;
}

