// FUN_1407d7d50 @ 1407d7d50
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1407d7d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xd8);
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[9] = 0xf;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[0xd] = 0xf;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[0x11] = 0xf;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0x15] = 0xf;
  puVar1[0x14] = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  puVar1[0x19] = 0xf;
  puVar1[0x18] = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 100;
  *puVar1 = interaction_source_ingestionst::vftable;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  return;
}

