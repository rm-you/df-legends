// FUN_140b80fb0 @ 140b80fb0
// callees:
//   -> 140dfc99c memset
//   -> 14000bd10 FUN_14000bd10


void FUN_140b80fb0(undefined8 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_1[0x414] = 0;
  *(undefined2 *)(param_1 + 0x415) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x407) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  memset((void *)((longlong)param_1 + 0x1c),0,0x130);
  memset(param_1 + 0x2c,0,0x1c0);
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  memset((void *)((longlong)param_1 + 0x364),0,0x1c70);
  puVar1 = (undefined4 *)((longlong)param_1 + 0x1fec);
  *(undefined4 *)((longlong)param_1 + 0x1fd4) = 0;
  lVar2 = 5;
  do {
    puVar1[-5] = 0;
    *puVar1 = 0;
    puVar1[5] = 0;
    puVar1[10] = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x405] = 0;
  param_1[0x406] = 0;
  *(undefined4 *)((longlong)param_1 + 0x20ac) = 0;
  FUN_14000bd10(param_1 + 100,DAT_141d6ddd8 - DAT_141d6ddd0 >> 3);
  *(undefined4 *)(param_1 + 0x419) = 0;
  return;
}

