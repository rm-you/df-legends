// FUN_14073f6d0 @ 14073f6d0
// callees:
//   -> 14073da70 FUN_14073da70
//   -> EXTERNAL:000000e1 memmove
//   -> 1407075a0 FUN_1407075a0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140760ab0 FUN_140760ab0
//   -> 140050b50 FUN_140050b50
//   -> 1400715b0 FUN_1400715b0
//   -> 140010db0 FUN_140010db0
//   -> 14000bc60 FUN_14000bc60
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall


void FUN_14073f6d0(longlong param_1,short param_2,undefined8 param_3,short param_4,char param_5)

{
  void *_Src;
  ulonglong *puVar1;
  void *_Dst;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  short sVar7;
  short sVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong *local_res8;
  
  if ((ushort)(param_2 - 8U) < 2) {
    FUN_14073da70(param_1,0xffffffff,param_3,0,0);
  }
  iVar16 = (int)param_3;
  if (param_2 == 0) {
    sVar8 = 1;
LAB_14073f756:
    plVar2 = *(longlong **)(param_1 + 0xf0);
    for (plVar9 = *(longlong **)(param_1 + 0xe8); plVar9 < plVar2; plVar9 = plVar9 + 1) {
      plVar3 = (longlong *)*plVar9;
      sVar7 = (**(code **)*plVar3)(plVar3);
      if ((sVar7 == sVar8) && ((int)plVar3[1] == iVar16)) {
        if (param_4 < *(short *)((longlong)plVar3 + 0xc)) {
          param_4 = *(short *)((longlong)plVar3 + 0xc);
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        _Dst = (void *)(*(longlong *)(param_1 + 0xe8) +
                       ((longlong)plVar9 - *(longlong *)(param_1 + 0xe8) >> 3 & 0xffffffffU) * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0xf0) - (longlong)_Src);
        *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -8;
        break;
      }
    }
  }
  else {
    if (param_2 == 2) {
      sVar8 = 3;
      goto LAB_14073f756;
    }
    if (param_2 == 4) {
      sVar8 = 5;
      goto LAB_14073f756;
    }
    if (param_2 == 6) {
      sVar8 = 7;
      goto LAB_14073f756;
    }
  }
  puVar1 = (ulonglong *)(param_1 + 0xe8);
  plVar2 = *(longlong **)(param_1 + 0xf0);
  for (plVar9 = (longlong *)*puVar1; plVar9 < plVar2; plVar9 = plVar9 + 1) {
    puVar4 = (undefined8 *)*plVar9;
    sVar8 = (**(code **)*puVar4)(puVar4);
    if ((sVar8 == param_2) && (*(int *)(puVar4 + 1) == iVar16)) {
      if (param_4 <= *(short *)((longlong)puVar4 + 0xc)) {
        return;
      }
      *(short *)((longlong)puVar4 + 0xc) = param_4;
      return;
    }
  }
  plVar9 = (longlong *)FUN_1407075a0(param_2);
  *(int *)(plVar9 + 1) = iVar16;
  *(short *)((longlong)plVar9 + 0xc) = param_4;
  pplVar5 = *(longlong ***)(param_1 + 0xf0);
  local_res8 = plVar9;
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
      **(longlong **)(param_1 + 0xf0) = (longlong)plVar9;
    }
  }
  *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 8;
  uVar17 = (uint)param_2;
  if ((uVar17 - 4 & 0xfffffffd) == 0) {
    FUN_140760ab0(param_1,0x66,0);
  }
  lVar10 = DAT_141c53720 - DAT_141c53718 >> 3;
  if ((lVar10 != 0) && (iVar16 != -1)) {
    iVar15 = 0;
    iVar13 = (int)lVar10 + -1;
    iVar14 = iVar15;
    if (-1 < iVar13) {
      do {
        iVar12 = iVar13 + iVar14 >> 1;
        lVar10 = *(longlong *)(DAT_141c53718 + (longlong)iVar12 * 8);
        if (*(int *)(lVar10 + 4) == iVar16) {
          if (lVar10 != 0) {
            if ((uVar17 & 0xfffffff9) != 0) goto LAB_14073fa81;
            FUN_140050b50(*(undefined4 *)(param_1 + 0xe0),lVar10 + 0xe0);
            FUN_1400715b0(param_1,lVar10 + 0x1410);
            iVar13 = *(int *)(param_1 + 0xe0);
            lVar11 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
            if (((lVar11 == 0) || (iVar13 == -1)) || (iVar14 = (int)lVar11 + -1, iVar14 < 0))
            goto LAB_14073fa81;
            goto LAB_14073f9a0;
          }
          break;
        }
        if (iVar16 < *(int *)(lVar10 + 4)) {
          iVar13 = iVar12 + -1;
        }
        else {
          iVar14 = iVar12 + 1;
        }
      } while (iVar14 <= iVar13);
    }
  }
