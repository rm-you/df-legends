// FUN_1408b1b30 @ 1408b1b30
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140dfc99c memset
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> EXTERNAL:000000e1 memmove
//   -> 1402803e0 FUN_1402803e0
//   -> 14000bfc0 FUN_14000bfc0
//   -> 140050150 FUN_140050150


void FUN_1408b1b30(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  __uint64 _Size;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (param_1 + 0x508 != param_2 + 0x508) {
    FUN_14000c8b0(param_1 + 0x508,param_2 + 0x508,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0x4cc) = *(undefined2 *)(param_2 + 0x4cc);
  if (param_1 + 0x5c8 != param_2 + 0x5c8) {
    FUN_14000c8b0(param_1 + 0x5c8,param_2 + 0x5c8,0,0xffffffffffffffff);
  }
  puVar5 = (undefined4 *)(param_1 + 0x9c);
  *(undefined2 *)(param_1 + 0x4ce) = *(undefined2 *)(param_2 + 0x4ce);
  lVar4 = param_1 + 0x5e8;
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  lVar6 = param_2 - param_1;
  lVar3 = 6;
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
    *puVar5 = *(undefined4 *)(lVar6 + (longlong)puVar5);
    if (lVar4 != lVar6 + lVar4) {
      FUN_14000c8b0(lVar4,lVar6 + lVar4,0,0xffffffffffffffff);
    }
    lVar2 = lVar6 + -0x530 + lVar4;
    if (lVar4 + -0x530 != lVar2) {
      FUN_14000c8b0(lVar4 + -0x530,lVar2,0,0xffffffffffffffff);
    }
    lVar2 = lVar6 + -0x470 + lVar4;
    if (lVar4 + -0x470 != lVar2) {
      FUN_14000c8b0(lVar4 + -0x470,lVar2,0,0xffffffffffffffff);
    }
    lVar4 = lVar4 + 0x20;
    puVar5 = puVar5 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
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
  iVar1 = *(int *)(param_2 + 0x298);
  _Size = (__uint64)iVar1;
  if (0 < iVar1) {
    if (*(void **)(param_1 + 0x290) != (void *)0x0) {
      free(*(void **)(param_1 + 0x290));
    }
    _Dst = operator_new(_Size);
    *(void **)(param_1 + 0x290) = _Dst;
    memset(_Dst,0,_Size);
    *(int *)(param_1 + 0x298) = iVar1;
    memmove(*(void **)(param_1 + 0x290),*(void **)(param_2 + 0x290),_Size);
  }
  *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_2 + 0x2a0);
  *(undefined2 *)(param_1 + 0x2a2) = *(undefined2 *)(param_2 + 0x2a2);
  *(undefined2 *)(param_1 + 0x2a4) = *(undefined2 *)(param_2 + 0x2a4);
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

