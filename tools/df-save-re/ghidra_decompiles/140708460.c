// FUN_140708460 @ 140708460
// callees:
//   -> 1400026e0 FUN_1400026e0
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 1400715b0 FUN_1400715b0


/* WARNING: Removing unreachable block (ram,0x00014070857d) */

undefined2 * FUN_140708460(undefined2 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1400026e0(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xba) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (param_2 == '\0') {
    puVar1 = operator_new(2);
    *(undefined2 **)(param_1 + 100) = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x68) = 2;
    *param_1 = 0xffff;
    param_1[1] = 0xffff;
    *(undefined1 *)(param_1 + 3) = 0xff;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(int *)(param_1 + 0x70) = DAT_14167e410;
    DAT_14167e410 = DAT_14167e410 + 1;
    FUN_1400715b0(param_1,&DAT_141d7a0a8,param_3,param_4,uVar2);
  }
  return param_1;
}

