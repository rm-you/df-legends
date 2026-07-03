// FUN_140363920 @ 140363920
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000c390 FUN_14000c390
//   -> 140051e20 FUN_140051e20


void FUN_140363920(longlong param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int local_res10 [2];
  
  iVar10 = 0;
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3 != 0) {
    lVar9 = 0;
    do {
      lVar4 = DAT_141d6e1a8;
      iVar8 = 0;
      uVar7 = DAT_141d6e1b0 - DAT_141d6e1a8 >> 3;
      uVar1 = *(undefined8 *)(lVar9 + *(longlong *)(param_1 + 0x20));
      if (uVar7 != 0) {
        lVar6 = 0;
        do {
          iVar5 = FUN_140071310(*(undefined8 *)(lVar6 + lVar4),uVar1);
          if (iVar5 == 0) goto LAB_1403639c1;
          iVar8 = iVar8 + 1;
          lVar6 = lVar6 + 8;
        } while ((ulonglong)(longlong)iVar8 < uVar7);
      }
      iVar8 = -1;
LAB_1403639c1:
      local_res10[0] = iVar8;
      if (iVar8 != -1) {
        piVar2 = *(int **)(param_1 + 0x40);
        if ((local_res10 < piVar2) && (piVar3 = *(int **)(param_1 + 0x38), piVar3 <= local_res10)) {
          if (piVar2 == *(int **)(param_1 + 0x48)) {
            FUN_14000c390(param_1 + 0x38,1);
          }
          if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x40) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 0x38) +
                  ((longlong)local_res10 - (longlong)piVar3 >> 2) * 4);
          }
        }
        else {
          if (piVar2 == *(int **)(param_1 + 0x48)) {
            FUN_14000c390(param_1 + 0x38,1);
          }
          if (*(int **)(param_1 + 0x40) != (int *)0x0) {
            **(int **)(param_1 + 0x40) = iVar8;
          }
        }
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 4;
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)iVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3));
  }
  FUN_140051e20(param_1 + 0x20);
  return;
}

