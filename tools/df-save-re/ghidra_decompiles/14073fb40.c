// FUN_14073fb40 @ 14073fb40
// callees:
//   -> 140707ab0 FUN_140707ab0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140019a10 FUN_140019a10
//   -> 1400046c0 FUN_1400046c0
//   -> 1406fbde0 FUN_1406fbde0
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall


longlong *
FUN_14073fb40(longlong param_1,short param_2,int param_3,int param_4,undefined4 param_5,char param_6
             )

{
  ulonglong *puVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_3 < 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_140707ab0(param_2);
    *(int *)(plVar4 + 1) = param_3;
    *(int *)((longlong)plVar4 + 0xc) = param_4;
    *(undefined4 *)(plVar4 + 2) = param_5;
    puVar1 = (ulonglong *)(param_1 + 0x100);
    pplVar2 = *(longlong ***)(param_1 + 0x108);
    local_38 = plVar4;
    if ((&local_38 < pplVar2) && (pplVar3 = (longlong **)*puVar1, pplVar3 <= &local_38)) {
      if (pplVar2 == *(longlong ***)(param_1 + 0x110)) {
        FUN_14000c2d0(puVar1,1);
      }
      if (*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x108) =
             *(undefined8 *)(*puVar1 + ((longlong)&local_38 - (longlong)pplVar3 >> 3) * 8);
      }
    }
    else {
      if (pplVar2 == *(longlong ***)(param_1 + 0x110)) {
        FUN_14000c2d0(puVar1,1);
      }
      if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0x108) = (longlong)plVar4;
      }
    }
    *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 8;
    if (((param_4 != -1) && (lVar5 = FUN_140019a10(DAT_141d6cfd0,param_3), lVar5 != 0)) &&
       (lVar5 = FUN_1400046c0(lVar5,param_4), lVar5 != 0)) {
      FUN_1406fbde0(lVar5,param_2,*(undefined4 *)(param_1 + 0xe0));
    }
    if (param_6 != '\0') {
      plVar6 = operator_new(0x40);
      local_38 = plVar6;
      FUN_140709240(plVar6,0);
      *plVar6 = (longlong)history_event_add_hf_site_linkst::vftable;
      plVar6[5] = -1;
      plVar6[6] = -1;
      *(undefined4 *)(plVar6 + 7) = 0xffffffff;
      *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(param_1 + 0xe0);
      *(int *)(plVar6 + 7) = (int)param_2;
      *(int *)(plVar6 + 5) = param_3;
      *(int *)((longlong)plVar6 + 0x2c) = param_4;
      *(undefined4 *)((longlong)plVar6 + 0x34) = param_5;
      *(undefined4 *)(plVar6 + 1) = DAT_1416b1980;
      *(undefined4 *)((longlong)plVar6 + 0xc) = DAT_1416b1974;
      (**(code **)(*plVar6 + 0x128))(plVar6);
    }
  }
  return plVar4;
}

