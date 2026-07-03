// FUN_140829200 @ 140829200
// callees:
//   -> 1400b3c20 FUN_1400b3c20


void FUN_140829200(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  sVar3 = (**(code **)*param_1)();
  switch(sVar3) {
  case 0xb:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x26:
  case 0x3b:
  case 0x3c:
  case 0x3d:
    iVar2 = *(int *)((longlong)param_1 + 0x1c);
    iVar7 = 0;
    lVar1 = (longlong)sVar3 * 0x18;
    iVar6 = (int)(*(longlong *)(&DAT_141c3c200 + lVar1) - *(longlong *)(&DAT_141c3c1f8 + lVar1) >> 3
                 ) + -1;
    iVar8 = iVar7;
    if (-1 < iVar6) {
      do {
        iVar5 = iVar6 + iVar8 >> 1;
        iVar4 = *(int *)(*(longlong *)(*(longlong *)(&DAT_141c3c1f8 + lVar1) + (longlong)iVar5 * 8)
                        + 0x1c);
        if (iVar4 == iVar2) goto switchD_14082923e_caseD_c;
        if (iVar2 < iVar4) {
          iVar6 = iVar5 + -1;
        }
        else {
          iVar8 = iVar5 + 1;
        }
      } while (iVar8 <= iVar6);
    }
    iVar6 = (int)(*(longlong *)(&DAT_141c3b780 + lVar1) - *(longlong *)(&DAT_141c3b778 + lVar1) >> 3
                 ) + -1;
    if (-1 < iVar6) {
      do {
        iVar4 = iVar6 + iVar7 >> 1;
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(&DAT_141c3b778 + lVar1) + (longlong)iVar4 * 8)
                        + 0x1c);
        if (iVar8 == iVar2) goto switchD_14082923e_caseD_c;
        if (iVar2 < iVar8) {
          iVar6 = iVar4 + -1;
        }
        else {
          iVar7 = iVar4 + 1;
        }
      } while (iVar7 <= iVar6);
    }
    FUN_1400b3c20(param_1,&DAT_141c3acf8 + lVar1);
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
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
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
switchD_14082923e_caseD_c:
  default:
    return;
  }
}

