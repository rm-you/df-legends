// FUN_140838f60 @ 140838f60
// callees:
//   -> 140087d90 FUN_140087d90
//   -> 140050b50 FUN_140050b50
//   -> 140838f60 FUN_140838f60


void FUN_140838f60(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != -1) {
    iVar9 = 0;
    iVar7 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x200) - *(longlong *)(DAT_141d6cfd0 + 0x1f8) >> 3)
            + -1;
    if (-1 < iVar7) {
      do {
        iVar6 = iVar7 + iVar9 >> 1;
        piVar3 = *(int **)(*(longlong *)(DAT_141d6cfd0 + 0x1f8) + (longlong)iVar6 * 8);
        if (*piVar3 == iVar2) goto LAB_140838fc7;
        if (iVar2 < *piVar3) {
          iVar7 = iVar6 + -1;
        }
        else {
          iVar9 = iVar6 + 1;
        }
      } while (iVar9 <= iVar7);
    }
    piVar3 = (int *)0x0;
LAB_140838fc7:
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_140087d90(DAT_141d6cfd0,iVar2);
    }
    FUN_140050b50(*(undefined4 *)(param_1 + 0x54),piVar3 + 2);
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    for (puVar8 = *(undefined8 **)(param_1 + 0x38); puVar8 < puVar1; puVar8 = puVar8 + 1) {
      iVar2 = (**(code **)(*(longlong *)*puVar8 + 0x10))();
      if ((iVar2 == 10) || (iVar2 == 0xb)) {
        lVar5 = (**(code **)(*(longlong *)*puVar8 + 0x18))();
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x50) != -1) {
            FUN_140838f60(lVar5);
          }
          *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) & 0x7fffffff;
        }
      }
      else if ((iVar2 == 0x24) &&
              (plVar4 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x30))(),
              plVar4 != (longlong *)0x0)) {
        if ((int)plVar4[0x27] != -1) {
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        *(uint *)((longlong)plVar4 + 0x24) = *(uint *)((longlong)plVar4 + 0x24) & 0xffffff7f;
      }
    }
  }
  return;
}

