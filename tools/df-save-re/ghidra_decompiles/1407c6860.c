// FUN_1407c6860 @ 1407c6860
// callees:
//   -> 1407b52b0 FUN_1407b52b0
//   -> 140107090 FUN_140107090
//   -> 1407b5320 FUN_1407b5320
//   -> 1407b63e0 FUN_1407b63e0
//   -> 1400b3140 FUN_1400b3140
//   -> 14000bc60 FUN_14000bc60
//   -> 1400508e0 FUN_1400508e0
//   -> 1407b67b0 FUN_1407b67b0
//   -> 1406faaa0 FUN_1406faaa0


void FUN_1407c6860(undefined8 param_1,int *param_2,undefined4 param_3,int param_4,char param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int local_res10 [2];
  undefined4 local_res18;
  
  iVar2 = *param_2;
  if (iVar2 != -1) {
    local_res18 = param_3;
    lVar3 = FUN_1407b52b0(param_1,iVar2);
    uVar12 = 0;
    if (lVar3 != 0) {
      if ((param_2[2] != -1) && ((*(byte *)(lVar3 + 4) & 1) != 0)) {
        FUN_140107090(lVar3,param_3,param_4);
        return;
      }
      piVar4 = *(int **)(param_2 + 4);
      if (piVar4 < *(int **)(param_2 + 6)) {
        do {
          iVar2 = *piVar4;
          iVar10 = (int)(*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 2);
          if (((iVar10 != 0) && (iVar2 != -1)) &&
             (iVar10 = iVar10 + -1, uVar7 = uVar12, -1 < iVar10)) {
            do {
              iVar8 = (int)uVar7 + iVar10 >> 1;
              iVar11 = *(int *)(*(longlong *)(lVar3 + 8) + (longlong)iVar8 * 4);
              if (iVar11 == iVar2) {
                if (iVar8 != -1) {
                  FUN_140107090(lVar3,param_3,param_4);
                  return;
                }
                break;
              }
              if (iVar2 < iVar11) {
                iVar10 = iVar8 + -1;
              }
              else {
                uVar7 = (ulonglong)(iVar8 + 1);
              }
            } while ((int)uVar7 <= iVar10);
          }
          piVar4 = piVar4 + 1;
        } while (piVar4 < *(int **)(param_2 + 6));
        iVar2 = *param_2;
      }
    }
    lVar3 = FUN_1407b5320(param_1,iVar2);
    if (lVar3 != 0) {
      if (param_2[2] != -1) {
LAB_1407c6a3c:
        local_res10[0] = param_4;
        iVar2 = FUN_1400b3140(param_3,lVar3 + 0x20,&param_5);
        if (iVar2 == -1) {
          return;
        }
        if (param_5 != '\0') {
          piVar4 = (int *)(*(longlong *)(lVar3 + 0x38) + (longlong)iVar2 * 4);
          *piVar4 = *piVar4 + param_4;
          return;
        }
        plVar1 = (longlong *)(lVar3 + 0x38);
        if ((int)(*(longlong *)(lVar3 + 0x40) - *plVar1 >> 2) <= iVar2) {
          FUN_14000bc60(plVar1,local_res10);
          return;
        }
        FUN_1400508e0(plVar1,&stack0x00000030,*plVar1 + (longlong)iVar2 * 4);
        return;
      }
      piVar4 = *(int **)(param_2 + 4);
      if (piVar4 < *(int **)(param_2 + 6)) {
        do {
          iVar2 = *piVar4;
          iVar10 = (int)(*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 2);
          param_3 = local_res18;
          if (((iVar10 != 0) && (iVar2 != -1)) && (iVar10 = iVar10 + -1, iVar11 = 0, -1 < iVar10)) {
            do {
              iVar9 = iVar11 + iVar10 >> 1;
              iVar8 = *(int *)(*(longlong *)(lVar3 + 8) + (longlong)iVar9 * 4);
              if (iVar8 == iVar2) {
                if (iVar9 != -1) goto LAB_1407c6a3c;
                break;
              }
              if (iVar2 < iVar8) {
                iVar10 = iVar9 + -1;
              }
              else {
                iVar11 = iVar9 + 1;
              }
            } while (iVar11 <= iVar10);
          }
          piVar4 = piVar4 + 1;
        } while (piVar4 < *(int **)(param_2 + 6));
        iVar2 = *param_2;
      }
    }
    if (param_2[2] == -1) {
      puVar6 = *(undefined4 **)(param_2 + 4);
      uVar7 = (*(longlong *)(param_2 + 6) - (longlong)puVar6) + 3U >> 2;
      if (*(undefined4 **)(param_2 + 6) < puVar6) {
        uVar7 = uVar12;
      }
      if (uVar7 != 0) {
        do {
          uVar5 = FUN_1407b67b0(param_1,*puVar6,0);
          FUN_1406faaa0(uVar5,param_3);
          uVar12 = uVar12 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar12 < uVar7);
      }
    }
    else {
      uVar5 = FUN_1407b63e0(param_1,iVar2,0);
      FUN_140107090(uVar5,param_3,param_4);
    }
  }
  return;
}

