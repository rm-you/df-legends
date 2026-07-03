// FUN_1408b14b0 @ 1408b14b0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140dfc99c memset
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> EXTERNAL:000000e1 memmove
//   -> 1402803e0 FUN_1402803e0
//   -> 14000bfc0 FUN_14000bfc0
//   -> 140050150 FUN_140050150
//   -> 140281510 FUN_140281510
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1408b01e0 FUN_1408b01e0
//   -> 1408b02b0 FUN_1408b02b0


void FUN_1408b14b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  __uint64 _Size;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  *(undefined2 *)(param_1 + 0x4cc) = *(undefined2 *)(param_2 + 0x4cc);
  if (param_1 + 0x5c8 != param_2 + 0x508) {
    FUN_14000c8b0(param_1 + 0x5c8,param_2 + 0x508,0,0xffffffffffffffff);
  }
  puVar8 = (undefined4 *)(param_1 + 0x9c);
  *(undefined2 *)(param_1 + 0x4ce) = *(undefined2 *)(param_2 + 0x4ce);
  lVar7 = param_1 + 0x5e8;
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  lVar9 = param_2 - param_1;
  lVar6 = 6;
  *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)(param_2 + 0x82);
  *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(param_2 + 0x84);
  *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(param_2 + 0x86);
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_2 + 0x88);
  *(undefined2 *)(param_1 + 0x8a) = *(undefined2 *)(param_2 + 0x8a);
  *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  do {
    lVar5 = lVar9 + -0xc0 + lVar7;
    *puVar8 = *(undefined4 *)(lVar9 + (longlong)puVar8);
    if (lVar7 != lVar5) {
      FUN_14000c8b0(lVar7,lVar5,0,0xffffffffffffffff);
    }
    lVar5 = lVar9 + -0x530 + lVar7;
    if (lVar7 + -0x530 != lVar5) {
      FUN_14000c8b0(lVar7 + -0x530,lVar5,0,0xffffffffffffffff);
    }
    lVar5 = lVar9 + -0x470 + lVar7;
    if (lVar7 + -0x470 != lVar5) {
      FUN_14000c8b0(lVar7 + -0x470,lVar5,0,0xffffffffffffffff);
    }
    lVar7 = lVar7 + 0x20;
    puVar8 = puVar8 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  if ((0 < *(int *)(param_1 + 0x298)) && (*(void **)(param_1 + 0x290) != (void *)0x0)) {
    memset(*(void **)(param_1 + 0x290),0,(longlong)*(int *)(param_1 + 0x298));
  }
  iVar2 = *(int *)(param_2 + 0x298);
  _Size = (__uint64)iVar2;
  if (0 < iVar2) {
    if (*(void **)(param_1 + 0x290) != (void *)0x0) {
      free(*(void **)(param_1 + 0x290));
    }
    pvVar3 = operator_new(_Size);
    *(void **)(param_1 + 0x290) = pvVar3;
    memset(pvVar3,0,_Size);
    *(int *)(param_1 + 0x298) = iVar2;
    memmove(*(void **)(param_1 + 0x290),*(void **)(param_2 + 0x290),_Size);
  }
  *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_2 + 0x2a0);
  *(undefined2 *)(param_1 + 0x2a2) = *(undefined2 *)(param_2 + 0x2a2);
  *(undefined2 *)(param_1 + 0x2a4) = *(undefined2 *)(param_2 + 0x2a4);
  if (param_1 + 0x20 != param_2 + 0x20) {
    FUN_14000c8b0(param_1 + 0x20,param_2 + 0x20,0,0xffffffffffffffff);
  }
  if (param_1 + 0x40 != param_2 + 0x40) {
    FUN_14000c8b0(param_1 + 0x40,param_2 + 0x40,0,0xffffffffffffffff);
  }
  if (param_1 + 0x60 != param_2 + 0x60) {
    FUN_14000c8b0(param_1 + 0x60,param_2 + 0x60,0,0xffffffffffffffff);
  }
  if (param_1 + 0x2a8 != param_2 + 0x2a8) {
    FUN_14000c8b0(param_1 + 0x2a8,param_2 + 0x2a8,0,0xffffffffffffffff);
  }
  if (param_1 + 0x2c8 != param_2 + 0x2c8) {
    FUN_14000c8b0(param_1 + 0x2c8,param_2 + 0x2c8,0,0xffffffffffffffff);
  }
  if (param_1 + 0x2e8 != param_2 + 0x2e8) {
    FUN_14000c8b0(param_1 + 0x2e8,param_2 + 0x2e8,0,0xffffffffffffffff);
  }
  if (param_1 + 0x308 != param_2 + 0x308) {
    FUN_14000c8b0(param_1 + 0x308,param_2 + 0x308,0,0xffffffffffffffff);
  }
  if (param_1 + 0x328 != param_2 + 0x328) {
    FUN_14000c8b0(param_1 + 0x328,param_2 + 0x328,0,0xffffffffffffffff);
  }
  FUN_1402803e0(param_1 + 0x348,param_2 + 0x348);
  FUN_14000bfc0(param_1 + 0x360,param_2 + 0x360);
  FUN_14000bfc0(param_1 + 0x378,param_2 + 0x378);
  FUN_14000bfc0(param_1 + 0x390,param_2 + 0x390);
  FUN_140050150(param_1 + 0x3a8,param_2 + 0x3a8);
  FUN_1402803e0(param_1 + 0x3c0,param_2 + 0x3c0);
  FUN_1402803e0(param_1 + 0x3d8,param_2 + 0x3d8);
  FUN_1402803e0(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_1402803e0(param_1 + 0x408,param_2 + 0x408);
  FUN_1402803e0(param_1 + 0x420,param_2 + 0x420);
  *(undefined2 *)(param_1 + 0x438) = *(undefined2 *)(param_2 + 0x438);
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  if (param_1 + 0x440 != param_2 + 0x440) {
    FUN_14000c8b0(param_1 + 0x440,param_2 + 0x440,0,0xffffffffffffffff);
  }
  if (param_1 + 0x460 != param_2 + 0x460) {
    FUN_14000c8b0(param_1 + 0x460,param_2 + 0x460,0,0xffffffffffffffff);
  }
  if (param_1 + 0x480 != param_2 + 0x480) {
    FUN_14000c8b0(param_1 + 0x480,param_2 + 0x480,0,0xffffffffffffffff);
  }
  plVar1 = (longlong *)(param_1 + 0x4d0);
  FUN_140281510(plVar1);
  FUN_14000b9d0(plVar1,*(longlong *)(param_2 + 0x4d8) - *(longlong *)(param_2 + 0x4d0) >> 3);
  iVar2 = (int)(*(longlong *)(param_1 + 0x4d8) - *plVar1 >> 3) + -1;
  lVar7 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar3 = operator_new(0x110);
      uVar4 = FUN_1408b01e0(pvVar3);
      *(undefined8 *)(*plVar1 + lVar7 * 8) = uVar4;
      FUN_1408b02b0(*(undefined8 *)(*plVar1 + lVar7 * 8),
                    *(undefined8 *)(*(longlong *)(param_2 + 0x4d0) + lVar7 * 8));
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  FUN_14000bfc0(param_1 + 0x4f0,param_2 + 0x4f0);
  FUN_1402803e0(param_1 + 0x4a0,param_2 + 0x4a0);
  *(undefined1 *)(param_1 + 0x4b8) = *(undefined1 *)(param_2 + 0x4b8);
  *(undefined1 *)(param_1 + 0x4ca) = *(undefined1 *)(param_2 + 0x4ca);
  *(undefined2 *)(param_1 + 0x4ba) = *(undefined2 *)(param_2 + 0x4ba);
  *(undefined2 *)(param_1 + 0x4bc) = *(undefined2 *)(param_2 + 0x4bc);
  *(undefined2 *)(param_1 + 0x4be) = *(undefined2 *)(param_2 + 0x4be);
  *(undefined2 *)(param_1 + 0x4c0) = *(undefined2 *)(param_2 + 0x4c0);
  *(undefined2 *)(param_1 + 0x4c2) = *(undefined2 *)(param_2 + 0x4c2);
  *(undefined2 *)(param_1 + 0x4c4) = *(undefined2 *)(param_2 + 0x4c4);
  *(undefined2 *)(param_1 + 0x4c6) = *(undefined2 *)(param_2 + 0x4c6);
  *(undefined2 *)(param_1 + 0x4c8) = *(undefined2 *)(param_2 + 0x4c8);
  return;
}

