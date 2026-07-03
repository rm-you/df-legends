// FUN_140938360 @ 140938360
// callees:
//   -> 14027ff00 FUN_14027ff00


void FUN_140938360(undefined8 *param_1)

{
  param_1[1] = *param_1;
  param_1[4] = param_1[3];
  FUN_14027ff00(param_1 + 6);
  param_1[0xb] = param_1[10];
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  return;
}

