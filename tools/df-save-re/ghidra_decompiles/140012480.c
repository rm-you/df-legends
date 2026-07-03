// FUN_140012480 @ 140012480
// callees:
//   -> 140dfb5c4 operator_new


void FUN_140012480(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xd8);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  *puVar1 = activity_event_sparringst::vftable;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1a) = 3000;
  return;
}

