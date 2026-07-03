// FUN_140824750 @ 140824750
// callees:


undefined8 FUN_140824750(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  while( true ) {
    if (puVar1 <= puVar4) {
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x10))();
    if (iVar2 == param_2) break;
    puVar4 = puVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408247ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)*puVar4 + 0x38))();
  return uVar3;
}

