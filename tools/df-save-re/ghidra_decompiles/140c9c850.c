// FUN_140c9c850 @ 140c9c850
// callees:
//   -> 1408054d0 FUN_1408054d0
//   -> 140d864a0 FUN_140d864a0


void FUN_140c9c850(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  
  local_res8[0] = 0x8ad0;
  if ((*(uint *)(param_1 + 0x110) & 0x2000000) == 0) {
    local_res8[0] = *(undefined2 *)(param_1 + 0xa8);
    local_res18[0] = *(undefined2 *)(param_1 + 0xaa);
    local_res10[0] = *(undefined2 *)(param_1 + 0xac);
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x1c8);
    for (puVar4 = *(undefined8 **)(param_1 + 0x1c0); puVar4 < puVar1; puVar4 = puVar4 + 1) {
      iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
      if ((iVar2 == 0xb) && (lVar3 = (**(code **)(*(longlong *)*puVar4 + 0x18))(), lVar3 != 0)) {
        FUN_1408054d0(lVar3,local_res8,local_res18,local_res10);
        break;
      }
    }
  }
  FUN_140d864a0(&DAT_141c53470,local_res8[0],local_res18[0],local_res10[0],1,0);
  return;
}

