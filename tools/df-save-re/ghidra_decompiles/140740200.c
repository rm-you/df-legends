// FUN_140740200 @ 140740200
// callees:


undefined4 FUN_140740200(longlong param_1,short param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short sVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x118);
  plVar1 = *(longlong **)(param_1 + 0x120);
  while( true ) {
    if (plVar1 <= plVar4) {
      return 0xffffffff;
    }
    puVar2 = (undefined8 *)*plVar4;
    sVar3 = (**(code **)*puVar2)(puVar2);
    if (sVar3 == param_2) break;
    plVar4 = plVar4 + 1;
  }
  return *(undefined4 *)(puVar2 + 1);
}

