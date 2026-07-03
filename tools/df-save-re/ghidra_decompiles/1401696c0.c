// FUN_1401696c0 @ 1401696c0
// callees:
//   -> 14000dda0 FUN_14000dda0
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0
//   -> 14080b2b0 FUN_14080b2b0
//   -> 1408246e0 FUN_1408246e0
//   -> 140df19a0 FUN_140df19a0
//   -> 14083a4f0 FUN_14083a4f0


longlong * FUN_1401696c0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_res8;
  
  FUN_14000dda0(param_2,0x24,*(undefined4 *)(param_1 + 0x50));
  plVar4 = operator_new(0x10);
  puVar1 = (ulonglong *)(param_1 + 0x158);
  *(undefined2 *)(plVar4 + 1) = 0;
  *plVar4 = param_2;
  pplVar2 = *(longlong ***)(param_1 + 0x160);
  local_res8 = plVar4;
  if ((&local_res8 < pplVar2) && (pplVar3 = (longlong **)*puVar1, pplVar3 <= &local_res8)) {
    if (pplVar2 == *(longlong ***)(param_1 + 0x168)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x160) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x160) =
           *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)pplVar3 >> 3) * 8);
    }
  }
  else {
    if (pplVar2 == *(longlong ***)(param_1 + 0x168)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x160) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x160) = plVar4;
    }
  }
  *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 8;
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    FUN_14080b2b0(param_2,1);
  }
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 0x20);
  if (((*(uint *)(param_2 + 0x10) & 0x40000) != 0) && (lVar5 = FUN_1408246e0(param_2,1), lVar5 != 0)
     ) {
    FUN_140df19a0(*(undefined2 *)(param_1 + 0x20),lVar5,*(undefined2 *)(param_1 + 0x10),
                  *(undefined2 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 0x20));
  }
  if ((*(byte *)(param_2 + 0x14) & 0x20) != 0) {
    FUN_14083a4f0(param_2,*(undefined2 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x1c),
                  *(undefined2 *)(param_1 + 0x20));
  }
  return plVar4;
}

