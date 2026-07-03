// FUN_1407b5400 @ 1407b5400
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140050b50 FUN_140050b50


undefined8 FUN_1407b5400(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
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
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x60) == 0) {
    puVar1 = operator_new(0x88);
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
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x130) + 0x60) = puVar1;
  }
  lVar2 = *(longlong *)(param_1 + 0x130);
  if (*(int *)(param_1 + 0xbc) != -1) {
    FUN_140050b50(*(int *)(param_1 + 0xbc),*(longlong *)(lVar2 + 0x60) + 0x48);
    lVar2 = *(longlong *)(param_1 + 0x130);
  }
  return *(undefined8 *)(lVar2 + 0x60);
}

