// FUN_14078e060 @ 14078e060
// callees:
//   -> 14078e1d0 FUN_14078e1d0


longlong FUN_14078e060(longlong param_1,ulonglong param_2,undefined1 *param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 local_res8;
  undefined8 local_38 [2];
  
  lVar5 = FUN_14078e1d0(param_1,param_2,param_4,param_5);
  plVar2 = *(longlong **)(param_1 + 0x120);
  for (plVar10 = *(longlong **)(param_1 + 0x118); plVar10 < plVar2; plVar10 = plVar10 + 1) {
    puVar3 = (undefined8 *)*plVar10;
    sVar4 = (**(code **)*puVar3)(puVar3);
    if (sVar4 == 2) {
      iVar1 = *(int *)(puVar3 + 1);
      if ((iVar1 != -1) && (lVar6 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3, lVar6 != 0)) {
        iVar8 = (int)lVar6 + -1;
        iVar9 = 0;
        if (-1 < iVar8) goto LAB_14078e120;
      }
      break;
    }
  }
  goto LAB_14078e0cb;
  while( true ) {
    if (iVar1 < *(int *)(lVar6 + 0xe0)) {
      iVar8 = iVar7 + -1;
    }
    else {
      iVar9 = iVar7 + 1;
    }
    if (iVar8 < iVar9) break;
LAB_14078e120:
    iVar7 = iVar8 + iVar9 >> 1;
    lVar6 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar7 * 8);
    if (*(int *)(lVar6 + 0xe0) == iVar1) {
      if ((((lVar6 != 0) &&
           (lVar6 = FUN_14078e1d0(lVar6,param_2 & 0xffffffff,&local_res8,local_38), lVar6 != 0)) &&
          ((*(longlong *)(lVar6 + 0x168) != 0 ||
           ((*(longlong *)(lVar6 + 0x1a8) != 0 || (*(longlong *)(lVar6 + 0x1e8) != 0)))))) &&
         ((lVar5 == 0 || (*(int *)(lVar6 + 0x2d0) < *(int *)(lVar5 + 0x2d0))))) {
        *param_3 = 1;
        *param_4 = local_res8;
        *param_5 = local_38[0];
        return lVar6;
      }
      break;
    }
  }
LAB_14078e0cb:
  *param_3 = 0;
  return lVar5;
}

