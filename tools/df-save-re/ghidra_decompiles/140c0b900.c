// FUN_140c0b900 @ 140c0b900
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> EXTERNAL:000000e1 memmove
//   -> 14000bd10 FUN_14000bd10


void FUN_140c0b900(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  void *_Src;
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  int local_res8 [2];
  int local_res18 [2];
  int local_38 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res18[0]);
  iVar6 = local_res18[0] + -1;
  if (-1 < iVar6) {
    lVar7 = (longlong)iVar6 * 8;
    lVar8 = lVar7;
    do {
      FUN_1405bba90(param_2,local_res8);
      if (local_res8[0] == -1) {
        lVar1 = *(longlong *)(param_1 + 8);
LAB_140c0ba28:
        _Src = (void *)(lVar7 + lVar1 + 8);
        memmove((void *)(lVar7 + lVar1),_Src,*(longlong *)(param_1 + 0x10) - (longlong)_Src);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
      }
      else {
        iVar9 = 0;
        iVar4 = (int)(param_4[1] - *param_4 >> 3) + -1;
        if (-1 < iVar4) {
          do {
            iVar3 = iVar4 + iVar9 >> 1;
            piVar10 = *(int **)(*param_4 + (longlong)iVar3 * 8);
            if (*piVar10 == local_res8[0]) goto LAB_140c0ba08;
            if (local_res8[0] < *piVar10) {
              iVar4 = iVar3 + -1;
            }
            else {
              iVar9 = iVar3 + 1;
            }
          } while (iVar9 <= iVar4);
        }
        piVar10 = (int *)0x0;
LAB_140c0ba08:
        *(int **)(lVar8 + *(longlong *)(param_1 + 8)) = piVar10;
        lVar1 = *(longlong *)(param_1 + 8);
        if (*(longlong *)(lVar8 + lVar1) == 0) goto LAB_140c0ba28;
      }
      lVar7 = lVar7 + -8;
      lVar8 = lVar8 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  FUN_1405bba90(param_2,local_38,4);
  FUN_14000bd10(param_1 + 0x28,(longlong)local_38[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x30);
  for (uVar5 = *(ulonglong *)(param_1 + 0x28); uVar5 < uVar2; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  return;
}

