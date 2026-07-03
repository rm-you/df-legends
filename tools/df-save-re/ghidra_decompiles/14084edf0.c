// FUN_14084edf0 @ 14084edf0
// callees:
//   -> 14084d4e0 FUN_14084d4e0


void FUN_14084edf0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0xb0);
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  do {
    if (puVar1 <= puVar4) {
      uVar3 = 0;
LAB_14084ee2e:
      FUN_14084d4e0(param_1 + 200,*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x3a),
                    *(undefined2 *)(param_1 + 0x3c),*(undefined2 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x34),param_1 + 0x50,*(undefined4 *)(param_1 + 0x48),
                    *(undefined4 *)(param_1 + 0x40),uVar3);
      return;
    }
    iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
    if (iVar2 == 0x24) {
      uVar3 = (**(code **)(*(longlong *)*puVar4 + 0x30))();
      goto LAB_14084ee2e;
    }
    puVar4 = puVar4 + 1;
  } while( true );
}

