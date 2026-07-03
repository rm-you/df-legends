// FUN_140824380 @ 140824380
// callees:


undefined8 FUN_140824380(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  while( true ) {
    if (puVar1 <= puVar3) {
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)*puVar3 + 0x10))();
    if (iVar2 == param_2) break;
    puVar3 = puVar3 + 1;
  }
  return 1;
}

