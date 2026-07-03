// FUN_140288ff0 @ 140288ff0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140285a90 FUN_140285a90
//   -> 140281bb0 FUN_140281bb0
//   -> 140283610 FUN_140283610
//   -> 140051e20 FUN_140051e20
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140288ff0(void *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar4 = (int)(*(longlong *)((longlong)param_1 + 0x150) - *(longlong *)((longlong)param_1 + 0x148)
               >> 3) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      puVar2 = *(undefined8 **)(*(longlong *)((longlong)param_1 + 0x148) + lVar6 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (0xf < (ulonglong)puVar2[3]) {
          FUN_140002020(*puVar2,puVar2[3] + 1,1);
        }
        puVar2[3] = 0xf;
        puVar2[2] = 0;
        puVar5 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar5 = (undefined8 *)*puVar2;
        }
        *(undefined1 *)puVar5 = 0;
        free(puVar2);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)((longlong)param_1 + 0x150) = *(undefined8 *)((longlong)param_1 + 0x148);
  iVar4 = (int)(*(longlong *)((longlong)param_1 + 0x180) - *(longlong *)((longlong)param_1 + 0x178)
               >> 3) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      pvVar3 = *(void **)(*(longlong *)((longlong)param_1 + 0x178) + lVar6 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_140285a90(pvVar3);
        free(pvVar3);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)((longlong)param_1 + 0x178);
  iVar4 = (int)(*(longlong *)((longlong)param_1 + 0x24b8) -
                *(longlong *)((longlong)param_1 + 0x24b0) >> 3) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      pvVar3 = *(void **)(*(longlong *)((longlong)param_1 + 0x24b0) + lVar6 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_140281bb0(pvVar3);
        free(pvVar3);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)((longlong)param_1 + 0x24b8) = *(undefined8 *)((longlong)param_1 + 0x24b0);
  iVar4 = (int)(*(longlong *)((longlong)param_1 + 0x24d0) -
                *(longlong *)((longlong)param_1 + 0x24c8) >> 3) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      pvVar3 = *(void **)(*(longlong *)((longlong)param_1 + 0x24c8) + lVar6 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_140283610(pvVar3);
        free(pvVar3);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)((longlong)param_1 + 0x24d0) = *(undefined8 *)((longlong)param_1 + 0x24c8);
  iVar4 = (int)(*(longlong *)((longlong)param_1 + 0x2458) -
                *(longlong *)((longlong)param_1 + 0x2450) >> 3) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      puVar2 = *(undefined8 **)(*(longlong *)((longlong)param_1 + 0x2450) + lVar6 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (0xf < (ulonglong)puVar2[3]) {
          FUN_140002020(*puVar2,puVar2[3] + 1,1);
        }
        puVar2[3] = 0xf;
        puVar2[2] = 0;
        puVar5 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar5 = (undefined8 *)*puVar2;
        }
        *(undefined1 *)puVar5 = 0;
        free(puVar2);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)((longlong)param_1 + 0x2458) = *(undefined8 *)((longlong)param_1 + 0x2450);
  plVar1 = (longlong *)((longlong)param_1 + 0x47f0);
  FUN_140051e20(plVar1);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x4800) - lVar6 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x47f8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4800) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x47c8);
  FUN_140051e20(plVar1);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x47d8) - lVar6 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x47d0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x47d8) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x47b0);
  FUN_140051e20(plVar1);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x47c0) - lVar6 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x47b8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x47c0) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x4798);
  FUN_140051e20(plVar1);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x47a8) - lVar6 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x47a0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x47a8) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x4780);
  FUN_140051e20(plVar1);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x4790) - lVar6 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x4788) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4790) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x4768);
  FUN_140051e20(plVar1);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x4778) - lVar6 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x4770) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4778) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x4750);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x4760) - lVar6 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x4750) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4758) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4760) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x4738);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x4748) - lVar6 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x4738) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4740) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4748) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x4720);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x4730) - lVar6 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x4720) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4728) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4730) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x4708);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x4718) - lVar6 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x4708) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4710) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4718) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x46f0);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x4700) - lVar6 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x46f0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x46f8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4700) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x46d8);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x46e8) - lVar6 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x46d8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x46e0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x46e8) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x46c0);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x46d0) - lVar6 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x46c0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x46c8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x46d0) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x46a8);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x46b8) - lVar6 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x46a8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x46b0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x46b8) = 0;
  }
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x35c0),0x20,0x87,FUN_14000c260);
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x24e0),0x20,0x87,FUN_14000c260);
  lVar6 = *(longlong *)((longlong)param_1 + 0x24c8);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x24d8) - lVar6 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x24c8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24d0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24d8) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x24b0);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x24c0) - lVar6 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x24b0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24b8) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24c0) = 0;
  }
  plVar1 = (longlong *)((longlong)param_1 + 0x2498);
  FUN_140051e20(plVar1);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x24a8) - lVar6 >> 3,8);
    *plVar1 = 0;
    *(undefined8 *)((longlong)param_1 + 0x24a0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24a8) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x2480);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x2490) - lVar6 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 0x2480) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2488) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2490) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x2468);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x2478) - lVar6,1);
    *(undefined8 *)((longlong)param_1 + 0x2468) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2470) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2478) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x2450);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x2460) - lVar6 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x2450) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2458) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2460) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x1a8) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x1a8));
  }
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  lVar6 = *(longlong *)((longlong)param_1 + 400);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x1a0) - lVar6 >> 2,4);
    *(undefined8 *)((longlong)param_1 + 400) = 0;
    *(undefined8 *)((longlong)param_1 + 0x198) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x178);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x188) - lVar6 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x178) = 0;
    *(undefined8 *)((longlong)param_1 + 0x180) = 0;
    *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x160);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x170) - lVar6 >> 1,2);
    *(undefined8 *)((longlong)param_1 + 0x160) = 0;
    *(undefined8 *)((longlong)param_1 + 0x168) = 0;
    *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 0x148);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)((longlong)param_1 + 0x158) - lVar6 >> 3,8);
    *(undefined8 *)((longlong)param_1 + 0x148) = 0;
    *(undefined8 *)((longlong)param_1 + 0x150) = 0;
    *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  }
  _eh_vector_destructor_iterator_(param_1,0x20,9,FUN_14000c260);
  return;
}

