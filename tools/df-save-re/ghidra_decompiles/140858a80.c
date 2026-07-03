// FUN_140858a80 @ 140858a80
// callees:
//   -> 140dfb5c4 operator_new


void FUN_140858a80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    puVar3 = operator_new(0x18);
    puVar3[2] = 0;
    *puVar3 = param_2;
    puVar3[1] = param_1;
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 8) = puVar3;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    return;
  }
  lVar2 = *(longlong *)(lVar1 + 0x10);
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    lVar2 = *(longlong *)(lVar1 + 0x10);
  }
  puVar3 = operator_new(0x18);
  *puVar3 = param_2;
  puVar3[1] = lVar1;
  puVar3[2] = 0;
  *(undefined8 **)(lVar1 + 0x10) = puVar3;
  return;
}

