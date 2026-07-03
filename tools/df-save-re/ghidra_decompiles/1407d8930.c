// FUN_1407d8930 @ 1407d8930
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1407d8930(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xf0);
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[9] = 0xf;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[0xe] = 0xf;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  *puVar1 = interaction_target_materialst::vftable;
  puVar1[0x13] = 0xf;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x17] = 0xf;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  puVar1[0x1b] = 0xf;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xec) = 0;
  return;
}

