// FUN_14073ccb0 @ 14073ccb0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall
//   -> 1407075a0 FUN_1407075a0
//   -> 14000c2d0 FUN_14000c2d0
//   -> EXTERNAL:000000e1 memmove
//   -> 140cc1de0 FUN_140cc1de0
//   -> 140cc1710 FUN_140cc1710


void FUN_14073ccb0(longlong param_1,int param_2,char param_3)

{
  void *_Src;
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  longlong **pplVar5;
  short sVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong *local_res8;
  
  puVar1 = (ulonglong *)(param_1 + 0xe8);
  lVar9 = (longlong)param_2 * 8;
  puVar3 = *(undefined8 **)(lVar9 + *puVar1);
  iVar2 = *(int *)(puVar3 + 2);
  lVar7 = DAT_141d64d40 - DAT_141d64d38 >> 3;
  if ((lVar7 != 0) && (iVar2 != -1)) {
    iVar11 = (int)lVar7 + -1;
    iVar13 = 0;
    if (-1 < iVar11) {
      do {
        iVar10 = iVar13 + iVar11 >> 1;
        piVar12 = *(int **)(DAT_141d64d38 + (longlong)iVar10 * 8);
        if (*piVar12 == iVar2) goto LAB_14073cd46;
        if (iVar2 < *piVar12) {
          iVar11 = iVar10 + -1;
        }
        else {
          iVar13 = iVar10 + 1;
        }
      } while (iVar13 <= iVar11);
    }
  }
  piVar12 = (int *)0x0;
LAB_14073cd46:
  if (param_3 != '\0') {
    plVar8 = operator_new(0x38);
    local_res8 = plVar8;
    FUN_140709240(plVar8,0);
    *plVar8 = (longlong)history_event_remove_hf_entity_linkst::vftable;
    plVar8[5] = -1;
    plVar8[6] = -1;
    *(undefined4 *)(plVar8 + 5) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 0xe0);
    sVar6 = (**(code **)*puVar3)(puVar3);
    *(int *)(plVar8 + 6) = (int)sVar6;
    if (piVar12 != (int *)0x0) {
      *(int *)((longlong)plVar8 + 0x34) = piVar12[0x70];
    }
    *(undefined4 *)(plVar8 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar8 + 0xc) = DAT_1416b1974;
    (**(code **)(*plVar8 + 0x128))(plVar8);
  }
  plVar8 = (longlong *)FUN_1407075a0(0xe);
  *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(puVar3 + 2);
  *(undefined2 *)((longlong)plVar8 + 0xc) = *(undefined2 *)((longlong)puVar3 + 0xc);
  *(undefined4 *)((longlong)plVar8 + 0x14) = *(undefined4 *)(puVar3 + 3);
  *(undefined4 *)(plVar8 + 3) = DAT_1416b1980;
  pplVar4 = *(longlong ***)(param_1 + 0xf0);
  local_res8 = plVar8;
  if ((&local_res8 < pplVar4) && (pplVar5 = (longlong **)*puVar1, pplVar5 <= &local_res8)) {
    if (pplVar4 == *(longlong ***)(param_1 + 0xf8)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xf0) =
           *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)pplVar5 >> 3) * 8);
    }
  }
  else {
    if (pplVar4 == *(longlong ***)(param_1 + 0xf8)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xf0) = (longlong)plVar8;
    }
  }
  *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 8;
  plVar8 = *(longlong **)(lVar9 + *puVar1);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8,1);
  }
  _Src = (void *)((longlong)(*puVar1 + lVar9) + 8);
  memmove((void *)(*puVar1 + lVar9),_Src,*(longlong *)(param_1 + 0xf0) - (longlong)_Src);
  *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -8;
  lVar9 = FUN_140cc1de0(&DAT_141c66fd0,*(undefined4 *)(param_1 + 0xe0));
  if (lVar9 != 0) {
    FUN_140cc1710(lVar9);
  }
  return;
}

