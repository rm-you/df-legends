// FUN_140adffb0 @ 140adffb0
// callees:
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5bc free
//   -> 140dfb5b4 free
//   -> 140a5f6a0 FUN_140a5f6a0
//   -> 140a5f1a0 FUN_140a5f1a0
//   -> 140a5eef0 FUN_140a5eef0
//   -> 140a5f3d0 FUN_140a5f3d0
//   -> 140002740 FUN_140002740
//   -> 140aa8fb0 FUN_140aa8fb0
//   -> 140a5e1b0 FUN_140a5e1b0
//   -> 140a5dd60 FUN_140a5dd60
//   -> 140a5bac0 FUN_140a5bac0
//   -> 140a5aca0 FUN_140a5aca0
//   -> 140002020 FUN_140002020
//   -> 140002e40 FUN_140002e40
//   -> 140a5c030 FUN_140a5c030
//   -> 140493660 FUN_140493660
//   -> 140adbba0 FUN_140adbba0


void FUN_140adffb0(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  uVar8 = 0;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    uVar6 = uVar8;
    uVar4 = uVar8;
    if (0 < *(int *)(param_1 + 0xa0)) {
      do {
        pvVar1 = *(void **)(uVar4 + *(longlong *)(param_1 + 0x2a0));
        if (pvVar1 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar1,0x70,*(__uint64 *)((longlong)pvVar1 + -8),FUN_140ae0700);
          free((__uint64 *)((longlong)pvVar1 + -8));
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar4 = uVar4 + 8;
      } while ((int)uVar5 < *(int *)(param_1 + 0xa0));
    }
    free(*(void **)(param_1 + 0x2a0));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  plVar9 = (longlong *)(param_1 + 0x2d0);
  lVar10 = 6;
  do {
    if (*plVar9 != 0) {
      uVar5 = *(int *)(param_1 + 0xa0) + 0xf >> 4;
      if (0 < (short)uVar5) {
        uVar4 = (ulonglong)(uVar5 & 0xffff);
        uVar6 = uVar8;
        do {
          pvVar1 = *(void **)(uVar6 + *plVar9);
          if (pvVar1 != (void *)0x0) {
            _eh_vector_destructor_iterator_
                      (pvVar1,0x30,*(__uint64 *)((longlong)pvVar1 + -8),FUN_140ae0760);
            free((__uint64 *)((longlong)pvVar1 + -8));
          }
          uVar6 = uVar6 + 8;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      free((void *)*plVar9);
      *plVar9 = 0;
    }
    plVar9 = plVar9 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar3 = (int)(*(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x210) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5f6a0(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x210);
  iVar3 = (int)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 600) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5f1a0(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 600);
  iVar3 = (int)(*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x228) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x228) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5eef0(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x228);
  iVar3 = (int)(*(longlong *)(param_1 + 0x248) - *(longlong *)(param_1 + 0x240) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x240) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5f3d0(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x240);
  iVar3 = (int)(*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x270) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((longlong)pvVar1 + 0x80) != (void *)0x0) {
          free(*(void **)((longlong)pvVar1 + 0x80));
        }
        *(undefined8 *)((longlong)pvVar1 + 0x80) = 0;
        *(undefined4 *)((longlong)pvVar1 + 0x88) = 0;
        FUN_140002740(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x270);
  iVar3 = (int)(*(longlong *)(param_1 + 0x290) - *(longlong *)(param_1 + 0x288) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x288) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140aa8fb0(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x288);
  iVar3 = (int)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x168) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5e1b0(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x168);
  DAT_141ebecd0 = DAT_141ebecc8;
  iVar3 = (int)(*(longlong *)(param_1 + 0x188) - *(longlong *)(param_1 + 0x180) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x180) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5dd60(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x180);
  iVar3 = (int)(*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x198) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5bac0(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x198);
  iVar3 = (int)(*(longlong *)(param_1 + 0x1b8) - *(longlong *)(param_1 + 0x1b0) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x1b0) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5aca0((longlong)pvVar1 + 8);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1b0);
  iVar3 = (int)(*(longlong *)(param_1 + 0x1d0) - *(longlong *)(param_1 + 0x1c8) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x1c8) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        lVar2 = *(longlong *)((longlong)pvVar1 + 0x50);
        if (lVar2 != 0) {
          FUN_140002020(lVar2,*(longlong *)((longlong)pvVar1 + 0x60) - lVar2 >> 2,4);
          *(undefined8 *)((longlong)pvVar1 + 0x50) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x58) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x60) = 0;
        }
        FUN_140002e40((longlong)pvVar1 + 8);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1c8);
  iVar3 = (int)(*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x1e0) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x1e0);
  iVar3 = (int)(*(longlong *)(param_1 + 0x200) - *(longlong *)(param_1 + 0x1f8) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x1f8) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140a5c030(pvVar1);
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x88) = 1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_140493660(param_1 + 0xe8);
  FUN_140adbba0(param_1);
  if (*(void **)(param_1 + 0x2a8) != (void *)0x0) {
    free(*(void **)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0x2c0) - *(longlong *)(param_1 + 0x2b8) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x2b8) + lVar10 * 8);
      if (pvVar1 != (void *)0x0) {
        puVar7 = (undefined8 *)((longlong)pvVar1 + 8);
        if (0xf < *(ulonglong *)((longlong)pvVar1 + 0x20)) {
          FUN_140002020(*puVar7,*(ulonglong *)((longlong)pvVar1 + 0x20) + 1,1);
        }
        *(undefined8 *)((longlong)pvVar1 + 0x20) = 0xf;
        *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
        if (0xf < *(ulonglong *)((longlong)pvVar1 + 0x20)) {
          puVar7 = (undefined8 *)*puVar7;
        }
        *(undefined1 *)puVar7 = 0;
        free(pvVar1);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x2b8);
  return;
}

