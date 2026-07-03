// FUN_140df54b0 @ 140df54b0
// callees:
//   -> 140dfb450 FUN_140dfb450
//   -> 140df5670 FUN_140df5670
//   -> 140df6100 FUN_140df6100


undefined8 FUN_140df54b0(longlong param_1)

{
  uint uVar1;
  undefined *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(code **)(param_1 + 0x30) = FUN_140dfb450;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(code **)(param_1 + 0x38) = FUN_140dfb460;
  }
  plVar3 = (longlong *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x1720);
  if (plVar3 != (longlong *)0x0) {
    *(longlong **)(param_1 + 0x28) = plVar3;
    *plVar3 = param_1;
    *(undefined4 *)((longlong)plVar3 + 0x2c) = 1;
    plVar3[6] = 0;
    *(undefined4 *)(plVar3 + 9) = 0xf;
    *(undefined4 *)((longlong)plVar3 + 0x44) = 0x8000;
    *(undefined4 *)((longlong)plVar3 + 0x4c) = 0x7fff;
    *(undefined4 *)(plVar3 + 0xf) = 0xf;
    *(undefined4 *)((longlong)plVar3 + 0x74) = 0x8000;
    *(undefined4 *)((longlong)plVar3 + 0x7c) = 0x7fff;
    *(undefined4 *)(plVar3 + 0x10) = 5;
    lVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),0x8000,2);
    plVar3[10] = lVar4;
    lVar4 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x44),2);
    plVar3[0xc] = lVar4;
    lVar4 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar3 + 0x74),2);
    *(undefined4 *)(plVar3 + 0x2e3) = 0;
    plVar3[0xd] = lVar4;
    *(undefined4 *)(plVar3 + 0x2de) = 0x4000;
    lVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),0x4000,4);
    plVar3[2] = lVar4;
    uVar1 = *(uint *)(plVar3 + 0x2de);
    *(uint *)(plVar3 + 3) = uVar1 * 4;
    puVar2 = PTR_s_insufficient_memory_140e7ede0;
    if ((((plVar3[10] != 0) && (plVar3[0xc] != 0)) && (plVar3[0xd] != 0)) && (lVar4 != 0)) {
      *(undefined8 *)((longlong)plVar3 + 0xac) = 9;
      *(undefined1 *)((longlong)plVar3 + 0x3c) = 8;
      plVar3[0x2df] = lVar4 + (ulonglong)(uVar1 >> 1) * 2;
      plVar3[0x2dd] = lVar4 + (ulonglong)uVar1 * 3;
      uVar5 = FUN_140df5670(param_1);
      return uVar5;
    }
    *(undefined4 *)(plVar3 + 1) = 0x29a;
    *(undefined **)(param_1 + 0x20) = puVar2;
    FUN_140df6100(param_1);
  }
  return 0xfffffffc;
}

