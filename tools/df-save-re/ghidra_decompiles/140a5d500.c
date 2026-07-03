// FUN_140a5d500 @ 140a5d500
// callees:


longlong FUN_140a5d500(longlong param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x330) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x358) = 1;
  puVar1 = (undefined4 *)(param_1 + 0x180);
  lVar3 = 0x30;
  puVar2 = (undefined2 *)(param_1 + 0x3d0);
  do {
    puVar1[-0x60] = 0xffffffff;
    puVar1[-0x30] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[0x30] = 0xffffffff;
    puVar1 = puVar1 + 1;
    puVar2[-0x30] = 0x8ad0;
    *puVar2 = 0x8ad0;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x310) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined2 *)(param_1 + 0x364) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 800) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x328) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x308) = 0x30;
  *(undefined4 *)(param_1 + 0x30c) = 0x30;
  *(undefined1 *)(param_1 + 0x359) = 1;
  *(undefined4 *)(param_1 + 0x35c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x368) = 0xffffffffffffffff;
  return param_1;
}

