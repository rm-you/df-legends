// FUN_140aaedd0 @ 140aaedd0
// callees:
//   -> 140161210 FUN_140161210
//   -> 14061fbe0 FUN_14061fbe0
//   -> 14000c8b0 FUN_14000c8b0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aaedd0(longlong param_1,longlong param_2)

{
  FUN_140161210(param_2,param_1);
  FUN_14061fbe0(param_1,param_2 + 0x78);
  if ((undefined8 *)(param_2 + 0x140) != &DAT_141ebec68) {
    FUN_14000c8b0((undefined8 *)(param_2 + 0x140),&DAT_141ebec68,0,0xffffffffffffffff);
  }
  *(int *)(param_2 + 0xa8) = DAT_14167e414 + -1;
  *(int *)(param_2 + 0xac) = DAT_14155b300 + -1;
  *(int *)(param_2 + 0xb0) = DAT_14167eca8 + -1;
  *(int *)(param_2 + 0xb4) = DAT_14167ec50 + -1;
  *(int *)(param_2 + 0xb8) = DAT_141697474 + -1;
  *(int *)(param_2 + 0xbc) = DAT_14155b280 + -1;
  *(int *)(param_2 + 0xc0) = DAT_1416992ac + -1;
  *(int *)(param_2 + 0xc4) = DAT_141697468 + -1;
  *(int *)(param_2 + 200) = DAT_14167e410 + -1;
  *(int *)(param_2 + 0xcc) = DAT_14155b288 + -1;
  *(int *)(param_2 + 0xd0) = DAT_14169746c + -1;
  *(int *)(param_2 + 0xd4) = DAT_14167ecac + -1;
  *(int *)(param_2 + 0xd8) = DAT_14155b29c + -1;
  *(int *)(param_2 + 0xdc) = DAT_141699280 + -1;
  *(int *)(param_2 + 0xe0) = DAT_14167ec78 + -1;
  *(int *)(param_2 + 0xe4) = DAT_14155b2cc + -1;
  *(int *)(param_2 + 0xe8) = DAT_1416b1978 + -1;
  *(int *)(param_2 + 0xec) = DAT_14155b284 + -1;
  *(int *)(param_2 + 0xf0) = DAT_14167ec44 + -1;
  *(int *)(param_2 + 0xf4) = DAT_14167e40c + -1;
  *(int *)(param_2 + 0xf8) = DAT_14167edb4 + -1;
  *(int *)(param_2 + 0xfc) = DAT_1416992b4 + -1;
  *(int *)(param_2 + 0x100) = DAT_14167ec40 + -1;
  *(int *)(param_2 + 0x104) = DAT_141c2fd90 + -1;
  *(int *)(param_2 + 0x108) = _DAT_1416b1984 + -1;
  *(int *)(param_2 + 0x10c) = DAT_1416b1970 + -1;
  *(int *)(param_2 + 0x110) = DAT_141699298 + -1;
  *(int *)(param_2 + 0x114) = DAT_1416b1988 + -1;
  *(int *)(param_2 + 0x118) = DAT_141697464 + -1;
  *(int *)(param_2 + 0x11c) = DAT_14167edb8 + -1;
  *(int *)(param_2 + 0x120) = DAT_14127ebbc + -1;
  *(int *)(param_2 + 0x124) = DAT_14155b2c8 + -1;
  *(int *)(param_2 + 0x128) = DAT_14167ec68 + -1;
  *(int *)(param_2 + 300) = DAT_14155b304 + -1;
  *(int *)(param_2 + 0x130) = DAT_1416992b8 + -1;
  *(int *)(param_2 + 0x134) = DAT_14155b298 + -1;
  *(int *)(param_2 + 0x138) = DAT_1416b197c + -1;
                    /* WARNING: Could not recover jumptable at 0x000140aaf037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memmove((void *)(param_2 + 0x98),(void *)(param_1 + 0x78),0xf);
  return;
}

