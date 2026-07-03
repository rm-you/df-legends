// FUN_140ca65e0 @ 140ca65e0
// callees:


undefined8 FUN_140ca65e0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x1c0);
  puVar1 = *(undefined8 **)(param_1 + 0x1c8);
  while( true ) {
    if (puVar1 <= puVar4) {
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
    if (iVar2 == 3) break;
    puVar4 = puVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140ca6634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)*puVar4 + 0x48))();
  return uVar3;
}

