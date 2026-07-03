// FUN_14075ca40 @ 14075ca40
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1405668d0 FUN_1405668d0


void FUN_14075ca40(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar1 = operator_new(0x68);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar1;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x20) == 0) {
    puVar1 = operator_new(0x60);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x130) + 0x20) = puVar1;
  }
  FUN_1405668d0(param_2,*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x20) + 0x18);
  return;
}

