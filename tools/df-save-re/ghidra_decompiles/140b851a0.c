// FUN_140b851a0 @ 140b851a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 140b85550 FUN_140b85550
//   -> 140b856f0 FUN_140b856f0


void FUN_140b851a0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0x70,4);
  if ((*(int *)(param_1 + 8) == 1) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x70))) {
    do {
      FUN_1405bba90(param_2,param_1 + 0xc + (longlong)iVar4 * 4,4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x70));
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x78,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  for (puVar5 = *(undefined8 **)(param_1 + 0x78); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    puVar2 = operator_new(0x40);
    *(undefined8 *)(puVar2 + 0x18) = 0xf;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 0x34) = 0;
    *puVar5 = puVar2;
    FUN_1405bb6d0(param_2,puVar2);
    FUN_1405bba90(param_2,puVar2 + 0x38,4);
    FUN_1405bba90(param_2,puVar2 + 0x34,4);
    iVar4 = 0;
    if (0 < *(int *)(puVar2 + 0x34)) {
      do {
        FUN_1405bba90(param_2,puVar2 + ((longlong)iVar4 + 8) * 4,4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(puVar2 + 0x34));
    }
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x90,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  for (puVar5 = *(undefined8 **)(param_1 + 0x90); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    pvVar3 = operator_new(0x50);
    *(undefined8 *)((longlong)pvVar3 + 0x20) = 0xf;
    *(undefined8 *)((longlong)pvVar3 + 0x18) = 0;
    *(undefined1 *)((longlong)pvVar3 + 8) = 0;
    *(undefined4 *)((longlong)pvVar3 + 0x44) = 0;
    *(undefined8 *)((longlong)pvVar3 + 0x48) = 0xffffffffffffffff;
    *puVar5 = pvVar3;
    FUN_140b85550(pvVar3,param_2);
  }
  FUN_140b856f0(param_1 + 0xa8,param_2);
  return;
}

