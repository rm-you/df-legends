// FUN_140df3ad0 @ 140df3ad0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new


undefined8 * FUN_140df3ad0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1405bba90(param_1,local_res10,2);
  if ((short)local_res10[0] == 0) {
    puVar1 = operator_new(0x80);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    ppuVar2 = world_construction_square_roadst::vftable;
  }
  else {
    if ((short)local_res10[0] == 1) {
      puVar1 = operator_new(0x70);
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *puVar1 = world_construction_square_tunnelst::vftable;
      return puVar1;
    }
    if ((short)local_res10[0] == 2) {
      puVar1 = operator_new(0x80);
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *puVar1 = world_construction_square_bridgest::vftable;
      *(undefined2 *)((longlong)puVar1 + 0x74) = 0xffff;
      *(undefined2 *)((longlong)puVar1 + 0x76) = 0xffff;
      *(undefined2 *)(puVar1 + 0xf) = 0xffff;
      *(undefined4 *)((longlong)puVar1 + 0x7c) = 0xffffffff;
      return puVar1;
    }
    if ((short)local_res10[0] != 3) {
      return (undefined8 *)0x0;
    }
    puVar1 = operator_new(0x80);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    ppuVar2 = world_construction_square_wallst::vftable;
  }
  *puVar1 = ppuVar2;
  *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x74) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x72) = 0xffff;
  *(undefined2 *)(puVar1 + 0xe) = 0xffff;
  return puVar1;
}

