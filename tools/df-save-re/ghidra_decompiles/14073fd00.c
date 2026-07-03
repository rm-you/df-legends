// FUN_14073fd00 @ 14073fd00
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall
//   -> 140019a10 FUN_140019a10
//   -> 1400046c0 FUN_1400046c0
//   -> 1406fbeb0 FUN_1406fbeb0
//   -> EXTERNAL:000000e1 memmove


void FUN_14073fd00(longlong param_1,int param_2,char param_3)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  
  if (param_3 != '\0') {
    plVar8 = operator_new(0x40);
    FUN_140709240(plVar8,0);
    *plVar8 = (longlong)history_event_remove_hf_site_linkst::vftable;
    plVar8[5] = -1;
    plVar8[6] = -1;
    *(undefined4 *)(plVar8 + 7) = 0xffffffff;
    *(undefined4 *)(plVar8 + 6) = *(undefined4 *)(param_1 + 0xe0);
    lVar1 = (longlong)param_2 * 8;
    sVar5 = (**(code **)**(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x100)))();
    *(int *)(plVar8 + 7) = (int)sVar5;
    *(undefined4 *)(plVar8 + 5) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + lVar1) + 8);
    *(undefined4 *)((longlong)plVar8 + 0x2c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + lVar1) + 0xc);
    *(undefined4 *)((longlong)plVar8 + 0x34) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + lVar1) + 0x10);
    *(undefined4 *)(plVar8 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar8 + 0xc) = DAT_1416b1974;
    (**(code **)(*plVar8 + 0x128))(plVar8);
  }
  lVar1 = (longlong)param_2 * 8;
  puVar3 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x100));
  iVar10 = *(int *)((longlong)puVar3 + 0xc);
  if (((iVar10 != -1) &&
      (lVar9 = FUN_140019a10(DAT_141d6cfd0,*(undefined4 *)(puVar3 + 1)), lVar9 != 0)) &&
     (lVar9 = FUN_1400046c0(lVar9,iVar10), lVar9 != 0)) {
    uVar6 = (**(code **)*puVar3)(puVar3);
    FUN_1406fbeb0(lVar9,uVar6);
  }
  sVar5 = (**(code **)**(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x100)))();
  if (sVar5 == 0) {
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + lVar1) + 0x18);
    iVar11 = 0;
    iVar10 = (int)(DAT_141d69438 - DAT_141d69430 >> 3) + -1;
    if (-1 < iVar10) {
      do {
        iVar7 = iVar10 + iVar11 >> 1;
        piVar4 = *(int **)(DAT_141d69430 + (longlong)iVar7 * 8);
        if (*piVar4 == iVar2) {
          if ((piVar4 != (int *)0x0) && (piVar4[2] == *(int *)(param_1 + 0xe0))) {
            piVar4[2] = -1;
            piVar4[3] = -1;
          }
          break;
        }
        if (iVar2 < *piVar4) {
          iVar10 = iVar7 + -1;
        }
        else {
          iVar11 = iVar7 + 1;
        }
      } while (iVar11 <= iVar10);
    }
  }
  plVar8 = *(longlong **)(lVar1 + *(longlong *)(param_1 + 0x100));
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8,1);
  }
  _Dst = (void *)(*(longlong *)(param_1 + 0x100) + lVar1);
  _Src = (void *)((longlong)_Dst + 8);
  memmove(_Dst,_Src,*(longlong *)(param_1 + 0x108) - (longlong)_Src);
  *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + -8;
  return;
}

