// FUN_140bacac0 @ 140bacac0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140bacac0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char local_res18 [16];
  
  lVar3 = param_1 + 0x180;
  lVar2 = 0x30;
  do {
    FUN_1405bba90(param_2,lVar3 + -0x180,4);
    FUN_1405bba90(param_2,lVar3 + -0xc0,4);
    FUN_1405bba90(param_2,lVar3,4);
    FUN_1405bba90(param_2,lVar3 + 0xc0,4);
    lVar3 = lVar3 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1405bba90(param_2,param_1 + 0x300,4);
  FUN_1405bba90(param_2,param_1 + 0x304,4);
  FUN_1405bba90(param_2,param_1 + 0x308,4);
  FUN_1405bba90(param_2,param_1 + 0x30c,4);
  FUN_1405bba90(param_2,param_1 + 0x310,4);
  FUN_1405bba90(param_2,param_1 + 0x314,4);
  FUN_1405bba90(param_2,param_1 + 0x318,4);
  FUN_1405bba90(param_2,param_1 + 0x31c,4);
  FUN_1405bba90(param_2,param_1 + 800,4);
  FUN_1405bba90(param_2,param_1 + 0x324,4);
  FUN_1405bba90(param_2,param_1 + 0x328,4);
  FUN_1405bba90(param_2,param_1 + 0x32c,4);
  FUN_1405bba90(param_2,param_1 + 0x330,4);
  FUN_1405bba90(param_2,param_1 + 0x334,4);
  cVar1 = FUN_1405bba90(param_2,local_res18,1);
  if (cVar1 != '\0') {
    *(bool *)(param_1 + 0x358) = local_res18[0] != '\0';
  }
  cVar1 = FUN_1405bba90(param_2,local_res18,1);
  if (cVar1 != '\0') {
    *(bool *)(param_1 + 0x359) = local_res18[0] != '\0';
  }
  FUN_1405bba90(param_2,param_1 + 0x35c,4);
  FUN_1405bba90(param_2,param_1 + 0x360,1);
  FUN_1405bba90(param_2,param_1 + 0x361,1);
  FUN_1405bba90(param_2,param_1 + 0x362,1);
  FUN_1405bba90(param_2,param_1 + 0x363,1);
  cVar1 = FUN_1405bba90(param_2,local_res18,1);
  if (cVar1 != '\0') {
    *(bool *)(param_1 + 0x364) = local_res18[0] != '\0';
  }
  cVar1 = FUN_1405bba90(param_2,local_res18,1);
  if (cVar1 != '\0') {
    *(bool *)(param_1 + 0x365) = local_res18[0] != '\0';
  }
  if (0x69b < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x368,4);
    FUN_1405bba90(param_2,param_1 + 0x36c,4);
  }
  return;
}

