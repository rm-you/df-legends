// FUN_1406fbde0 @ 1406fbde0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0


void FUN_1406fbde0(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 **ppuVar1;
  undefined2 **ppuVar2;
  undefined2 *puVar3;
  undefined2 *local_res8;
  
  puVar3 = operator_new(8);
  *puVar3 = param_2;
  *(undefined4 *)(puVar3 + 2) = param_3;
  ppuVar1 = *(undefined2 ***)(param_1 + 0x18);
  local_res8 = puVar3;
  if ((&local_res8 < ppuVar1) &&
     (ppuVar2 = *(undefined2 ***)(param_1 + 0x10), ppuVar2 <= &local_res8)) {
    if (ppuVar1 == *(undefined2 ***)(param_1 + 0x20)) {
      FUN_14000c2d0(param_1 + 0x10,1);
    }
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x18) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x10) + ((longlong)&local_res8 - (longlong)ppuVar2 >> 3) * 8);
    }
  }
  else {
    if (ppuVar1 == *(undefined2 ***)(param_1 + 0x20)) {
      FUN_14000c2d0(param_1 + 0x10,1);
    }
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x18) = puVar3;
    }
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 8;
  return;
}

