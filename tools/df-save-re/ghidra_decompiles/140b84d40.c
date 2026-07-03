// FUN_140b84d40 @ 140b84d40
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140b84d40(int *param_1)

{
  void *_Dst;
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  iVar6 = (int)(DAT_141d693d8 - DAT_141d693d0 >> 3) + -1;
  uVar10 = uVar11;
  if (-1 < iVar6) {
    do {
      iVar5 = iVar6 + (int)uVar10 >> 1;
      piVar1 = *(int **)(DAT_141d693d0 + (longlong)iVar5 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d693d0 + (longlong)iVar5 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d693d8 - (longlong)pvVar2);
        DAT_141d693d8 = DAT_141d693d8 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar6 = iVar5 + -1;
      }
      else {
        uVar10 = (ulonglong)(iVar5 + 1);
      }
    } while ((int)uVar10 <= iVar6);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x1e);
  uVar10 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x20) + (7 - (longlong)puVar7)) >> 3;
  if (*(undefined8 **)(param_1 + 0x20) < puVar7) {
    uVar10 = uVar11;
  }
  uVar8 = uVar11;
  if (uVar10 != 0) {
    do {
      puVar9 = (undefined8 *)*puVar7;
      if (puVar9 != (undefined8 *)0x0) {
        if (0xf < (ulonglong)puVar9[3]) {
          FUN_140002020(*puVar9,puVar9[3] + 1,1);
        }
        puVar9[3] = 0xf;
        puVar9[2] = 0;
        puVar4 = puVar9;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar4 = (undefined8 *)*puVar9;
        }
        *(undefined1 *)puVar4 = 0;
        free(puVar9);
      }
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x1e);
  puVar7 = *(undefined8 **)(param_1 + 0x24);
  uVar10 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x26) + (7 - (longlong)puVar7)) >> 3;
  if (*(undefined8 **)(param_1 + 0x26) < puVar7) {
    uVar10 = uVar11;
  }
  if (uVar10 != 0) {
    do {
      pvVar2 = (void *)*puVar7;
      if (pvVar2 != (void *)0x0) {
        puVar9 = (undefined8 *)((longlong)pvVar2 + 8);
        if (0xf < *(ulonglong *)((longlong)pvVar2 + 0x20)) {
          FUN_140002020(*puVar9,*(ulonglong *)((longlong)pvVar2 + 0x20) + 1,1);
        }
        *(undefined8 *)((longlong)pvVar2 + 0x20) = 0xf;
        *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
        if (0xf < *(ulonglong *)((longlong)pvVar2 + 0x20)) {
          puVar9 = (undefined8 *)*puVar9;
        }
        *(undefined1 *)puVar9 = 0;
        free(pvVar2);
      }
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_1 + 0x24);
  _eh_vector_destructor_iterator_(param_1 + 0xf4,0x20,0x19,FUN_14000c260);
  _eh_vector_destructor_iterator_(param_1 + 0x2c,0x20,0x19,FUN_14000c260);
  lVar3 = *(longlong *)(param_1 + 0x24);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x28) - lVar3 >> 3,8);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x1e);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x22) - lVar3 >> 3,8);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  return;
}

