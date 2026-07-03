// FUN_140babde0 @ 140babde0
// callees:
//   -> 140dfb5c4 operator_new


void FUN_140babde0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  *puVar1 = site_realization_building_info_castle_towerst::vftable;
  *(undefined4 *)(puVar1 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x24) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x26) = 0xffff;
  *(undefined2 *)(puVar1 + 5) = 0xffff;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x34) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x36) = 0xffff;
  *(undefined2 *)(puVar1 + 7) = 0xffff;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xffffffff;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  *(undefined4 *)(puVar1 + 1) = 0xfff0bdc0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0xfff0bdc0;
  *(undefined4 *)(puVar1 + 2) = 0xfff0bdc0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0xfff0bdc0;
  *(undefined4 *)(puVar1 + 3) = 0xfff0bdc0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xfff0bdc0;
  return;
}

