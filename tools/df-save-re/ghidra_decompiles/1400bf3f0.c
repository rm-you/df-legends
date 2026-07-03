// FUN_1400bf3f0 @ 1400bf3f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1400befd0 FUN_1400befd0
//   -> 14000bd10 FUN_14000bd10


void FUN_1400bf3f0(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res18[0]);
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar4 = 0;
  uVar3 = (*(longlong *)(param_1 + 0x10) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x10) < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      puVar1 = operator_new(0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar2 = puVar1;
      FUN_1400befd0(puVar1,param_2,param_4);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0x20,(longlong)local_res20[0]);
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  for (uVar4 = *(ulonglong *)(param_1 + 0x20); uVar4 < uVar3; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0x38,(longlong)local_res20[0]);
  uVar3 = *(ulonglong *)(param_1 + 0x40);
  for (uVar4 = *(ulonglong *)(param_1 + 0x38); uVar4 < uVar3; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  if (0x624 < param_4) {
    param_1 = param_1 + 0x50;
    lVar5 = 0x40;
    do {
      FUN_1405bba90(param_2,param_1,4);
      param_1 = param_1 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

