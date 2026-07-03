// FUN_1407d7350 @ 1407d7350
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1407d7350(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xd0);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0xf;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0xf;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0xf;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0xf;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0xf;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *puVar1 = interaction_source_underground_specialst::vftable;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 100;
  return;
}

