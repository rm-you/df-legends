// FUN_1407085e0 @ 1407085e0
// callees:
//   -> 140051210 FUN_140051210
//   -> 1400de0d0 FUN_1400de0d0
//   -> 1406fb4b0 FUN_1406fb4b0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_1407085e0(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = 0;
  uVar10 = uVar14;
  uVar11 = uVar14;
  if (*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 3 != 0) {
    do {
      if ((DAT_141d7a678 == '\0') &&
         (uVar4 = (**(code **)**(undefined8 **)(uVar11 + *(longlong *)(param_1 + 0xe8)))(),
         (uVar4 & 0xfff9) == 0)) {
        iVar8 = *(int *)(*(longlong *)(uVar11 + *(longlong *)(param_1 + 0xe8)) + 8);
        lVar5 = DAT_141c53720 - DAT_141c53718 >> 3;
        if ((lVar5 != 0) &&
           ((iVar8 != -1 && (iVar7 = (int)lVar5 + -1, uVar13 = uVar14, -1 < iVar7)))) {
          do {
            iVar6 = iVar7 + (int)uVar13 >> 1;
            lVar5 = *(longlong *)(DAT_141c53718 + (longlong)iVar6 * 8);
            if (*(int *)(lVar5 + 4) == iVar8) {
              if (lVar5 != 0) {
                FUN_140051210(*(undefined4 *)(param_1 + 0xe0),lVar5 + 0xe0);
                FUN_1400de0d0(param_1,lVar5 + 0x1410);
              }
              break;
            }
            if (iVar8 < *(int *)(lVar5 + 4)) {
              iVar7 = iVar6 + -1;
            }
            else {
              uVar13 = (ulonglong)(iVar6 + 1);
            }
          } while ((int)uVar13 <= iVar7);
        }
      }
      plVar2 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0xe8));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 3));
  }
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xe8);
  uVar10 = uVar14;
  uVar11 = uVar14;
  if (*(longlong *)(param_1 + 0x108) - *(longlong *)(param_1 + 0x100) >> 3 != 0) {
    do {
      plVar2 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0x100));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x108) - *(longlong *)(param_1 + 0x100) >> 3));
  }
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x100);
  uVar10 = uVar14;
  uVar11 = uVar14;
  if (*(longlong *)(param_1 + 0x120) - *(longlong *)(param_1 + 0x118) >> 3 != 0) {
    do {
      plVar2 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0x118));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x120) - *(longlong *)(param_1 + 0x118) >> 3));
  }
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
  pvVar3 = *(void **)(param_1 + 0x130);
  if (pvVar3 != (void *)0x0) {
    FUN_1406fb4b0(pvVar3);
    free(pvVar3);
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x158);
  if (puVar12 != (undefined8 *)0x0) {
    if ((void *)*puVar12 != (void *)0x0) {
      free((void *)*puVar12);
    }
    if ((void *)puVar12[2] != (void *)0x0) {
      free((void *)puVar12[2]);
    }
    *puVar12 = 0;
    *(undefined2 *)(puVar12 + 1) = 0;
    puVar12[2] = 0;
    *(undefined2 *)(puVar12 + 3) = 0;
    free(puVar12);
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(void **)(param_1 + 0x160) != (void *)0x0) {
    free(*(void **)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(void **)(param_1 + 0x138) != (void *)0x0) {
    free(*(void **)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (DAT_141d7a678 == '\0') {
    iVar8 = (int)(DAT_141d7a0b0 - DAT_141d7a0a8 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = iVar8 + (int)uVar10 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a0a8 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a0b0 - (longlong)pvVar3);
          DAT_141d7a0b0 = DAT_141d7a0b0 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a350 - DAT_141d7a348 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = iVar8 + (int)uVar10 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a348 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a348 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a350 - (longlong)pvVar3);
          DAT_141d7a350 = DAT_141d7a350 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a368 - DAT_141d7a360 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a360 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a360 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a368 - (longlong)pvVar3);
          DAT_141d7a368 = DAT_141d7a368 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a380 - DAT_141d7a378 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a378 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a378 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a380 - (longlong)pvVar3);
          DAT_141d7a380 = DAT_141d7a380 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a398 - DAT_141d7a390 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a390 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a390 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a398 - (longlong)pvVar3);
          DAT_141d7a398 = DAT_141d7a398 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a3b0 - DAT_141d7a3a8 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a3a8 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a3a8 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a3b0 - (longlong)pvVar3);
          DAT_141d7a3b0 = DAT_141d7a3b0 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a3c8 - DAT_141d7a3c0 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a3c0 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a3c0 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a3c8 - (longlong)pvVar3);
          DAT_141d7a3c8 = DAT_141d7a3c8 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    puVar12 = &DAT_141d7a3d8;
    lVar5 = 0xf;
    do {
      FUN_1400de0d0(param_1,puVar12);
      puVar12 = puVar12 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar8 = (int)(DAT_141d7a548 - DAT_141d7a540 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a540 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a540 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a548 - (longlong)pvVar3);
          DAT_141d7a548 = DAT_141d7a548 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a560 - DAT_141d7a558 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a558 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a558 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a560 - (longlong)pvVar3);
          DAT_141d7a560 = DAT_141d7a560 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a578 - DAT_141d7a570 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a570 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a570 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a578 - (longlong)pvVar3);
          DAT_141d7a578 = DAT_141d7a578 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a590 - DAT_141d7a588 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a588 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a588 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a590 - (longlong)pvVar3);
          DAT_141d7a590 = DAT_141d7a590 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a5a8 - DAT_141d7a5a0 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a5a0 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a5a0 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a5a8 - (longlong)pvVar3);
          DAT_141d7a5a8 = DAT_141d7a5a8 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a5c0 - DAT_141d7a5b8 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a5b8 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a5b8 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a5c0 - (longlong)pvVar3);
          DAT_141d7a5c0 = DAT_141d7a5c0 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a5d8 - DAT_141d7a5d0 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a5d0 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a5d0 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a5d8 - (longlong)pvVar3);
          DAT_141d7a5d8 = DAT_141d7a5d8 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a5f0 - DAT_141d7a5e8 >> 3) + -1;
    uVar10 = uVar14;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar10 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a5e8 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a5e8 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a5f0 - (longlong)pvVar3);
          DAT_141d7a5f0 = DAT_141d7a5f0 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141d7a608 - DAT_141d7a600 >> 3) + -1;
    if (-1 < iVar8) {
      do {
        iVar7 = (int)uVar14 + iVar8 >> 1;
        lVar5 = *(longlong *)(DAT_141d7a600 + (longlong)iVar7 * 8);
        if (lVar5 == param_1) {
          pvVar1 = (void *)(DAT_141d7a600 + (longlong)iVar7 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141d7a608 - (longlong)pvVar3);
          DAT_141d7a608 = DAT_141d7a608 + -8;
          break;
        }
        if (*(int *)(param_1 + 0xe0) < *(int *)(lVar5 + 0xe0)) {
          iVar8 = iVar7 + -1;
        }
        else {
          uVar14 = (ulonglong)(iVar7 + 1);
        }
      } while ((int)uVar14 <= iVar8);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0x128) - lVar5 >> 3,8);
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x100);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0x110) - lVar5 >> 3,8);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0xe8);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0xf8) - lVar5 >> 3,8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    free(*(void **)(param_1 + 200));
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_140002740(param_1 + 0x38);
  return;
}

