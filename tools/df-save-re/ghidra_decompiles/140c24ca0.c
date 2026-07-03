// FUN_140c24ca0 @ 140c24ca0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 14000bd10 FUN_14000bd10


void FUN_140c24ca0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,2);
  FUN_140002250(param_2,param_1 + 8);
  puVar4 = (ulonglong *)(param_1 + 0x20);
  lVar3 = 4;
  do {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(puVar4,(longlong)local_res18[0]);
    uVar1 = puVar4[1];
    for (uVar2 = *puVar4; uVar2 < uVar1; uVar2 = uVar2 + 4) {
      FUN_1405bba90(param_2,uVar2,4);
    }
    puVar4 = puVar4 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x88,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x90);
  for (uVar2 = *(ulonglong *)(param_1 + 0x88); uVar2 < uVar1; uVar2 = uVar2 + 4) {
    FUN_1405bba90(param_2,uVar2,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0xa0,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0xa8);
  for (uVar2 = *(ulonglong *)(param_1 + 0xa0); uVar2 < uVar1; uVar2 = uVar2 + 4) {
    FUN_1405bba90(param_2,uVar2,4);
  }
  return;
}

