// FUN_14084d080 @ 14084d080
// callees:
//   -> 140a40f30 FUN_140a40f30
//   -> 140050410 FUN_140050410


void FUN_14084d080(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong **pplVar1;
  longlong **pplVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong *local_res8;
  
  plVar3 = (longlong *)FUN_140a40f30(param_2);
  local_res8 = plVar3;
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  puVar4 = (ulonglong *)(param_1 + 0xb0);
  pplVar1 = *(longlong ***)(param_1 + 0xb8);
  if ((&local_res8 < pplVar1) && (pplVar2 = (longlong **)*puVar4, pplVar2 <= &local_res8)) {
    if (pplVar1 == *(longlong ***)(param_1 + 0xc0)) {
      FUN_140050410(puVar4);
    }
    if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xb8) =
           *(undefined8 *)(*puVar4 + ((longlong)&local_res8 - (longlong)pplVar2 >> 3) * 8);
    }
  }
  else {
    if (pplVar1 == *(longlong ***)(param_1 + 0xc0)) {
      FUN_140050410(puVar4);
    }
    if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xb8) = plVar3;
    }
  }
  *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 8;
  return;
}

