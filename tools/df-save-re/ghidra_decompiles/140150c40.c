// FUN_140150c40 @ 140150c40
// callees:


undefined8 * FUN_140150c40(longlong param_1,short param_2,short param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short sVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 8);
  plVar1 = *(longlong **)(param_1 + 0x10);
  while( true ) {
    if (plVar1 <= plVar4) {
      return (undefined8 *)0x0;
    }
    puVar2 = (undefined8 *)*plVar4;
    sVar3 = (**(code **)*puVar2)(puVar2);
    if ((sVar3 == 4) &&
       (*(char *)((longlong)puVar2 + (longlong)param_3 + 0xc + (longlong)param_2 * 0x10) != '\0'))
    break;
    plVar4 = plVar4 + 1;
  }
  return puVar2;
}

