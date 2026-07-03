// FUN_140bad6e0 @ 140bad6e0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 140002fc0 FUN_140002fc0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140c0bdb0 FUN_140c0bdb0
//   -> 14000bd10 FUN_14000bd10


void FUN_140bad6e0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1 + 0x2c,4);
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_140002250(param_2,param_1 + 0x60);
  FUN_140002250(param_2,param_1 + 0x78);
  FUN_140002fc0(param_1 + 0xa8,param_2);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 0xd8,(longlong)local_res20[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  for (puVar4 = *(undefined8 **)(param_1 + 0xd8); puVar4 < puVar1; puVar4 = puVar4 + 1) {
    puVar3 = operator_new(0x2c);
    *(undefined8 *)(puVar3 + 1) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 3) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 5) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 7) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 9) = 0xffffffffffffffff;
    *puVar3 = 0;
    *puVar4 = puVar3;
    FUN_1405bba90(param_2,puVar3,4,param_4,puVar3);
    FUN_140c0bdb0(puVar3 + 1,param_2);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 0xf0,(longlong)local_res20[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  for (puVar4 = *(undefined8 **)(param_1 + 0xf0); puVar4 < puVar1; puVar4 = puVar4 + 1) {
    puVar3 = operator_new(0x18);
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[1] = 0xffffffff;
    *puVar3 = 0xffffffff;
    puVar3[2] = 0xffffffff;
    puVar3[3] = 0xffffffff;
    *puVar4 = puVar3;
    FUN_1405bba90(param_2,puVar3,4,param_4,puVar3);
    FUN_1405bba90(param_2,puVar3 + 1,4);
    FUN_1405bba90(param_2,puVar3 + 2,4);
    FUN_1405bba90(param_2,puVar3 + 3,4);
    FUN_1405bba90(param_2,puVar3 + 4,4);
    FUN_1405bba90(param_2,puVar3 + 5,4);
    param_3 = local_res18[0];
  }
  iVar6 = 0;
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x108,(longlong)local_res18[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x110);
  for (uVar5 = *(ulonglong *)(param_1 + 0x108); uVar5 < uVar2; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x1e8,4);
  if (0 < *(int *)(param_1 + 0x1e8)) {
    do {
      FUN_1405bba90(param_2,(longlong)iVar6 * 4 + 0x120 + param_1,4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x1e8));
  }
  FUN_1405bba90(param_2,param_1 + 0x1ec,4);
  FUN_1405bba90(param_2,param_1 + 0x1f0,4);
  if (0x684 < param_3) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x90,(longlong)local_res18[0]);
    uVar2 = *(ulonglong *)(param_1 + 0x98);
    for (uVar5 = *(ulonglong *)(param_1 + 0x90); uVar5 < uVar2; uVar5 = uVar5 + 4) {
      FUN_1405bba90(param_2,uVar5,4);
    }
  }
  return;
}

