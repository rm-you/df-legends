// FUN_140317400 @ 140317400
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140316c50 FUN_140316c50
//   -> 140284330 FUN_140284330
//   -> 1403166f0 FUN_1403166f0
//   -> 14000bed0 FUN_14000bed0
//   -> 14000bd10 FUN_14000bd10
//   -> 1402809b0 FUN_1402809b0
//   -> 140301160 FUN_140301160
//   -> 1402bbad0 FUN_1402bbad0
//   -> 1402cae10 FUN_1402cae10
//   -> 140002d90 FUN_140002d90


void FUN_140317400(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int local_res20 [2];
  undefined2 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1,(longlong)local_res20[0]);
  uVar8 = 0;
  uVar6 = uVar8;
  uVar12 = uVar8;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      puVar2 = operator_new(0xf0);
      local_48 = puVar2;
      _eh_vector_constructor_iterator_(puVar2,0x20,2,FUN_14000c2b0,FUN_14000c260);
      *(undefined4 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x24) = 0;
      *(undefined8 *)(puVar2 + 0x2c) = 0;
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined8 *)(puVar2 + 0x34) = 0;
      *(undefined8 *)(puVar2 + 0x48) = 0;
      *(undefined8 *)(puVar2 + 0x4c) = 0;
      *(undefined8 *)(puVar2 + 0x50) = 0;
      *(undefined8 *)(puVar2 + 0x54) = 0;
      *(undefined8 *)(puVar2 + 0x58) = 0;
      *(undefined8 *)(puVar2 + 0x5c) = 0;
      *(undefined8 *)(puVar2 + 0x60) = 0;
      *(undefined8 *)(puVar2 + 100) = 0;
      *(undefined8 *)(puVar2 + 0x68) = 0;
      *(undefined4 *)(puVar2 + 0x76) = 0xffffffff;
      *(undefined2 **)(uVar6 + *param_1) = puVar2;
      FUN_140316c50(*(undefined8 *)(uVar6 + *param_1),param_2,param_3);
      uVar11 = (int)uVar12 + 1;
      uVar6 = uVar6 + 8;
      uVar12 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 3,(longlong)local_res20[0]);
  uVar6 = uVar8;
  if (param_1[4] - param_1[3] >> 3 != 0) {
    do {
      local_48 = operator_new(0x1c0);
      uVar3 = FUN_140284330(local_48);
      *(undefined8 *)(uVar8 + param_1[3]) = uVar3;
      FUN_1403166f0(*(undefined8 *)(param_1[3] + uVar8),param_2);
      uVar11 = (int)uVar6 + 1;
      uVar8 = uVar8 + 8;
      uVar6 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(param_1[4] - param_1[3] >> 3));
  }
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bed0(param_1 + 0xd,(longlong)(int)local_48);
  uVar8 = param_1[0xe];
  for (uVar6 = param_1[0xd]; uVar6 < uVar8; uVar6 = uVar6 + 2) {
    FUN_1405bba90(param_2,uVar6,2);
  }
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bed0(param_1 + 0x10,(longlong)(int)local_48);
  uVar8 = param_1[0x11];
  for (uVar6 = param_1[0x10]; uVar6 < uVar8; uVar6 = uVar6 + 2) {
    FUN_1405bba90(param_2,uVar6,2);
  }
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bd10(param_1 + 0x13,(longlong)(int)local_48);
  uVar8 = param_1[0x14];
  for (uVar6 = param_1[0x13]; uVar6 < uVar8; uVar6 = uVar6 + 4) {
    FUN_1405bba90(param_2,uVar6,4);
  }
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bd10(param_1 + 0x16,(longlong)(int)local_48);
  uVar8 = param_1[0x17];
  for (uVar6 = param_1[0x16]; uVar6 < uVar8; uVar6 = uVar6 + 4) {
    FUN_1405bba90(param_2,uVar6,4);
  }
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bd10(param_1 + 0x19,(longlong)(int)local_48);
  uVar8 = param_1[0x1a];
  for (uVar6 = param_1[0x19]; uVar6 < uVar8; uVar6 = uVar6 + 4) {
    FUN_1405bba90(param_2,uVar6,4);
  }
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bed0(param_1 + 0x2c,(longlong)(int)local_48);
  uVar8 = param_1[0x2d];
  for (uVar6 = param_1[0x2c]; uVar6 < uVar8; uVar6 = uVar6 + 2) {
    FUN_1405bba90(param_2,uVar6,2);
  }
  FUN_1405bba90(param_2,&local_48,4);
  FUN_14000bd10(param_1 + 0x2f,(longlong)(int)local_48);
  uVar8 = param_1[0x30];
  for (uVar6 = param_1[0x2f]; uVar6 < uVar8; uVar6 = uVar6 + 4) {
    FUN_1405bba90(param_2,uVar6,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x32,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x194,4);
  FUN_1405bba90(param_2,param_1 + 0x33,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x19c,4);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 6,(longlong)local_res20[0]);
  puVar1 = (undefined8 *)param_1[7];
  for (puVar7 = (undefined8 *)param_1[6]; puVar7 < puVar1; puVar7 = puVar7 + 1) {
    puVar4 = operator_new(0x2f0);
    puVar2 = puVar4 + 4;
    local_48 = puVar4;
    FUN_1402809b0(puVar2);
    *puVar7 = puVar4;
    FUN_1405bba90(param_2);
    FUN_140301160(puVar2,param_2);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 9,(longlong)local_res20[0]);
  puVar1 = (undefined8 *)param_1[10];
  for (puVar7 = (undefined8 *)param_1[9]; puVar7 < puVar1; puVar7 = puVar7 + 1) {
    local_48 = operator_new(0xe0);
    *(undefined8 *)(local_48 + 0x10) = 0xf;
    *(undefined8 *)(local_48 + 0xc) = 0;
    *(undefined1 *)(local_48 + 4) = 0;
    *(undefined8 *)(local_48 + 0x24) = 0xf;
    *(undefined8 *)(local_48 + 0x20) = 0;
    *(undefined1 *)(local_48 + 0x18) = 0;
    *(undefined8 *)(local_48 + 0x34) = 0xf;
    *(undefined8 *)(local_48 + 0x30) = 0;
    *(undefined1 *)(local_48 + 0x28) = 0;
    *(undefined8 *)(local_48 + 0x44) = 0xf;
    *(undefined8 *)(local_48 + 0x40) = 0;
    *(undefined1 *)(local_48 + 0x38) = 0;
    *(undefined8 *)(local_48 + 0x54) = 0xf;
    *(undefined8 *)(local_48 + 0x50) = 0;
    *(undefined1 *)(local_48 + 0x48) = 0;
    *(undefined8 *)(local_48 + 100) = 0xf;
    *(undefined8 *)(local_48 + 0x60) = 0;
    *(undefined1 *)(local_48 + 0x58) = 0;
    *local_48 = 0xffff;
    *(undefined4 *)(local_48 + 0x14) = 0xffffffff;
    local_48[0x68] = 0xffff;
    local_48[0x69] = 0xffff;
    local_48[0x6a] = 0xffff;
    *(undefined4 *)(local_48 + 0x6c) = 0xffffffff;
    *(undefined4 *)(local_48 + 0x6e) = 0;
    *puVar7 = local_48;
    FUN_1402bbad0(local_48,param_2);
  }
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  plVar13 = param_1 + 0x1e;
  lVar10 = (longlong)param_1 + 0x1b4;
  param_1 = param_1 + 0x1d;
  lVar9 = 5;
  do {
    FUN_1405bba90(param_2,local_res20,4);
    FUN_1402cae10(param_1,(longlong)local_res20[0]);
    puVar1 = (undefined8 *)*plVar13;
    for (puVar7 = (undefined8 *)plVar13[-1]; puVar7 < puVar1; puVar7 = puVar7 + 1) {
      puVar5 = operator_new(0x20);
      *puVar5 = 0xffffffff;
      *(undefined8 *)(puVar5 + 1) = 900;
      *(undefined8 *)(puVar5 + 5) = 0;
      puVar5[7] = 0;
      *puVar7 = puVar5;
      FUN_140002d90(puVar5,param_2);
    }
    FUN_1405bba90(param_2,lVar10 + -0x14,4);
    FUN_1405bba90(param_2,lVar10,4);
    lVar10 = lVar10 + 4;
    param_1 = param_1 + 3;
    plVar13 = plVar13 + 3;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}

