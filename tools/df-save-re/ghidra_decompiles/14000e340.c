// FUN_14000e340 @ 14000e340
// callees:


void FUN_14000e340(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = param_2;
  switch(param_2) {
  case 0:
  case 1:
  case 3:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  case 2:
  case 5:
  case 0xd:
  case 0xe:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x20:
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  case 4:
  case 6:
  case 8:
  case 0xf:
  case 0x11:
  case 0x19:
  case 0x1d:
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  case 0x21:
    *(undefined4 *)param_1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

