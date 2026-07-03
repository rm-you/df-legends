// FUN_1407da6b0 @ 1407da6b0
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1407da6b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x90);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0x10] = 0xf;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar1 + 100) = 0xffffffff;
  *puVar1 = interaction_effect_contactst::vftable;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  return;
}

