// FUN_14084d460 @ 14084d460
// callees:


undefined8 FUN_14084d460(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0xb0);
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  while( true ) {
    if (puVar1 <= puVar4) {
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
    if (iVar2 == param_2) break;
    puVar4 = puVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014084d4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)*puVar4 + 0x30))();
  return uVar3;
}

