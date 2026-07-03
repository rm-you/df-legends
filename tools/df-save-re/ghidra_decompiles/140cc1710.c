// FUN_140cc1710 @ 140cc1710
// callees:
//   -> 140cc14e0 FUN_140cc14e0
//   -> 140ca8390 FUN_140ca8390
//   -> 14073ccb0 FUN_14073ccb0


void FUN_140cc1710(longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 0x1d8) != -1) {
    if (*(longlong *)(param_1 + 0x2a8) - *(longlong *)(param_1 + 0x2a0) >> 2 != 0) {
      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x800;
    }
    FUN_140cc14e0();
    iVar9 = 0;
    iVar1 = *(int *)(param_1 + 0x1d8);
    lVar5 = DAT_141d64d40 - DAT_141d64d38 >> 3;
    if ((lVar5 != 0) && (iVar1 != -1)) {
      iVar7 = (int)lVar5 + -1;
      iVar10 = 0;
      if (-1 < iVar7) {
        do {
          iVar6 = iVar10 + iVar7 >> 1;
          piVar2 = *(int **)(DAT_141d64d38 + (longlong)iVar6 * 8);
          if (*piVar2 == iVar1) {
            if (((piVar2 != (int *)0x0) && (iVar1 = *(int *)(param_1 + 0x1dc), -1 < iVar1)) &&
               ((ulonglong)(longlong)iVar1 <
                (ulonglong)(*(longlong *)(piVar2 + 0x2a) - *(longlong *)(piVar2 + 0x28) >> 3))) {
              **(undefined4 **)(*(longlong *)(piVar2 + 0x28) + (longlong)iVar1 * 8) = 0xffffffff;
            }
            break;
          }
          if (iVar1 < *piVar2) {
            iVar7 = iVar6 + -1;
          }
          else {
            iVar10 = iVar6 + 1;
          }
        } while (iVar10 <= iVar7);
      }
    }
    iVar1 = *(int *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x1d8) = 0xffffffffffffffff;
    lVar5 = FUN_140ca8390(param_1);
    if (lVar5 != 0) {
      puVar3 = *(undefined8 **)(lVar5 + 0xf0);
      for (puVar8 = *(undefined8 **)(lVar5 + 0xe8); puVar8 < puVar3; puVar8 = puVar8 + 1) {
        sVar4 = (*(code *)**(undefined8 **)*puVar8)();
        if ((sVar4 == 0xd) && (iVar7 = (**(code **)(*(longlong *)*puVar8 + 0x20))(), iVar7 == iVar1)
           ) {
          FUN_14073ccb0(lVar5,iVar9,0);
          return;
        }
        iVar9 = iVar9 + 1;
      }
    }
  }
  return;
}

