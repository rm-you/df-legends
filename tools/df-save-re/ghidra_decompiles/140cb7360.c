// FUN_140cb7360 @ 140cb7360
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0


undefined4 * FUN_140cb7360(longlong param_1)

{
  ulonglong *puVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 *local_res8;
  
  puVar4 = operator_new(0x60);
  puVar1 = (ulonglong *)(param_1 + 0x590);
  *(undefined8 *)(puVar4 + 2) = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  *(undefined8 *)(puVar4 + 0xd) = 0;
  *(undefined8 *)(puVar4 + 0xf) = 0;
  *(undefined8 *)(puVar4 + 0x11) = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined8 *)(puVar4 + 0x14) = 0;
  *(undefined8 *)(puVar4 + 9) = 0xffffffffffffffff;
  puVar4[0xc] = 0xffffffff;
  *puVar4 = *(undefined4 *)(param_1 + 0x5a8);
  *(int *)(param_1 + 0x5a8) = *(int *)(param_1 + 0x5a8) + 1;
  ppuVar2 = *(undefined4 ***)(param_1 + 0x598);
  local_res8 = puVar4;
  if ((&local_res8 < ppuVar2) && (ppuVar3 = (undefined4 **)*puVar1, ppuVar3 <= &local_res8)) {
    if (ppuVar2 == *(undefined4 ***)(param_1 + 0x5a0)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x598) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x598) =
           *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)ppuVar3 >> 3) * 8);
    }
  }
  else {
    if (ppuVar2 == *(undefined4 ***)(param_1 + 0x5a0)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x598) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x598) = puVar4;
    }
  }
  *(longlong *)(param_1 + 0x598) = *(longlong *)(param_1 + 0x598) + 8;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xbfffffff | 8;
  return puVar4;
}

