// FUN_140496f80 @ 140496f80
// callees:
//   -> 140498f50 FUN_140498f50
//   -> 140496ea0 FUN_140496ea0
//   -> 140053660 FUN_140053660
//   -> 140dfb5b4 free
//   -> 140492ca0 FUN_140492ca0
//   -> 14048e4e0 FUN_14048e4e0
//   -> 1400516f0 FUN_1400516f0
//   -> 1404918e0 FUN_1404918e0
//   -> 140498a40 FUN_140498a40
//   -> 140498ae0 FUN_140498ae0
//   -> 140492440 FUN_140492440
//   -> 140498db0 FUN_140498db0
//   -> 140002020 FUN_140002020
//   -> EXTERNAL:000000e1 memmove
//   -> 140498e60 FUN_140498e60
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 14000c440 FUN_14000c440
//   -> 140002620 FUN_140002620
//   -> 1400025c0 FUN_1400025c0
//   -> 1400030c0 FUN_1400030c0
//   -> 14000e8f0 FUN_14000e8f0
//   -> 14048e600 FUN_14048e600
//   -> 14007c030 FUN_14007c030
//   -> 140002740 FUN_140002740


void FUN_140496f80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  void *pvVar3;
  int *_Memory;
  longlong lVar4;
  longlong *_Memory_00;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  
  FUN_140498f50();
  FUN_140496ea0(param_1);
  pvVar3 = *(void **)(param_1 + 0x1348);
  uVar14 = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_140053660(pvVar3);
    free(pvVar3);
    *(undefined8 *)(param_1 + 0x1348) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x1300);
  if (pvVar3 != (void *)0x0) {
    FUN_140492ca0(pvVar3);
    free(pvVar3);
    *(undefined8 *)(param_1 + 0x1300) = 0;
  }
  *(undefined8 *)(param_1 + 0xcd0) = *(undefined8 *)(param_1 + 0xcc8);
  plVar1 = (longlong *)(param_1 + 0x1370);
  uVar10 = uVar14;
  uVar11 = uVar14;
  if (*(longlong *)(param_1 + 0x1378) - *plVar1 >> 3 != 0) {
    do {
      pvVar3 = *(void **)(uVar11 + *plVar1);
      if (pvVar3 != (void *)0x0) {
        FUN_14048e4e0(pvVar3);
        free(pvVar3);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x1378) - *plVar1 >> 3));
  }
  *(longlong *)(param_1 + 0x1378) = *plVar1;
  plVar2 = (longlong *)(param_1 + 0xb0);
  uVar10 = uVar14;
  uVar11 = uVar14;
  if (*(longlong *)(param_1 + 0xb8) - *plVar2 >> 3 != 0) {
    do {
      free(*(void **)(uVar10 + *plVar2));
      uVar9 = (int)uVar11 + 1;
      uVar10 = uVar10 + 8;
      uVar11 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0xb8) - *plVar2 >> 3));
  }
  *(longlong *)(param_1 + 0xb8) = *plVar2;
  puVar8 = *(undefined8 **)(param_1 + 200);
  uVar10 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xd0) + (7 - (longlong)puVar8)) >> 3;
  if (*(undefined8 **)(param_1 + 0xd0) < puVar8) {
    uVar10 = uVar14;
  }
  if (uVar10 != 0) {
    do {
      _Memory = (int *)*puVar8;
      iVar5 = *_Memory;
      if ((iVar5 != -1) &&
         ((*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) &
          0xfffffffffffffff8U) != 0)) {
        iVar7 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >>
                     3) + -1;
        iVar13 = 0;
        if (-1 < iVar7) {
          do {
            iVar6 = iVar7 + iVar13 >> 1;
            lVar12 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + (longlong)iVar6 * 8);
            if (*(int *)(lVar12 + 0x88) == iVar5) {
              if (lVar12 != 0) {
                FUN_1400516f0(_Memory,lVar12 + 0x428);
              }
              break;
            }
            if (iVar5 < *(int *)(lVar12 + 0x88)) {
              iVar7 = iVar6 + -1;
            }
            else {
              iVar13 = iVar6 + 1;
            }
          } while (iVar13 <= iVar7);
        }
      }
      FUN_1404918e0(_Memory);
      free(_Memory);
      puVar8 = puVar8 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar10);
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
  uVar10 = 0;
  plVar2 = (longlong *)(param_1 + 0x1000);
  uVar14 = uVar10;
  if (*(longlong *)(param_1 + 0x1008) - *plVar2 >> 3 != 0) {
    do {
      pvVar3 = *(void **)(uVar14 + *plVar2);
      if (pvVar3 != (void *)0x0) {
        FUN_140498a40(pvVar3);
        free(pvVar3);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar14 = uVar14 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x1008) - *plVar2 >> 3));
  }
  *(longlong *)(param_1 + 0x1008) = *plVar2;
  iVar5 = (int)(*(longlong *)(param_1 + 0x10b8) - *(longlong *)(param_1 + 0x10b0) >> 3) + -1;
  lVar12 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x10b0) + lVar12 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_140498ae0(pvVar3);
        free(pvVar3);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(undefined8 *)(param_1 + 0x10b8) = *(undefined8 *)(param_1 + 0x10b0);
  iVar5 = (int)(*(longlong *)(param_1 + 0x10d0) - *(longlong *)(param_1 + 0x10c8) >> 3) + -1;
  lVar12 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x10c8) + lVar12 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_140498ae0(pvVar3);
        free(pvVar3);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(undefined8 *)(param_1 + 0x10d0) = *(undefined8 *)(param_1 + 0x10c8);
  iVar5 = (int)(*(longlong *)(param_1 + 0x10e8) - *(longlong *)(param_1 + 0x10e0) >> 3) + -1;
  lVar12 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x10e0) + lVar12 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_140498ae0(pvVar3);
        free(pvVar3);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(undefined8 *)(param_1 + 0x10e8) = *(undefined8 *)(param_1 + 0x10e0);
  iVar5 = (int)(*(longlong *)(param_1 + 0x1108) - *(longlong *)(param_1 + 0x1100) >> 3) + -1;
  lVar12 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x1100) + lVar12 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_140492440(pvVar3);
        free(pvVar3);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(undefined8 *)(param_1 + 0x1108) = *(undefined8 *)(param_1 + 0x1100);
  *(undefined8 *)(param_1 + 0x1128) = *(undefined8 *)(param_1 + 0x1120);
  *(undefined8 *)(param_1 + 0x1140) = *(undefined8 *)(param_1 + 0x1138);
  *(undefined8 *)(param_1 + 0x1158) = *(undefined8 *)(param_1 + 0x1150);
  *(undefined8 *)(param_1 + 0x1170) = *(undefined8 *)(param_1 + 0x1168);
  *(undefined8 *)(param_1 + 0x1188) = *(undefined8 *)(param_1 + 0x1180);
  iVar5 = (int)(*(longlong *)(param_1 + 0x11a0) - *(longlong *)(param_1 + 0x1198) >> 3) + -1;
  lVar12 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x1198) + lVar12 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_140498db0(pvVar3);
        free(pvVar3);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(undefined8 *)(param_1 + 0x11a0) = *(undefined8 *)(param_1 + 0x1198);
  iVar5 = (int)(*(longlong *)(param_1 + 0x1ff8) - *(longlong *)(param_1 + 0x1ff0) >> 3) + -1;
  lVar12 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x1ff0) + lVar12 * 8));
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(undefined8 *)(param_1 + 0x1ff8) = *(undefined8 *)(param_1 + 0x1ff0);
  iVar5 = (int)(*(longlong *)(param_1 + 0x2018) - *(longlong *)(param_1 + 0x2010) >> 3) + -1;
  lVar12 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      pvVar3 = *(void **)(*(longlong *)(param_1 + 0x2010) + lVar12 * 8);
      if (pvVar3 != (void *)0x0) {
        lVar4 = *(longlong *)((longlong)pvVar3 + 8);
        if (lVar4 != 0) {
          FUN_140002020(lVar4,*(longlong *)((longlong)pvVar3 + 0x18) - lVar4 >> 2,4);
          *(undefined8 *)((longlong)pvVar3 + 8) = 0;
          *(undefined8 *)((longlong)pvVar3 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar3 + 0x18) = 0;
        }
        free(pvVar3);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(undefined8 *)(param_1 + 0x2018) = *(undefined8 *)(param_1 + 0x2010);
  _Memory_00 = *(longlong **)(param_1 + 0x1238);
  if (_Memory_00 != (longlong *)0x0) {
    lVar12 = _Memory_00[3];
    if (lVar12 != 0) {
      FUN_140002020(lVar12,_Memory_00[5] - lVar12 >> 2,4);
      _Memory_00[3] = 0;
      _Memory_00[4] = 0;
      _Memory_00[5] = 0;
    }
    lVar12 = *_Memory_00;
    if (lVar12 != 0) {
      FUN_140002020(lVar12,_Memory_00[2] - lVar12 >> 2,4);
      *_Memory_00 = 0;
      _Memory_00[1] = 0;
      _Memory_00[2] = 0;
    }
    free(_Memory_00);
    *(undefined8 *)(param_1 + 0x1238) = 0;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x1308);
  uVar10 = 0;
  uVar14 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x1310) + (7 - (longlong)puVar8)) >> 3;
  if (*(undefined8 **)(param_1 + 0x1310) < puVar8) {
    uVar14 = uVar10;
  }
  if (uVar14 != 0) {
    do {
      free((void *)*puVar8);
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar14);
  }
  *(undefined8 *)(param_1 + 0x1310) = *(undefined8 *)(param_1 + 0x1308);
  *(undefined4 *)(param_1 + 0x94) = 0;
  iVar5 = (int)(DAT_141c53720 - DAT_141c53718 >> 3) + -1;
  if (-1 < iVar5) {
    lVar12 = (longlong)iVar5;
    do {
      if (*(longlong *)(DAT_141c53718 + lVar12 * 8) == param_1) {
        _Dst = (void *)(DAT_141c53718 + (longlong)iVar5 * 8);
        pvVar3 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar3,DAT_141c53720 - (longlong)pvVar3);
        DAT_141c53720 = DAT_141c53720 + -8;
        break;
      }
      iVar5 = iVar5 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  uVar10 = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x1320);
  uVar14 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x1328) + (7 - (longlong)puVar8)) >> 3;
  if (*(undefined8 **)(param_1 + 0x1328) < puVar8) {
    uVar14 = uVar10;
  }
  if (uVar14 != 0) {
    do {
      pvVar3 = (void *)*puVar8;
      if (pvVar3 != (void *)0x0) {
        FUN_140498e60(pvVar3);
        free(pvVar3);
      }
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar14);
  }
  *(undefined8 *)(param_1 + 0x1328) = *(undefined8 *)(param_1 + 0x1320);
  lVar12 = *(longlong *)(param_1 + 0x2010);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x2020) - lVar12 >> 3,8);
    *(undefined8 *)(param_1 + 0x2010) = 0;
    *(undefined8 *)(param_1 + 0x2018) = 0;
    *(undefined8 *)(param_1 + 0x2020) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1ff0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x2000) - lVar12 >> 3,8);
    *(undefined8 *)(param_1 + 0x1ff0) = 0;
    *(undefined8 *)(param_1 + 0x1ff8) = 0;
    *(undefined8 *)(param_1 + 0x2000) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1d08);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1d18) - lVar12 >> 2,4);
    *(undefined8 *)(param_1 + 0x1d08) = 0;
    *(undefined8 *)(param_1 + 0x1d10) = 0;
    *(undefined8 *)(param_1 + 0x1d18) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1cf0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1d00) - lVar12 >> 2,4);
    *(undefined8 *)(param_1 + 0x1cf0) = 0;
    *(undefined8 *)(param_1 + 0x1cf8) = 0;
    *(undefined8 *)(param_1 + 0x1d00) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1cc8);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1cd8) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1cc8) = 0;
    *(undefined8 *)(param_1 + 0x1cd0) = 0;
    *(undefined8 *)(param_1 + 0x1cd8) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1cb0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1cc0) - lVar12 >> 2,4);
    *(undefined8 *)(param_1 + 0x1cb0) = 0;
    *(undefined8 *)(param_1 + 0x1cb8) = 0;
    *(undefined8 *)(param_1 + 0x1cc0) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1c78);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1c88) - lVar12 >> 3,8);
    *(undefined8 *)(param_1 + 0x1c78) = 0;
    *(undefined8 *)(param_1 + 0x1c80) = 0;
    *(undefined8 *)(param_1 + 0x1c88) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1c60);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1c70) - lVar12 >> 3,8);
    *(undefined8 *)(param_1 + 0x1c60) = 0;
    *(undefined8 *)(param_1 + 0x1c68) = 0;
    *(undefined8 *)(param_1 + 0x1c70) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1c48);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1c58) - lVar12 >> 3,8);
    *(undefined8 *)(param_1 + 0x1c48) = 0;
    *(undefined8 *)(param_1 + 0x1c50) = 0;
    *(undefined8 *)(param_1 + 0x1c58) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1c30);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1c40) - lVar12 >> 3,8);
    *(undefined8 *)(param_1 + 0x1c30) = 0;
    *(undefined8 *)(param_1 + 0x1c38) = 0;
    *(undefined8 *)(param_1 + 0x1c40) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1c10);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1c20) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1c10) = 0;
    *(undefined8 *)(param_1 + 0x1c18) = 0;
    *(undefined8 *)(param_1 + 0x1c20) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1bf0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1c00) - lVar12 >> 2,4);
    *(undefined8 *)(param_1 + 0x1bf0) = 0;
    *(undefined8 *)(param_1 + 0x1bf8) = 0;
    *(undefined8 *)(param_1 + 0x1c00) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1bd8);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1be8) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1bd8) = 0;
    *(undefined8 *)(param_1 + 0x1be0) = 0;
    *(undefined8 *)(param_1 + 0x1be8) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1bc0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1bd0) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1bc0) = 0;
    *(undefined8 *)(param_1 + 0x1bc8) = 0;
    *(undefined8 *)(param_1 + 0x1bd0) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1ba8);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1bb8) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1ba8) = 0;
    *(undefined8 *)(param_1 + 0x1bb0) = 0;
    *(undefined8 *)(param_1 + 0x1bb8) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1b90);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1ba0) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1b90) = 0;
    *(undefined8 *)(param_1 + 0x1b98) = 0;
    *(undefined8 *)(param_1 + 0x1ba0) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1b78);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1b88) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1b78) = 0;
    *(undefined8 *)(param_1 + 0x1b80) = 0;
    *(undefined8 *)(param_1 + 0x1b88) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1b60);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1b70) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1b60) = 0;
    *(undefined8 *)(param_1 + 0x1b68) = 0;
    *(undefined8 *)(param_1 + 0x1b70) = 0;
  }
  _eh_vector_destructor_iterator_((void *)(param_1 + 6000),0x18,0x2a,FUN_1400030c0);
  lVar12 = *(longlong *)(param_1 + 0x1758);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1768) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1758) = 0;
    *(undefined8 *)(param_1 + 0x1760) = 0;
    *(undefined8 *)(param_1 + 0x1768) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1740);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1750) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1740) = 0;
    *(undefined8 *)(param_1 + 0x1748) = 0;
    *(undefined8 *)(param_1 + 0x1750) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1728);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1738) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1728) = 0;
    *(undefined8 *)(param_1 + 0x1730) = 0;
    *(undefined8 *)(param_1 + 0x1738) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1710);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1720) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1710) = 0;
    *(undefined8 *)(param_1 + 0x1718) = 0;
    *(undefined8 *)(param_1 + 0x1720) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x16f8);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1708) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x16f8) = 0;
    *(undefined8 *)(param_1 + 0x1700) = 0;
    *(undefined8 *)(param_1 + 0x1708) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x16e0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x16f0) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x16e0) = 0;
    *(undefined8 *)(param_1 + 0x16e8) = 0;
    *(undefined8 *)(param_1 + 0x16f0) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x16c8);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x16d8) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x16c8) = 0;
    *(undefined8 *)(param_1 + 0x16d0) = 0;
    *(undefined8 *)(param_1 + 0x16d8) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x16b0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x16c0) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x16b0) = 0;
    *(undefined8 *)(param_1 + 0x16b8) = 0;
    *(undefined8 *)(param_1 + 0x16c0) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1698);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x16a8) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1698) = 0;
    *(undefined8 *)(param_1 + 0x16a0) = 0;
    *(undefined8 *)(param_1 + 0x16a8) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1680);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1690) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1680) = 0;
    *(undefined8 *)(param_1 + 0x1688) = 0;
    *(undefined8 *)(param_1 + 0x1690) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1668);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1678) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1668) = 0;
    *(undefined8 *)(param_1 + 0x1670) = 0;
    *(undefined8 *)(param_1 + 0x1678) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1650);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1660) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1650) = 0;
    *(undefined8 *)(param_1 + 0x1658) = 0;
    *(undefined8 *)(param_1 + 0x1660) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1638);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1648) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1638) = 0;
    *(undefined8 *)(param_1 + 0x1640) = 0;
    *(undefined8 *)(param_1 + 0x1648) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1620);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1630) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1620) = 0;
    *(undefined8 *)(param_1 + 0x1628) = 0;
    *(undefined8 *)(param_1 + 0x1630) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1608);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1618) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1608) = 0;
    *(undefined8 *)(param_1 + 0x1610) = 0;
    *(undefined8 *)(param_1 + 0x1618) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x15f0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1600) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x15f0) = 0;
    *(undefined8 *)(param_1 + 0x15f8) = 0;
    *(undefined8 *)(param_1 + 0x1600) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x15d8);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x15e8) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x15d8) = 0;
    *(undefined8 *)(param_1 + 0x15e0) = 0;
    *(undefined8 *)(param_1 + 0x15e8) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x15c0);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x15d0) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x15c0) = 0;
    *(undefined8 *)(param_1 + 0x15c8) = 0;
    *(undefined8 *)(param_1 + 0x15d0) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x15a8);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x15b8) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x15a8) = 0;
    *(undefined8 *)(param_1 + 0x15b0) = 0;
    *(undefined8 *)(param_1 + 0x15b8) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1590);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x15a0) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1590) = 0;
    *(undefined8 *)(param_1 + 0x1598) = 0;
    *(undefined8 *)(param_1 + 0x15a0) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1578);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1588) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1578) = 0;
    *(undefined8 *)(param_1 + 0x1580) = 0;
    *(undefined8 *)(param_1 + 0x1588) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1560);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1570) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1560) = 0;
    *(undefined8 *)(param_1 + 0x1568) = 0;
    *(undefined8 *)(param_1 + 0x1570) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1548);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1558) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1548) = 0;
    *(undefined8 *)(param_1 + 0x1550) = 0;
    *(undefined8 *)(param_1 + 0x1558) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1530);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1540) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1530) = 0;
    *(undefined8 *)(param_1 + 0x1538) = 0;
    *(undefined8 *)(param_1 + 0x1540) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1518);
  if (lVar12 != 0) {
    FUN_140002020(lVar12,*(longlong *)(param_1 + 0x1528) - lVar12 >> 1,2);
    *(undefined8 *)(param_1 + 0x1518) = 0;
    *(undefined8 *)(param_1 + 0x1520) = 0;
    *(undefined8 *)(param_1 + 0x1528) = 0;
  }
  if (*(longlong *)(param_1 + 0x1500) != 0) {
    FUN_14000c440();
    *(undefined8 *)(param_1 + 0x1500) = 0;
    *(undefined8 *)(param_1 + 0x1508) = 0;
    *(undefined8 *)(param_1 + 0x1510) = 0;
  }
  FUN_140002620(param_1 + 0x14e8);
  FUN_140002620(param_1 + 0x14d0);
  FUN_140002620(param_1 + 0x14b8);
  FUN_140002620(param_1 + 0x14a0);
  FUN_1400025c0(param_1 + 0x1488);
  FUN_140002620(param_1 + 0x1470);
  FUN_1400025c0(param_1 + 0x1458);
  FUN_140002620(param_1 + 0x1440);
  FUN_1400030c0(param_1 + 0x1428);
  FUN_1400030c0(param_1 + 0x1410);
  FUN_1400030c0(param_1 + 0x13f8);
  FUN_1400030c0(param_1 + 0x13e0);
  FUN_1400030c0(plVar1);
  FUN_1400025c0(param_1 + 0x1350);
  FUN_1400030c0((undefined8 *)(param_1 + 0x1320));
  FUN_1400030c0(param_1 + 0x1308);
  FUN_1400025c0(param_1 + 0x12e8);
  FUN_1400025c0(param_1 + 0x12d0);
  FUN_1400025c0(param_1 + 0x12b8);
  FUN_1400025c0(param_1 + 0x12a0);
  FUN_1400025c0(param_1 + 0x1288);
  FUN_1400025c0(param_1 + 0x1270);
  FUN_14000e8f0(param_1 + 0x1240);
  FUN_1400025c0(param_1 + 0x11d8);
  FUN_1400025c0(param_1 + 0x11b8);
  FUN_1400030c0(param_1 + 0x1198);
  FUN_1400030c0(param_1 + 0x1180);
  FUN_1400030c0(param_1 + 0x1168);
  FUN_1400030c0(param_1 + 0x1150);
  FUN_1400030c0(param_1 + 0x1138);
  FUN_1400030c0(param_1 + 0x1120);
  FUN_1400030c0(param_1 + 0x1100);
  FUN_1400030c0(param_1 + 0x10e0);
  FUN_1400030c0(param_1 + 0x10c8);
  FUN_1400030c0(param_1 + 0x10b0);
  FUN_1400025c0(param_1 + 0x1098);
  FUN_1400025c0(param_1 + 0x1080);
  FUN_1400025c0(param_1 + 0x1068);
  FUN_140002620(param_1 + 0x1050);
  FUN_140002620(param_1 + 0x1038);
  FUN_14048e600(param_1 + 0x1018);
  FUN_1400030c0(plVar2);
  FUN_1400025c0(param_1 + 0xfe8);
  FUN_1400025c0(param_1 + 0xfd0);
  FUN_1400025c0(param_1 + 0xfb8);
  FUN_1400025c0(param_1 + 4000);
  FUN_1400030c0(param_1 + 0xf80);
  FUN_140002620(param_1 + 0xf68);
  FUN_140002620(param_1 + 0xf50);
  FUN_14007c030(param_1 + 0xf38);
  FUN_14007c030(param_1 + 0xf20);
  FUN_14007c030(param_1 + 0xf08);
  FUN_14007c030(param_1 + 0xef0);
  FUN_140002620(param_1 + 0xed8);
  FUN_1400025c0(param_1 + 0xec0);
  FUN_140002620(param_1 + 0xea8);
  FUN_1400030c0(param_1 + 0xcc8);
  FUN_1400030c0(param_1 + 0xc98);
  FUN_1400030c0(param_1 + 0xc80);
  FUN_140002620(param_1 + 0xc68);
  FUN_140002620(param_1 + 0xc50);
  FUN_140002620(param_1 + 0xc38);
  FUN_140002620(param_1 + 0xc20);
  FUN_140002620(param_1 + 0xc08);
  FUN_140002620(param_1 + 0xbf0);
  FUN_140002620(param_1 + 0xbd8);
  FUN_1400025c0(param_1 + 0xbc0);
  FUN_1400025c0(param_1 + 0xba8);
  FUN_1400025c0(param_1 + 0xb90);
  FUN_1400025c0(param_1 + 0xb78);
  FUN_1400025c0(param_1 + 0xb60);
  FUN_1400025c0(param_1 + 0xb48);
  FUN_1400025c0(param_1 + 0xb30);
  FUN_1400025c0(param_1 + 0xb18);
  FUN_140002620(param_1 + 0xb00);
  FUN_140002620(param_1 + 0xae8);
  FUN_140002620(param_1 + 0xad0);
  FUN_1400025c0(param_1 + 0xab8);
  FUN_140002620(param_1 + 0xaa0);
  FUN_140002620(param_1 + 0xa88);
  FUN_1400025c0(param_1 + 0xa70);
  FUN_140002620(param_1 + 0xa58);
  FUN_1400025c0(param_1 + 0xa40);
  FUN_1400025c0(param_1 + 0xa28);
  FUN_140002620(param_1 + 0xa10);
  FUN_140002620(param_1 + 0x9f8);
  FUN_1400025c0(param_1 + 0x9e0);
  FUN_140002620(param_1 + 0x9c8);
  FUN_1400025c0(param_1 + 0x9b0);
  FUN_1400025c0(param_1 + 0x998);
  FUN_140002620(param_1 + 0x980);
  FUN_1400025c0(param_1 + 0x968);
  FUN_140002620(param_1 + 0x950);
  FUN_1400025c0(param_1 + 0x938);
  FUN_140002620(param_1 + 0x920);
  FUN_1400025c0(param_1 + 0x908);
  FUN_140002620(param_1 + 0x8f0);
  FUN_1400025c0(param_1 + 0x8d8);
  FUN_140002620(param_1 + 0x8c0);
  FUN_1400025c0(param_1 + 0x8a8);
  FUN_140002620(param_1 + 0x890);
  FUN_1400025c0(param_1 + 0x878);
  FUN_140002620(param_1 + 0x860);
  FUN_1400025c0(param_1 + 0x848);
  FUN_140002620(param_1 + 0x830);
  FUN_1400025c0(param_1 + 0x818);
  FUN_140002620(param_1 + 0x800);
  FUN_1400025c0(param_1 + 0x7e8);
  FUN_140002620(param_1 + 2000);
  FUN_1400025c0(param_1 + 0x7b8);
  FUN_140002620(param_1 + 0x7a0);
  FUN_1400025c0(param_1 + 0x788);
  FUN_140002620(param_1 + 0x770);
  FUN_1400025c0(param_1 + 0x758);
  FUN_140002620(param_1 + 0x740);
  FUN_1400025c0(param_1 + 0x728);
  FUN_140002620(param_1 + 0x710);
  FUN_1400025c0(param_1 + 0x6f8);
  FUN_140002620(param_1 + 0x6e0);
  FUN_1400025c0(param_1 + 0x6c8);
  FUN_140002620(param_1 + 0x6b0);
  FUN_1400025c0(param_1 + 0x698);
  FUN_140002620(param_1 + 0x680);
  FUN_1400025c0(param_1 + 0x668);
  FUN_140002620(param_1 + 0x650);
  FUN_1400025c0(param_1 + 0x638);
  FUN_140002620(param_1 + 0x620);
  FUN_1400025c0(param_1 + 0x608);
  FUN_140002620(param_1 + 0x5f0);
  FUN_1400025c0(param_1 + 0x5d8);
  FUN_140002620(param_1 + 0x5c0);
  FUN_1400025c0(param_1 + 0x5a8);
  FUN_140002620(param_1 + 0x590);
  FUN_1400025c0(param_1 + 0x578);
  FUN_140002620(param_1 + 0x560);
  FUN_1400025c0(param_1 + 0x548);
  FUN_1400025c0(param_1 + 0x530);
  FUN_1400025c0(param_1 + 0x518);
  FUN_1400025c0(param_1 + 0x500);
  FUN_140002620(param_1 + 0x4e8);
  FUN_1400025c0(param_1 + 0x4d0);
  FUN_140002620(param_1 + 0x4b8);
  FUN_1400025c0(param_1 + 0x4a0);
  FUN_140002620(param_1 + 0x488);
  FUN_1400025c0(param_1 + 0x470);
  FUN_140002620(param_1 + 0x458);
  FUN_1400025c0(param_1 + 0x440);
  FUN_140002620(param_1 + 0x428);
  FUN_1400025c0(param_1 + 0x410);
  FUN_140002620(param_1 + 0x3f8);
  FUN_1400025c0(param_1 + 0x3e0);
  FUN_140002620(param_1 + 0x3c8);
  FUN_1400025c0(param_1 + 0x3b0);
  FUN_140002620(param_1 + 0x398);
  FUN_1400025c0(param_1 + 0x380);
  FUN_140002620(param_1 + 0x368);
  FUN_1400025c0(param_1 + 0x350);
  FUN_140002620(param_1 + 0x338);
  FUN_1400025c0(param_1 + 800);
  FUN_140002620(param_1 + 0x308);
  FUN_1400025c0(param_1 + 0x2f0);
  FUN_140002620(param_1 + 0x2d8);
  FUN_1400025c0(param_1 + 0x2c0);
  FUN_140002620(param_1 + 0x2a8);
  FUN_1400025c0(param_1 + 0x290);
  FUN_140002620(param_1 + 0x278);
  FUN_140002620(param_1 + 0x260);
  FUN_140002620(param_1 + 0x248);
  FUN_140002620(param_1 + 0x230);
  FUN_140002620(param_1 + 0x218);
  FUN_140002620(param_1 + 0x200);
  FUN_140002620(param_1 + 0x1e8);
  FUN_140002620(param_1 + 0x1d0);
  FUN_140002620(param_1 + 0x1b8);
  FUN_140002620(param_1 + 0x1a0);
  FUN_140002620(param_1 + 0x188);
  FUN_140002620(param_1 + 0x170);
  FUN_140002620(param_1 + 0x158);
  FUN_140002620(param_1 + 0x140);
  FUN_140002620(param_1 + 0x128);
  FUN_1400025c0(param_1 + 0x110);
  FUN_1400025c0(param_1 + 0xf8);
  FUN_1400025c0(param_1 + 0xe0);
  FUN_1400030c0(param_1 + 200);
  FUN_1400030c0(param_1 + 0xb0);
  FUN_1400030c0(param_1 + 0x98);
  FUN_140002740(param_1 + 0x18);
  return;
}

