// FUN_140288480 @ 140288480
// callees:
//   -> 140287cf0 FUN_140287cf0
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 1402888a0 FUN_1402888a0
//   -> 140288970 FUN_140288970
//   -> 140288af0 FUN_140288af0
//   -> 140288c40 FUN_140288c40
//   -> 140051e20 FUN_140051e20
//   -> 140288ce0 FUN_140288ce0
//   -> 140288e30 FUN_140288e30
//   -> 140288f10 FUN_140288f10


void FUN_140288480(longlong param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_140287cf0(param_1 + 0x6c0);
  iVar2 = (int)(*(longlong *)(param_1 + 0x15d8) - *(longlong *)(param_1 + 0x15d0) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x15d0) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        puVar4 = (undefined8 *)((longlong)pvVar1 + 0x58);
        if (0xf < *(ulonglong *)((longlong)pvVar1 + 0x70)) {
          FUN_140002020(*puVar4,*(ulonglong *)((longlong)pvVar1 + 0x70) + 1,1);
        }
        *(undefined8 *)((longlong)pvVar1 + 0x70) = 0xf;
        *(undefined8 *)((longlong)pvVar1 + 0x68) = 0;
        if (0xf < *(ulonglong *)((longlong)pvVar1 + 0x70)) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x15d8) = *(undefined8 *)(param_1 + 0x15d0);
  iVar2 = (int)(*(longlong *)(param_1 + 0x15f0) - *(longlong *)(param_1 + 0x15e8) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x15e8) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_1402888a0(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x15f0) = *(undefined8 *)(param_1 + 0x15e8);
  iVar2 = (int)(*(longlong *)(param_1 + 0x1698) - *(longlong *)(param_1 + 0x1690) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x1690) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140288970(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x1698) = *(undefined8 *)(param_1 + 0x1690);
  iVar2 = (int)(*(longlong *)(param_1 + 0x16b0) - *(longlong *)(param_1 + 0x16a8) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x16a8) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140288af0(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x16b0) = *(undefined8 *)(param_1 + 0x16a8);
  iVar2 = (int)(*(longlong *)(param_1 + 0x16c8) - *(longlong *)(param_1 + 0x16c0) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x16c0) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140288c40(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x16c8) = *(undefined8 *)(param_1 + 0x16c0);
  FUN_140051e20(param_1 + 0x3e78);
  FUN_140051e20(param_1 + 0x3e90);
  *(undefined8 *)(param_1 + 0x3eb0) = *(undefined8 *)(param_1 + 0x3ea8);
  FUN_140051e20(param_1 + 0x3ec0);
  FUN_140051e20(param_1 + 0x3ed8);
  FUN_140051e20(param_1 + 0x3ef0);
  iVar2 = (int)(*(longlong *)(param_1 + 0x3e68) - *(longlong *)(param_1 + 0x3e60) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x3e60) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140288ce0(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x3e68) = *(undefined8 *)(param_1 + 0x3e60);
  *(undefined8 *)(param_1 + 0x4178) = *(undefined8 *)(param_1 + 0x4170);
  *(undefined8 *)(param_1 + 0x4190) = *(undefined8 *)(param_1 + 0x4188);
  FUN_140051e20(param_1 + 0x41a0);
  FUN_140051e20(param_1 + 0x41b8);
  iVar2 = (int)(*(longlong *)(param_1 + 0x41d8) - *(longlong *)(param_1 + 0x41d0) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x41d0) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140288e30(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x41d8) = *(undefined8 *)(param_1 + 0x41d0);
  *(undefined8 *)(param_1 + 0x41f0) = *(undefined8 *)(param_1 + 0x41e8);
  *(undefined8 *)(param_1 + 0x4208) = *(undefined8 *)(param_1 + 0x4200);
  iVar2 = (int)(*(longlong *)(param_1 + 0x4220) - *(longlong *)(param_1 + 0x4218) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x4218) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140288f10(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x4220) = *(undefined8 *)(param_1 + 0x4218);
  return;
}

