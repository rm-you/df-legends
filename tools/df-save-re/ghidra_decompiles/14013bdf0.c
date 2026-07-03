// thunk_FUN_140827eb0 @ 14013bdf0
// callees:


void thunk_FUN_140827eb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int aiStackX_8 [2];
  void *pvStackX_20;
  
  FUN_140315dd0();
  FUN_1405bba90(param_2,param_1 + 0xb0,2);
  FUN_1405bba90(param_2,param_1 + 0xbc,2);
  FUN_1405bba90(param_2,param_1 + 0xc0,2);
  FUN_1405bba90(param_2,param_1 + 0xc2,2);
  FUN_1405bba90(param_2,param_1 + 0xbe,1);
  FUN_1405bba90(param_2,param_1 + 0xb4,4);
  FUN_1405bba90(param_2,param_1 + 0xb8,4);
  FUN_1405bba90(param_2,param_1 + 0xc4,4);
  FUN_1405bba90(param_2,param_1 + 200,1);
  FUN_1405bba90(param_2,aiStackX_8,4);
  plVar1 = (longlong *)(param_1 + 0xd0);
  FUN_14000b9d0(plVar1,(longlong)aiStackX_8[0]);
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(param_1 + 0xd8) - *plVar1 >> 3 != 0) {
    do {
      pvStackX_20 = operator_new(0x60);
      *(undefined8 *)((longlong)pvStackX_20 + 8) = 0;
      *(undefined8 *)((longlong)pvStackX_20 + 0x10) = 0;
      *(undefined8 *)((longlong)pvStackX_20 + 0x18) = 0;
      *(undefined4 *)((longlong)pvStackX_20 + 0x20) = 0;
      *(undefined8 *)((longlong)pvStackX_20 + 0x24) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)pvStackX_20 + 0x2c) = 0;
      *(undefined4 *)((longlong)pvStackX_20 + 0x30) = 0xffffffff;
      *(undefined8 *)((longlong)pvStackX_20 + 0x34) = 0;
      *(undefined8 *)((longlong)pvStackX_20 + 0x3c) = 0;
      *(undefined8 *)((longlong)pvStackX_20 + 0x44) = 0;
      *(undefined8 *)((longlong)pvStackX_20 + 0x58) = 0;
      *(undefined8 *)((longlong)pvStackX_20 + 0x50) = 0;
      *(void **)(uVar2 + *plVar1) = pvStackX_20;
      FUN_140cafb70(*(undefined8 *)(*plVar1 + uVar2),param_2,param_3);
      uVar2 = uVar2 + 8;
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0xd8) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,param_1 + 0x110,4);
  lVar3 = param_1 + 0xe8;
  lVar5 = 10;
  do {
    FUN_1405bba90(param_2,lVar3,4);
    lVar3 = lVar3 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x118,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x120);
  for (uVar4 = *(ulonglong *)(param_1 + 0x118); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x130,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x138);
  for (uVar4 = *(ulonglong *)(param_1 + 0x130); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x148,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x150);
  for (uVar4 = *(ulonglong *)(param_1 + 0x148); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  lVar3 = param_1 + 0x1f0;
  lVar5 = 6;
  do {
    FUN_1405bba90(param_2,lVar3 + -0x18,4);
    FUN_1405bba90(param_2,lVar3,4);
    lVar3 = lVar3 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FUN_1405bba90(param_2,param_1 + 0x208,4);
  FUN_1405bba90(param_2,param_1 + 0x20c,4);
  FUN_1405bba90(param_2,param_1 + 0x210,4);
  FUN_1405bba90(param_2,param_1 + 0x214,4);
  FUN_1405bba90(param_2,param_1 + 0x218,4);
  FUN_1405bba90(param_2,param_1 + 0x21c,4);
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x220,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x228);
  for (uVar4 = *(ulonglong *)(param_1 + 0x220); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x238,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x240);
  for (uVar4 = *(ulonglong *)(param_1 + 0x238); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x250,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 600);
  for (uVar4 = *(ulonglong *)(param_1 + 0x250); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x268,4);
  FUN_1405bba90(param_2,param_1 + 0x26c,4);
  FUN_1405bba90(param_2,param_1 + 0x270,4);
  FUN_1405bba90(param_2,param_1 + 0x274,4);
  FUN_1405bba90(param_2,param_1 + 0x278,4);
  FUN_1405bba90(param_2,param_1 + 0x27c,4);
  FUN_1405bba90(param_2,param_1 + 0x280,4);
  FUN_1405bba90(param_2,param_1 + 0x284,4);
  FUN_1405bba90(param_2,param_1 + 0x288,4);
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x160,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x168);
  for (uVar4 = *(ulonglong *)(param_1 + 0x160); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x178,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x180);
  for (uVar4 = *(ulonglong *)(param_1 + 0x178); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 400,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x198);
  for (uVar4 = *(ulonglong *)(param_1 + 400); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x1a8,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x1b0);
  for (uVar4 = *(ulonglong *)(param_1 + 0x1a8); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x1c0,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x1c8);
  for (uVar4 = *(ulonglong *)(param_1 + 0x1c0); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x290,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x298);
  for (uVar4 = *(ulonglong *)(param_1 + 0x290); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bed0(param_1 + 0x2a8,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x2b0);
  for (uVar4 = *(ulonglong *)(param_1 + 0x2a8); uVar4 < uVar2; uVar4 = uVar4 + 2) {
    FUN_1405bba90(param_2,uVar4,2);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x2c0,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x2c8);
  for (uVar4 = *(ulonglong *)(param_1 + 0x2c0); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x2d8,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x2e0);
  for (uVar4 = *(ulonglong *)(param_1 + 0x2d8); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&pvStackX_20,4);
  FUN_14000bd10(param_1 + 0x2f0,(longlong)(int)pvStackX_20);
  uVar2 = *(ulonglong *)(param_1 + 0x2f8);
  for (uVar4 = *(ulonglong *)(param_1 + 0x2f0); uVar4 < uVar2; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x308,4);
  FUN_1405bba90(param_2,param_1 + 0x31c,4);
  lVar3 = param_1 + 800;
  lVar5 = 0x13;
  do {
    FUN_1405bba90(param_2,lVar3,4);
    lVar3 = lVar3 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FUN_1405bba90(param_2,param_1 + 0x30c,4);
  FUN_1405bba90(param_2,param_1 + 0x36c,2);
  FUN_1405bba90(param_2,param_1 + 0x370,4);
  FUN_1405bba90(param_2,param_1 + 0x374,2);
  FUN_1405bba90(param_2,param_1 + 0x378,4);
  FUN_1405bba90(param_2,param_1 + 0x310,4);
  FUN_1405bba90(param_2,param_1 + 0x314,4);
  FUN_1405bba90(param_2,param_1 + 0x318,4);
  return;
}

