// FUN_140df6100 @ 140df6100
// callees:


undefined8 FUN_140df6100(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x28), lVar2 == 0)) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(lVar2 + 8);
  if ((((0x3d < iVar1 - 0x2aU) ||
       ((0x2002000088000001U >> ((ulonglong)(iVar1 - 0x2aU) & 0x3f) & 1) == 0)) && (iVar1 != 0x71))
     && (iVar1 != 0x29a)) {
    return 0xfffffffe;
  }
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x60) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x50) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (iVar1 == 0x71) {
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}

