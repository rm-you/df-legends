// FUN_14098d760 @ 14098d760
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14048c3e0 FUN_14048c3e0
//   -> 14098cba0 FUN_14098cba0
//   -> 14000bd10 FUN_14000bd10


void FUN_14098d760(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 0x8c,4);
  FUN_140315ac0(param_1 + 8,param_2);
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,param_1 + 0x84,4);
  if (0x5ef < param_4) {
    FUN_1405bba90(param_2,param_1 + 0x88,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x90,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  for (puVar5 = *(undefined8 **)(param_1 + 0x90); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    pvVar3 = operator_new(0x198);
    uVar4 = FUN_14048c3e0(pvVar3);
    *puVar5 = uVar4;
    FUN_14098cba0(uVar4,param_2);
  }
  FUN_1405bba90(param_2,param_1 + 0xa8,4);
  FUN_1405bba90(param_2,param_1 + 0xac,4);
  FUN_1405bba90(param_2,param_1 + 0xb0,4);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0xb8,(longlong)local_res20[0]);
  uVar2 = *(ulonglong *)(param_1 + 0xc0);
  for (uVar6 = *(ulonglong *)(param_1 + 0xb8); uVar6 < uVar2; uVar6 = uVar6 + 4) {
    FUN_1405bba90(param_2,uVar6,4);
  }
  FUN_1405bba90(param_2,param_1 + 0xd0,4);
  FUN_1405bba90(param_2,param_1 + 0xd4,4);
  if (0x5ef < param_4) {
    FUN_1405bba90(param_2,param_1 + 0xd8,4);
  }
  FUN_1405bba90(param_2,param_1 + 0xdc,4);
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_1405bba90(param_2,param_1 + 0xe4,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xe8,(longlong)local_res18[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  for (puVar5 = *(undefined8 **)(param_1 + 0xe8); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    pvVar3 = operator_new(0xc);
    *(undefined4 *)((longlong)pvVar3 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar3 + 8) = 0xffffffff;
    *puVar5 = pvVar3;
    FUN_1405bba90(param_2,pvVar3,4);
    FUN_1405bba90(param_2,(longlong)pvVar3 + 4,4);
    FUN_1405bba90(param_2,(longlong)pvVar3 + 8,4);
  }
  return;
}

