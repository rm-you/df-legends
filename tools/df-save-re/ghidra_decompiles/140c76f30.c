// FUN_140c76f30 @ 140c76f30
// callees:
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new


void FUN_140c76f30(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)(param_1 + 0xc30) - *(longlong *)(param_1 + 0xc28) & 0xfffffffffffffff8U) == 0)
  {
    FUN_14000b9d0(param_1 + 0xc28,
                  *(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2);
    puVar1 = *(undefined8 **)(param_1 + 0xc30);
    for (puVar3 = *(undefined8 **)(param_1 + 0xc28); puVar3 < puVar1; puVar3 = puVar3 + 1) {
      puVar2 = operator_new(4);
      *puVar2 = 0x2742;
      *puVar3 = puVar2;
    }
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffeff;
  }
  return;
}

