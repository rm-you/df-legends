// FUN_14090fef0 @ 14090fef0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14090fa10 FUN_14090fa10


void FUN_14090fef0(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int local_res18 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  if (0x5db < param_4) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0x20,(longlong)local_res18[0]);
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    for (puVar3 = *(undefined8 **)(param_1 + 0x20); puVar3 < puVar1; puVar3 = puVar3 + 1) {
      pvVar2 = operator_new(0x48);
      *(undefined2 *)((longlong)pvVar2 + 8) = 0xffff;
      *(undefined2 *)((longlong)pvVar2 + 10) = 0xffff;
      *(undefined2 *)((longlong)pvVar2 + 0xc) = 0xffff;
      *(undefined4 *)((longlong)pvVar2 + 0x10) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x14) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x18) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x1c) = 0;
      *(undefined4 *)((longlong)pvVar2 + 0x20) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x24) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x28) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x2c) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x34) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x38) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x3c) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x40) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar2 + 0x44) = 0;
      *puVar3 = pvVar2;
      FUN_14090fa10(pvVar2,param_2,param_4);
    }
    FUN_1405bba90(param_2,param_1 + 0x38,4);
  }
  if (0x656 < param_4) {
    FUN_1405bba90(param_2,param_1 + 0x3c,4);
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  return;
}

