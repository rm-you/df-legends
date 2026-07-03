// FUN_140c0b790 @ 140c0b790
// callees:
//   -> 140dfb5c4 operator_new


void FUN_140c0b790(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x48);
  *puVar1 = site_realization_building_info_castle_wallst::vftable;
  *(undefined4 *)(puVar1 + 5) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x2c) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x2e) = 0xffff;
  *(undefined2 *)(puVar1 + 6) = 0xffff;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x3c) = 0xffff;
  *(undefined2 *)((longlong)puVar1 + 0x3e) = 0xffff;
  *(undefined2 *)(puVar1 + 8) = 0xffff;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0xfff0bdc0;
  *(undefined4 *)(puVar1 + 2) = 0xfff0bdc0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0xfff0bdc0;
  *(undefined4 *)(puVar1 + 3) = 0xfff0bdc0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xfff0bdc0;
  *(undefined4 *)(puVar1 + 4) = 0xfff0bdc0;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0xfff0bdc0;
  return;
}

