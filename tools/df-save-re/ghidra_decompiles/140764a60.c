// FUN_140764a60 @ 140764a60
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1406f9d70 FUN_1406f9d70


void FUN_140764a60(longlong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  
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
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x48) == 0) {
    pvVar2 = operator_new(0x158);
    uVar3 = FUN_1406f9d70(pvVar2);
    *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x48) = uVar3;
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x48) + 0xc0) =
         (int)*(short *)(param_1 + 2);
    *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x48) + 0xc4) =
         *(undefined2 *)(param_1 + 4);
  }
  return;
}

