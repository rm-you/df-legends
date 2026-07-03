// FUN_140907ac0 @ 140907ac0
// callees:
//   -> 140c8e620 FUN_140c8e620
//   -> 140907950 FUN_140907950
//   -> EXTERNAL:000000e1 memmove
//   -> 140073930 FUN_140073930
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140907ac0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar11 = 0;
  if (*(longlong *)(param_1 + 6) != 0) {
    FUN_140c8e620(*(longlong *)(param_1 + 6),3,param_3,param_4,0xfffffffffffffffe);
    FUN_140907950(&DAT_141c66fd0,*(undefined8 *)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (DAT_141c67360 == '\0') {
    lVar7 = DAT_141c67090;
    uVar10 = uVar11;
    uVar14 = uVar11;
    if (DAT_141c67098 - DAT_141c67090 >> 3 != 0) {
      do {
        lVar2 = *(longlong *)(uVar14 + lVar7);
        if (*(int *)(lVar2 + 0x20) == *param_1) {
          *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
          lVar7 = DAT_141c67090;
        }
        iVar8 = (int)(*(longlong *)(lVar2 + 0x30) - *(longlong *)(lVar2 + 0x28) >> 2) + -1;
        if (-1 < iVar8) {
          lVar6 = (longlong)iVar8 * 4;
          lVar13 = lVar6;
          do {
            if (*(int *)(*(longlong *)(lVar2 + 0x28) + lVar6) == *param_1) {
              pvVar5 = (void *)(*(longlong *)(lVar2 + 0x28) + lVar13);
              pvVar1 = (void *)((longlong)pvVar5 + 4);
              memmove(pvVar5,pvVar1,*(longlong *)(lVar2 + 0x30) - (longlong)pvVar1);
              *(longlong *)(lVar2 + 0x30) = *(longlong *)(lVar2 + 0x30) + -4;
            }
            lVar13 = lVar13 + -4;
            lVar6 = lVar6 + -4;
            iVar8 = iVar8 + -1;
            lVar7 = DAT_141c67090;
          } while (-1 < iVar8);
        }
        if (*(int *)(lVar2 + 0x44) == *param_1) {
          *(undefined4 *)(lVar2 + 0x44) = 0xffffffff;
          lVar7 = DAT_141c67090;
        }
        uVar12 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar12;
        uVar14 = uVar14 + 8;
      } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(DAT_141c67098 - lVar7 >> 3));
    }
    iVar8 = (int)(DAT_141c67098 - lVar7 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = iVar8 + (int)uVar10 >> 1;
        piVar3 = *(int **)(lVar7 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(lVar7 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c67098 - (longlong)pvVar1);
          DAT_141c67098 = DAT_141c67098 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c670b0 - DAT_141c670a8 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = iVar8 + (int)uVar10 >> 1;
        piVar3 = *(int **)(DAT_141c670a8 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c670a8 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c670b0 - (longlong)pvVar1);
          DAT_141c670b0 = DAT_141c670b0 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c670c8 - DAT_141c670c0 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c670c0 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c670c0 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c670c8 - (longlong)pvVar1);
          DAT_141c670c8 = DAT_141c670c8 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c670e0 - DAT_141c670d8 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c670d8 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c670d8 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c670e0 - (longlong)pvVar1);
          DAT_141c670e0 = DAT_141c670e0 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c670f8 - DAT_141c670f0 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c670f0 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c670f0 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c670f8 - (longlong)pvVar1);
          DAT_141c670f8 = DAT_141c670f8 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    puVar9 = &DAT_141c67108;
    lVar7 = 0xf;
    do {
      FUN_140073930(param_1,puVar9);
      puVar9 = puVar9 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar8 = (int)(DAT_141c67278 - DAT_141c67270 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c67270 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c67270 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c67278 - (longlong)pvVar1);
          DAT_141c67278 = DAT_141c67278 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c67290 - DAT_141c67288 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c67288 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c67288 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c67290 - (longlong)pvVar1);
          DAT_141c67290 = DAT_141c67290 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c672a8 - DAT_141c672a0 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c672a0 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c672a0 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c672a8 - (longlong)pvVar1);
          DAT_141c672a8 = DAT_141c672a8 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c672c0 - DAT_141c672b8 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c672b8 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c672b8 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c672c0 - (longlong)pvVar1);
          DAT_141c672c0 = DAT_141c672c0 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c672d8 - DAT_141c672d0 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c672d0 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c672d0 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c672d8 - (longlong)pvVar1);
          DAT_141c672d8 = DAT_141c672d8 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c672f0 - DAT_141c672e8 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c672e8 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c672e8 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c672f0 - (longlong)pvVar1);
          DAT_141c672f0 = DAT_141c672f0 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c67308 - DAT_141c67300 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c67300 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c67300 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c67308 - (longlong)pvVar1);
          DAT_141c67308 = DAT_141c67308 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c67320 - DAT_141c67318 >> 3) + -1;
    uVar10 = uVar11;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar10 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c67318 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c67318 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c67320 - (longlong)pvVar1);
          DAT_141c67320 = DAT_141c67320 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar10 <= iVar8);
    }
    iVar8 = (int)(DAT_141c67338 - DAT_141c67330 >> 3) + -1;
    if (-1 < iVar8) {
      do {
        iVar4 = (int)uVar11 + iVar8 >> 1;
        piVar3 = *(int **)(DAT_141c67330 + (longlong)iVar4 * 8);
        if (piVar3 == param_1) {
          pvVar5 = (void *)(DAT_141c67330 + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar5 + 8);
          memmove(pvVar5,pvVar1,DAT_141c67338 - (longlong)pvVar1);
          DAT_141c67338 = DAT_141c67338 + -8;
          break;
        }
        if (*param_1 < *piVar3) {
          iVar8 = iVar4 + -1;
        }
        else {
          uVar11 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar11 <= iVar8);
    }
  }
  if (*(void **)(param_1 + 0x16) != (void *)0x0) {
    free(*(void **)(param_1 + 0x16));
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar7 = *(longlong *)(param_1 + 10);
  if (lVar7 != 0) {
    FUN_140002020(lVar7,*(longlong *)(param_1 + 0xe) - lVar7 >> 2,4);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return;
}

