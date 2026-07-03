// FUN_140c25870 @ 140c25870
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1400032c0 FUN_1400032c0
//   -> 14000bd10 FUN_14000bd10
//   -> 14000bed0 FUN_14000bed0
//   -> 1407efe20 FUN_1407efe20


void FUN_140c25870(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,2);
  lVar2 = param_1 + 0xc;
  lVar4 = 6;
  do {
    FUN_1400032c0(lVar2,param_2);
    lVar2 = lVar2 + 0x1c;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1405bba90(param_2,param_1 + 0xb4,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0xb8,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0xc0);
  for (uVar3 = *(ulonglong *)(param_1 + 0xb8); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0xd0,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0xd8);
  for (uVar3 = *(ulonglong *)(param_1 + 0xd0); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,param_1 + 0xe8,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bed0(param_1 + 0xf0,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0xf8);
  for (uVar3 = *(ulonglong *)(param_1 + 0xf0); uVar3 < uVar1; uVar3 = uVar3 + 2) {
    FUN_1405bba90(param_2,uVar3,2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x108,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x110);
  for (uVar3 = *(ulonglong *)(param_1 + 0x108); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x120,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x128);
  for (uVar3 = *(ulonglong *)(param_1 + 0x120); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x138,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x140);
  for (uVar3 = *(ulonglong *)(param_1 + 0x138); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x150,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x158);
  for (uVar3 = *(ulonglong *)(param_1 + 0x150); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1407efe20(param_1 + 0x168,param_2);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x188,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 400);
  for (uVar3 = *(ulonglong *)(param_1 + 0x188); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x1a0,4);
  FUN_1405bba90(param_2,param_1 + 0x1a4,4);
  return;
}

