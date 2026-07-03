// FUN_140741450 @ 140741450
// callees:
//   -> 1400511c0 FUN_1400511c0
//   -> 140071a80 FUN_140071a80


int FUN_140741450(undefined2 *param_1,short *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 == (short *)0x0) {
    return 0;
  }
  iVar10 = 0;
  piVar5 = *(int **)(param_2 + 0x7dc);
  do {
    iVar11 = 0;
    if (*(int **)(param_2 + 0x7e0) <= piVar5) {
LAB_1407414ce:
      plVar1 = *(longlong **)(param_1 + 0x78);
      for (plVar8 = *(longlong **)(param_1 + 0x74); plVar8 < plVar1; plVar8 = plVar8 + 1) {
        plVar2 = (longlong *)*plVar8;
        if ((int)plVar2[1] == *(int *)(param_2 + 2)) {
          iVar12 = (int)*(short *)((longlong)plVar2 + 0xc);
          sVar3 = (**(code **)*plVar2)(plVar2);
          if (7 < sVar3) {
            if (sVar3 < 10) {
              iVar12 = iVar12 * 2;
            }
            else if (sVar3 < 0xc) {
              uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2);
              lVar6 = FUN_1400511c0(uVar4,param_2 + 0x880);
              if ((((lVar6 != 0) &&
                   (lVar6 = FUN_140071a80(*(undefined4 *)(lVar6 + 0xc),param_2 + 0x858), lVar6 != 0)
                   ) && (*(int *)(lVar6 + 0x2d0) != 0x7531)) &&
                 (iVar9 = ((0x7531 - *(int *)(lVar6 + 0x2d0)) / 0x96 + 1) / 0x28, 1 < iVar9)) {
                iVar12 = iVar12 * iVar9;
              }
            }
          }
          switch(*param_1) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4d:
          case 0x4f:
          case 0x51:
          case 0x53:
          case 0x55:
          case 0x57:
          case 0x59:
          case 0x5b:
          case 0x5d:
          case 0x5f:
          case 0x62:
          case 99:
          case 0x65:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6e:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
          case 0x7b:
          case 0x7c:
          case 0x7d:
          case 0x7e:
          case 0x7f:
          case 0x80:
          case 0x86:
            iVar12 = iVar12 * 2;
            break;
          case 0x4c:
          case 0x4e:
          case 0x50:
          case 0x52:
          case 0x54:
          case 0x56:
          case 0x58:
          case 0x5a:
          case 0x5c:
          case 0x5e:
          case 0x60:
          case 100:
          case 0x74:
            iVar12 = iVar12 * 3;
          }
          iVar11 = iVar11 + iVar12;
        }
      }
      if ((*(longlong *)(param_1 + 0x98) != 0) &&
         (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x58), plVar8 != (longlong *)0x0))
      {
        iVar9 = 0;
        iVar12 = (int)(plVar8[1] - *plVar8 >> 3) + -1;
        if (-1 < iVar12) {
          while( true ) {
            iVar7 = iVar12 + iVar9 >> 1;
            piVar5 = *(int **)(*plVar8 + (longlong)iVar7 * 8);
            if (*piVar5 == *(int *)(param_2 + 2)) break;
            if (*(int *)(param_2 + 2) < *piVar5) {
              iVar12 = iVar7 + -1;
            }
            else {
              iVar9 = iVar7 + 1;
            }
            if (iVar12 < iVar9) {
              return iVar11;
            }
          }
          if (piVar5 != (int *)0x0) {
            iVar12 = (int)(*(longlong *)(piVar5 + 4) - *(longlong *)(piVar5 + 2) >> 2);
            if ((iVar12 != 0) && (iVar12 = iVar12 + -1, -1 < iVar12)) {
              while( true ) {
                iVar7 = iVar12 + iVar10 >> 1;
                iVar9 = *(int *)(*(longlong *)(piVar5 + 2) + (longlong)iVar7 * 4);
                if (iVar9 == 0) break;
                if (iVar9 < 1) {
                  iVar10 = iVar7 + 1;
                }
                else {
                  iVar12 = iVar7 + -1;
                }
                if (iVar12 < iVar10) {
                  return iVar11;
                }
              }
              if (iVar7 != -1) {
                iVar11 = iVar11 + *(int *)(*(longlong *)(piVar5 + 8) + (longlong)iVar7 * 4) * 2;
              }
            }
          }
        }
      }
      return iVar11;
    }
    if (*piVar5 == *(int *)(param_1 + 0x70)) {
      if ((int)((longlong)piVar5 - (longlong)*(int **)(param_2 + 0x7dc) >> 2) != -1) {
        iVar11 = 0;
        if (*param_2 == 5) {
          iVar11 = 1000000;
        }
      }
      goto LAB_1407414ce;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

