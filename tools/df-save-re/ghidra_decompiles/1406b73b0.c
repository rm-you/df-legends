// FUN_1406b73b0 @ 1406b73b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 140763f70 FUN_140763f70
//   -> 14048e4e0 FUN_14048e4e0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_1406b73b0(int *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  param_1[0x2e] = param_1[0x2e] & 0xfffffffbU | 2;
  if (*(short *)((longlong)param_1 + 6) == 0) {
    plVar2 = operator_new(0x38);
    FUN_140709240(plVar2,0);
    *plVar2 = (longlong)history_event_diplomat_lostst::vftable;
    plVar2[5] = -1;
    *(undefined4 *)(plVar2 + 6) = 0xffffffff;
    *(undefined4 *)(plVar2 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar2 + 0xc) = DAT_1416b1974;
    *(int *)(plVar2 + 5) = *param_1;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = DAT_141c36b88;
    *(undefined4 *)(plVar2 + 6) = DAT_141c36b84;
    (**(code **)(*plVar2 + 0x128))(plVar2);
    iVar6 = *param_1;
    lVar3 = DAT_141c53720 - DAT_141c53718 >> 3;
    if (lVar3 == 0) {
      return;
    }
    if (iVar6 == -1) {
      return;
    }
    iVar8 = 0;
    iVar5 = (int)lVar3 + -1;
    if (iVar5 < 0) {
      return;
    }
    while( true ) {
      iVar4 = iVar5 + iVar8 >> 1;
      lVar3 = *(longlong *)(DAT_141c53718 + (longlong)iVar4 * 8);
      if (*(int *)(lVar3 + 4) == iVar6) break;
      if (iVar6 < *(int *)(lVar3 + 4)) {
        iVar5 = iVar4 + -1;
      }
      else {
        iVar8 = iVar4 + 1;
      }
      if (iVar5 < iVar8) {
        return;
      }
    }
    if (lVar3 == 0) {
      return;
    }
    iVar6 = (int)(*(longlong *)(lVar3 + 0x1378) - *(longlong *)(lVar3 + 0x1370) >> 3) + -1;
    if (iVar6 < 0) {
      return;
    }
    lVar7 = (longlong)iVar6 * 8;
    lVar9 = lVar7;
    do {
      pvVar1 = *(void **)(lVar7 + *(longlong *)(lVar3 + 0x1370));
      if (pvVar1 != (void *)0x0) {
        FUN_14048e4e0(pvVar1);
        free(pvVar1);
      }
      _Dst = (void *)(*(longlong *)(lVar3 + 0x1370) + lVar9);
      pvVar1 = (void *)((longlong)_Dst + 8);
      memmove(_Dst,pvVar1,*(longlong *)(lVar3 + 0x1378) - (longlong)pvVar1);
      *(longlong *)(lVar3 + 0x1378) = *(longlong *)(lVar3 + 0x1378) + -8;
      lVar9 = lVar9 + -8;
      lVar7 = lVar7 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    plVar2 = operator_new(0x30);
    FUN_140709240(plVar2,0);
    *plVar2 = (longlong)history_event_agreements_voidedst::vftable;
    plVar2[5] = -1;
    *(undefined4 *)(plVar2 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar2 + 0xc) = DAT_1416b1974;
    *(int *)(plVar2 + 5) = *param_1;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = DAT_141c36b88;
  }
  else {
    if (*(short *)((longlong)param_1 + 6) != 1) {
      return;
    }
    plVar2 = operator_new(0x38);
    FUN_140709240(plVar2,0);
    *plVar2 = (longlong)history_event_first_contact_failedst::vftable;
    plVar2[5] = -1;
    *(undefined4 *)(plVar2 + 6) = 0xffffffff;
    *(undefined4 *)(plVar2 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar2 + 0xc) = DAT_1416b1974;
    *(int *)(plVar2 + 5) = *param_1;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = DAT_141c36b88;
    *(undefined4 *)(plVar2 + 6) = DAT_141c36b84;
  }
  (**(code **)(*plVar2 + 0x128))(plVar2);
  return;
}

