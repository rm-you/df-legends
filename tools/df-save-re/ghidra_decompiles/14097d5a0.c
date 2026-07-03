// FUN_14097d5a0 @ 14097d5a0
// callees:
//   -> 140dfb5b4 free
//   -> 1405d51a0 FUN_1405d51a0
//   -> 14042a160 FUN_14042a160
//   -> 14042a030 FUN_14042a030
//   -> 1405d5860 FUN_1405d5860
//   -> 14042a310 FUN_14042a310
//   -> 140dfc99c memset
//   -> 14000bd10 FUN_14000bd10
//   -> 1401b2e10 FUN_1401b2e10
//   -> 140d89d60 FUN_140d89d60
//   -> 1409375e0 FUN_1409375e0


void FUN_14097d5a0(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar13 = 0;
  *(undefined8 *)(param_1 + 0x8b78) = *(undefined8 *)(param_1 + 0x8b70);
  *(undefined8 *)(param_1 + 0x8b90) = *(undefined8 *)(param_1 + 0x8b88);
  lVar9 = 0x10;
  *(undefined8 *)(param_1 + 0x8ba8) = *(undefined8 *)(param_1 + 0x8ba0);
  puVar5 = (undefined8 *)(param_1 + 0x87b8);
  *(undefined8 *)(param_1 + 0x8bb8) = 0;
  *(undefined4 *)(param_1 + 0x8bc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8bc4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x8b6c) = 0;
  *(undefined1 *)(param_1 + 0x8bc8) = 0;
  do {
    *(undefined2 *)(puVar5 + 2) = 0xffff;
    *puVar5 = 0;
    if ((ulonglong)puVar5[1] < 0x10) {
      puVar7 = puVar5 + -2;
    }
    else {
      puVar7 = (undefined8 *)puVar5[-2];
    }
    puVar5 = puVar5 + 7;
    *(undefined1 *)puVar7 = 0;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0x8b28) = DAT_141c3411c;
  *(undefined4 *)(param_1 + 0x8b2c) = DAT_141c34120;
  *(undefined4 *)(param_1 + 0x8b30) = DAT_141c34124;
  *(undefined4 *)(param_1 + 0x8b34) = DAT_141c34128;
  uVar12 = uVar13;
  uVar11 = uVar13;
  if (*(longlong *)(param_1 + 0x8b40) - *(longlong *)(param_1 + 0x8b38) >> 3 != 0) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x8b38) + uVar12));
      uVar10 = (int)uVar11 + 1;
      uVar12 = uVar12 + 8;
      uVar11 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0x8b40) - *(longlong *)(param_1 + 0x8b38) >> 3));
  }
  *(undefined8 *)(param_1 + 0x8b40) = *(undefined8 *)(param_1 + 0x8b38);
  FUN_1405d51a0(param_1 + 0x64d8);
  iVar4 = (int)(*(longlong *)(param_1 + 0x6568) - *(longlong *)(param_1 + 0x6560) >> 3) + -1;
  lVar9 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      pvVar2 = *(void **)(*(longlong *)(param_1 + 0x6560) + lVar9 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_14042a160(pvVar2);
        free(pvVar2);
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  *(undefined8 *)(param_1 + 0x6568) = *(undefined8 *)(param_1 + 0x6560);
  *(undefined4 *)(param_1 + 0x6578) = 0;
  iVar4 = (int)(*(longlong *)(param_1 + 0x65e0) - *(longlong *)(param_1 + 0x65d8) >> 3) + -1;
  lVar9 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      pvVar2 = *(void **)(*(longlong *)(param_1 + 0x65d8) + lVar9 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_14042a030(pvVar2);
        free(pvVar2);
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  *(undefined8 *)(param_1 + 0x65e0) = *(undefined8 *)(param_1 + 0x65d8);
  *(undefined4 *)(param_1 + 0x65f0) = 0;
  FUN_1405d5860(param_1 + 0x65f8);
  puVar5 = *(undefined8 **)(param_1 + 0x85f8);
  uVar12 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x8600) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x8600) < puVar5) {
    uVar12 = uVar13;
  }
  uVar11 = uVar13;
  if (uVar12 != 0) {
    do {
      free((void *)*puVar5);
      uVar11 = uVar11 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar11 < uVar12);
  }
  *(undefined8 *)(param_1 + 0x8600) = *(undefined8 *)(param_1 + 0x85f8);
  iVar4 = (int)(*(longlong *)(param_1 + 0x8618) - *(longlong *)(param_1 + 0x8610) >> 3) + -1;
  lVar9 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      pvVar2 = *(void **)(*(longlong *)(param_1 + 0x8610) + lVar9 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_14042a310(pvVar2);
        free(pvVar2);
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  *(undefined8 *)(param_1 + 0x8618) = *(undefined8 *)(param_1 + 0x8610);
  *(undefined4 *)(param_1 + 0x8628) = 1;
  *(undefined1 *)(param_1 + 0x86b8) = 0;
  *(undefined8 *)(param_1 + 0x8708) = *(undefined8 *)(param_1 + 0x8700);
  *(undefined8 *)(param_1 + 0x8720) = *(undefined8 *)(param_1 + 0x8718);
  puVar5 = *(undefined8 **)(param_1 + 0x8730);
  uVar12 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x8738) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x8738) < puVar5) {
    uVar12 = uVar13;
  }
  uVar11 = uVar13;
  if (uVar12 != 0) {
    do {
      free((void *)*puVar5);
      uVar11 = uVar11 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar11 < uVar12);
  }
  *(undefined8 *)(param_1 + 0x8738) = *(undefined8 *)(param_1 + 0x8730);
  puVar5 = *(undefined8 **)(param_1 + 0x8748);
  uVar12 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x8750) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x8750) < puVar5) {
    uVar12 = uVar13;
  }
  uVar11 = uVar13;
  if (uVar12 != 0) {
    do {
      free((void *)*puVar5);
      uVar11 = uVar11 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar11 < uVar12);
  }
  *(undefined8 *)(param_1 + 0x8750) = *(undefined8 *)(param_1 + 0x8748);
  *(undefined8 *)(param_1 + 0x8768) = *(undefined8 *)(param_1 + 0x8760);
  *(undefined8 *)(param_1 + 0x8780) = *(undefined8 *)(param_1 + 0x8778);
  *(undefined8 *)(param_1 + 0x8798) = *(undefined8 *)(param_1 + 0x8790);
  *(undefined8 *)(param_1 + 0x6438) = *(undefined8 *)(param_1 + 0x6430);
  *(undefined8 *)(param_1 + 0x6450) = *(undefined8 *)(param_1 + 0x6448);
  *(undefined8 *)(param_1 + 0x6468) = *(undefined8 *)(param_1 + 0x6460);
  *(undefined8 *)(param_1 + 0x6480) = *(undefined8 *)(param_1 + 0x6478);
  *(undefined8 *)(param_1 + 0x6498) = *(undefined8 *)(param_1 + 0x6490);
  *(undefined2 *)(param_1 + 0x247c) = 1000;
  *(undefined2 *)(param_1 + 0x8b60) = 0;
  *(undefined4 *)(param_1 + 0x8cd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8cdc) = 0xffffffff;
  if ((DAT_141c34170 < 2) || ((*(byte *)(DAT_141c34168 + 1) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x8b66) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x8b66) = 1;
  }
  *(undefined4 *)(param_1 + 0x2478) = 1;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x20c) = 3;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0x2348) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xea61ea61;
  memset((void *)(param_1 + 0xc0),0,0x130);
  plVar1 = (longlong *)(param_1 + 0x1f0);
  FUN_14000bd10(plVar1,(longlong)(int)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3));
  uVar12 = uVar13;
  uVar11 = uVar13;
  if (*(longlong *)(param_1 + 0x1f8) - *plVar1 >> 2 != 0) {
    do {
      uVar10 = (int)uVar11 + 1;
      *(undefined4 *)(uVar12 + *plVar1) = 0;
      uVar12 = uVar12 + 4;
      uVar11 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0x1f8) - *plVar1 >> 2));
  }
  lVar9 = DAT_141c53720 - DAT_141c53718 >> 3;
  if (((lVar9 != 0) && (DAT_141c36b80 != -1)) &&
     (iVar4 = (int)lVar9 + -1, uVar12 = uVar13, -1 < iVar4)) {
    do {
      iVar6 = iVar4 + (int)uVar12 >> 1;
      lVar9 = *(longlong *)(DAT_141c53718 + (longlong)iVar6 * 8);
      if (*(int *)(lVar9 + 4) == DAT_141c36b80) {
        if ((lVar9 != 0) &&
           (uVar12 = uVar13, uVar11 = uVar13, uVar8 = uVar13,
           *(longlong *)(param_1 + 0x1f8) - *plVar1 >> 2 != 0)) goto LAB_14097db60;
        break;
      }
      if (DAT_141c36b80 < *(int *)(lVar9 + 4)) {
        iVar4 = iVar6 + -1;
      }
      else {
        uVar12 = (ulonglong)(iVar6 + 1);
      }
    } while ((int)uVar12 <= iVar4);
  }
  goto LAB_14097dba5;
  while( true ) {
    uVar10 = (int)uVar8 + 1;
    *(undefined4 *)(uVar12 + *plVar1) = *(undefined4 *)(uVar12 + *(longlong *)(lVar3 + 0x388));
    uVar12 = uVar12 + 4;
    uVar11 = (longlong)(int)uVar10;
    uVar8 = (ulonglong)uVar10;
    if ((ulonglong)(*(longlong *)(param_1 + 0x1f8) - *plVar1 >> 2) <=
        (ulonglong)(longlong)(int)uVar10) break;
LAB_14097db60:
    lVar3 = *(longlong *)(lVar9 + 8);
    if ((ulonglong)(*(longlong *)(lVar3 + 0x390) - *(longlong *)(lVar3 + 0x388) >> 2) <= uVar11)
    break;
  }
