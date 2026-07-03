// FUN_1408271b0 @ 1408271b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0


undefined4 * FUN_1408271b0(longlong param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined4 *local_res8;
  
  puVar3 = operator_new(0x60);
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  *(undefined8 *)(puVar3 + 0xd) = 0;
  *(undefined8 *)(puVar3 + 0xf) = 0;
  *(undefined8 *)(puVar3 + 0x11) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 9) = 0xffffffffffffffff;
  puVar3[0xc] = 0xffffffff;
  *puVar3 = *(undefined4 *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  puVar4 = (ulonglong *)(param_1 + 0xd0);
  ppuVar1 = *(undefined4 ***)(param_1 + 0xd8);
  local_res8 = puVar3;
  if ((&local_res8 < ppuVar1) && (ppuVar2 = (undefined4 **)*puVar4, ppuVar2 <= &local_res8)) {
    if (ppuVar1 == *(undefined4 ***)(param_1 + 0xe0)) {
      FUN_14000c2d0(puVar4,1);
    }
    if (*(undefined8 **)(param_1 + 0xd8) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xd8) =
           *(undefined8 *)(*puVar4 + ((longlong)&local_res8 - (longlong)ppuVar2 >> 3) * 8);
    }
    *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 8;
    return puVar3;
  }
  if (ppuVar1 == *(undefined4 ***)(param_1 + 0xe0)) {
    FUN_14000c2d0(puVar4,1);
  }
  if (*(undefined8 **)(param_1 + 0xd8) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0xd8) = puVar3;
  }
  *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 8;
  return puVar3;
}

