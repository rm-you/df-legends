// FUN_14073cef0 @ 14073cef0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall
//   -> 1407075a0 FUN_1407075a0
//   -> 14000c2d0 FUN_14000c2d0
//   -> EXTERNAL:000000e1 memmove


void FUN_14073cef0(longlong param_1,int param_2,char param_3)

{
  void *_Src;
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  short sVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *local_res8;
  
  puVar1 = (ulonglong *)(param_1 + 0xe8);
  lVar2 = (longlong)param_2 * 8;
  puVar3 = *(undefined8 **)(lVar2 + *puVar1);
  iVar11 = 0;
  iVar10 = (int)(DAT_141d69438 - DAT_141d69430 >> 3) + -1;
  if (-1 < iVar10) {
    do {
      iVar9 = iVar10 + iVar11 >> 1;
      piVar4 = *(int **)(DAT_141d69430 + (longlong)iVar9 * 8);
      if (*piVar4 == *(int *)(puVar3 + 2)) {
        if ((piVar4 != (int *)0x0) && (piVar4[2] == *(int *)(param_1 + 0xe0))) {
          piVar4[2] = -1;
          piVar4[3] = -1;
        }
        break;
      }
      if (*(int *)(puVar3 + 2) < *piVar4) {
        iVar10 = iVar9 + -1;
      }
      else {
        iVar11 = iVar9 + 1;
      }
    } while (iVar11 <= iVar10);
  }
  if (param_3 != '\0') {
    plVar8 = operator_new(0x38);
    local_res8 = plVar8;
    FUN_140709240(plVar8,0);
    *plVar8 = (longlong)history_event_remove_hf_entity_linkst::vftable;
    plVar8[5] = -1;
    plVar8[6] = -1;
    *(undefined4 *)(plVar8 + 5) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 0xe0);
    sVar7 = (**(code **)*puVar3)(puVar3);
    *(int *)(plVar8 + 6) = (int)sVar7;
    *(undefined4 *)((longlong)plVar8 + 0x34) = *(undefined4 *)(puVar3 + 2);
    *(undefined4 *)(plVar8 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar8 + 0xc) = DAT_1416b1974;
    (**(code **)(*plVar8 + 0x128))(plVar8);
  }
  plVar8 = (longlong *)FUN_1407075a0(0x10);
  *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(puVar3 + 2);
  *(undefined2 *)((longlong)plVar8 + 0xc) = *(undefined2 *)((longlong)puVar3 + 0xc);
  *(undefined4 *)((longlong)plVar8 + 0x14) = *(undefined4 *)((longlong)puVar3 + 0x14);
  *(undefined4 *)(plVar8 + 3) = DAT_1416b1980;
  pplVar5 = *(longlong ***)(param_1 + 0xf0);
  local_res8 = plVar8;
  if ((&local_res8 < pplVar5) && (pplVar6 = (longlong **)*puVar1, pplVar6 <= &local_res8)) {
    if (pplVar5 == *(longlong ***)(param_1 + 0xf8)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xf0) =
           *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)pplVar6 >> 3) * 8);
    }
  }
  else {
    if (pplVar5 == *(longlong ***)(param_1 + 0xf8)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xf0) = (longlong)plVar8;
    }
  }
  *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 8;
  plVar8 = *(longlong **)(lVar2 + *puVar1);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8,1);
  }
  _Src = (void *)((longlong)(*puVar1 + lVar2) + 8);
  memmove((void *)(*puVar1 + lVar2),_Src,*(longlong *)(param_1 + 0xf0) - (longlong)_Src);
  *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -8;
  return;
}

