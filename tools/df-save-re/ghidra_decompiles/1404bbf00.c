// FUN_1404bbf00 @ 1404bbf00
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1404bcd50 FUN_1404bcd50
//   -> 140dfb5b4 free
//   -> 1404bd180 FUN_1404bd180
//   -> 1404bd210 FUN_1404bd210
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 14000c260 FUN_14000c260


void FUN_1404bbf00(longlong param_1)

{
  longlong *plVar1;
  void *_Dst;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar3 = (int)(DAT_141d6e198 - DAT_141d6e190 >> 3) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3;
    do {
      if (*(longlong *)(DAT_141d6e190 + lVar4 * 8) == param_1) {
        _Dst = (void *)(DAT_141d6e190 + (longlong)iVar3 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d6e198 - (longlong)pvVar2);
        DAT_141d6e198 = DAT_141d6e198 + -8;
        break;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0x3990) - *(longlong *)(param_1 + 0x3988) >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar2 = *(void **)(*(longlong *)(param_1 + 0x3988) + lVar4 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_1404bcd50(pvVar2);
        free(pvVar2);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined8 *)(param_1 + 0x3990) = *(undefined8 *)(param_1 + 0x3988);
  iVar3 = (int)(*(longlong *)(param_1 + 0x3a00) - *(longlong *)(param_1 + 0x39f8) >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar2 = *(void **)(*(longlong *)(param_1 + 0x39f8) + lVar4 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_1404bd180(pvVar2);
        free(pvVar2);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined8 *)(param_1 + 0x3a00) = *(undefined8 *)(param_1 + 0x39f8);
  puVar5 = *(undefined8 **)(param_1 + 0x3b58);
  uVar6 = 0;
  uVar7 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3b60) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3b60) < puVar5) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      pvVar2 = (void *)*puVar5;
      if (pvVar2 != (void *)0x0) {
        FUN_1404bd210(pvVar2);
        free(pvVar2);
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  *(undefined8 *)(param_1 + 0x3b60) = *(undefined8 *)(param_1 + 0x3b58);
  plVar1 = (longlong *)(param_1 + 0x3b88);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3b98) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x3b90) = 0;
    *(undefined8 *)(param_1 + 0x3b98) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x3b70);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3b80) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x3b78) = 0;
    *(undefined8 *)(param_1 + 0x3b80) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3b58);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3b68) - lVar4 >> 3,8);
    *(undefined8 *)(param_1 + 0x3b58) = 0;
    *(undefined8 *)(param_1 + 0x3b60) = 0;
    *(undefined8 *)(param_1 + 0x3b68) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3b38);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3b48) - lVar4 >> 2,4);
    *(undefined8 *)(param_1 + 0x3b38) = 0;
    *(undefined8 *)(param_1 + 0x3b40) = 0;
    *(undefined8 *)(param_1 + 0x3b48) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3b20);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3b30) - lVar4 >> 2,4);
    *(undefined8 *)(param_1 + 0x3b20) = 0;
    *(undefined8 *)(param_1 + 0x3b28) = 0;
    *(undefined8 *)(param_1 + 0x3b30) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x3b08);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3b18) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x3b10) = 0;
    *(undefined8 *)(param_1 + 0x3b18) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x3af0);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3b00) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x3af8) = 0;
    *(undefined8 *)(param_1 + 0x3b00) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3a58);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3a68) - lVar4 >> 2,4);
    *(undefined8 *)(param_1 + 0x3a58) = 0;
    *(undefined8 *)(param_1 + 0x3a60) = 0;
    *(undefined8 *)(param_1 + 0x3a68) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x3a40);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3a50) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x3a48) = 0;
    *(undefined8 *)(param_1 + 0x3a50) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3a28);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3a38) - lVar4 >> 2,4);
    *(undefined8 *)(param_1 + 0x3a28) = 0;
    *(undefined8 *)(param_1 + 0x3a30) = 0;
    *(undefined8 *)(param_1 + 0x3a38) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x3a10);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3a20) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x3a18) = 0;
    *(undefined8 *)(param_1 + 0x3a20) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x39f8);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3a08) - lVar4 >> 3,8);
    *(undefined8 *)(param_1 + 0x39f8) = 0;
    *(undefined8 *)(param_1 + 0x3a00) = 0;
    *(undefined8 *)(param_1 + 0x3a08) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3988);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3998) - lVar4 >> 3,8);
    *(undefined8 *)(param_1 + 0x3988) = 0;
    *(undefined8 *)(param_1 + 0x3990) = 0;
    *(undefined8 *)(param_1 + 0x3998) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3880);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3890) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x3880) = 0;
    *(undefined8 *)(param_1 + 0x3888) = 0;
    *(undefined8 *)(param_1 + 0x3890) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3868);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x3878) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x3868) = 0;
    *(undefined8 *)(param_1 + 0x3870) = 0;
    *(undefined8 *)(param_1 + 0x3878) = 0;
  }
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x2fb0),0x18,0x12,FUN_140051de0);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x2e00),0x18,0x12,FUN_140051de0);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x2c50),0x18,0x12,FUN_140051de0);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x1810),0x120,0x12,FUN_1401b8440);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x3d0),0x120,0x12,FUN_1401b8440);
  puVar5 = (undefined8 *)(param_1 + 0x3b0);
  if (0xf < *(ulonglong *)(param_1 + 0x3c8)) {
    FUN_140002020(*puVar5,*(ulonglong *)(param_1 + 0x3c8) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0xf;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x3c8)) {
    puVar5 = (undefined8 *)*puVar5;
  }
  *(undefined1 *)puVar5 = 0;
  if (*(void **)(param_1 + 0x3a0) != (void *)0x0) {
    free(*(void **)(param_1 + 0x3a0));
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  lVar4 = *(longlong *)(param_1 + 0x388);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x398) - lVar4 >> 2,4);
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x370);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x380) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x358);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x368) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x340);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x350) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x328);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x338) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x310);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 800) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x2f8);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x308) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x2e0);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x2f0) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x2c8);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x2d8) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x2b0);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x2c0) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x298);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x2a8) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x280);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x290) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x268);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x278) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x250);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x260) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x238);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x248) - lVar4 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x220);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x230) - lVar4,1);
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x208);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x218) - lVar4,1);
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x200) - lVar4,1);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x1d8);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x1e8) - lVar4,1);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x1c0);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x1d0) - lVar4,1);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x1b8) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 400);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x1a0) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x178);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x188) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x160);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x170) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x148);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x158) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x140) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x128) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x110) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xe8);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0xf8) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0xe0) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 200) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0xb0) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x98) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x80) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  FUN_140051e20(param_1 + 0x58);
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x68) - lVar4 >> 3,8);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x50) - lVar4 >> 1,2);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_140051e20(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x38) - lVar4 >> 3,8);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_14000c260(param_1);
  return;
}