LAB_14073faa9:
  if (param_5 != '\0') {
    plVar9 = operator_new(0x40);
    local_res8 = plVar9;
    FUN_140709240(plVar9,0);
    *plVar9 = (longlong)history_event_add_hf_entity_linkst::vftable;
    *(undefined8 *)((longlong)plVar9 + 0x2c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)plVar9 + 0x34) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)plVar9 + 0x3c) = 0xffffffff;
    *(int *)(plVar9 + 5) = iVar16;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = *(undefined4 *)(param_1 + 0xe0);
    *(uint *)(plVar9 + 6) = uVar17;
    *(undefined4 *)(plVar9 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar9 + 0xc) = DAT_1416b1974;
    (**(code **)(*plVar9 + 0x128))(plVar9);
  }
  return;
  while( true ) {
    if (iVar13 < *(int *)(lVar11 + 0xe0)) {
      iVar14 = iVar12 + -1;
    }
    else {
      iVar15 = iVar12 + 1;
    }
    if (iVar14 < iVar15) break;
LAB_14073f9a0:
    iVar12 = iVar14 + iVar15 >> 1;
    lVar11 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar12 * 8);
    if (*(int *)(lVar11 + 0xe0) == iVar13) {
      if ((lVar11 != 0) &&
         (plVar9 = (longlong *)FUN_140010db0(&DAT_141c67090,*(undefined4 *)(lVar11 + 0xdc)),
         local_res8 = plVar9, plVar9 != (longlong *)0x0)) {
        FUN_14000bc60(lVar10 + 0x110,plVar9);
        puVar1 = (ulonglong *)(lVar10 + 0x1428);
        pplVar5 = *(longlong ***)(lVar10 + 0x1430);
        if ((&local_res8 < pplVar5) && (pplVar6 = (longlong **)*puVar1, pplVar6 <= &local_res8)) {
          if (pplVar5 == *(longlong ***)(lVar10 + 0x1438)) {
            FUN_14000c2d0(puVar1,1);
          }
          if (*(undefined8 **)(lVar10 + 0x1430) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar10 + 0x1430) =
                 *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)pplVar6 >> 3) * 8);
          }
        }
        else {
          if (pplVar5 == *(longlong ***)(lVar10 + 0x1438)) {
            FUN_14000c2d0(puVar1,1);
          }
          if (*(longlong **)(lVar10 + 0x1430) != (longlong *)0x0) {
            **(longlong **)(lVar10 + 0x1430) = (longlong)plVar9;
          }
        }
        *(longlong *)(lVar10 + 0x1430) = *(longlong *)(lVar10 + 0x1430) + 8;
      }
      break;
    }
  }
LAB_14073fa81:
  if ((DAT_1410b67dc == 1) &&
     (param_1 == *(longlong *)(*(longlong *)(DAT_141c67090 + (longlong)DAT_141ec9068 * 8) + 0x10)))
  {
    *(uint *)(lVar10 + 0x94) = *(uint *)(lVar10 + 0x94) | 8;
  }
  goto LAB_14073faa9;
}

