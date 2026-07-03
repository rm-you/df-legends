// FUN_14000dda0 @ 14000dda0
// callees:
//   -> 140a40f30 FUN_140a40f30
//   -> 140050410 FUN_140050410


void FUN_14000dda0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong **pplVar1;
  longlong **pplVar2;
  longlong *plVar3;
  longlong *local_res8;
  
  plVar3 = (longlong *)FUN_140a40f30(param_2);
  local_res8 = plVar3;
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  pplVar1 = *(longlong ***)(param_1 + 0x40);
  if ((&local_res8 < pplVar1) && (pplVar2 = *(longlong ***)(param_1 + 0x38), pplVar2 <= &local_res8)
     ) {
    if (pplVar1 == *(longlong ***)(param_1 + 0x48)) {
      FUN_140050410(param_1 + 0x38);
    }
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x40) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x38) + ((longlong)&local_res8 - (longlong)pplVar2 >> 3) * 8);
    }
  }
  else {
    if (pplVar1 == *(longlong ***)(param_1 + 0x48)) {
      FUN_140050410(param_1 + 0x38);
    }
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x40) = plVar3;
    }
  }
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 8;
  if (param_2 - 9U < 2) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xdfffffff;
  }
  return;
}

