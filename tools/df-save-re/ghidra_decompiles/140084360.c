// FUN_140084360 @ 140084360
// callees:
//   -> 140083d80 FUN_140083d80
//   -> 140315ac0 FUN_140315ac0
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 14000bd10 FUN_14000bd10


void FUN_140084360(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_res18 [2];
  
  FUN_140083d80();
  FUN_140315ac0(param_1 + 0x60,param_2);
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  FUN_1405bba90(param_2,param_1 + 0xdc,4);
  FUN_1405bba90(param_2,param_1 + 0xe0,4);
  FUN_1405bba90(param_2,param_1 + 0xe4,4);
  FUN_1405bba90(param_2,param_1 + 0xe8,2);
  FUN_1405bba90(param_2,param_1 + 0xea,2);
  plVar1 = (longlong *)(param_1 + 0x120);
  FUN_140002250(param_2,plVar1);
  uVar6 = 0;
  plVar2 = (longlong *)(param_1 + 0x138);
  if (param_3 < 0x670) {
    FUN_14000bd10(plVar2,*(longlong *)(param_1 + 0x128) - *plVar1 >> 2);
    puVar4 = (undefined4 *)*plVar2;
    uVar7 = (*(longlong *)(param_1 + 0x140) - (longlong)puVar4) + 3U >> 2;
    if (*(undefined4 **)(param_1 + 0x140) < puVar4) {
      uVar7 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar7 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar7);
    }
  }
  else {
    FUN_140002250(param_2,plVar2);
  }
  if ((param_3 < 0x670) &&
     ((ulonglong)(*(longlong *)(param_1 + 0x140) - *plVar2 >> 2) <
      (ulonglong)(*(longlong *)(param_1 + 0x128) - *plVar1 >> 2))) {
    FUN_14000bd10(plVar2,*(longlong *)(param_1 + 0x128) - *plVar1 >> 2);
    puVar4 = (undefined4 *)*plVar2;
    uVar7 = (*(longlong *)(param_1 + 0x140) - (longlong)puVar4) + 3U >> 2;
    if (*(undefined4 **)(param_1 + 0x140) < puVar4) {
      uVar7 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar7 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar7);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x150);
  FUN_140002250(param_2,plVar1);
  puVar3 = (ulonglong *)(param_1 + 0x168);
  if (param_3 < 0x670) {
    FUN_14000bd10(puVar3,*(longlong *)(param_1 + 0x158) - *plVar1 >> 2);
    puVar4 = (undefined4 *)*puVar3;
    uVar7 = (*(longlong *)(param_1 + 0x170) - (longlong)puVar4) + 3U >> 2;
    if (*(undefined4 **)(param_1 + 0x170) < puVar4) {
      uVar7 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar7 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar7);
    }
  }
  else {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(puVar3,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x170);
    for (uVar5 = *puVar3; uVar5 < uVar7; uVar5 = uVar5 + 4) {
      FUN_1405bba90(param_2,uVar5,4);
    }
  }
  if ((param_3 < 0x670) &&
     ((ulonglong)((longlong)(*(longlong *)(param_1 + 0x170) - *puVar3) >> 2) <
      (ulonglong)(*(longlong *)(param_1 + 0x158) - *plVar1 >> 2))) {
    FUN_14000bd10(puVar3,*(longlong *)(param_1 + 0x158) - *plVar1 >> 2);
    puVar4 = (undefined4 *)*puVar3;
    uVar7 = (*(longlong *)(param_1 + 0x170) - (longlong)puVar4) + 3U >> 2;
    if (*(undefined4 **)(param_1 + 0x170) < puVar4) {
      uVar7 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar7 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar7);
    }
  }
  FUN_140002250(param_2,param_1 + 0x180);
  FUN_140002250(param_2,param_1 + 0xf0);
  FUN_140002250(param_2,param_1 + 0x108);
  FUN_140002250(param_2,param_1 + 0x1d8);
  FUN_140002250(param_2,param_1 + 0x1f0);
  FUN_140002250(param_2,param_1 + 0x208);
  FUN_140002250(param_2,param_1 + 0x220);
  FUN_140002250(param_2,param_1 + 0x238);
  if (param_3 < 0x66e) {
    FUN_14000bd10(param_1 + 0x250,
                  *(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238) >> 2);
    puVar4 = *(undefined4 **)(param_1 + 0x250);
    uVar7 = (ulonglong)((longlong)*(undefined4 **)(param_1 + 600) + (3 - (longlong)puVar4)) >> 2;
    if (*(undefined4 **)(param_1 + 600) < puVar4) {
      uVar7 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar7 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar7);
    }
  }
  else {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x250,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 600);
    for (uVar5 = *(ulonglong *)(param_1 + 0x250); uVar5 < uVar7; uVar5 = uVar5 + 4) {
      FUN_1405bba90(param_2,uVar5,4);
    }
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x268,(longlong)local_res18[0]);
  uVar7 = *(ulonglong *)(param_1 + 0x270);
  for (uVar5 = *(ulonglong *)(param_1 + 0x268); uVar5 < uVar7; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x280,(longlong)local_res18[0]);
  uVar7 = *(ulonglong *)(param_1 + 0x288);
  for (uVar5 = *(ulonglong *)(param_1 + 0x280); uVar5 < uVar7; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x298,(longlong)local_res18[0]);
  uVar7 = *(ulonglong *)(param_1 + 0x2a0);
  for (uVar5 = *(ulonglong *)(param_1 + 0x298); uVar5 < uVar7; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x2b0,(longlong)local_res18[0]);
  uVar7 = *(ulonglong *)(param_1 + 0x2b8);
  for (uVar5 = *(ulonglong *)(param_1 + 0x2b0); uVar5 < uVar7; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x2c8,(longlong)local_res18[0]);
  uVar7 = *(ulonglong *)(param_1 + 0x2d0);
  for (uVar5 = *(ulonglong *)(param_1 + 0x2c8); uVar5 < uVar7; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  if (param_3 < 0x66e) {
    FUN_14000bd10(param_1 + 0x2e0,
                  *(longlong *)(param_1 + 0x2d0) - *(longlong *)(param_1 + 0x2c8) >> 2);
    puVar4 = *(undefined4 **)(param_1 + 0x2e0);
    uVar7 = (ulonglong)((longlong)*(undefined4 **)(param_1 + 0x2e8) + (3 - (longlong)puVar4)) >> 2;
    if (*(undefined4 **)(param_1 + 0x2e8) < puVar4) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar6 < uVar7);
    }
  }
  else {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x2e0,(longlong)local_res18[0]);
    uVar6 = *(ulonglong *)(param_1 + 0x2e8);
    for (uVar7 = *(ulonglong *)(param_1 + 0x2e0); uVar7 < uVar6; uVar7 = uVar7 + 4) {
      FUN_1405bba90(param_2,uVar7,4);
    }
  }
  FUN_1405bba90(param_2,param_1 + 0x2f8,2);
  if (0x66f < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x198,4);
    FUN_1405bba90(param_2,param_1 + 0x19c,4);
    FUN_1405bba90(param_2,param_1 + 0x1a0,4);
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x1a8,(longlong)local_res18[0]);
    uVar6 = *(ulonglong *)(param_1 + 0x1b0);
    for (uVar7 = *(ulonglong *)(param_1 + 0x1a8); uVar7 < uVar6; uVar7 = uVar7 + 4) {
      FUN_1405bba90(param_2,uVar7,4);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x1c0,(longlong)local_res18[0]);
    uVar6 = *(ulonglong *)(param_1 + 0x1c8);
    for (uVar7 = *(ulonglong *)(param_1 + 0x1c0); uVar7 < uVar6; uVar7 = uVar7 + 4) {
      FUN_1405bba90(param_2,uVar7,4);
    }
  }
  return;
}

