// FUN_140525f70 @ 140525f70
// callees:
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380
//   -> 140002250 FUN_140002250
//   -> 14007bc80 FUN_14007bc80
//   -> 14000bd10 FUN_14000bd10
//   -> 14000bed0 FUN_14000bed0


void FUN_140525f70(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int local_res18 [4];
  
  FUN_1405bb6d0(param_2,param_1);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_140002380(param_1 + 0x28,param_2);
  FUN_140002250(param_2,param_1 + 0x38);
  FUN_14007bc80(param_1 + 0x50,param_2);
  FUN_140002250(param_2,param_1 + 0x68);
  FUN_14007bc80(param_1 + 0x80,param_2);
  lVar2 = param_1 + 0x98;
  lVar4 = 0xf;
  do {
    FUN_1405bb6d0(param_2,lVar2);
    lVar2 = lVar2 + 0x20;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1405bba90(param_2,param_1 + 0x278,2);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x280,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x288);
  for (uVar3 = *(ulonglong *)(param_1 + 0x280); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x298,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x2a0);
  for (uVar3 = *(ulonglong *)(param_1 + 0x298); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bed0(param_1 + 0x2b0,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x2b8);
  for (uVar3 = *(ulonglong *)(param_1 + 0x2b0); uVar3 < uVar1; uVar3 = uVar3 + 2) {
    FUN_1405bba90(param_2,uVar3,2);
  }
  FUN_1405bba90(param_2,param_1 + 0x2c8,2);
  FUN_1405bba90(param_2,param_1 + 0x2ca,2);
  FUN_1405bba90(param_2,param_1 + 0x2cc,2);
  FUN_1405bba90(param_2,param_1 + 0x2d0,4);
  FUN_1405bba90(param_2,param_1 + 0x2d4,4);
  FUN_1405bba90(param_2,param_1 + 0x2d8,2);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x2e0,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x2e8);
  for (uVar3 = *(ulonglong *)(param_1 + 0x2e0); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x2f8,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x300);
  for (uVar3 = *(ulonglong *)(param_1 + 0x2f8); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x310,(longlong)local_res18[0]);
  uVar1 = *(ulonglong *)(param_1 + 0x318);
  for (uVar3 = *(ulonglong *)(param_1 + 0x310); uVar3 < uVar1; uVar3 = uVar3 + 4) {
    FUN_1405bba90(param_2,uVar3,4);
  }
  lVar2 = param_1 + 0x328;
  if (param_3 < 0x65a) {
    lVar4 = 0x19;
    do {
      FUN_1405bba90(param_2,lVar2,1);
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  else {
    lVar4 = 0x2a;
    do {
      FUN_1405bba90(param_2,lVar2,1);
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_1405bba90(param_2,param_1 + 0x352,2);
  FUN_1405bba90(param_2,param_1 + 0x354,2);
  FUN_1405bba90(param_2,param_1 + 0x356,2);
  FUN_1405bba90(param_2,param_1 + 0x358,4);
  FUN_1405bba90(param_2,param_1 + 0x35c,4);
  FUN_1405bba90(param_2,param_1 + 0x360,4);
  FUN_1405bba90(param_2,param_1 + 0x364,4);
  lVar2 = param_1 + 0x368;
  lVar4 = 4;
  do {
    FUN_1405bba90(param_2,lVar2,4);
    lVar2 = lVar2 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1405bba90(param_2,param_1 + 0x378,4);
  FUN_1405bba90(param_2,param_1 + 0x37c,4);
  return;
}

