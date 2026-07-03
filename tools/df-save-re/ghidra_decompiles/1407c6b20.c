// FUN_1407c6b20 @ 1407c6b20
// callees:
//   -> 1407b52b0 FUN_1407b52b0
//   -> 140366d80 FUN_140366d80
//   -> 1407b5320 FUN_1407b5320
//   -> 1407b63e0 FUN_1407b63e0
//   -> 1400b3140 FUN_1400b3140
//   -> 14000bc60 FUN_14000bc60
//   -> 1400508e0 FUN_1400508e0
//   -> 1407b67b0 FUN_1407b67b0
//   -> 1406faa00 FUN_1406faa00


void FUN_1407c6b20(undefined8 param_1,int *param_2,undefined4 param_3,int param_4,char param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int local_res10 [2];
  
  iVar3 = *param_2;
  if (iVar3 == -1) {
    return;
  }
  lVar4 = FUN_1407b52b0(param_1,iVar3);
  uVar12 = 0;
  if (lVar4 != 0) {
    if ((param_2[2] != -1) && ((*(byte *)(lVar4 + 4) & 1) != 0)) {
      FUN_140366d80(lVar4,param_3,param_4);
      return;
    }
    piVar5 = *(int **)(param_2 + 4);
    if (piVar5 < *(int **)(param_2 + 6)) {
      do {
        iVar3 = *piVar5;
        iVar11 = (int)(*(longlong *)(lVar4 + 0x10) - *(longlong *)(lVar4 + 8) >> 2);
        if (((iVar11 != 0) && (iVar3 != -1)) && (iVar11 = iVar11 + -1, uVar9 = uVar12, -1 < iVar11))
        {
          do {
            iVar10 = (int)uVar9 + iVar11 >> 1;
            iVar2 = *(int *)(*(longlong *)(lVar4 + 8) + (longlong)iVar10 * 4);
            if (iVar2 == iVar3) {
              if (iVar10 != -1) goto LAB_1407c6cda;
              break;
            }
            if (iVar3 < iVar2) {
              iVar11 = iVar10 + -1;
            }
            else {
              uVar9 = (ulonglong)(iVar10 + 1);
            }
          } while ((int)uVar9 <= iVar11);
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 < *(int **)(param_2 + 6));
      iVar3 = *param_2;
    }
  }
  lVar4 = FUN_1407b5320(param_1,iVar3);
  if (lVar4 != 0) {
    if (param_2[2] != -1) goto LAB_1407c6cc7;
    piVar5 = *(int **)(param_2 + 4);
    if (piVar5 < *(int **)(param_2 + 6)) {
      do {
        iVar3 = *piVar5;
        iVar11 = (int)(*(longlong *)(lVar4 + 0x10) - *(longlong *)(lVar4 + 8) >> 2);
        if (((iVar11 != 0) && (iVar3 != -1)) && (iVar11 = iVar11 + -1, uVar9 = uVar12, -1 < iVar11))
        {
          do {
            iVar10 = (int)uVar9 + iVar11 >> 1;
            iVar2 = *(int *)(*(longlong *)(lVar4 + 8) + (longlong)iVar10 * 4);
            if (iVar2 == iVar3) {
              if (iVar10 != -1) {
LAB_1407c6cda:
                local_res10[0] = param_4;
                iVar3 = FUN_1400b3140(param_3,lVar4 + 0x20,&param_5);
                lVar7 = (longlong)iVar3;
                if (iVar3 == -1) {
                  return;
                }
                if (param_5 != '\0') {
                  if (param_4 <= *(int *)(*(longlong *)(lVar4 + 0x38) + lVar7 * 4)) {
                    return;
                  }
                  *(int *)(*(longlong *)(lVar4 + 0x38) + lVar7 * 4) = param_4;
                  return;
                }
                plVar1 = (longlong *)(lVar4 + 0x38);
                if ((int)(*(longlong *)(lVar4 + 0x40) - *plVar1 >> 2) <= iVar3) {
                  FUN_14000bc60(plVar1,local_res10);
                  return;
                }
                FUN_1400508e0(plVar1,&stack0x00000030,*plVar1 + lVar7 * 4);
                return;
              }
              break;
            }
            if (iVar3 < iVar2) {
              iVar11 = iVar10 + -1;
            }
            else {
              uVar9 = (ulonglong)(iVar10 + 1);
            }
          } while ((int)uVar9 <= iVar11);
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 < *(int **)(param_2 + 6));
      iVar3 = *param_2;
    }
  }
  if (param_2[2] == -1) {
    puVar8 = *(undefined4 **)(param_2 + 4);
    uVar9 = (*(longlong *)(param_2 + 6) - (longlong)puVar8) + 3U >> 2;
    if (*(undefined4 **)(param_2 + 6) < puVar8) {
      uVar9 = uVar12;
    }
    if (uVar9 == 0) {
      return;
    }
    do {
      uVar6 = FUN_1407b67b0(param_1,*puVar8,0);
      FUN_1406faa00(uVar6,param_3);
      uVar12 = uVar12 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar12 < uVar9);
    return;
  }
  lVar4 = FUN_1407b63e0(param_1,iVar3,0);
LAB_1407c6cc7:
  FUN_140366d80(lVar4,param_3,param_4);
  return;
}

