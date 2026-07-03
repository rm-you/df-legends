// FUN_14073e930 @ 14073e930
// callees:


ulonglong FUN_14073e930(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong in_RAX;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  
  plVar10 = *(longlong **)(param_1 + 0xe8);
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 <= plVar10) {
LAB_14073eae1:
    return in_RAX & 0xffffffffffffff00;
  }
LAB_14073e970:
  puVar2 = (undefined8 *)*plVar10;
  in_RAX = (**(code **)*puVar2)(puVar2);
  if ((((short)in_RAX == 10) &&
      (((uVar7 = *(uint *)(puVar2 + 1), uVar7 == param_2 || (param_2 == 0xffffffff)) &&
       (in_RAX = DAT_141c53720 - DAT_141c53718 >> 3, in_RAX != 0)))) && (uVar7 != 0xffffffff)) {
    iVar11 = 0;
    iVar9 = (int)in_RAX + -1;
    if (-1 < iVar9) {
      do {
        iVar8 = iVar9 + iVar11 >> 1;
        lVar3 = *(longlong *)(DAT_141c53718 + (longlong)iVar8 * 8);
        uVar6 = *(uint *)(lVar3 + 4);
        in_RAX = (ulonglong)uVar6;
        if (uVar6 == uVar7) {
          if (lVar3 != 0) {
            iVar11 = 0;
            iVar9 = (int)(*(longlong *)(lVar3 + 0x1108) - *(longlong *)(lVar3 + 0x1100) >> 3) + -1;
            if (-1 < iVar9) goto LAB_14073ea30;
          }
          break;
        }
        if ((int)uVar7 < (int)uVar6) {
          iVar9 = iVar8 + -1;
        }
        else {
          iVar11 = iVar8 + 1;
        }
      } while (iVar11 <= iVar9);
    }
  }
  goto LAB_14073ead4;
  while( true ) {
    if ((int)*(uint *)(puVar2 + 2) < (int)uVar7) {
      iVar9 = iVar8 + -1;
    }
    else {
      iVar11 = iVar8 + 1;
    }
    if (iVar9 < iVar11) break;
LAB_14073ea30:
    iVar8 = iVar9 + iVar11 >> 1;
    puVar4 = *(uint **)(*(longlong *)(lVar3 + 0x1100) + (longlong)iVar8 * 8);
    uVar7 = *puVar4;
    in_RAX = (ulonglong)uVar7;
    if (uVar7 == *(uint *)(puVar2 + 2)) {
      iVar11 = 0;
      uVar7 = puVar4[3];
      iVar9 = (int)(*(longlong *)(lVar3 + 0x10b8) - *(longlong *)(lVar3 + 0x10b0) >> 3) + -1;
      if (-1 < iVar9) goto LAB_14073ea80;
      break;
    }
  }
  goto LAB_14073ead4;
  while( true ) {
    if ((int)uVar7 < (int)*(uint *)(lVar5 + 0x20)) {
      iVar9 = uVar6 - 1;
    }
    else {
      iVar11 = uVar6 + 1;
    }
    if (iVar9 < iVar11) break;
LAB_14073ea80:
    uVar6 = iVar9 + iVar11 >> 1;
    in_RAX = (ulonglong)uVar6;
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10b0) + (longlong)(int)uVar6 * 8);
    if (*(uint *)(lVar5 + 0x20) == uVar7) {
      if (-1 < param_3) {
        uVar7 = param_3 >> 3;
        in_RAX = (ulonglong)uVar7;
        if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar5 + 0x30))) {
          uVar6 = 1 << ((byte)param_3 & 7);
          in_RAX = (ulonglong)uVar6;
          if (((byte)uVar6 & *(byte *)((longlong)(int)uVar7 + *(longlong *)(lVar5 + 0x28))) != 0) {
            return CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
          }
        }
      }
      break;
    }
  }
LAB_14073ead4:
  plVar10 = plVar10 + 1;
  if (plVar1 <= plVar10) goto LAB_14073eae1;
  goto LAB_14073e970;
}

