// FUN_140a5e1b0 @ 140a5e1b0
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140a5db40 FUN_140a5db40
//   -> 140002e40 FUN_140002e40
//   -> 140a5e100 FUN_140a5e100
//   -> 140a5eb70 FUN_140a5eb70
//   -> 1400c5830 FUN_1400c5830
//   -> 1400872d0 FUN_1400872d0
//   -> 140002740 FUN_140002740


void FUN_140a5e1b0(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar4 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar4 + *(longlong *)(param_1 + 0x2b0));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1);
      }
      uVar6 = (int)uVar7 + 1;
      uVar4 = uVar4 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 3));
  }
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x2b0);
  uVar4 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0x2d8) - *(longlong *)(param_1 + 0x2d0) >> 3 != 0) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x2d0) + uVar4));
      uVar6 = (int)uVar7 + 1;
      uVar4 = uVar4 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x2d8) - *(longlong *)(param_1 + 0x2d0) >> 3));
  }
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x2d0);
  uVar4 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3 != 0) {
    do {
      pvVar2 = *(void **)(uVar7 + *(longlong *)(param_1 + 0x270));
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(longlong *)((longlong)pvVar2 + 0x28);
        if (lVar3 != 0) {
          FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x38) - lVar3 >> 2,4);
          *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x38) = 0;
        }
        lVar3 = *(longlong *)((longlong)pvVar2 + 0x10);
        if (lVar3 != 0) {
          FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x20) - lVar3 >> 2,4);
          *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
        }
        free(pvVar2);
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3));
  }
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x270);
  uVar4 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3 != 0) {
    do {
      pvVar2 = *(void **)(uVar7 + *(longlong *)(param_1 + 600));
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(longlong *)((longlong)pvVar2 + 0x28);
        if (lVar3 != 0) {
          FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x38) - lVar3 >> 2,4);
          *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x38) = 0;
        }
        lVar3 = *(longlong *)((longlong)pvVar2 + 0x10);
        if (lVar3 != 0) {
          FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x20) - lVar3 >> 2,4);
          *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
        }
        free(pvVar2);
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3));
  }
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 600);
  pvVar2 = *(void **)(param_1 + 0x308);
  if (pvVar2 != (void *)0x0) {
    FUN_140a5db40(pvVar2);
    free(pvVar2);
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x358);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x360) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x360) < puVar5) {
    uVar4 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar5);
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x358);
  puVar5 = *(undefined8 **)(param_1 + 0x370);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x378) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x378) < puVar5) {
    uVar4 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar5);
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x370);
  puVar5 = *(undefined8 **)(param_1 + 0x388);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x390) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x390) < puVar5) {
    uVar4 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar4 != 0) {
    do {
      pvVar2 = (void *)*puVar5;
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(longlong *)((longlong)pvVar2 + 8);
        if (lVar3 != 0) {
          FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x18) - lVar3 >> 2,4);
          *(undefined8 *)((longlong)pvVar2 + 8) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
        }
        free(pvVar2);
      }
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_1 + 0x388);
  puVar5 = *(undefined8 **)(param_1 + 0x3a0);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3a8) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3a8) < puVar5) {
    uVar4 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar4 != 0) {
    do {
      pvVar2 = (void *)*puVar5;
      if (pvVar2 != (void *)0x0) {
        FUN_140002e40((longlong)pvVar2 + 8);
        free(pvVar2);
      }
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0x3a0);
  puVar5 = *(undefined8 **)(param_1 + 0x3c0);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3c8) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3c8) < puVar5) {
    uVar4 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar4 != 0) {
    do {
      free((void *)*puVar5);
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x3c0);
  pvVar2 = *(void **)(param_1 + 0x310);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *(longlong *)((longlong)pvVar2 + 8);
    if (lVar3 != 0) {
      FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x18) - lVar3 >> 1,2);
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
    }
    free(pvVar2);
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x478);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x480) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x480) < puVar5) {
    uVar4 = uVar8;
  }
  if (uVar4 != 0) {
    do {
      free((void *)*puVar5);
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar8 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(param_1 + 0x478);
  pvVar2 = *(void **)(param_1 + 0x3e0);
  if (pvVar2 != (void *)0x0) {
    FUN_140a5e100(pvVar2);
    free(pvVar2);
    *(undefined8 *)(param_1 + 0x3e0) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x220);
  if (pvVar2 != (void *)0x0) {
    FUN_140a5eb70(pvVar2);
    free(pvVar2);
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x538);
  if (pvVar2 != (void *)0x0) {
    FUN_1400c5830(pvVar2);
    free(pvVar2);
    *(undefined8 *)(param_1 + 0x538) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x478);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x488) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x468) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x440);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x450) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x440) = 0;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined8 *)(param_1 + 0x450) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x428);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x438) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x430) = 0;
    *(undefined8 *)(param_1 + 0x438) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x410);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x420) - lVar3 >> 1,2);
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x3f8);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x408) - lVar3 >> 1,2);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x3c0);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x3d0) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x3b0) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x388);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x398) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x370);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x380) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x358);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x368) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  FUN_140002e40(param_1 + 0x318);
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x2e0) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x2c0) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  if (*(void **)(param_1 + 0x2a0) != (void *)0x0) {
    free(*(void **)(param_1 + 0x2a0));
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x298) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x270);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x280) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 600);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x268) - lVar3 >> 3,8);
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  FUN_1400872d0(param_1 + 0x90);
  FUN_140002740(param_1);
  return;
}

