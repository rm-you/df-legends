// FUN_140283610 @ 140283610
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5b4 free


void FUN_140283610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x26;
  if (0xf < (ulonglong)param_1[0x29]) {
    FUN_140002020(*puVar1,param_1[0x29] + 1,1,param_4,0xfffffffffffffffe);
  }
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  if (0xf < (ulonglong)param_1[0x29]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x1f;
  if (0xf < (ulonglong)param_1[0x22]) {
    FUN_140002020(*puVar1,param_1[0x22] + 1,1);
  }
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  if (0xf < (ulonglong)param_1[0x22]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0xe,0x20,3,FUN_14000c260);
  puVar1 = param_1 + 10;
  if (0xf < (ulonglong)param_1[0xd]) {
    FUN_140002020(*puVar1,param_1[0xd] + 1,1);
  }
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 6;
  if (0xf < (ulonglong)param_1[9]) {
    FUN_140002020(*puVar1,param_1[9] + 1,1);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  if (0xf < (ulonglong)param_1[9]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}

