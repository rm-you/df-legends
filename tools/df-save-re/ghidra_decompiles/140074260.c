// FUN_140074260 @ 140074260
// callees:
//   -> 14000c2d0 FUN_14000c2d0


longlong FUN_140074260(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong local_res18 [2];
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x8ad08ad0;
    *(undefined2 *)(param_1 + 0x40) = 0x8ad0;
    *(undefined4 *)(param_1 + 0x48) = 0x8ad08ad0;
    *(undefined2 *)(param_1 + 0x4c) = 0x8ad0;
    *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(int *)(param_1 + 0x50) = DAT_141d64e10;
    DAT_141d64e10 = DAT_141d64e10 + 1;
    local_res18[0] = param_1;
    if ((local_res18 < DAT_141d64dd0) && (DAT_141d64dc8 <= local_res18)) {
      lVar2 = (longlong)local_res18 - (longlong)DAT_141d64dc8;
      if (DAT_141d64dd0 == DAT_141d64dd8) {
        FUN_14000c2d0(&DAT_141d64dc8,1,param_3,param_4,0xfffffffffffffffe);
      }
      if (DAT_141d64dd0 != (longlong *)0x0) {
        *DAT_141d64dd0 = DAT_141d64dc8[lVar2 >> 3];
      }
    }
    else {
      if (DAT_141d64dd0 == DAT_141d64dd8) {
        FUN_14000c2d0(&DAT_141d64dc8,1,param_3,param_4,0xfffffffffffffffe);
      }
      if (DAT_141d64dd0 != (longlong *)0x0) {
        *DAT_141d64dd0 = param_1;
      }
    }
    DAT_141d64dd0 = DAT_141d64dd0 + 1;
  }
  return param_1;
}

