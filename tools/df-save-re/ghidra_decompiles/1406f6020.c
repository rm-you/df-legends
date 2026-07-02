// FUN_1406f6020 @ 1406f6020
// callees:
//   -> 1400b4c90 FUN_1400b4c90
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_1406f6020(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res18 [2];
  undefined4 *local_res20;
  
  lVar6 = 8;
  lVar5 = 8;
  lVar3 = param_1;
  do {
    FUN_1400b4c90(lVar3,param_2);
    lVar3 = lVar3 + 0x24;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar3 = param_1 + 0x120;
  do {
    FUN_1400b4c90(lVar3,param_2);
    lVar3 = lVar3 + 0x24;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (0x654 < param_3) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0x240,(longlong)local_res18[0]);
    puVar1 = *(undefined8 **)(param_1 + 0x248);
    for (puVar4 = *(undefined8 **)(param_1 + 0x240); puVar4 < puVar1; puVar4 = puVar4 + 1) {
      puVar2 = operator_new(0x3c);
      *puVar2 = 0xffffffff;
      *(undefined8 *)(puVar2 + 1) = 0;
      *(undefined8 *)(puVar2 + 3) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 5) = 0;
      *(undefined8 *)(puVar2 + 7) = 0xffffffffffffffff;
      puVar2[9] = 0xffffffff;
      puVar2[0xc] = 0xffffffff;
      *puVar4 = puVar2;
      local_res20 = puVar2;
      FUN_1400b4c90(puVar2,param_2);
      FUN_1405bba90(param_2,puVar2 + 9,4);
      FUN_1405bba90(param_2,puVar2 + 10,4);
      FUN_1405bba90(param_2,puVar2 + 0xb,4);
      FUN_1405bba90(param_2,puVar2 + 0xc,4);
      FUN_1405bba90(param_2,puVar2 + 0xd,4);
      FUN_1405bba90(param_2,puVar2 + 0xe,4);
    }
  }
  return;
}

