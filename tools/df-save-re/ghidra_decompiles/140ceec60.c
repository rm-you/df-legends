// FUN_140ceec60 @ 140ceec60
// callees:
//   -> 140a5abc0 FUN_140a5abc0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_140ceec60(short *param_1)

{
  void *pvVar1;
  short sVar2;
  void *pvVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    FUN_140a5abc0(pvVar3);
    free(pvVar3);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  iVar6 = (int)(DAT_141c70848 - DAT_141c70840 >> 3) + -1;
  if (-1 < iVar6) {
    lVar7 = (longlong)iVar6;
    do {
      if (*(short **)(DAT_141c70840 + lVar7 * 8) == param_1) {
        pvVar1 = (void *)(DAT_141c70840 + (longlong)iVar6 * 8);
        pvVar3 = (void *)((longlong)pvVar1 + 8);
        memmove(pvVar1,pvVar3,DAT_141c70848 - (longlong)pvVar3);
        DAT_141c70848 = DAT_141c70848 + -8;
        break;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  sVar2 = (param_1[3] / 0x30) * 0x30;
  sVar5 = (param_1[2] / 0x30) * 0x30;
  if (((((-1 < sVar5) && (sVar5 < DAT_141d69554)) && (-1 < sVar2)) &&
      ((sVar2 < DAT_141d69558 && (DAT_141d69540 != 0)))) &&
     (lVar7 = *(longlong *)
               (*(longlong *)(DAT_141d69540 + ((longlong)sVar5 >> 4) * 8) +
               ((longlong)sVar2 >> 4) * 8), lVar7 != 0)) {
    lVar4 = *(longlong *)(lVar7 + 0x1a68);
    iVar6 = (int)(*(longlong *)(lVar7 + 0x1a70) - lVar4 >> 3) + -1;
    if (-1 < iVar6) {
      lVar8 = (longlong)iVar6;
      puVar9 = (undefined8 *)(lVar4 + lVar8 * 8);
      do {
        if ((short *)*puVar9 == param_1) {
          pvVar1 = (void *)(lVar4 + (longlong)iVar6 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,*(longlong *)(lVar7 + 0x1a70) - (longlong)pvVar3);
          *(longlong *)(lVar7 + 0x1a70) = *(longlong *)(lVar7 + 0x1a70) + -8;
          break;
        }
        iVar6 = iVar6 + -1;
        puVar9 = puVar9 + -1;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
  }
  sVar2 = *param_1;
  if (sVar2 == 0) {
    iVar6 = (int)(DAT_141c70890 - DAT_141c70888 >> 3) + -1;
    if (-1 < iVar6) {
      lVar7 = (longlong)iVar6;
      do {
        if (*(short **)(DAT_141c70888 + lVar7 * 8) == param_1) {
          pvVar1 = (void *)(DAT_141c70888 + (longlong)iVar6 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141c70890 - (longlong)pvVar3);
          DAT_141c70890 = DAT_141c70890 + -8;
          break;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
  }
  else if (sVar2 == 1) {
    iVar6 = (int)(DAT_141c708a8 - DAT_141c708a0 >> 3) + -1;
    if (-1 < iVar6) {
      lVar7 = (longlong)iVar6;
      do {
        if (*(short **)(DAT_141c708a0 + lVar7 * 8) == param_1) {
          pvVar1 = (void *)(DAT_141c708a0 + (longlong)iVar6 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141c708a8 - (longlong)pvVar3);
          DAT_141c708a8 = DAT_141c708a8 + -8;
          break;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
  }
  else if (sVar2 == 2) {
    iVar6 = (int)(DAT_141c70860 - DAT_141c70858 >> 3) + -1;
    if (-1 < iVar6) {
      lVar7 = (longlong)iVar6;
      do {
        if (*(short **)(DAT_141c70858 + lVar7 * 8) == param_1) {
          pvVar1 = (void *)(DAT_141c70858 + (longlong)iVar6 * 8);
          pvVar3 = (void *)((longlong)pvVar1 + 8);
          memmove(pvVar1,pvVar3,DAT_141c70860 - (longlong)pvVar3);
          DAT_141c70860 = DAT_141c70860 + -8;
          break;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
  }
  else if ((sVar2 == 3) && (iVar6 = (int)(DAT_141c70878 - DAT_141c70870 >> 3) + -1, -1 < iVar6)) {
    lVar7 = (longlong)iVar6;
    do {
      if (*(short **)(DAT_141c70870 + lVar7 * 8) == param_1) {
        pvVar1 = (void *)(DAT_141c70870 + (longlong)iVar6 * 8);
        pvVar3 = (void *)((longlong)pvVar1 + 8);
        memmove(pvVar1,pvVar3,DAT_141c70878 - (longlong)pvVar3);
        DAT_141c70878 = DAT_141c70878 + -8;
        break;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  lVar7 = *(longlong *)(param_1 + 0x14);
  if (lVar7 != 0) {
    FUN_140002020(lVar7,*(longlong *)(param_1 + 0x1c) - lVar7 >> 3,8);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  return;
}

