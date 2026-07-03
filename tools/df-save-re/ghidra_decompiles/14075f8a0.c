// FUN_14075f8a0 @ 14075f8a0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14075f220 FUN_14075f220
//   -> 14073eb00 FUN_14073eb00


void FUN_14075f8a0(longlong param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  longlong lVar1;
  short sVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int in_stack_00000040;
  
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar3 = operator_new(0x68);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar3;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x30) == 0) {
    puVar3 = operator_new(0xc0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x130) + 0x30) = puVar3;
  }
  FUN_14075f220(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x30),param_2,param_3,param_4);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 8);
  if ((lVar1 != 0) && (puVar3 = *(undefined8 **)(lVar1 + 0x70), puVar3 != (undefined8 *)0x0)) {
    plVar4 = (longlong *)*puVar3;
    uVar5 = (ulonglong)((longlong)puVar3[1] + (7 - (longlong)plVar4)) >> 3;
    if ((longlong *)puVar3[1] < plVar4) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      do {
        sVar2 = FUN_14073eb00(param_1,0,*(undefined4 *)*plVar4);
        if (sVar2 != 0) {
          *(int *)(*plVar4 + 0x24) = *(int *)(*plVar4 + 0x24) + in_stack_00000040;
        }
        plVar4 = plVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  return;
}

