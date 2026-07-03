// FUN_14073d5b0 @ 14073d5b0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall


void FUN_14073d5b0(longlong param_1,int param_2,char param_3)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *_Memory;
  int *piVar6;
  short sVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  lVar2 = (longlong)param_2 * 8;
  puVar4 = *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0xe8));
  iVar13 = *(int *)(puVar4 + 1);
  lVar8 = DAT_141c53720 - DAT_141c53718 >> 3;
  if ((lVar8 == 0) || (iVar13 == -1)) {
    uVar15 = 0;
  }
  else {
    uVar14 = 0;
    iVar12 = (int)lVar8 + -1;
    uVar15 = uVar14;
    uVar16 = uVar14;
    if (-1 < iVar12) {
      do {
        iVar10 = iVar12 + (int)uVar16 >> 1;
        uVar15 = *(ulonglong *)(DAT_141c53718 + (longlong)iVar10 * 8);
        iVar3 = *(int *)(uVar15 + 4);
        if (iVar3 == iVar13) break;
        if (iVar13 < iVar3) {
          iVar12 = iVar10 + -1;
        }
        else {
          uVar16 = (ulonglong)(iVar10 + 1);
        }
        uVar15 = uVar14;
      } while ((int)uVar16 <= iVar12);
    }
    if (uVar15 != 0) {
      iVar13 = (int)(*(longlong *)(uVar15 + 0x1108) - *(longlong *)(uVar15 + 0x1100) >> 3) + -1;
      uVar16 = uVar14;
      if (-1 < iVar13) {
        do {
          iVar12 = iVar13 + (int)uVar16 >> 1;
          piVar5 = *(int **)(*(longlong *)(uVar15 + 0x1100) + (longlong)iVar12 * 8);
          if (*piVar5 == *(int *)(puVar4 + 2)) {
            lVar8 = *(longlong *)(piVar5 + 0xe);
            iVar13 = (int)(*(longlong *)(piVar5 + 0x10) - lVar8 >> 3) + -1;
            uVar16 = uVar14;
            if (-1 < iVar13) goto LAB_14073d6f0;
            break;
          }
          if (*(int *)(puVar4 + 2) < *piVar5) {
            iVar13 = iVar12 + -1;
          }
          else {
            uVar16 = (ulonglong)(iVar12 + 1);
          }
        } while ((int)uVar16 <= iVar13);
      }
    }
  }
  goto LAB_14073d79e;
  while( true ) {
    if (*(int *)(param_1 + 0xe0) < *_Memory) {
      iVar13 = iVar12 + -1;
    }
    else {
      uVar16 = (ulonglong)(iVar12 + 1);
    }
    if (iVar13 < (int)uVar16) break;
LAB_14073d6f0:
    iVar12 = iVar13 + (int)uVar16 >> 1;
    _Memory = *(int **)(lVar8 + (longlong)iVar12 * 8);
    if (*_Memory == *(int *)(param_1 + 0xe0)) {
      iVar13 = (int)(*(longlong *)(piVar5 + 0x10) - lVar8 >> 3) + -1;
      if (iVar13 < 0) goto LAB_14073d784;
      goto LAB_14073d740;
    }
  }
  goto LAB_14073d79e;
  while( true ) {
    if (*_Memory < *piVar6) {
      iVar13 = iVar12 + -1;
    }
    else {
      uVar14 = (ulonglong)(iVar12 + 1);
    }
    if (iVar13 < (int)uVar14) break;
LAB_14073d740:
    iVar12 = iVar13 + (int)uVar14 >> 1;
    piVar6 = *(int **)(lVar8 + (longlong)iVar12 * 8);
    if (piVar6 == _Memory) {
      pvVar11 = (void *)(lVar8 + (longlong)iVar12 * 8);
      pvVar1 = (void *)((longlong)pvVar11 + 8);
      memmove(pvVar11,pvVar1,*(longlong *)(piVar5 + 0x10) - (longlong)pvVar1);
      *(longlong *)(piVar5 + 0x10) = *(longlong *)(piVar5 + 0x10) + -8;
      break;
    }
  }
LAB_14073d784:
  free(_Memory);
LAB_14073d79e:
  iVar13 = 0;
  if (param_3 != '\0') {
    plVar9 = operator_new(0x38);
    FUN_140709240(plVar9,0);
    *plVar9 = (longlong)history_event_remove_hf_entity_linkst::vftable;
    plVar9[5] = -1;
    plVar9[6] = -1;
    *(undefined4 *)(plVar9 + 5) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)((longlong)plVar9 + 0x2c) = *(undefined4 *)(param_1 + 0xe0);
    sVar7 = (**(code **)*puVar4)(puVar4);
    *(int *)(plVar9 + 6) = (int)sVar7;
    if (uVar15 != 0) {
      iVar12 = (int)(*(longlong *)(uVar15 + 0x1108) - *(longlong *)(uVar15 + 0x1100) >> 3) + -1;
      if (-1 < iVar12) {
        do {
          iVar10 = iVar12 + iVar13 >> 1;
          piVar5 = *(int **)(*(longlong *)(uVar15 + 0x1100) + (longlong)iVar10 * 8);
          iVar3 = *piVar5;
          if (iVar3 == *(int *)(puVar4 + 2)) {
            *(int *)((longlong)plVar9 + 0x34) = piVar5[3];
            break;
          }
          if (*(int *)(puVar4 + 2) < iVar3) {
            iVar12 = iVar10 + -1;
          }
          else {
            iVar13 = iVar10 + 1;
          }
        } while (iVar13 <= iVar12);
      }
    }
    *(undefined4 *)(plVar9 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar9 + 0xc) = DAT_1416b1974;
    (**(code **)(*plVar9 + 0x128))(plVar9);
  }
  plVar9 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 0xe8));
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9,1);
  }
  pvVar11 = (void *)(*(longlong *)(param_1 + 0xe8) + lVar2);
  pvVar1 = (void *)((longlong)pvVar11 + 8);
  memmove(pvVar11,pvVar1,*(longlong *)(param_1 + 0xf0) - (longlong)pvVar1);
  *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -8;
  return;
}

