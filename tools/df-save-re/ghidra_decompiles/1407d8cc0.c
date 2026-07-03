// FUN_1407d8cc0 @ 1407d8cc0
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1407d8cc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x80);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0xf;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0xf;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *puVar1 = interaction_target_locationst::vftable;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  return;
}

