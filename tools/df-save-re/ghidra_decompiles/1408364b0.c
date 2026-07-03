// FUN_1408364b0 @ 1408364b0
// callees:
//   -> 1408054d0 FUN_1408054d0
//   -> 140d43ff0 FUN_140d43ff0


void FUN_1408364b0(longlong *param_1,ushort param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined2 local_res8 [4];
  undefined2 local_res18 [4];
  ushort local_res20 [4];
  
  uVar2 = (**(code **)(*param_1 + 0x138))();
  if (((uVar2 != 0xea61) && (uVar2 <= param_2)) && ((*(uint *)(param_1 + 2) & 0x400000) == 0)) {
    FUN_1408054d0(param_1,local_res20,local_res18,local_res8);
    iVar3 = FUN_140d43ff0(&DAT_141c53470,local_res20[0],local_res18[0],local_res8[0]);
    if (iVar3 == 3) {
      cVar1 = (**(code **)(*param_1 + 0x668))(param_1);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 800))(param_1);
        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x400000;
        (**(code **)(*param_1 + 0x318))(param_1,1);
      }
    }
  }
  return;
}

