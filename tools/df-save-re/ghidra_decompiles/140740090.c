// FUN_140740090 @ 140740090
// callees:
//   -> 140707e80 FUN_140707e80
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall


longlong * FUN_140740090(longlong param_1,short param_2,int param_3,undefined2 param_4,char param_5)

{
  ulonglong *puVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_3 < 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_140707e80(param_2);
    *(int *)(plVar4 + 1) = param_3;
    *(undefined2 *)((longlong)plVar4 + 0xc) = param_4;
    puVar1 = (ulonglong *)(param_1 + 0x118);
    pplVar2 = *(longlong ***)(param_1 + 0x120);
    local_28 = plVar4;
    if ((&local_28 < pplVar2) && (pplVar3 = (longlong **)*puVar1, pplVar3 <= &local_28)) {
      if (pplVar2 == *(longlong ***)(param_1 + 0x128)) {
        FUN_14000c2d0(puVar1,1);
      }
      if (*(undefined8 **)(param_1 + 0x120) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x120) =
             *(undefined8 *)(*puVar1 + ((longlong)&local_28 - (longlong)pplVar3 >> 3) * 8);
      }
    }
    else {
      if (pplVar2 == *(longlong ***)(param_1 + 0x128)) {
        FUN_14000c2d0(puVar1,1);
      }
      if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0x120) = (longlong)plVar4;
      }
    }
    *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 8;
    if (param_5 != '\0') {
      plVar5 = operator_new(0x38);
      local_28 = plVar5;
      FUN_140709240(plVar5,0);
      *plVar5 = (longlong)history_event_add_hf_hf_linkst::vftable;
      plVar5[5] = -1;
      *(undefined4 *)(plVar5 + 6) = 0xffffffff;
      *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(param_1 + 0xe0);
      *(int *)(plVar5 + 6) = (int)param_2;
      *(undefined4 *)(plVar5 + 5) = *(undefined4 *)(param_1 + 0xe0);
      *(int *)((longlong)plVar5 + 0x2c) = param_3;
      *(undefined4 *)(plVar5 + 1) = DAT_1416b1980;
      *(undefined4 *)((longlong)plVar5 + 0xc) = DAT_1416b1974;
      (**(code **)(*plVar5 + 0x128))(plVar5);
    }
  }
  return plVar4;
}

