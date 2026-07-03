// FUN_140740270 @ 140740270
// callees:


undefined2 FUN_140740270(longlong param_1,short param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short sVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x118);
  plVar1 = *(longlong **)(param_1 + 0x120);
  while( true ) {
    if (plVar1 <= plVar4) {
      return 0;
    }
    puVar2 = (undefined8 *)*plVar4;
    sVar3 = (**(code **)*puVar2)(puVar2);
    if ((sVar3 == param_2) && ((*(int *)(puVar2 + 1) == param_3 || (param_3 == -1)))) break;
    plVar4 = plVar4 + 1;
  }
  return *(undefined2 *)((longlong)puVar2 + 0xc);
}

