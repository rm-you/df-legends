// FUN_140bad070 @ 140bad070
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140bad070(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  
  lVar3 = 0x30;
  lVar2 = param_1;
  local_res18[0] = param_3;
  do {
    FUN_1405bba90(param_2,lVar2,4);
    FUN_1405bba90(param_2,lVar2 + 0xc0,4);
    lVar2 = lVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_1405bba90(param_2,param_1 + 0x180,4);
  FUN_1405bba90(param_2,param_1 + 0x184,4);
  FUN_1405bba90(param_2,param_1 + 0x188,4);
  FUN_1405bba90(param_2,param_1 + 0x18c,4);
  cVar1 = FUN_1405bba90(param_2,local_res18,1);
  if (cVar1 != '\0') {
    *(bool *)(param_1 + 0x1b8) = (char)local_res18[0] != '\0';
  }
  FUN_1405bba90(param_2,param_1 + 0x1b9,1);
  FUN_1405bba90(param_2,param_1 + 0x1ba,1);
  FUN_1405bba90(param_2,param_1 + 0x1bb,1);
  FUN_1405bba90(param_2,param_1 + 0x1bc,1);
  FUN_1405bba90(param_2,param_1 + 0x1be,2);
  FUN_1405bba90(param_2,param_1 + 400,4);
  return;
}

