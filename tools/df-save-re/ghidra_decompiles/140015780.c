// FUN_140015780 @ 140015780
// callees:
//   -> 140dfb5c4 operator_new


void FUN_140015780(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(200);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  *puVar1 = activity_event_prayerst::vftable;
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
  *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xb4) = 0xffff;
  *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0xc4) = 100;
  return;
}

