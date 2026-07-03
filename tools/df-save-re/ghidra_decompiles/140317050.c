// FUN_140317050 @ 140317050
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403168a0 FUN_1403168a0
//   -> 140316500 FUN_140316500
//   -> 1400020a0 FUN_1400020a0
//   -> 1400021b0 FUN_1400021b0
//   -> 140300f60 FUN_140300f60
//   -> 1402bb9a0 FUN_1402bb9a0
//   -> 140002ca0 FUN_140002ca0


void FUN_140317050(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined4 local_res8 [2];
  
  local_res8[0] = (undefined4)(param_1[1] - *param_1 >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar4 = 0;
  uVar1 = uVar4;
  uVar7 = uVar4;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      FUN_1403168a0(*(undefined8 *)(uVar1 + *param_1),param_2);
      uVar3 = (int)uVar7 + 1;
      uVar1 = uVar1 + 8;
      uVar7 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  local_res8[0] = (undefined4)(param_1[4] - param_1[3] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar1 = uVar4;
  uVar7 = uVar4;
  if (param_1[4] - param_1[3] >> 3 != 0) {
    do {
      FUN_140316500(*(undefined8 *)(uVar1 + param_1[3]),param_2);
      uVar3 = (int)uVar7 + 1;
      uVar1 = uVar1 + 8;
      uVar7 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[4] - param_1[3] >> 3));
  }
  local_res8[0] = (undefined4)param_1[0xc];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400020a0(param_2,param_1 + 0xd);
  FUN_1400020a0(param_2,param_1 + 0x10);
  FUN_1400021b0(param_2,param_1 + 0x13);
  FUN_1400021b0(param_2,param_1 + 0x16);
  FUN_1400021b0(param_2,param_1 + 0x19);
  FUN_1400020a0(param_2,param_1 + 0x2c);
  FUN_1400021b0(param_2,param_1 + 0x2f);
  local_res8[0] = (undefined4)param_1[0x32];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x194);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)param_1[0x33];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x19c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(param_1[7] - param_1[6] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)param_1[6];
  uVar1 = (param_1[7] - (longlong)puVar2) + 7U >> 3;
  if ((undefined8 *)param_1[7] < puVar2) {
    uVar1 = uVar4;
  }
  uVar7 = uVar4;
  if (uVar1 != 0) {
    do {
      puVar5 = (undefined4 *)*puVar2;
      local_res8[0] = *puVar5;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_140300f60(puVar5 + 2,param_2);
      uVar7 = uVar7 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar7 < uVar1);
  }
  local_res8[0] = (undefined4)(param_1[10] - param_1[9] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)param_1[9];
  uVar1 = (param_1[10] - (longlong)puVar2) + 7U >> 3;
  if ((undefined8 *)param_1[10] < puVar2) {
    uVar1 = uVar4;
  }
  if (uVar1 != 0) {
    do {
      FUN_1402bb9a0(*puVar2,param_2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar1);
  }
  local_res8[0] = (undefined4)param_1[0x1c];
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar5 = (undefined4 *)((longlong)param_1 + 0x1b4);
  lVar6 = 5;
  puVar8 = (ulonglong *)(param_1 + 0x1d);
  do {
    local_res8[0] = (undefined4)((longlong)(puVar8[1] - *puVar8) >> 3);
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar2 = (undefined8 *)*puVar8;
    uVar7 = 0;
    uVar1 = (puVar8[1] - (longlong)puVar2) + 7 >> 3;
    if ((undefined8 *)puVar8[1] < puVar2) {
      uVar1 = uVar7;
    }
    if (uVar1 != 0) {
      do {
        FUN_140002ca0(*puVar2,param_2);
        uVar7 = uVar7 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar7 < uVar1);
    }
    local_res8[0] = puVar5[-5];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = *puVar5;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

