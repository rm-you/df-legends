// FUN_14078a230 @ 14078a230
// callees:
//   -> 140dfb5b4 free
//   -> 1407085e0 FUN_1407085e0
//   -> 14078a5c0 FUN_14078a5c0


void FUN_14078a230(longlong *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *(undefined1 *)(param_1 + 0xc6) = 1;
  iVar3 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar1 = *(longlong **)(*param_1 + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x130))(plVar1,1);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  uVar6 = 0;
  param_1[1] = *param_1;
  param_1[4] = param_1[3];
  puVar5 = (undefined8 *)param_1[0x5d];
  uVar7 = (ulonglong)(param_1[0x5e] + (7 - (longlong)puVar5)) >> 3;
  if ((undefined8 *)param_1[0x5e] < puVar5) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      pvVar2 = (void *)*puVar5;
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
          free(*(void **)((longlong)pvVar2 + 8));
          *(undefined8 *)((longlong)pvVar2 + 8) = 0;
        }
        free(pvVar2);
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  param_1[0x5e] = param_1[0x5d];
  iVar3 = (int)(param_1[10] - param_1[9] >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      free(*(void **)(param_1[9] + lVar4 * 8));
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  param_1[10] = param_1[9];
  iVar3 = (int)(param_1[7] - param_1[6] >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      free(*(void **)(param_1[6] + lVar4 * 8));
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  param_1[7] = param_1[6];
  iVar3 = (int)(param_1[0xd] - param_1[0xc] >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar2 = *(void **)(param_1[0xc] + lVar4 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_1407085e0(pvVar2);
        free(pvVar2);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  param_1[0xd] = param_1[0xc];
  iVar3 = (int)(param_1[0x10] - param_1[0xf] >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar1 = *(longlong **)(param_1[0xf] + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x60))(plVar1,1);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  param_1[0x10] = param_1[0xf];
  param_1[0x13] = param_1[0x12];
  param_1[0x16] = param_1[0x15];
  param_1[0x19] = param_1[0x18];
  param_1[0x1c] = param_1[0x1b];
  param_1[0x1f] = param_1[0x1e];
  param_1[0x22] = param_1[0x21];
  param_1[0x25] = param_1[0x24];
  param_1[0x28] = param_1[0x27];
  param_1[0x2b] = param_1[0x2a];
  param_1[0x43] = param_1[0x42];
  param_1[0x3d] = param_1[0x3c];
  param_1[0x2e] = param_1[0x2d];
  param_1[0x31] = param_1[0x30];
  param_1[0x34] = param_1[0x33];
  param_1[0x37] = param_1[0x36];
  param_1[0x3a] = param_1[0x39];
  param_1[0x40] = param_1[0x3f];
  param_1[0x46] = param_1[0x45];
  iVar3 = (int)(param_1[0x49] - param_1[0x48] >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar2 = *(void **)(param_1[0x48] + lVar4 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_14078a5c0(pvVar2);
        free(pvVar2);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  param_1[0x49] = param_1[0x48];
  *(undefined1 *)(param_1 + 0xc6) = 0;
  param_1[200] = param_1[199];
  param_1[0xcc] = 0;
  param_1[0x54] = param_1[0x53];
  return;
}

