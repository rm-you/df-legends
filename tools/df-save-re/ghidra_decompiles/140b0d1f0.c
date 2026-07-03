// FUN_140b0d1f0 @ 140b0d1f0
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


/* WARNING: Removing unreachable block (ram,0x000140b0d218) */

undefined2 * FUN_140b0d1f0(undefined2 *param_1)

{
  undefined1 *puVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = operator_new(1);
  *(undefined1 **)(param_1 + 0x18) = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 6) = 0x8ad08ad0;
  *(undefined4 *)(param_1 + 8) = 0x8ad08ad0;
  *(undefined4 *)(param_1 + 10) = 0x8ad08ad0;
  *(undefined4 *)(param_1 + 0xc) = 0x8ad08ad0;
  *(undefined4 *)(param_1 + 0xe) = 0x8ad08ad0;
  *(undefined4 *)(param_1 + 0x10) = 0x8ad08ad0;
  *(undefined4 *)(param_1 + 0x12) = 0x8ad08ad0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xbc614e;
  *param_1 = 0xffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0x640000;
  *(undefined4 *)(param_1 + 0x22) = 0x640000;
  *(undefined4 *)(param_1 + 0x24) = 0x640000;
  *(undefined8 *)(param_1 + 0x26) = 0x640000;
  *(undefined4 *)(param_1 + 0x2a) = 0x648ad0;
  param_1[0x2c] = 100;
  param_1[0x2d] = 0xffff;
  param_1[0x2e] = 0xffff;
  param_1[0x2f] = 0xffff;
  return param_1;
}

