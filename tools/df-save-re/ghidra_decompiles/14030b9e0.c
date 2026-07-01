// FUN_14030b9e0 @ 14030b9e0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000bd10 FUN_14000bd10


void FUN_14030b9e0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int local_res18 [2];
  int local_res20 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar4 = (ulonglong *)(param_1 + 0x3f08);
  lVar3 = 0x150;
  local_res18[0] = param_3;
  do {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(puVar4 + -0x7e1,(longlong)local_res18[0]);
    uVar1 = puVar4[-0x7e0];
    for (uVar2 = puVar4[-0x7e1]; uVar2 < uVar1; uVar2 = uVar2 + 4) {
      FUN_1405bba90(param_2,uVar2,4);
    }
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000bd10(puVar4 + -0x3f1,(longlong)local_res20[0]);
    uVar1 = puVar4[-0x3f0];
    for (uVar2 = puVar4[-0x3f1]; uVar2 < uVar1; uVar2 = uVar2 + 4) {
      FUN_1405bba90(param_2,uVar2,4);
    }
    FUN_1405bba90(param_2,&local_28,4);
    FUN_14000bd10(puVar4 + -1,(longlong)local_28);
    uVar1 = *puVar4;
    for (uVar2 = puVar4[-1]; uVar2 < uVar1; uVar2 = uVar2 + 4) {
      FUN_1405bba90(param_2,uVar2,4);
    }
    FUN_1405bba90(param_2,&local_24,4);
    FUN_14000bd10(puVar4 + 0x3ef,(longlong)local_24);
    uVar1 = puVar4[0x3f0];
    for (uVar2 = puVar4[0x3ef]; uVar2 < uVar1; uVar2 = uVar2 + 4) {
      FUN_1405bba90(param_2,uVar2,4);
    }
    FUN_1405bba90(param_2,&local_20,4);
    FUN_14000bd10(puVar4 + 0x7df,(longlong)local_20);
    uVar1 = puVar4[0x7e0];
    for (uVar2 = puVar4[0x7df]; uVar2 < uVar1; uVar2 = uVar2 + 4) {
      FUN_1405bba90(param_2,uVar2,4);
    }
    FUN_1405bba90(param_2,&local_1c,4);
    FUN_14000bd10(puVar4 + 0xbcf,(longlong)local_1c);
    uVar1 = puVar4[0xbd0];
    for (uVar2 = puVar4[0xbcf]; uVar2 < uVar1; uVar2 = uVar2 + 4) {
      FUN_1405bba90(param_2,uVar2,4);
    }
    puVar4 = puVar4 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

