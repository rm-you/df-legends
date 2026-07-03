// FUN_1408a4d70 @ 1408a4d70
// callees:
//   -> 14020fc80 FUN_14020fc80
//   -> 14000bd10 FUN_14000bd10
//   -> EXTERNAL:000000e1 memmove
//   -> 1408a38b0 FUN_1408a38b0
//   -> 140002020 FUN_140002020


void FUN_1408a4d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  int *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int *local_70;
  longlong lStack_68;
  longlong local_60;
  int *local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong uVar11;
  
  local_58 = (int *)0x0;
  lStack_50 = 0;
  uVar11 = 0;
  iVar14 = 0;
  local_48 = 0;
  lVar4 = DAT_141d6e1c0;
  uVar13 = uVar11;
  if (param_4[1] - *param_4 >> 2 != 0) {
    do {
      iVar5 = *(int *)(uVar13 + *param_4);
      if ((-1 < iVar5) && ((ulonglong)(longlong)iVar5 < (ulonglong)(DAT_141d6e1c8 - lVar4 >> 3))) {
        FUN_14020fc80(&local_58,*(longlong *)(lVar4 + (longlong)iVar5 * 8) + 0x38);
        lVar4 = DAT_141d6e1c0;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar13 = uVar13 + 4;
    } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(param_4[1] - *param_4 >> 2));
  }
  if (lStack_50 - (longlong)local_58 >> 2 == 0) {
    FUN_14000bd10(&local_58,DAT_141d6e1b0 - DAT_141d6e1a8 >> 3);
    iVar5 = 0;
    uVar13 = lStack_50 - (longlong)local_58 >> 2;
    piVar6 = local_58;
    lVar4 = DAT_141d6e1c0;
    if (uVar13 != 0) {
      do {
        *piVar6 = iVar5;
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
        lVar4 = DAT_141d6e1c0;
      } while ((ulonglong)(longlong)iVar5 < uVar13);
    }
  }
  piVar6 = local_58;
  lVar12 = 0;
  local_70 = (int *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  iVar5 = 0;
  if (param_5[1] - *param_5 >> 2 != 0) {
    do {
      iVar2 = *(int *)(lVar12 + *param_5);
      if ((-1 < iVar2) && ((ulonglong)(longlong)iVar2 < (ulonglong)(DAT_141d6e1c8 - lVar4 >> 3))) {
        FUN_14020fc80(&local_70,*(longlong *)(lVar4 + (longlong)iVar2 * 8) + 0x38);
        lVar4 = DAT_141d6e1c0;
      }
      iVar5 = iVar5 + 1;
      lVar12 = lVar12 + 4;
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_5[1] - *param_5 >> 2));
  }
  if (lStack_68 - (longlong)local_70 >> 2 == 0) {
    FUN_14000bd10(&local_70,DAT_141d6e1b0 - DAT_141d6e1a8 >> 3);
    iVar5 = 0;
    uVar13 = lStack_68 - (longlong)local_70 >> 2;
    piVar7 = local_70;
    lVar4 = DAT_141d6e1c0;
    if (uVar13 != 0) {
      do {
        *piVar7 = iVar5;
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
        lVar4 = DAT_141d6e1c0;
      } while ((ulonglong)(longlong)iVar5 < uVar13);
    }
  }
  if (param_6[1] - *param_6 >> 2 != 0) {
    param_5 = (longlong *)0x0;
    piVar7 = local_70;
    lVar12 = lStack_68;
    do {
      iVar5 = *(int *)((longlong)param_5 + *param_6);
      lVar1 = lStack_68;
      if ((-1 < iVar5) && ((ulonglong)(longlong)iVar5 < (ulonglong)(DAT_141d6e1c8 - lVar4 >> 3))) {
        lVar1 = (longlong)iVar5 * 8;
        lVar3 = *(longlong *)(lVar4 + lVar1);
        iVar5 = (int)(*(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38) >> 2) + -1;
        lVar8 = (longlong)iVar5;
        lVar9 = lStack_50;
        if (-1 < iVar5) {
          do {
            iVar5 = (int)(lVar9 - (longlong)piVar6 >> 2) + -1;
            if (-1 < iVar5) {
              lVar4 = (longlong)iVar5;
              do {
                if (*(int *)(*(longlong *)(lVar3 + 0x38) + lVar8 * 4) == piVar6[lVar4]) {
                  piVar7 = piVar6 + iVar5;
                  memmove(piVar7,piVar7 + 1,lVar9 - (longlong)(piVar7 + 1));
                  lVar9 = lVar9 + -4;
                  break;
                }
                iVar5 = iVar5 + -1;
                lVar4 = lVar4 + -1;
              } while (-1 < lVar4);
            }
            lVar8 = lVar8 + -1;
            lVar4 = DAT_141d6e1c0;
            piVar7 = local_70;
          } while (-1 < lVar8);
        }
        lStack_50 = lVar9;
        lVar3 = *(longlong *)(lVar4 + lVar1);
        iVar5 = (int)(*(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38) >> 2) + -1;
        lVar9 = (longlong)iVar5;
        lVar1 = lStack_68;
        if (-1 < iVar5) {
          do {
            iVar5 = (int)(lVar12 - (longlong)piVar7 >> 2) + -1;
            if (-1 < iVar5) {
              lVar4 = (longlong)iVar5;
              do {
                if (*(int *)(*(longlong *)(lVar3 + 0x38) + lVar9 * 4) == piVar7[lVar4]) {
                  _Dst = piVar7 + iVar5;
                  memmove(_Dst,_Dst + 1,lVar12 - (longlong)(_Dst + 1));
                  lVar12 = lVar12 + -4;
                  break;
                }
                iVar5 = iVar5 + -1;
                lVar4 = lVar4 + -1;
              } while (-1 < lVar4);
            }
            lVar9 = lVar9 + -1;
            lVar4 = DAT_141d6e1c0;
            lVar1 = lVar12;
          } while (-1 < lVar9);
        }
      }
      lStack_68 = lVar1;
      iVar14 = iVar14 + 1;
      param_5 = (longlong *)((longlong)param_5 + 4);
    } while ((ulonglong)(longlong)iVar14 < (ulonglong)(param_6[1] - *param_6 >> 2));
  }
  FUN_1408a38b0(param_2,&local_58);
  FUN_1408a38b0(param_3,&local_70);
  if (local_70 != (int *)0x0) {
    FUN_140002020(local_70,local_60 - (longlong)local_70 >> 2,4);
  }
  if (local_58 != (int *)0x0) {
    FUN_140002020(local_58,local_48 - (longlong)local_58 >> 2,4);
  }
  return;
}

