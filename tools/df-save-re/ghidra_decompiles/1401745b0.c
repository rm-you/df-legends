// FUN_1401745b0 @ 1401745b0
// callees:


uint FUN_1401745b0(longlong param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (uint)param_4;
  uVar4 = (uint)(uint3)(int3)(char)((ushort)param_4 >> 8);
  if (*(uint *)(param_1 + 0x20) != uVar3) {
    return uVar4 << 8;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return uVar4 << 8;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  iVar6 = (int)param_2;
  if (iVar1 <= iVar6) {
    uVar3 = *(int *)(param_1 + 0x40) + iVar1;
    if (iVar6 < (int)uVar3) {
      iVar2 = *(int *)(param_1 + 0x3c);
      iVar5 = (int)param_3;
      if ((iVar2 <= iVar5) && (iVar5 < *(int *)(param_1 + 0x44) + iVar2)) {
        return (uint)*(byte *)((longlong)
                               (iVar6 + ((iVar5 - iVar2) * *(int *)(param_1 + 0x40) - iVar1)) +
                              *(longlong *)(param_1 + 0x30));
      }
    }
  }
  return uVar3 & 0xffffff00;
}

