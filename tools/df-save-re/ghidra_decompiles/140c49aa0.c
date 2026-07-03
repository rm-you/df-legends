// FUN_140c49aa0 @ 140c49aa0
// callees:
//   -> 140071a80 FUN_140071a80


ulonglong FUN_140c49aa0(longlong param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  uint uVar5;
  ulonglong in_RAX;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  
  plVar10 = *(longlong **)(param_1 + 0xe8);
  plVar2 = *(longlong **)(param_1 + 0xf0);
  if (plVar2 <= plVar10) {
LAB_140c49c45:
    return in_RAX & 0xffffffffffffff00;
  }
LAB_140c49ae3:
  plVar3 = (longlong *)*plVar10;
  in_RAX = (**(code **)*plVar3)(plVar3);
  if ((short)in_RAX == 10) {
    uVar5 = *(uint *)(plVar3 + 1);
    in_RAX = (ulonglong)uVar5;
    if (((uVar5 == param_3) || (uVar5 == param_4)) ||
       ((param_3 == 0xffffffff && (param_4 == 0xffffffff)))) {
      in_RAX = (**(code **)(*plVar3 + 0x30))(plVar3);
      iVar7 = (int)in_RAX;
      if (iVar7 != -1) {
        uVar5 = *(uint *)(plVar3 + 1);
        lVar8 = DAT_141c53720 - DAT_141c53718 >> 3;
        if ((lVar8 != 0) && (uVar5 != 0xffffffff)) {
          iVar11 = 0;
          iVar9 = (int)lVar8 + -1;
          if (-1 < iVar9) {
            do {
              iVar6 = iVar9 + iVar11 >> 1;
              lVar8 = *(longlong *)(DAT_141c53718 + (longlong)iVar6 * 8);
              uVar1 = *(uint *)(lVar8 + 4);
              in_RAX = (ulonglong)uVar1;
              if (uVar1 == uVar5) {
                if (lVar8 != 0) {
                  iVar11 = 0;
                  iVar9 = (int)(*(longlong *)(lVar8 + 0x1108) - *(longlong *)(lVar8 + 0x1100) >> 3)
                          + -1;
                  if (-1 < iVar9) goto LAB_140c49bd0;
                }
                break;
              }
              if ((int)uVar5 < (int)uVar1) {
                iVar9 = iVar6 + -1;
              }
              else {
                iVar11 = iVar6 + 1;
              }
            } while (iVar11 <= iVar9);
          }
        }
      }
    }
  }
  goto LAB_140c49c38;
  while( true ) {
    if (iVar7 < iVar6) {
      iVar9 = uVar5 - 1;
    }
    else {
      iVar11 = uVar5 + 1;
    }
    if (iVar9 < iVar11) break;
LAB_140c49bd0:
    uVar5 = iVar9 + iVar11 >> 1;
    in_RAX = (ulonglong)uVar5;
    piVar4 = *(int **)(*(longlong *)(lVar8 + 0x1100) + (longlong)(int)uVar5 * 8);
    iVar6 = *piVar4;
    if (iVar6 == iVar7) {
      in_RAX = FUN_140071a80(piVar4[3],lVar8 + 0x10b0);
      if ((((in_RAX != 0) && (-1 < param_2)) && (iVar7 = param_2 >> 3, -1 < iVar7)) &&
         (iVar7 < *(int *)(in_RAX + 0x30))) {
        plVar3 = (longlong *)(in_RAX + 0x28);
        uVar5 = 1 << ((byte)param_2 & 7);
        in_RAX = (ulonglong)uVar5;
        if (((byte)uVar5 & *(byte *)((longlong)iVar7 + *plVar3)) != 0) {
          return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
        }
      }
      break;
    }
  }
LAB_140c49c38:
  plVar10 = plVar10 + 1;
  if (plVar2 <= plVar10) goto LAB_140c49c45;
  goto LAB_140c49ae3;
}

