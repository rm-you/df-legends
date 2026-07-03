// FUN_140316c50 @ 140316c50
// callees:
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140284650 FUN_140284650
//   -> 140301d00 FUN_140301d00
//   -> 14007bc80 FUN_14007bc80
//   -> 14000bed0 FUN_14000bed0


void FUN_140316c50(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int local_res8 [2];
  int local_res18 [2];
  void *local_res20;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar4 = 2;
  lVar2 = param_1;
  do {
    FUN_1405bb6d0(param_2,lVar2);
    lVar2 = lVar2 + 0x20;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1405bba90(param_2,param_1 + 0x40,2,param_4,uVar7);
  if (param_3 < 0x612) {
    FUN_1405bba90(param_2,local_res18,2,param_4,uVar7);
  }
  FUN_140002380(param_1 + 0x48,param_2);
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0x58,(longlong)local_res8[0]);
  uVar5 = 0;
  uVar3 = uVar5;
  if (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3 != 0) {
    do {
      local_res20 = operator_new(0x88);
      uVar7 = FUN_140284650(local_res20);
      *(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x58)) = uVar7;
      FUN_140301d00(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar5),param_2);
      uVar6 = (int)uVar3 + 1;
      uVar5 = uVar5 + 8;
      uVar3 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3));
  }
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,param_1 + 0x70,4);
  FUN_1405bba90(param_2,param_1 + 0x74,4);
  FUN_1405bba90(param_2,param_1 + 0x78,4);
  FUN_1405bba90(param_2,param_1 + 0x7c,4);
  FUN_1405bba90(param_2,param_1 + 0x84,4);
  FUN_1405bba90(param_2,param_1 + 0x88,2);
  FUN_14007bc80(param_1 + 0x90,param_2);
  FUN_14007bc80(param_1 + 0xa8,param_2);
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  else {
    puVar1 = operator_new(0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(ulonglong **)(param_1 + 0xc0) = puVar1;
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(puVar1,(longlong)local_res18[0]);
    uVar5 = puVar1[1];
    for (uVar3 = *puVar1; uVar3 < uVar5; uVar3 = uVar3 + 2) {
      FUN_1405bba90(param_2,uVar3,2);
    }
  }
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 200) = 0;
  }
  else {
    puVar1 = operator_new(0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(ulonglong **)(param_1 + 200) = puVar1;
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(puVar1,(longlong)local_res18[0]);
    uVar5 = puVar1[1];
    for (uVar3 = *puVar1; uVar3 < uVar5; uVar3 = uVar3 + 2) {
      FUN_1405bba90(param_2,uVar3,2);
    }
  }
  FUN_1405bba90(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  else {
    puVar1 = operator_new(0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(ulonglong **)(param_1 + 0xd0) = puVar1;
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(puVar1,(longlong)local_res18[0]);
    uVar5 = puVar1[1];
    for (uVar3 = *puVar1; uVar3 < uVar5; uVar3 = uVar3 + 2) {
      FUN_1405bba90(param_2,uVar3,2);
    }
  }
  FUN_1405bba90(param_2,param_1 + 0xd8,2);
  FUN_1405bba90(param_2,param_1 + 0xda,2);
  FUN_1405bba90(param_2,param_1 + 0xdc,2);
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_1405bba90(param_2,param_1 + 0xe4,2);
  FUN_1405bba90(param_2,param_1 + 0xe6,2);
  FUN_1405bba90(param_2,param_1 + 0xe8,2);
  return;
}

