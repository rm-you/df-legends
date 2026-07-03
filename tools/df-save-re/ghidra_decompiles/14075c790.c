// FUN_14075c790 @ 14075c790
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall
//   -> EXTERNAL:000000e1 memmove


void FUN_14075c790(longlong param_1,int param_2,char param_3)

{
  void *_Src;
  longlong lVar1;
  short sVar2;
  longlong *plVar3;
  void *_Dst;
  
  if (param_3 != '\0') {
    plVar3 = operator_new(0x38);
    FUN_140709240(plVar3,0);
    *plVar3 = (longlong)history_event_remove_hf_hf_linkst::vftable;
    plVar3[5] = -1;
    *(undefined4 *)(plVar3 + 6) = 0xffffffff;
    *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(param_1 + 0xe0);
    lVar1 = (longlong)param_2 * 8;
    *(undefined4 *)((longlong)plVar3 + 0x2c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x118) + lVar1) + 8);
    sVar2 = (**(code **)**(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x118)))();
    *(int *)(plVar3 + 6) = (int)sVar2;
    *(undefined4 *)(plVar3 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar3 + 0xc) = DAT_1416b1974;
    (**(code **)(*plVar3 + 0x128))(plVar3);
  }
  lVar1 = (longlong)param_2 * 8;
  plVar3 = *(longlong **)(lVar1 + *(longlong *)(param_1 + 0x118));
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,1);
  }
  _Dst = (void *)(*(longlong *)(param_1 + 0x118) + lVar1);
  _Src = (void *)((longlong)_Dst + 8);
  memmove(_Dst,_Src,*(longlong *)(param_1 + 0x120) - (longlong)_Src);
  *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + -8;
  return;
}

