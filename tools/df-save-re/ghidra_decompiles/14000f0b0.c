// FUN_14000f0b0 @ 14000f0b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0


short * FUN_14000f0b0(longlong param_1,short param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  short **ppsVar2;
  short **ppsVar3;
  longlong *plVar4;
  short *psVar5;
  short *local_res8;
  
  puVar1 = (ulonglong *)(param_1 + 0x988);
  plVar4 = (longlong *)*puVar1;
  while( true ) {
    if (*(longlong **)(param_1 + 0x990) <= plVar4) {
      psVar5 = operator_new(8);
      *psVar5 = param_2;
      *(undefined4 *)(psVar5 + 2) = param_3;
      ppsVar2 = *(short ***)(param_1 + 0x990);
      local_res8 = psVar5;
      if ((&local_res8 < ppsVar2) && (ppsVar3 = (short **)*puVar1, ppsVar3 <= &local_res8)) {
        if (ppsVar2 == *(short ***)(param_1 + 0x998)) {
          FUN_14000c2d0(puVar1,1);
        }
        if (*(undefined8 **)(param_1 + 0x990) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x990) =
               *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)ppsVar3 >> 3) * 8);
        }
      }
      else {
        if (ppsVar2 == *(short ***)(param_1 + 0x998)) {
          FUN_14000c2d0(puVar1,1);
        }
        if (*(undefined8 **)(param_1 + 0x990) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x990) = psVar5;
        }
      }
      *(longlong *)(param_1 + 0x990) = *(longlong *)(param_1 + 0x990) + 8;
      return psVar5 + 2;
    }
    if (*(short *)*plVar4 == param_2) break;
    plVar4 = plVar4 + 1;
  }
  *(undefined4 *)((short *)*plVar4 + 2) = param_3;
  return (short *)(*plVar4 + 4);
}

