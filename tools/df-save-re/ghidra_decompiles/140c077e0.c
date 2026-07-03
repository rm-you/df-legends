// FUN_140c077e0 @ 140c077e0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140c0bac0 FUN_140c0bac0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140c0bdb0 FUN_140c0bdb0
//   -> 14000bd10 FUN_14000bd10


void FUN_140c077e0(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int local_res18 [2];
  undefined4 *local_res20;
  int local_48 [4];
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,2);
  FUN_1405bba90(param_2,param_1 + 0x42,2);
  FUN_1405bba90(param_2,param_1 + 0x44,2);
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  FUN_1405bba90(param_2,param_1 + 0x4c,4);
  FUN_1405bba90(param_2,param_1 + 0x50,4);
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 != '\0') {
    plVar8 = (longlong *)FUN_140c0bac0(param_2);
    *(longlong **)(param_1 + 0x58) = plVar8;
    (**(code **)(*plVar8 + 0x10))(plVar8,param_2,param_3);
  }
  FUN_1405bba90(param_2,local_48,4);
  FUN_14000b9d0(param_1 + 0x20,(longlong)local_48[0]);
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  for (puVar9 = *(undefined8 **)(param_1 + 0x20); puVar9 < puVar6; puVar9 = puVar9 + 1) {
    local_res20 = operator_new(0x2c);
    *(undefined8 *)(local_res20 + 1) = 0xffffffffffffffff;
    *(undefined8 *)(local_res20 + 3) = 0xffffffffffffffff;
    puVar1 = local_res20 + 1;
    *(undefined8 *)(local_res20 + 5) = 0xffffffffffffffff;
    *(undefined8 *)(local_res20 + 7) = 0xffffffffffffffff;
    *(undefined8 *)(local_res20 + 9) = 0xffffffffffffffff;
    *local_res20 = 0;
    *puVar9 = local_res20;
    FUN_1405bba90(param_2,local_res20,4);
    FUN_140c0bdb0(puVar1,param_2);
  }
  FUN_1405bba90(param_2,local_48,4);
  FUN_14000b9d0(param_1 + 0x60,(longlong)local_48[0]);
  puVar6 = *(undefined8 **)(param_1 + 0x68);
  for (puVar9 = *(undefined8 **)(param_1 + 0x60); puVar9 < puVar6; puVar9 = puVar9 + 1) {
    local_res20 = operator_new(0x18);
    local_res20[4] = 0;
    local_res20[5] = 0;
    puVar1 = local_res20 + 4;
    *local_res20 = 0xffffffff;
    puVar2 = local_res20 + 5;
    local_res20[1] = 0xffffffff;
    puVar3 = local_res20 + 1;
    local_res20[2] = 0xffffffff;
    puVar4 = local_res20 + 2;
    local_res20[3] = 0xffffffff;
    puVar5 = local_res20 + 3;
    *puVar9 = local_res20;
    FUN_1405bba90(param_2,local_res20,4);
    FUN_1405bba90(param_2,puVar3,4);
    FUN_1405bba90(param_2,puVar4,4);
    FUN_1405bba90(param_2,puVar5,4);
    FUN_1405bba90(param_2,puVar1,4);
    FUN_1405bba90(param_2,puVar2,4);
    param_3 = local_res18[0];
  }
  FUN_1405bba90(param_2,param_1 + 0x78,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x80,(longlong)local_res18[0]);
  uVar7 = *(ulonglong *)(param_1 + 0x88);
  for (uVar10 = *(ulonglong *)(param_1 + 0x80); uVar10 < uVar7; uVar10 = uVar10 + 4) {
    FUN_1405bba90(param_2,uVar10,4);
  }
  if (0x5ea < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x98,4);
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0xa0,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0xa8);
    for (uVar10 = *(ulonglong *)(param_1 + 0xa0); uVar10 < uVar7; uVar10 = uVar10 + 4) {
      FUN_1405bba90(param_2,uVar10,4);
    }
  }
  if (0x67f < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xb8,4);
    FUN_1405bba90(param_2,param_1 + 0xbc,4);
  }
  if (0x685 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xc0,4);
  }
  return;
}