LAB_14097dba5:
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0x23f0) = *(undefined8 *)(param_1 + 0x23e8);
  *(undefined8 *)(param_1 + 0x2408) = *(undefined8 *)(param_1 + 0x2400);
  *(undefined8 *)(param_1 + 0x2420) = *(undefined8 *)(param_1 + 0x2418);
  *(undefined8 *)(param_1 + 0x2438) = *(undefined8 *)(param_1 + 0x2430);
  *(undefined8 *)(param_1 + 0x2450) = *(undefined8 *)(param_1 + 0x2448);
  FUN_1401b2e10(param_1 + 0x2460,(longlong)(int)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3));
  iVar4 = (*(int *)(param_1 + 0x2468) - *(int *)(param_1 + 0x2460)) + -1;
  if (-1 < iVar4) {
    uVar11 = (ulonglong)iVar4;
    uVar12 = uVar11;
    do {
      uVar8 = uVar13;
      if ((-1 < iVar4) && (uVar11 < (ulonglong)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3))) {
        uVar8 = *(ulonglong *)(DAT_141d6dbe0 + uVar12 * 8);
      }
      if ((((*(longlong *)(uVar8 + 0x70) - *(longlong *)(uVar8 + 0x68) >> 1 == 0) &&
           (*(longlong *)(uVar8 + 0xe8) - *(longlong *)(uVar8 + 0xe0) >> 2 == 0)) &&
          ((*(int *)(uVar8 + 0x40) < 2 || ((*(byte *)(*(longlong *)(uVar8 + 0x38) + 1) & 0x80) == 0)
           ))) && ((lVar9 = FUN_140d89d60(&DAT_141c53470,0,iVar4), lVar9 == 0 ||
                   (*(int *)(lVar9 + 0x284) < 10000)))) {
        *(undefined1 *)(uVar12 + *(longlong *)(param_1 + 0x2460)) = 0;
      }
      else {
        *(undefined1 *)(uVar12 + *(longlong *)(param_1 + 0x2460)) = 1;
      }
      uVar11 = uVar11 - 1;
      uVar12 = uVar12 - 1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x2ad8) = 0;
  FUN_1409375e0(param_1 + 0x2ae0);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}

