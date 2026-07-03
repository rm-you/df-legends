// FUN_140015a20 @ 140015a20
// callees:
//   -> 140dfb5c4 operator_new


void FUN_140015a20(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xc0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  *puVar1 = activity_event_researchst::vftable;
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
  puVar1[0x16] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
  return;
}

