// FUN_140b84640 @ 140b84640
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140b84a80 FUN_140b84a80
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 140002250 FUN_140002250


void FUN_140b84640(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int local_res18 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar3 = *(undefined8 **)(param_1 + 8); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    puVar2 = operator_new(0x50);
    *(undefined8 *)(puVar2 + 0x18) = 0xf;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined4 *)(puVar2 + 0x48) = 0;
    *puVar3 = puVar2;
    FUN_140b84a80(puVar2,param_2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x20,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  for (puVar3 = *(undefined8 **)(param_1 + 0x20); puVar3 < puVar1; puVar3 = puVar3 + 1) {
    puVar2 = operator_new(0x58);
    *(undefined8 *)(puVar2 + 0x18) = 0xf;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined4 *)(puVar2 + 0x50) = 0;
    *puVar3 = puVar2;
    FUN_1405bb6d0(param_2,puVar2);
    FUN_140002250(param_2,puVar2 + 0x20);
    FUN_140002250(param_2,puVar2 + 0x38);
    FUN_1405bba90(param_2,puVar2 + 0x50,4);
  }
  return;
}

