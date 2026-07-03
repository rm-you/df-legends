// FUN_14014eb90 @ 14014eb90
// callees:
//   -> 1408054d0 FUN_1408054d0


ulonglong FUN_14014eb90(longlong param_1,short param_2,short param_3,ushort param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined8 *puVar4;
  short local_res8 [4];
  short local_res20 [4];
  ushort local_38 [8];
  
  local_res20[0] = -30000;
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
    local_38[0] = *(ushort *)(param_1 + 0xac);
    in_RAX = (ulonglong)local_38[0];
    local_res20[0] = *(short *)(param_1 + 0xa8);
    local_res8[0] = *(short *)(param_1 + 0xaa);
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x1c8);
    for (puVar4 = *(undefined8 **)(param_1 + 0x1c0); puVar4 < puVar1; puVar4 = puVar4 + 1) {
      in_RAX = (**(code **)(*(longlong *)*puVar4 + 0x10))();
      if ((int)in_RAX == 0xb) {
        lVar3 = (**(code **)(*(longlong *)*puVar4 + 0x18))();
        in_RAX = 0;
        if (lVar3 != 0) {
          in_RAX = FUN_1408054d0(lVar3,local_res20,local_res8,local_38);
          break;
        }
      }
    }
  }
  if (local_38[0] != param_4) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(uint *)(param_1 + 0x118) >> 10;
  if ((uVar2 & 1) == 0) {
    if ((local_res20[0] == param_2) && (local_res8[0] == param_3)) {
LAB_14014ecce:
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  else if ((param_2 + -1 <= (int)local_res20[0]) && ((int)local_res20[0] <= param_2 + 1)) {
    if ((param_3 + -1 <= (int)local_res8[0]) &&
       (uVar2 = (int)param_3 + 1, (int)local_res8[0] <= (int)uVar2)) goto LAB_14014ecce;
  }
  return 0;
}

