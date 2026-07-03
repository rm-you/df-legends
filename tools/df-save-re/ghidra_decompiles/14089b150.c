// FUN_14089b150 @ 14089b150
// callees:
//   -> 14000cb40 FUN_14000cb40


void FUN_14089b150(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  
  if ((-1 < param_2) &&
     (uVar1 = (ulonglong)param_2, uVar1 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
    switch(param_5) {
    case 0:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0x20,0,0xffffffffffffffff);
      return;
    case 1:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0x40,0,0xffffffffffffffff);
      return;
    case 2:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0x60,0,0xffffffffffffffff);
      return;
    case 3:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0x80,0,0xffffffffffffffff);
      return;
    case 4:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0xa0,0,0xffffffffffffffff);
      return;
    case 5:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0xc0,0,0xffffffffffffffff);
      return;
    case 6:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0xe0,0,0xffffffffffffffff);
      return;
    case 7:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0x100,0,0xffffffffffffffff);
      return;
    case 8:
      FUN_14000cb40(param_3,*(longlong *)(DAT_141d6e1a8 + uVar1 * 8) + 0x120,0,0xffffffffffffffff);
      return;
    }
  }
  return;
}

