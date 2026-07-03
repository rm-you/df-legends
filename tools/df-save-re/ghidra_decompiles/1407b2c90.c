// FUN_1407b2c90 @ 1407b2c90
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1407b2c90(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar2 = operator_new(0x68);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar2;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) == 0) {
    puVar3 = operator_new(0x3c);
    *puVar3 = 0xffff;
    *(undefined4 *)(puVar3 + 2) = 0xffffffff;
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    *(undefined4 *)(puVar3 + 6) = 0xffffffff;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0xe) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x12) = 0;
    *(undefined1 *)(puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 0x16) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x18) = 0xffffffff;
    *(undefined4 *)(puVar3 + 10) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x1a) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x1c) = 0xffffffff;
    *(undefined2 **)(*(longlong *)(param_1 + 0x130) + 0x28) = puVar3;
  }
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x1c) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x20) = 0xffffffff;
  puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x24);
  *puVar1 = *puVar1 & 0xfffffffc;
  **(undefined2 **)(*(longlong *)(param_1 + 0x130) + 0x28) = 3;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 4) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 8) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0xc) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x34) = DAT_1416b1980;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x38) = DAT_1416b1974;
  return;
}

