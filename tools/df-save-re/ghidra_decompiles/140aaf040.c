// FUN_140aaf040 @ 140aaf040
// callees:
//   -> 1407f0860 FUN_1407f0860


void FUN_140aaf040(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  plVar2 = *(longlong **)(param_1 + 0x170);
  plVar14 = *(longlong **)(param_1 + 0x168);
  lVar11 = DAT_141c67368;
  do {
    if (plVar2 <= plVar14) {
      DAT_141c67368 = lVar11;
      return;
    }
    plVar3 = *(longlong **)(*plVar14 + 0x2b8);
    for (plVar9 = *(longlong **)(*plVar14 + 0x2b0); plVar9 < plVar3; plVar9 = plVar9 + 1) {
      uVar12 = 0;
      piVar8 = *(int **)(*plVar9 + 0x40);
      piVar4 = *(int **)(*plVar9 + 0x48);
      uVar13 = (ulonglong)((longlong)piVar4 + (3 - (longlong)piVar8)) >> 2;
      if (piVar4 < piVar8) {
        uVar13 = uVar12;
      }
      DAT_141c67368 = lVar11;
      if (uVar13 != 0) {
        do {
          iVar10 = 0;
          iVar1 = *piVar8;
          iVar7 = (int)(DAT_141c67370 - lVar11 >> 3);
          if (((iVar7 != 0) && (iVar1 != -1)) && (iVar7 = iVar7 + -1, -1 < iVar7)) {
            do {
              iVar6 = iVar10 + iVar7 >> 1;
              plVar5 = *(longlong **)(lVar11 + (longlong)iVar6 * 8);
              if (*(int *)((longlong)plVar5 + 0x1c) == iVar1) {
                if (plVar5 != (longlong *)0x0) {
                  if ((*(uint *)(plVar5 + 2) & 0x100000) == 0) {
                    FUN_1407f0860(plVar5,0);
                    (**(code **)(*plVar5 + 800))(plVar5);
                  }
                  (**(code **)(*plVar5 + 0x770))(plVar5,1);
                  lVar11 = DAT_141c67368;
                }
                break;
              }
              if (iVar1 < *(int *)((longlong)plVar5 + 0x1c)) {
                iVar7 = iVar6 + -1;
              }
              else {
                iVar10 = iVar6 + 1;
              }
            } while (iVar10 <= iVar7);
          }
          piVar8 = piVar8 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      *(undefined8 *)(*plVar9 + 0x48) = *(undefined8 *)(*plVar9 + 0x40);
      lVar11 = DAT_141c67368;
    }
    plVar14 = plVar14 + 1;
  } while( true );
}

