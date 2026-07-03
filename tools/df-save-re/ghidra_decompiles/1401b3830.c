// FUN_1401b3830 @ 1401b3830
// callees:
//   -> 1401b5d00 FUN_1401b5d00
//   -> 140dfc99c memset


undefined8 * FUN_1401b3830(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = building_defst::vftable;
  puVar1 = param_1 + 1;
  param_1[4] = 0xf;
  param_1[3] = 0;
  if (0xf < (ulonglong)param_1[4]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 6;
  param_1[9] = 0xf;
  param_1[8] = 0;
  if (0xf < (ulonglong)param_1[9]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0x807] = 0;
  param_1[0x808] = 0;
  param_1[0x809] = 0;
  param_1[0x80c] = 0;
  param_1[0x80d] = 0;
  param_1[0x80e] = 0;
  puVar1 = param_1 + 0x80f;
  param_1[0x812] = 0xf;
  param_1[0x811] = 0;
  if (0xf < (ulonglong)param_1[0x812]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(int *)(param_1 + 5) = DAT_141d779b8;
  DAT_141d779b8 = DAT_141d779b8 + 1;
  FUN_1401b5d00();
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  memset((void *)((longlong)param_1 + 0x5e),0,0x3fd1);
  *(undefined4 *)(param_1 + 0x806) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4034) = 0;
  *(undefined4 *)(param_1 + 0x80a) = 3;
  *(undefined4 *)((longlong)param_1 + 0x4054) = 3;
  *(undefined4 *)(param_1 + 0x80b) = 2;
  *(undefined4 *)((longlong)param_1 + 0x405c) = 2;
  *(undefined4 *)(param_1 + 0x813) = 1;
  return param_1;
}

